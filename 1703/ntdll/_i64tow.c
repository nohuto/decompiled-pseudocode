/*
 * XREFs of _i64tow @ 0x1800969B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180096A8C @ 0x180096A8C (sub_180096A8C.c)
 */

wchar_t *__cdecl i64tow(__int64 Value, wchar_t *Buffer, int Radix)
{
  BOOL v3; // eax

  v3 = 0;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_180096A8C(Value, Buffer, Radix, v3);
  return Buffer;
}
