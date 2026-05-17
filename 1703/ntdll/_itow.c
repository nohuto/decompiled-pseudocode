/*
 * XREFs of _itow @ 0x1800969F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180096B00 @ 0x180096B00 (sub_180096B00.c)
 */

wchar_t *__cdecl itow(int Value, wchar_t *Buffer, int Radix)
{
  _BOOL8 v4; // r9

  v4 = Radix == 10 && Value < 0;
  sub_180096B00(Value, Buffer, Radix, v4);
  return Buffer;
}
