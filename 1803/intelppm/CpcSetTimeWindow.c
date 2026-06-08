/*
 * XREFs of CpcSetTimeWindow @ 0x1C0008240
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHidden @ 0x1C000456C (WriteGenAddrMaybeHidden.c)
 */

__int64 __fastcall CpcSetTimeWindow(__int64 *a1, unsigned int a2)
{
  return WriteGenAddrMaybeHidden(*a1, (_BYTE *)(a1[14] + 116), a2);
}
