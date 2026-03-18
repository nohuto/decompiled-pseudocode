/*
 * XREFs of HvAddToLayoutStats @ 0x140574080
 * Callers:
 *     HvCheckBin @ 0x1404AED40 (HvCheckBin.c)
 *     HvCheckHive @ 0x1404E345C (HvCheckHive.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
