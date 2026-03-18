/*
 * XREFs of AMLIGetParent @ 0x1C00127F8
 * Callers:
 *     OSNotifyCreateProcessor @ 0x1C0006B64 (OSNotifyCreateProcessor.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0011420 (PciConfigSpaceHandlerWorker.c)
 *     OSNotifyCreateDevice @ 0x1C0012860 (OSNotifyCreateDevice.c)
 *     IsPciDeviceWorker @ 0x1C001F2D0 (IsPciDeviceWorker.c)
 *     GetOpRegionScope @ 0x1C001F650 (GetOpRegionScope.c)
 *     IsPciBusAsyncWorker @ 0x1C001FBD0 (IsPciBusAsyncWorker.c)
 *     OSNotifyCreateOperationRegion @ 0x1C00275F0 (OSNotifyCreateOperationRegion.c)
 *     AMLIIterateParentNext @ 0x1C0027690 (AMLIIterateParentNext.c)
 *     CmosConfigSpaceHandler @ 0x1C0047A60 (CmosConfigSpaceHandler.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0049900 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0049ED0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C004A070 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     OSNotifyDeviceCheck @ 0x1C005155C (OSNotifyDeviceCheck.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0054078 (AcpiSetupNativeMethodContext.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0055310 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C0057120 (ACPIRootIrpQueryPower.c)
 *     ACPIRootInitialize @ 0x1C008A29C (ACPIRootInitialize.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C009C5A4 (AcpiArblibAllocateArbiterInstance.c)
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
    dword_1C00776F8 = 0;
    v3 += 120LL;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return v3;
}
