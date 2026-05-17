/*
 * XREFs of sub_1800E91E4 @ 0x1800E91E4
 * Callers:
 *     RtlValidAcl @ 0x180044810 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800E91E4(__int64 a1)
{
  unsigned __int64 v2; // rdx
  int v3; // r9d
  int v4; // r10d
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // rcx

  if ( !a1 )
    return 0;
  v2 = *(unsigned __int16 *)(a1 + 2);
  if ( ((v2 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v2 || (unsigned __int16)v2 < 0xCu )
    return 0;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = v3 & 1;
  v5 = v3 & 2;
  v6 = (unsigned int)(16 * v4 + 16);
  if ( !v5 )
    v6 = (unsigned int)(16 * v4);
  v7 = (unsigned int)v6;
  if ( v2 >= v6 + 24
    && (v8 = a1 + (v5 != 0 ? 0x10 : 0), v9 = v4 != 0 ? 28LL : 12LL, *(_BYTE *)(v9 + v8) == 1)
    && *(_BYTE *)(v9 + v8 + 1) <= 0xFu )
  {
    return v2 >= v7 + 4 * ((unsigned __int64)*(unsigned __int8 *)(v9 + v8 + 1) + 5);
  }
  else
  {
    return 0;
  }
}
