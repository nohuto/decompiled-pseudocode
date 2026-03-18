/*
 * XREFs of HvAddToLayoutStats @ 0x1404476B4
 * Callers:
 *     HvCheckBin @ 0x140513920 (HvCheckBin.c)
 *     HvCheckHive @ 0x140515888 (HvCheckHive.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
