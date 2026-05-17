/*
 * XREFs of _ultow @ 0x180096A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180096B00 @ 0x180096B00 (sub_180096B00.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Buffer, int Radix)
{
  sub_180096B00(Value, Buffer, Radix, 0LL);
  return Buffer;
}
