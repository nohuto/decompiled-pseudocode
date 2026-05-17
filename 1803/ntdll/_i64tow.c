/*
 * XREFs of _i64tow @ 0x18008BC40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008BCEC @ 0x18008BCEC (sub_18008BCEC.c)
 */

wchar_t *__cdecl i64tow(__int64 Value, wchar_t *Buffer, int Radix)
{
  BOOL v3; // eax

  v3 = 0;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_18008BCEC(Value, Buffer, Radix, v3);
  return Buffer;
}
