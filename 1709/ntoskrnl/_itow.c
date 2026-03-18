/*
 * XREFs of _itow @ 0x14015E310
 * Callers:
 *     <none>
 * Callees:
 *     xtow @ 0x14015E360 (xtow.c)
 */

wchar_t *__cdecl itow(int Value, wchar_t *Dest, int Radix)
{
  _BOOL8 v4; // r9

  v4 = Radix == 10 && Value < 0;
  xtow(Value, Dest, Radix, v4);
  return Dest;
}
