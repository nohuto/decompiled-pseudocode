/*
 * XREFs of MmIsAddressValid @ 0x140256450
 * Callers:
 *     KiMarkBugCheckRegions @ 0x140193188 (KiMarkBugCheckRegions.c)
 *     sub_1401A13EC @ 0x1401A13EC (sub_1401A13EC.c)
 *     PopMarkComponentsBootPhase @ 0x140475428 (PopMarkComponentsBootPhase.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140481804 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14071FC44 (IopLiveDumpDiscardVirtualAddressRange.c)
 * Callees:
 *     MiIsAddressValid @ 0x140122C40 (MiIsAddressValid.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MiIsAddressValid((__int64)VirtualAddress);
}
