/*
 * XREFs of HvlpHvToNtStatus @ 0x14022DF28
 * Callers:
 *     HvlpReadPerfRegister @ 0x1401A5664 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1401A571C (HvlpWritePerfRegister.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140228850 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1402288F0 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140228A20 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140228AB0 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140228B40 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140228C20 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140228E60 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x140229070 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1402291A0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlHvDebuggerPowerHandler @ 0x1402298A0 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x140229C50 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x14022A2B0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x14022A460 (HvlRetargetDeviceInterrupt.c)
 *     HvlSvmAcknowledgePageRequest @ 0x14022AA90 (HvlSvmAcknowledgePageRequest.c)
 *     HvlSvmAttachPasidSpace @ 0x14022AB30 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x14022AC10 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x14022AC70 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x14022ACE0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x14022ADE0 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x14022AE30 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x14022AEA0 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x14022AEF0 (HvlSvmEnablePasid.c)
 *     HvlSvmGetDeviceCapabilities @ 0x14022AFB0 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmSetDeviceEnabled @ 0x14022B280 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x14022B320 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnmapDeviceInterrupt @ 0x14022B3A0 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x14022B440 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x14022B4A4 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x14022B568 (HvlpDetachRootSvmDevice.c)
 *     HvlpAddPhysicalMemory @ 0x1402CA3C0 (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x1402CA4CC (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1402CA680 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x1402CA7E4 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x1402CA904 (HvlMapSparseGpaPages.c)
 *     HvlUpdateMicrocode @ 0x140717DD0 (HvlUpdateMicrocode.c)
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
