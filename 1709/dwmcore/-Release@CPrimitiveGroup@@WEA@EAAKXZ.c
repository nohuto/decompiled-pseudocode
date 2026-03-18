/*
 * XREFs of ?Release@CPrimitiveGroup@@WEA@EAAKXZ @ 0x1800C6130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPrimitiveGroup::Release(__int64 a1)
{
  return CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(a1 - 64));
}
