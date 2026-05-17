/*
 * XREFs of sub_1800995EC @ 0x1800995EC
 * Callers:
 *     sub_18009796C @ 0x18009796C (sub_18009796C.c)
 *     sub_18009BD48 @ 0x18009BD48 (sub_18009BD48.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800995EC(unsigned __int16 a1, __int16 a2)
{
  if ( a1 >= 0x100u )
    return 0;
  else
    return (unsigned __int16)(a2 & *((_WORD *)off_180155008 + a1));
}
