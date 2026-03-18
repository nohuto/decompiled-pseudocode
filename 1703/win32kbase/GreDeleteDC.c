/*
 * XREFs of GreDeleteDC @ 0x1C008F440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreDeleteDC(HDC a1)
{
  return bDeleteDCInternal(a1, 1, 0, 0);
}
