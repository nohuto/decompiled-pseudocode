/*
 * XREFs of _i64toa @ 0x1800967F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800968FC @ 0x1800968FC (sub_1800968FC.c)
 */

char *__cdecl i64toa(__int64 Value, char *Buffer, int Radix)
{
  BOOL v3; // eax

  v3 = 0;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_1800968FC(Value, Buffer, Radix, v3);
  return Buffer;
}
