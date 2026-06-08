/*
 * XREFs of CpcSetTimeWindow @ 0x1C0007E70
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHidden @ 0x1C00044CC (WriteGenAddrMaybeHidden.c)
 */

__int64 __fastcall CpcSetTimeWindow(__int64 *a1, unsigned int a2)
{
  return WriteGenAddrMaybeHidden(*a1, (_BYTE *)(a1[14] + 116), a2);
}
