/*
 * XREFs of _ltoa @ 0x18008BAB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008BBC4 @ 0x18008BBC4 (sub_18008BBC4.c)
 */

char *__cdecl ltoa(int Value, char *Buffer, int Radix)
{
  _BOOL8 v3; // r9

  v3 = 0LL;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_18008BBC4(Value, Buffer, Radix, v3);
  return Buffer;
}
