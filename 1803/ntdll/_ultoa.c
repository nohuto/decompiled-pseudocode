/*
 * XREFs of _ultoa @ 0x18008BB50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008BBC4 @ 0x18008BBC4 (sub_18008BBC4.c)
 */

char *__cdecl ultoa(unsigned int Value, char *Buffer, int Radix)
{
  sub_18008BBC4(Value, Buffer, Radix, 0LL);
  return Buffer;
}
