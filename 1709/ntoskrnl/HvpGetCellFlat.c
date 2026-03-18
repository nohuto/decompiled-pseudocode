/*
 * XREFs of HvpGetCellFlat @ 0x140476910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellFlat(__int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 v3; // r9

  v3 = *(_QWORD *)(a1 + 64);
  *a3 = a2;
  return v3 + a2 + 4100LL;
}
