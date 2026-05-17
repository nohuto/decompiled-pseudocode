/*
 * XREFs of _itoa @ 0x180096830
 * Callers:
 *     <none>
 * Callees:
 *     sub_180096954 @ 0x180096954 (sub_180096954.c)
 */

char *__cdecl itoa(int Value, char *Buffer, int Radix)
{
  _BOOL8 v4; // r9

  v4 = Radix == 10 && Value < 0;
  sub_180096954(Value, Buffer, Radix, v4);
  return Buffer;
}
