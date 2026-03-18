/*
 * XREFs of AMLIGetParent @ 0x1C001BBA0
 * Callers:
 *     IsPciDeviceWorker @ 0x1C00153F0 (IsPciDeviceWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C0015870 (IsPciBusAsyncWorker.c)
 *     GetOpRegionScope @ 0x1C0016474 (GetOpRegionScope.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00178B0 (PciConfigSpaceHandlerWorker.c)
 *     OSNotifyCreateDevice @ 0x1C001A86C (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x1C0028A5C (OSNotifyCreateOperationRegion.c)
 *     AMLIIterateParentNext @ 0x1C0028AFC (AMLIIterateParentNext.c)
 *     OSNotifyCreateProcessor @ 0x1C0029320 (OSNotifyCreateProcessor.c)
 *     CmosConfigSpaceHandler @ 0x1C00471A0 (CmosConfigSpaceHandler.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0048CE0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C00492B0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0049450 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     OSNotifyDeviceCheck @ 0x1C0051F9C (OSNotifyDeviceCheck.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0054BB8 (AcpiSetupNativeMethodContext.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0055F00 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C0057D20 (ACPIRootIrpQueryPower.c)
 *     ACPIRootInitialize @ 0x1C0091A00 (ACPIRootInitialize.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C009F594 (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetParent(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( v3 )
  {
    dword_1C00797B8 = 0;
    v3 += 120LL;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return v3;
}
