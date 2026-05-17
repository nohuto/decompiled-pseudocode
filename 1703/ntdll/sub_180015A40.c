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

void __fastcall sub_180015A40(__int64 a1, void *SubProcessTag, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  struct _TEB *v7; // rax
  __int64 v8; // rdi
  _DWORD *HotpatchInformation; // rcx
  __int64 v10; // [rsp+0h] [rbp-100h] BYREF
  __int64 v11; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v14[6]; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v15; // [rsp+E6h] [rbp-1Ah]
  int v16; // [rsp+100h] [rbp+0h]
  int v17; // [rsp+104h] [rbp+4h]
  __int64 v18; // [rsp+108h] [rbp+8h]

  if ( a1 )
  {
    NtCurrentTeb()->ActivityId = *(struct _GUID *)(a1 + 232);
    v11 = 0LL;
    v5 = (__int64)NtCurrentTeb()->SystemReserved1[53];
    if ( v5 && (int)ZwSetInformationThread(-2LL, 44LL, &v11) >= 0 )
    {
      v5 = (__int64)NtCurrentTeb();
      *(_QWORD *)(v5 + 696) = v11;
    }
    if ( (*(_BYTE *)(a1 + 76) & 1) != 0 && (*(_BYTE *)(a1 + 104) & 1) == 0 )
    {
      RtlDeactivateActivationContextUnsafeFast(a1);
      *(_BYTE *)(a1 + 76) &= ~1u;
    }
    if ( *(_QWORD *)(a1 + 80) && (*(_BYTE *)(a1 + 104) & 2) == 0 )
    {
      v7 = NtCurrentTeb();
      v8 = 2147353488LL;
      SubProcessTag = v7->SubProcessTag;
      v7->SubProcessTag = 0LL;
      HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
      if ( HotpatchInformation && *HotpatchInformation )
        v5 = (__int64)NtCurrentPeb()->HotpatchInformation + 566;
      else
        v5 = 2147353488LL;
      if ( *(_BYTE *)v5 && SubProcessTag )
      {
        v16 = (int)SubProcessTag;
        v15 = 1349;
        v17 = 0;
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v5, SubProcessTag, a3, a4) )
          v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 566;
        ZwTraceEvent(*(unsigned __int8 *)v8, 1026LL, 8LL, v14);
      }
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    v6 = *(_QWORD *)(a1 + 128);
    if ( v6 && (*(_BYTE *)(v6 + 436) & 1) == 0 )
    {
      if ( NtCurrentTeb()->IsImpersonating && (*(_BYTE *)(a1 + 104) & 4) == 0 )
      {
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.ExceptionInformation[0] = *(_QWORD *)(a1 + 88);
        ExceptionRecord.ExceptionInformation[1] = *(_QWORD *)(a1 + 96);
        ExceptionRecord.ExceptionCode = -1073740016;
        ExceptionRecord.NumberParameters = 2;
        RtlRaiseException(&ExceptionRecord);
        v12 = 0LL;
        ZwSetInformationThread(-2LL, 5LL, &v12);
      }
      if ( (*(_BYTE *)(a1 + 104) & 0x10) == 0 && (unsigned __int8)sub_18001655C(v5, SubProcessTag, a3) )
      {
        DbgPrintEx(
          84LL,
          0LL,
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
          84LL,
          0LL,
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
          84LL,
          0LL,
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
            84LL,
            0LL,
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
    sub_180095EB0((unsigned __int64)&v10 ^ v18);
  }
}
