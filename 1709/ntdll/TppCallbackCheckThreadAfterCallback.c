/*
 * XREFs of TppCallbackCheckThreadAfterCallback @ 0x18000E770
 * Callers:
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x18000E3F0 (TppCallbackEpilog.c)
 * Callees:
 *     TppCheckForTransactions @ 0x18000EE1C (TppCheckForTransactions.c)
 *     RtlRaiseException @ 0x180024290 (RtlRaiseException.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180031110 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrintEx @ 0x18006C580 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x1800A0260 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

void __fastcall TppCallbackCheckThreadAfterCallback(__int64 a1, void *SubProcessTag, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  struct _TEB *v6; // rax
  __int64 v7; // rdi
  _DWORD *SharedData; // rcx
  __int64 ThreadInformation; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE Fields[6]; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v13; // [rsp+E6h] [rbp-1Ah]
  int v14; // [rsp+100h] [rbp+0h]
  int v15; // [rsp+104h] [rbp+4h]

  if ( a1 )
  {
    NtCurrentTeb()->ActivityId = *(_GUID *)(a1 + 232);
    ThreadInformation = 0LL;
    v4 = *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket;
    if ( v4
      && NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, &ThreadInformation, 8u) >= 0 )
    {
      v4 = (__int64)NtCurrentTeb();
      *(_QWORD *)(v4 + 696) = ThreadInformation;
    }
    if ( (*(_BYTE *)(a1 + 76) & 1) != 0 && (*(_BYTE *)(a1 + 104) & 1) == 0 )
    {
      RtlDeactivateActivationContextUnsafeFast(a1);
      *(_BYTE *)(a1 + 76) &= ~1u;
    }
    if ( *(_QWORD *)(a1 + 80) && (*(_BYTE *)(a1 + 104) & 2) == 0 )
    {
      v6 = NtCurrentTeb();
      v7 = 2147353488LL;
      SubProcessTag = v6->SubProcessTag;
      v6->SubProcessTag = 0LL;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v4 = (__int64)NtCurrentPeb()->SharedData + 566;
      else
        v4 = 2147353488LL;
      if ( *(_BYTE *)v4 && SubProcessTag )
      {
        v14 = (int)SubProcessTag;
        v13 = 1349;
        v15 = 0;
        if ( RtlGetCurrentServiceSessionId() )
          v7 = (__int64)NtCurrentPeb()->SharedData + 566;
        NtTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x402u, 8u, Fields);
      }
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    v5 = *(_QWORD *)(a1 + 128);
    if ( v5 && (*(_BYTE *)(v5 + 436) & 1) == 0 )
    {
      if ( NtCurrentTeb()->IsImpersonating && (*(_BYTE *)(a1 + 104) & 4) == 0 )
      {
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.ExceptionInformation[0] = *(_QWORD *)(a1 + 88);
        ExceptionRecord.ExceptionInformation[1] = *(_QWORD *)(a1 + 96);
        ExceptionRecord.ExceptionCode = -1073740016;
        ExceptionRecord.NumberParameters = 2;
        RtlRaiseException(&ExceptionRecord);
        v10 = 0LL;
        NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &v10, 8u);
      }
      if ( (*(_BYTE *)(a1 + 104) & 0x10) == 0 && (unsigned __int8)TppCheckForTransactions(v4, SubProcessTag, a3) )
      {
        DbgPrintEx(
          0x54u,
          0,
          "ThreadPool: callback %p(%p) returned with a transaction uncleared\n",
          *(const void **)(a1 + 88),
          *(const void **)(a1 + 96));
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.ExceptionCode = -1073740003;
        ExceptionRecord.NumberParameters = 0;
        RtlRaiseException(&ExceptionRecord);
      }
      if ( (*(_BYTE *)(a1 + 104) & 0x20) == 0
        && NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      {
        DbgPrintEx(
          0x54u,
          0,
          "ThreadPool: callback %p(%p) returned with the loader lock held\n",
          *(const void **)(a1 + 88),
          *(const void **)(a1 + 96));
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.ExceptionCode = -1073740002;
        ExceptionRecord.NumberParameters = 0;
        RtlRaiseException(&ExceptionRecord);
      }
      if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0 && NtCurrentTeb()->PreferredLanguages )
      {
        DbgPrintEx(
          0x54u,
          0,
          "ThreadPool: callback %p(%p) returned with preferred languages set\n",
          *(const void **)(a1 + 88),
          *(const void **)(a1 + 96));
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.ExceptionCode = -1073740001;
        ExceptionRecord.NumberParameters = 0;
        RtlRaiseException(&ExceptionRecord);
      }
      if ( *(char *)(a1 + 104) >= 0 )
      {
        if ( NtCurrentTeb()->SavedPriorityState )
        {
          DbgPrintEx(
            0x54u,
            0,
            "ThreadPool: callback %p(%p) returned with background priorities set\n",
            *(const void **)(a1 + 88),
            *(const void **)(a1 + 96));
          memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
          ExceptionRecord.ExceptionCode = -1073740000;
          ExceptionRecord.NumberParameters = 0;
          RtlRaiseException(&ExceptionRecord);
        }
      }
    }
  }
}
