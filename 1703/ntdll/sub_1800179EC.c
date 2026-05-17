/*
 * XREFs of sub_1800179EC @ 0x1800179EC
 * Callers:
 *     sub_18001425C @ 0x18001425C (sub_18001425C.c)
 *     TpAllocWork @ 0x1800147E0 (TpAllocWork.c)
 *     TpSimpleTryPost @ 0x18007DF90 (TpSimpleTryPost.c)
 * Callees:
 *     sub_180017A78 @ 0x180017A78 (sub_180017A78.c)
 *     sub_180017B34 @ 0x180017B34 (sub_180017B34.c)
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 */

__int64 __fastcall sub_1800179EC(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int v7; // ebx
  __int64 v8; // rcx

  v7 = sub_180017B34(a1, a2, a3, a4, a5);
  if ( v7 >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 144);
    if ( v8 )
    {
      *(_QWORD *)(a1 + 200) = a6;
      *(_DWORD *)(a1 + 208) = 0;
      sub_180017A78(v8, a1 + 208, a1 + 212);
      *(_DWORD *)(a1 + 232) = 1;
      v7 = 0;
    }
    else
    {
      v7 = -1073741811;
    }
    if ( v7 < 0 )
      sub_1800186FC(a1);
  }
  return (unsigned int)v7;
}
