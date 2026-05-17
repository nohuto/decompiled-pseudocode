/*
 * XREFs of sub_18008EA4C @ 0x18008EA4C
 * Callers:
 *     sub_18008CDCC @ 0x18008CDCC (sub_18008CDCC.c)
 *     sub_180090F98 @ 0x180090F98 (sub_180090F98.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008EA4C(unsigned __int16 a1, __int16 a2)
{
  if ( a1 >= 0x100u )
    return 0;
  else
    return (unsigned __int16)(a2 & *((_WORD *)off_180156008 + a1));
}
