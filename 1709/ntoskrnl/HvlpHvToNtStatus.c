/*
 * XREFs of HvlpHvToNtStatus @ 0x1401EF688
 * Callers:
 *     HvlpReadPerfRegister @ 0x14017ADC4 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x14017AE7C (HvlpWritePerfRegister.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1401EB7E0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1401EB880 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x1401EB940 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1401EB9C0 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1401EBA30 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1401EBC50 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlHvDebuggerPowerHandler @ 0x1401EC200 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x1401EC5B0 (HvlMapDeviceInterrupt.c)
 *     HvlRetargetDeviceInterrupt @ 0x1401ECC30 (HvlRetargetDeviceInterrupt.c)
 *     HvlSvmAcknowledgePageRequest @ 0x1401ED260 (HvlSvmAcknowledgePageRequest.c)
 *     HvlSvmAttachPasidSpace @ 0x1401ED300 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x1401ED3E0 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1401ED440 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1401ED4B0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1401ED5B0 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x1401ED600 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x1401ED680 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x1401ED6D0 (HvlSvmEnablePasid.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1401ED780 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmSetDeviceEnabled @ 0x1401EDA50 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1401EDAF0 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnmapDeviceInterrupt @ 0x1401EDB70 (HvlUnmapDeviceInterrupt.c)
 *     HvlpAttachRootSvmDevice @ 0x1401EDC10 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1401EDCCC (HvlpDetachRootSvmDevice.c)
 *     HvlpAddPhysicalMemory @ 0x140294874 (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x140294980 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x140294B40 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x140294CA4 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x140294DC0 (HvlMapSparseGpaPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpHvToNtStatus(unsigned __int16 a1)
{
  switch ( a1 )
  {
    case 0u:
      return 0LL;
    case 0xBu:
    case 0x1Du:
      return 3221225626LL;
    case 0x59u:
      return 3473497LL;
  }
  return a1 | 0xC0350000;
}
