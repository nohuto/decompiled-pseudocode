/*
 * XREFs of sub_18009452C @ 0x18009452C
 * Callers:
 *     sub_1800941E0 @ 0x1800941E0 (sub_1800941E0.c)
 *     sub_180094560 @ 0x180094560 (sub_180094560.c)
 * Callees:
 *     sub_180095010 @ 0x180095010 (sub_180095010.c)
 */

__int64 __fastcall sub_18009452C(__int64 a1)
{
  if ( --*(_DWORD *)(a1 + 8) < 0 )
    return (unsigned int)sub_180095010();
  else
    return *(unsigned __int8 *)(*(_QWORD *)a1)++;
}
