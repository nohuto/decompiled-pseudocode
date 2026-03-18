/*
 * XREFs of HvcallpExtendedFastHypercall @ 0x14018AD70
 * Callers:
 *     HvlpWritePerfRegister @ 0x14017B624 (HvlpWritePerfRegister.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x14018ADD0 (HvcallpExtendedFastHypercallWithOutput.c)
 *     HvlSvmAttachPasidSpace @ 0x1401E8100 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x1401E81E0 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1401E8240 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1401E82C0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1401E83C0 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x1401E8410 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x1401E8490 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x1401E84E0 (HvlSvmEnablePasid.c)
 *     HvlSvmSetDeviceEnabled @ 0x1401E8860 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1401E8900 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x1401E8A20 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1401E8ADC (HvlpDetachRootSvmDevice.c)
 *     HvlpFastAcknowledgePageRequest @ 0x1401E8B40 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x1401E8B90 (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1401E8C34 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x1401E8CD0 (HvlpFlushPasidAddressSpace.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x1401EBA50 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFastFlushListTb @ 0x1401EBAB4 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushListTbEx @ 0x1401EBB88 (HvlpFastFlushListTbEx.c)
 *     HvcallFastExtended @ 0x140261A84 (HvcallFastExtended.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 */

__int64 __fastcall HvcallpExtendedFastHypercall(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // r8

  v3 = (unsigned __int64)(a3 + 15) >> 4;
  if ( v3 > 1 )
    __asm { jmp     r9 }
  return HvcallCodeVa();
}
