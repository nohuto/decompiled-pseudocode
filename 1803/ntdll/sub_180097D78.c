/*
 * XREFs of sub_180097D78 @ 0x180097D78
 * Callers:
 *     sub_180097A38 @ 0x180097A38 (sub_180097A38.c)
 *     sub_180097DA0 @ 0x180097DA0 (sub_180097DA0.c)
 * Callees:
 *     sub_180095010 @ 0x180095010 (sub_180095010.c)
 */

__int64 __fastcall sub_180097D78(__int64 a1)
{
  if ( --*(_DWORD *)(a1 + 8) < 0 )
    return (unsigned int)sub_180095010();
  else
    return *(unsigned __int8 *)(*(_QWORD *)a1)++;
}
