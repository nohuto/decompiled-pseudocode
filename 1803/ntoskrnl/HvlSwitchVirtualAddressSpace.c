/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x14022E4B0
 * Callers:
 *     KiSwapProcess @ 0x140008570 (KiSwapProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     KiDetachProcess @ 0x14000A340 (KiDetachProcess.c)
 *     KiLoadDirectoryTableBase @ 0x1400ADCA0 (KiLoadDirectoryTableBase.c)
 *     SwapContext @ 0x1401B1E80 (SwapContext.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 */

__int64 HvlSwitchVirtualAddressSpace()
{
  return HvcallCodeVa();
}
