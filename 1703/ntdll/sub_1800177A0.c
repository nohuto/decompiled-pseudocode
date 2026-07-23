/*
 * XREFs of sub_1800177A0 @ 0x1800177A0
 * Callers:
 *     TpWaitForTimer @ 0x1800143D0 (TpWaitForTimer.c)
 *     sub_180014570 @ 0x180014570 (sub_180014570.c)
 *     sub_180017414 @ 0x180017414 (sub_180017414.c)
 *     TpSetTimerEx @ 0x180017510 (TpSetTimerEx.c)
 *     TpReleaseTimer @ 0x180019600 (TpReleaseTimer.c)
 *     sub_180073760 @ 0x180073760 (sub_180073760.c)
 * Callees:
 *     sub_1800042E8 @ 0x1800042E8 (sub_1800042E8.c)
 *     sub_180018CC8 @ 0x180018CC8 (sub_180018CC8.c)
 *     sub_180018F14 @ 0x180018F14 (sub_180018F14.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800736D8 @ 0x1800736D8 (sub_1800736D8.c)
 *     ZwWaitForAlertByThreadId @ 0x1800A8B30 (ZwWaitForAlertByThreadId.c)
 */

char __fastcall sub_1800177A0(__int64 a1, _RTL_SRWLOCK *a2, char a3)
{
  char v3; // bl
  bool v6; // bp
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rdx
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 1;
  v6 = (*(_BYTE *)(a1 + 354) & 2) != 0;
  if ( (*(_BYTE *)(a1 + 354) & 1) != 0 )
  {
    v9 = (__int64)&a2[16] + (-(__int64)((*(_BYTE *)(a1 + 354) & 2) != 0) & 0xFFFFFFFFFFFFFF88uLL);
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v10 = 2147353478LL;
    if ( *(_BYTE *)v10 )
      sub_1800042E8(v9, a1);
    RtlAcquireSRWLockExclusive(a2);
    if ( *(_BYTE *)(a1 + 352) )
    {
      sub_180018CC8(v9 + 16, a1 + 248);
      sub_180018CC8(v9 + 8, a1 + 288);
      LOBYTE(v11) = v6;
      sub_180018F14(v9, v11);
      *(_BYTE *)(a1 + 352) = 0;
      RtlReleaseSRWLockExclusive(a2);
      *(_DWORD *)(a1 + 348) = 0;
      *(_QWORD *)(a1 + 328) = 0LL;
      *(_BYTE *)(a1 + 354) = 0;
      if ( !a3 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    }
    else
    {
      RtlReleaseSRWLockExclusive(a2);
      *(_BYTE *)(a1 + 354) |= 4u;
      sub_1800736D8(a1 + 336, v12);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
      ZwWaitForAlertByThreadId((PVOID)(a1 + 336), 0LL);
      if ( a3 )
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
      return 0;
    }
    return v3;
  }
  else
  {
    *(_QWORD *)(a1 + 328) = 0LL;
    if ( !a3 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    return 0;
  }
}
