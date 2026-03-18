/*
 * XREFs of RIMAllocKernelMem @ 0x1C0105600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RIMAllocKernelMem(__int64 a1, unsigned int a2)
{
  return Win32AllocPool(a1, a2);
}
