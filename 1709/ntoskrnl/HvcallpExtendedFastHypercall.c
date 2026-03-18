/*
 * XREFs of HvcallpExtendedFastHypercall @ 0x14018AA70
 * Callers:
 *     HvcallFastExtended @ 0x140127C00 (HvcallFastExtended.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x140141134 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFastFlushListTb @ 0x1401412D4 (HvlpFastFlushListTb.c)
 *     HvlpWritePerfRegister @ 0x14017AE7C (HvlpWritePerfRegister.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x14018AAD0 (HvcallpExtendedFastHypercallWithOutput.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1401EB7E0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1401EB880 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x1401EB940 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1401EB9C0 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1401EBA30 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1401EBC50 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlSvmAttachPasidSpace @ 0x1401ED300 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x1401ED3E0 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1401ED440 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1401ED4B0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1401ED5B0 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x1401ED600 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x1401ED680 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x1401ED6D0 (HvlSvmEnablePasid.c)
 *     HvlSvmSetDeviceEnabled @ 0x1401EDA50 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1401EDAF0 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x1401EDC10 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1401EDCCC (HvlpDetachRootSvmDevice.c)
 *     HvlpFastAcknowledgePageRequest @ 0x1401EDD38 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x1401EDD88 (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1401EDE2C (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x1401EDECC (HvlpFlushPasidAddressSpace.c)
 *     HvlpProcessIommuPrq @ 0x1401EEF60 (HvlpProcessIommuPrq.c)
 *     HvlpFastFlushListTbEx @ 0x1401F0BB4 (HvlpFastFlushListTbEx.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 */

__int64 __fastcall HvcallpExtendedFastHypercall(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // r8

  v3 = (unsigned __int64)(a3 + 15) >> 4;
  if ( v3 > 1 )
    __asm { jmp     r9 }
  return HvcallCodeVa();
}
