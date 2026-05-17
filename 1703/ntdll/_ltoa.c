/*
 * XREFs of _ltoa @ 0x180096860
 * Callers:
 *     <none>
 * Callees:
 *     sub_180096954 @ 0x180096954 (sub_180096954.c)
 */

char *__cdecl ltoa(int Value, char *Buffer, int Radix)
{
  _BOOL8 v3; // r9

  v3 = 0LL;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_180096954(Value, Buffer, Radix, v3);
  return Buffer;
}
