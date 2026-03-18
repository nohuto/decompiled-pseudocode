/*
 * XREFs of vFetchShiftNotAndCopy @ 0x1C02B0CE4
 * Callers:
 *     ?vPatNotRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C029F790 (-vPatNotRect8@@YAXPEAU_PATBLTFRAME@@@Z.c)
 *     ?vPatNotRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C029FA80 (-vPatNotRow8@@YAXPEAU_PATBLTFRAME@@JH@Z.c)
 * Callees:
 *     ?CopyPattern@@YAXPEAKJJJ@Z @ 0x1C02B0A68 (-CopyPattern@@YAXPEAKJJJ@Z.c)
 */

void __fastcall vFetchShiftNotAndCopy(__int64 a1)
{
  __int64 v1; // r11
  __int64 v2; // r8
  unsigned int v3; // edx
  unsigned int *v4; // r10
  __int64 v5; // rbx
  _DWORD *v6; // rax
  unsigned __int64 v7; // rcx
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  __int64 v10; // rax
  unsigned int v11; // r8d
  __int64 v12; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(unsigned int *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 20);
  v4 = *(unsigned int **)a1;
  v5 = *(unsigned int *)(a1 + 24);
  v6 = (_DWORD *)(v1 + v2);
  v7 = *(_QWORD *)a1 + 4 * v5;
  if ( v3 == 8 )
  {
    v8 = v2 + 4;
    v9 = ~*v6;
    v10 = v8 - 8;
    if ( v8 < 8 )
      v10 = v8;
    CopyPattern(v4, v5, ~*(_DWORD *)(v10 + v1), v9);
  }
  else
  {
    while ( (unsigned __int64)v4 < v7 )
    {
      v11 = v2 + 4;
      *v4 = ~*v6;
      v12 = v11 - v3;
      ++v4;
      if ( v11 < v3 )
        v12 = v11;
      LODWORD(v2) = v12;
      v6 = (_DWORD *)(v1 + v12);
    }
  }
}
