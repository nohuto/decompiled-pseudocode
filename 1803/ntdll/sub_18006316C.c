/*
 * XREFs of sub_18006316C @ 0x18006316C
 * Callers:
 *     sub_1800113A0 @ 0x1800113A0 (sub_1800113A0.c)
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180012270 @ 0x180012270 (sub_180012270.c)
 *     sub_180016A80 @ 0x180016A80 (sub_180016A80.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 *     sub_18001BA50 @ 0x18001BA50 (sub_18001BA50.c)
 *     sub_180061F8C @ 0x180061F8C (sub_180061F8C.c)
 *     sub_180063ACC @ 0x180063ACC (sub_180063ACC.c)
 *     sub_180083574 @ 0x180083574 (sub_180083574.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006316C(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax

  v2 = 0;
  if ( _bittest64((const signed __int64 *)a1, a2 >> 30) )
    v2 = (_bittest64(*(const signed __int64 **)(a1 + 8), a2 >> 15) != 0) + 1;
  if ( v2 == 2 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * (a2 >> 6)) >> (a2 & 0x3F)) & 3LL;
  else
    return 0LL;
}
