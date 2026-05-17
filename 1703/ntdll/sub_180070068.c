/*
 * XREFs of sub_180070068 @ 0x180070068
 * Callers:
 *     sub_18006F890 @ 0x18006F890 (sub_18006F890.c)
 *     sub_18006FF7C @ 0x18006FF7C (sub_18006FF7C.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall sub_180070068(void *a1)
{
  _UNKNOWN **result; // rax

  for ( result = (_UNKNOWN **)off_1801555D0; result != &off_1801555D0; result = (_UNKNOWN **)*result )
  {
    if ( result[7] == a1 )
      return result;
  }
  return 0LL;
}
