/*
 * XREFs of StorpDeviceHealthWorkItemRoutine @ 0x1C0002D10
 * Callers:
 *     <none>
 * Callees:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0002D70 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C0002ECC (StorpTelemetrySendUnitSmartAttributes.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0008488 (RaUnitReleaseRemoveLock.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C0046410 (StorpTelemetrySendUnitNvmeHealthInfo.c)
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
    StorpTelemetrySendUnitDeviceStatistics(DeviceExtension);
  }
  *((_DWORD *)DeviceExtension + 434) |= 1u;
  RaUnitReleaseRemoveLock(DeviceExtension);
  IoFreeWorkItem(Context);
}
