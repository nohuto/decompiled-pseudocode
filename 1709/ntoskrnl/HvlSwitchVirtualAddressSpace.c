/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x1401F0B80
 * Callers:
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiDetachProcess @ 0x1400BF4A0 (KiDetachProcess.c)
 *     KiLoadDirectoryTableBase @ 0x14011AD8C (KiLoadDirectoryTableBase.c)
 *     SwapContext @ 0x140188250 (SwapContext.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 */

__int64 HvlSwitchVirtualAddressSpace()
{
  return HvcallCodeVa();
}
