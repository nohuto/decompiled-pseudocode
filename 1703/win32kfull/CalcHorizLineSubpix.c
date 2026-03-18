/*
 * XREFs of CalcHorizLineSubpix @ 0x1C02CE190
 * Callers:
 *     <none>
 * Callees:
 *     CompDiv @ 0x1C02BD158 (CompDiv.c)
 */

__int64 __fastcall CalcHorizLineSubpix(int a1, _DWORD *a2, _DWORD *a3)
{
  return *a2 + (unsigned int)CompDiv(a3[1] - *a3, (a2[1] - *a2) * (__int64)((a1 << 6) - *a3 + 32));
}
