/*
 * XREFs of MmIsAddressValid @ 0x140219970
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1401690CC (KiMarkBugCheckRegions.c)
 *     sub_140176C50 @ 0x140176C50 (sub_140176C50.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x14042ACD0 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     PopMarkComponentsBootPhase @ 0x140433C3C (PopMarkComponentsBootPhase.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1406BACB8 (IopLiveDumpDiscardVirtualAddressRange.c)
 * Callees:
 *     MiIsAddressValid @ 0x140066790 (MiIsAddressValid.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MiIsAddressValid((__int64)VirtualAddress);
}
