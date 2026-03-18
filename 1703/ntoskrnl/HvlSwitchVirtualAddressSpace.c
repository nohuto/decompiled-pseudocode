/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x1401EB8F0
 * Callers:
 *     KiLoadDirectoryTableBase @ 0x140023270 (KiLoadDirectoryTableBase.c)
 *     KiDetachProcess @ 0x1400B1E40 (KiDetachProcess.c)
 *     MiAttachWorkingSet @ 0x1400B21D0 (MiAttachWorkingSet.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     SwapContext @ 0x1401887A0 (SwapContext.c)
 * Callees:
 *     <none>
 */

__int64 HvlSwitchVirtualAddressSpace()
{
  return HvcallCodeVa();
}
