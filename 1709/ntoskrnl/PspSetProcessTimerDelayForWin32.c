/*
 * XREFs of PspSetProcessTimerDelayForWin32 @ 0x14024EA7C
 * Callers:
 *     PspApplyTimerDelayProcess @ 0x14024E464 (PspApplyTimerDelayProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     PsInvokeWin32Callout @ 0x1404D24E0 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PspSetProcessTimerDelayForWin32(__int64 a1)
{
  signed __int64 *v1; // rbx
  unsigned __int64 v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+2Ch] [rbp-Ch]

  v1 = (signed __int64 *)(a1 + 728);
  ExAcquirePushLockSharedEx(a1 + 728, 0LL);
  if ( *(_QWORD *)(a1 + 936) )
  {
    if ( _InterlockedCompareExchange64(v1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    v4 = *(_QWORD *)(a1 + 1992);
    MmGetSessionIdEx(a1);
    v5 = a1;
    v6 = v4 & 0x3FFFFFFF;
    v7 = (v4 >> 30) & 0x3FFFFFFF;
    return PsInvokeWin32Callout(37LL, &v5, 1LL);
  }
  else
  {
    if ( _InterlockedCompareExchange64(v1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    return 0LL;
  }
}
