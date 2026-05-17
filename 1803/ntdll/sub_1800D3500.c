/*
 * XREFs of sub_1800D3500 @ 0x1800D3500
 * Callers:
 *     sub_1800D35E8 @ 0x1800D35E8 (sub_1800D35E8.c)
 * Callees:
 *     RtlSetBits @ 0x1800510C0 (RtlSetBits.c)
 */

char __fastcall sub_1800D3500(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rdx
  unsigned int v6; // r10d
  unsigned int v7; // ebx
  __int64 v9; // rcx
  int *v10; // rdx
  int v11; // esi
  int *v12; // rdi
  bool v13; // zf
  bool i; // zf

  if ( !a4 )
    return 0;
  if ( a1 > a3 )
    return 0;
  if ( a3 + a4 < a3 )
    return 0;
  v5 = a1 + a2;
  if ( v5 < a1 )
    return 0;
  if ( a3 + a4 > v5 )
    return 0;
  v6 = a3 - a1;
  v7 = a3 - a1 + a4 - 1;
  if ( v7 >= *(_DWORD *)a5 )
    return 0;
  if ( (unsigned int)a4 > 1 )
  {
    v9 = *(_QWORD *)(a5 + 8);
    v10 = (int *)(v9 + 4 * ((unsigned __int64)v6 >> 5));
    v11 = *v10;
    v12 = (int *)(v9 + 4 * ((unsigned __int64)v7 >> 5));
    if ( v10 != v12 )
    {
      for ( i = (v11 & (-1 << v6)) == 0; i; i = *v10 == 0 )
      {
        if ( ++v10 == v12 )
        {
          v13 = ((0xFFFFFFFF >> ~(_BYTE)v7) & *v10) == 0;
          goto LABEL_18;
        }
      }
      return 0;
    }
    v13 = (v11 & (0xFFFFFFFF >> (32 - a4) << v6)) == 0;
LABEL_18:
    if ( !v13 )
      return 0;
  }
  else if ( (_DWORD)a4 != 1 || _bittest(*(const signed __int32 **)(a5 + 8), v6) )
  {
    return 0;
  }
  RtlSetBits(a5, v6, a4);
  return 1;
}
