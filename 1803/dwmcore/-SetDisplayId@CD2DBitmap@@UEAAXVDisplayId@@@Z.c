/*
 * XREFs of ?SetDisplayId@CD2DBitmap@@UEAAXVDisplayId@@@Z @ 0x1800D6BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD2DBitmap::SetDisplayId(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 148) = a2;
}
