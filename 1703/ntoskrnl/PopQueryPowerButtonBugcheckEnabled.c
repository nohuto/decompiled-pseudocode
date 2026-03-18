/*
 * XREFs of PopQueryPowerButtonBugcheckEnabled @ 0x1406D0004
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1402346D0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1402348EC (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

__int64 PopQueryPowerButtonBugcheckEnabled()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPowerButtonBugcheckLock, 0LL);
  v1 = PopPowerButtonBugcheckConfig;
  v2 = 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerButtonBugcheckLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPowerButtonBugcheckLock);
  KeAbPostRelease((ULONG_PTR)&PopPowerButtonBugcheckLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v6 = v1 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
      return 1;
    else
      wil_details_FeaturePropertyCache_ReportUsageToService(v4, v3, v5, 0);
  }
  return v2;
}
