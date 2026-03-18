/*
 * XREFs of HvAddToLayoutStats @ 0x140583608
 * Callers:
 *     HvCheckHive @ 0x14047CA0C (HvCheckHive.c)
 *     HvCheckBin @ 0x1404D02F0 (HvCheckBin.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
