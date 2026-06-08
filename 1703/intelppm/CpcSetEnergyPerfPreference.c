/*
 * XREFs of CpcSetEnergyPerfPreference @ 0x1C0007B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CpcSetEnergyPerfPreference(__int64 *a1, int a2)
{
  WriteGenAddrMaybeHidden(*a1, (_BYTE *)(a1[14] + 212), 255 * a2 / 0x64u);
}
