/*
 * XREFs of UserRtlAllocMem @ 0x1C00E7160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserRtlAllocMem(__int64 a1)
{
  return Win32AllocPool(a1, 0x74727355u);
}
