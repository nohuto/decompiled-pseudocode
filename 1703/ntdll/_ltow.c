/*
 * XREFs of _ltow @ 0x180096A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180096B00 @ 0x180096B00 (sub_180096B00.c)
 */

wchar_t *__cdecl ltow(int Value, wchar_t *Buffer, int Radix)
{
  _BOOL8 v3; // r9

  v3 = 0LL;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_180096B00(Value, Buffer, Radix, v3);
  return Buffer;
}
