/*
 * XREFs of StorpDeviceHealthWorkItemRoutine @ 0x1C00026F0
 * Callers:
 *     <none>
 * Callees:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C000243C (StorpTelemetrySendUnitDeviceStatistics.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C0003774 (StorpTelemetrySendUnitSmartAttributes.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00054E4 (RaUnitReleaseRemoveLock.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C00452EC (StorpTelemetrySendUnitNvmeHealthInfo.c)
 */

void __fastcall StorpDeviceHealthWorkItemRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  _QWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( *(_DWORD *)(DeviceExtension[3] + 4356LL) == 17 )
  {
    StorpTelemetrySendUnitNvmeHealthInfo(DeviceExtension);
  }
  else
  {
    StorpTelemetrySendUnitSmartAttributes(DeviceExtension);
    StorpTelemetrySendUnitDeviceStatistics((__int64)DeviceExtension);
  }
  RaUnitReleaseRemoveLock(DeviceExtension);
  IoFreeWorkItem(Context);
}
