/*
 * XREFs of sub_180015A40 @ 0x180015A40
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     sub_1800156B0 @ 0x1800156B0 (sub_1800156B0.c)
 * Callees:
 *     sub_18001655C @ 0x18001655C (sub_18001655C.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180043B20 (RtlDeactivateActivationContextUnsafeFast.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

void __fastcall sub_180015A40(__int64 a1, PVOID SubProcessTag, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  struct _TEB *v6; // rax
  __int64 v7; // rdi
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v9; // [rsp+0h] [rbp-100h] BYREF
  __int64 ThreadInformation; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE Fields[6]; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v14; // [rsp+E6h] [rbp-1Ah]
  int v15; // [rsp+100h] [rbp+0h]
  int v16; // [rsp+104h] [rbp+4h]
  __int64 v17; // [rsp+108h] [rbp+8h]

  if ( a1 )
  {
    NtCurrentTeb()->ActivityId = *(GUID *)(a1 + 232);
    ThreadInformation = 0LL;
    v4 = *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket;
    if ( v4
      && ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, &ThreadInformation, 8u) >= 0 )
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
      if ( SharedData && SharedData->ServiceSessionId )
        v4 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[8];
      else
        v4 = 2147353488LL;
      if ( *(_BYTE *)v4 && SubProcessTag )
      {
        v15 = (int)SubProcessTag;
        v14 = 1349;
        v16 = 0;
        if ( RtlGetCurrentServiceSessionId() )
          v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[8];
        ZwTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x402u, 8u, Fields);
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
        v11 = 0LL;
        ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &v11, 8u);
      }
      if ( (*(_BYTE *)(a1 + 104) & 0x10) == 0 && (unsigned __int8)sub_18001655C(v4, SubProcessTag, a3) )
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
    sub_180095EB0((unsigned __int64)&v9 ^ v17);
  }
}
