/*
 * XREFs of AMLIGetParent @ 0x1C0043D24
 * Callers:
 *     CmosConfigSpaceHandler @ 0x1C0017620 (CmosConfigSpaceHandler.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C001CE80 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C001E5C0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C001E760 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     OSNotifyCreateDevice @ 0x1C002E708 (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x1C002E808 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateProcessor @ 0x1C002EA1C (OSNotifyCreateProcessor.c)
 *     OSNotifyDeviceCheck @ 0x1C002EB9C (OSNotifyDeviceCheck.c)
 *     GetOpRegionScope @ 0x1C0030CC8 (GetOpRegionScope.c)
 *     GetPciAddressWorker @ 0x1C0030F70 (GetPciAddressWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C00314C0 (IsPciBusAsyncWorker.c)
 *     IsPciDeviceWorker @ 0x1C0031AD0 (IsPciDeviceWorker.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00321A0 (PciConfigSpaceHandlerWorker.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0033D28 (AcpiSetupNativeMethodContext.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0035EB0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C00393B0 (ACPIRootIrpQueryPower.c)
 *     AMLIIterateParentNext @ 0x1C0043E7C (AMLIIterateParentNext.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0074CA0 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIRootInitialize @ 0x1C008710C (ACPIRootInitialize.c)
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
    dword_1C00677B8 = 0;
    v3 += 120LL;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return v3;
}
