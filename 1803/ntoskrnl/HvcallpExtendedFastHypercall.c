/*
 * XREFs of HvcallpExtendedFastHypercall @ 0x1401B4720
 * Callers:
 *     HvlpFastFlushAddressSpaceTb @ 0x140159D18 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFastFlushListTb @ 0x140159EE0 (HvlpFastFlushListTb.c)
 *     HvlpWritePerfRegister @ 0x1401A571C (HvlpWritePerfRegister.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x1401B4780 (HvcallpExtendedFastHypercallWithOutput.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140228850 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1402288F0 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140228A20 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140228AB0 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140228C20 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140228E60 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x140229070 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1402291A0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlSvmAttachPasidSpace @ 0x14022AB30 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x14022AC10 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x14022AC70 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x14022ACE0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x14022ADE0 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x14022AE30 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x14022AEA0 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x14022AEF0 (HvlSvmEnablePasid.c)
 *     HvlSvmSetDeviceEnabled @ 0x14022B280 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x14022B320 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnregisterDeviceId @ 0x14022B440 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x14022B4A4 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x14022B568 (HvlpDetachRootSvmDevice.c)
 *     HvlpFastAcknowledgePageRequest @ 0x14022B5D8 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x14022B628 (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x14022B6CC (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x14022B76C (HvlpFlushPasidAddressSpace.c)
 *     HvlpProcessIommuPrq @ 0x14022D4D0 (HvlpProcessIommuPrq.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x14022E4E4 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTbEx @ 0x14022E598 (HvlpFastFlushListTbEx.c)
 *     HvcallFastExtended @ 0x1402C0D60 (HvcallFastExtended.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 */

__int64 __fastcall HvcallpExtendedFastHypercall(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // r8

  v3 = (unsigned __int64)(a3 + 15) >> 4;
  if ( v3 > 1 )
    __asm { jmp     r9 }
  return HvcallCodeVa();
}
