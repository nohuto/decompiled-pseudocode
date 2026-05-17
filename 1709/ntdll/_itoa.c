/*
 * XREFs of _itoa @ 0x180091630
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x180091754 (xtoa.c)
 */

char *__cdecl itoa(int Value, char *Buffer, int Radix)
{
  _BOOL8 v4; // r9

  v4 = Radix == 10 && Value < 0;
  xtoa(Value, Buffer, Radix, v4);
  return Buffer;
}
