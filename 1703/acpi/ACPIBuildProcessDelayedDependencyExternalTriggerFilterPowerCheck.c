/*
 * XREFs of ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C00288DC
 * Callers:
 *     ACPIDispatchIrp @ 0x1C00010A0 (ACPIDispatchIrp.c)
 * Callees:
 *     ACPIDevicePowerFlushQueue @ 0x1C00087A0 (ACPIDevicePowerFlushQueue.c)
 *     ACPIBuildScheduleDpc @ 0x1C000DFA8 (ACPIBuildScheduleDpc.c)
 *     ACPIBuildProcessDelayedDependencyShouldDelayRequest @ 0x1C0027BC8 (ACPIBuildProcessDelayedDependencyShouldDelayRequest.c)
 *     ACPIBuildFlushQueue @ 0x1C008DF74 (ACPIBuildFlushQueue.c)
 */

void __fastcall ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck(__int64 a1)
{
  char v2; // di
  KIRQL v3; // al
  __int64 *v4; // rbx
  KIRQL v5; // r14
  __int64 v6; // rdx
  __int64 *v7; // rsi
  __int64 v8; // rcx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  v4 = (__int64 *)AcpiBuildDelayedDependencyList;
  v5 = v3;
  if ( (__int64 *)AcpiBuildDelayedDependencyList != &AcpiBuildDelayedDependencyList )
  {
    do
    {
      v7 = v4;
      v4 = (__int64 *)*v4;
      v8 = v7[10];
      if ( v8 && !ACPIBuildProcessDelayedDependencyShouldDelayRequest(v8) )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)v7 + 6, 4, 1);
        v2 = 1;
      }
    }
    while ( v4 != &AcpiBuildDelayedDependencyList );
    if ( v2 )
      ACPIBuildScheduleDpc();
  }
  KeReleaseSpinLock(&AcpiBuildQueueLock, v5);
  if ( v2 )
  {
    LOBYTE(v6) = 1;
    ACPIBuildFlushQueue(a1, v6);
    ACPIDevicePowerFlushQueue(a1);
  }
}
