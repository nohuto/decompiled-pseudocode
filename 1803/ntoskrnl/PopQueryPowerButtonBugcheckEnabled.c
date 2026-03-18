/*
 * XREFs of PopQueryPowerButtonBugcheckEnabled @ 0x14076BCFC
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x14027FBD0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1401787F0 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

__int64 PopQueryPowerButtonBugcheckEnabled()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  unsigned int v2; // ebx
  int v3; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPowerButtonBugcheckLock, 0LL);
  v1 = PopPowerButtonBugcheckConfig;
  v2 = 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerButtonBugcheckLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPowerButtonBugcheckLock);
  KeAbPostRelease((ULONG_PTR)&PopPowerButtonBugcheckLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v3 = v1 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      v2 = 1;
    else
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (int)&Feature_PowerButtonBugcheck__private_propertyCache,
        0x8DF90Eu,
        (__int64)&Feature_PowerButtonBugcheck_logged_traits,
        0,
        3);
  }
  dword_1403A7E58 = v2;
  return v2;
}
