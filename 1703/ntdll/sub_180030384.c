/*
 * XREFs of sub_180030384 @ 0x180030384
 * Callers:
 *     sub_18001BB44 @ 0x18001BB44 (sub_18001BB44.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180030384(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 - 152);
  if ( a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return a1 > v2;
}
