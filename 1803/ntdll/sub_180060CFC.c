/*
 * XREFs of sub_180060CFC @ 0x180060CFC
 * Callers:
 *     sub_180060B10 @ 0x180060B10 (sub_180060B10.c)
 *     sub_1800FE14C @ 0x1800FE14C (sub_1800FE14C.c)
 *     sub_1800FE1FC @ 0x1800FE1FC (sub_1800FE1FC.c)
 *     sub_1800FE318 @ 0x1800FE318 (sub_1800FE318.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180060CFC(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 544) - 16LL * *(_QWORD *)(a1 + 192);
  if ( *(_BYTE *)(a1 + 386) == 2 )
    v2 = *(_QWORD *)(a1 + 376);
  else
    v2 = 0LL;
  if ( v2 )
    v1 -= *(_QWORD *)(v2 + 72);
  return v1;
}
