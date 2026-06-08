/*
 * XREFs of CpcSetEnergyPerfPreference @ 0x1C0007E30
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHidden @ 0x1C00044CC (WriteGenAddrMaybeHidden.c)
 */

__int64 __fastcall CpcSetEnergyPerfPreference(__int64 *a1, int a2)
{
  return WriteGenAddrMaybeHidden(*a1, (_BYTE *)(a1[14] + 212), 255 * a2 / 0x64u);
}
