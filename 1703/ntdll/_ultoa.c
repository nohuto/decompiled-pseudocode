/*
 * XREFs of _ultoa @ 0x1800968E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180096954 @ 0x180096954 (sub_180096954.c)
 */

char *__cdecl ultoa(unsigned int Value, char *Buffer, int Radix)
{
  sub_180096954(Value, Buffer, Radix, 0LL);
  return Buffer;
}
