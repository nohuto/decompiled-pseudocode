/*
 * XREFs of _i64toa @ 0x18008BA70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008BB6C @ 0x18008BB6C (sub_18008BB6C.c)
 */

char *__cdecl i64toa(__int64 Value, char *Buffer, int Radix)
{
  BOOL v3; // eax

  v3 = 0;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_18008BB6C(Value, Buffer, Radix, v3);
  return Buffer;
}
