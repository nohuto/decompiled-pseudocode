/*
 * XREFs of StorpDeviceHealthWorkItemRoutine @ 0x1C00035B0
 * Callers:
 *     <none>
 * Callees:
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C0002ECC (StorpTelemetrySendUnitSmartAttributes.c)
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0003454 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0005880 (RaUnitReleaseRemoveLock.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C004603C (StorpTelemetrySendUnitNvmeHealthInfo.c)
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
    StorpTelemetrySendUnitSmartAttributes((__int64)DeviceExtension);
    StorpTelemetrySendUnitDeviceStatistics((__int64)DeviceExtension);
  }
  *((_DWORD *)DeviceExtension + 434) |= 1u;
  RaUnitReleaseRemoveLock(DeviceExtension);
  IoFreeWorkItem(Context);
}
