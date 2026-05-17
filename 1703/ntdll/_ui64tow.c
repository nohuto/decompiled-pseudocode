/*
 * XREFs of _ui64tow @ 0x180096A50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180096A8C @ 0x180096A8C (sub_180096A8C.c)
 */

wchar_t *__cdecl ui64tow(unsigned __int64 Value, wchar_t *Buffer, int Radix)
{
  sub_180096A8C(Value, Buffer, Radix, 0LL);
  return Buffer;
}
