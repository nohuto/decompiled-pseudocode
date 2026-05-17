/*
 * XREFs of sub_180004860 @ 0x180004860
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007A074 @ 0x18007A074 (sub_18007A074.c)
 *     sub_18010325C @ 0x18010325C (sub_18010325C.c)
 */

__int64 __fastcall sub_180004860(__int16 a1, int a2, int a3, int a4, int a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]

  if ( !a1 )
    return sub_18007A074(a2, a3, a4, a5, a7, (a8 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  if ( a1 == 256 )
    return sub_18010325C(a2, a3, a4, a5, a7, (void *)((a8 + 7) & 0xFFFFFFFFFFFFFFF8uLL), v9, v10, a3);
  return 3221225659LL;
}
