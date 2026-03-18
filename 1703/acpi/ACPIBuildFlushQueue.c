/*
 * XREFs of ACPIBuildFlushQueue @ 0x1C008DF74
 * Callers:
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C0006410 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIDispatchIrpDepFilterQueryID @ 0x1C00065A0 (ACPIDispatchIrpDepFilterQueryID.c)
 *     ACPIDetectFilterDevices @ 0x1C0007DFC (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0008074 (ACPIDetectPdoDevices.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C00288DC (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPITableUnload @ 0x1C0057CD0 (ACPITableUnload.c)
 * Callees:
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0008800 (ACPIBuildSpecialSynchronizationRequest.c)
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
