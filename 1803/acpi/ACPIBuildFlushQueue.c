/*
 * XREFs of ACPIBuildFlushQueue @ 0x1C00755C8
 * Callers:
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C000C1D4 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C00150E0 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIDetectFilterDevices @ 0x1C0018468 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0018844 (ACPIDetectPdoDevices.c)
 *     ACPIDispatchIrpDepFilterQueryID @ 0x1C00244F0 (ACPIDispatchIrpDepFilterQueryID.c)
 *     ACPITableUnload @ 0x1C003B760 (ACPITableUnload.c)
 * Callees:
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0011404 (ACPIBuildSpecialSynchronizationRequest.c)
 */

__int64 __fastcall ACPIBuildFlushQueue(__int64 a1, char a2)
{
  unsigned int v4; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v4 = ACPIBuildSpecialSynchronizationRequest(
         a1,
         (__int64)ACPIInitPowerRequestCompletion,
         (__int64)&Event,
         a2 != 0 ? 255 : 127,
         1);
  if ( v4 == 259 )
  {
    v4 = 0;
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  return v4;
}
