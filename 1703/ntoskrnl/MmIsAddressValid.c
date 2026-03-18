/*
 * XREFs of MmIsAddressValid @ 0x140211F10
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1401747D0 (KiMarkBugCheckRegions.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140415C90 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14068EFF4 (IopLiveDumpDiscardVirtualAddressRange.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MiIsAddressValid((__int64)VirtualAddress);
}
