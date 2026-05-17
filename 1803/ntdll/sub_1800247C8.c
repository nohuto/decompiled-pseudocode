/*
 * XREFs of sub_1800247C8 @ 0x1800247C8
 * Callers:
 *     TpSimpleTryPost @ 0x1800562E0 (TpSimpleTryPost.c)
 *     TpAllocWork @ 0x180056F90 (TpAllocWork.c)
 *     sub_180058DCC @ 0x180058DCC (sub_180058DCC.c)
 * Callees:
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 *     sub_180024854 @ 0x180024854 (sub_180024854.c)
 *     sub_180024CB8 @ 0x180024CB8 (sub_180024CB8.c)
 */

__int64 __fastcall sub_1800247C8(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int v7; // ebx
  __int64 v8; // rcx

  v7 = sub_180024CB8(a1, a2, a3, a4, a5);
  if ( v7 >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 144);
    if ( v8 )
    {
      *(_QWORD *)(a1 + 200) = a6;
      *(_DWORD *)(a1 + 208) = 0;
      sub_180024854(v8, a1 + 208, a1 + 212);
      *(_DWORD *)(a1 + 232) = 1;
      v7 = 0;
    }
    else
    {
      v7 = -1073741811;
    }
    if ( v7 < 0 )
      sub_180024608((_QWORD *)a1);
  }
  return (unsigned int)v7;
}
