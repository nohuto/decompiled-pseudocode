/*
 * XREFs of ACPICleanDeviceDependenciesWithTreeLock @ 0x1C0044FBC
 * Callers:
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F6A4 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInitRemoveDeviceExtension @ 0x1C004FA04 (ACPIInitRemoveDeviceExtension.c)
 * Callees:
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C0006548 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 */

__int64 __fastcall ACPICleanDeviceDependenciesWithTreeLock(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 600);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4F706341u);
    *(_QWORD *)(a1 + 600) = 0LL;
  }
  ACPIBuildProcessDelayedDependencyExternalTrigger(a1);
  return 0LL;
}
