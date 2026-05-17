/*
 * XREFs of _ultow @ 0x18008BCD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008BD60 @ 0x18008BD60 (sub_18008BD60.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Buffer, int Radix)
{
  sub_18008BD60(Value, Buffer, Radix, 0LL);
  return Buffer;
}
