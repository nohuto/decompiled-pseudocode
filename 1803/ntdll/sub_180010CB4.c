/*
 * XREFs of sub_180010CB4 @ 0x180010CB4
 * Callers:
 *     LdrAccessResource_0 @ 0x180010F9C (LdrAccessResource_0.c)
 *     sub_180033B60 @ 0x180033B60 (sub_180033B60.c)
 *     sub_18004EC98 @ 0x18004EC98 (sub_18004EC98.c)
 *     sub_180069E8C @ 0x180069E8C (sub_180069E8C.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     sub_180010BE4 @ 0x180010BE4 (sub_180010BE4.c)
 *     RtlImageRvaToSection @ 0x180010F00 (RtlImageRvaToSection.c)
 *     RtlAddressInSectionTable @ 0x1800782B0 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall sub_180010CB4(unsigned __int64 a1, unsigned int *a2, unsigned __int64 *a3, _DWORD *a4)
{
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // r13
  unsigned __int64 v8; // r14
  unsigned int v9; // esi
  unsigned __int64 v10; // rdi
  __int64 v11; // r12
  BOOL v12; // eax
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // r11
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r11
  __int64 v19; // rax
  __int64 v21; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-48h]
  __int64 v23; // [rsp+48h] [rbp-40h] BYREF
  __int64 v24; // [rsp+50h] [rbp-38h] BYREF

  v5 = a1;
  v6 = sub_18001014C(a1, 1, 2u, &v21, &v23);
  v7 = v23;
  v8 = 0LL;
  if ( v6 < 0 )
    v7 = 0LL;
  v23 = v7;
  if ( !v7 )
    return 3221225609LL;
  v21 = 0LL;
  v9 = sub_180010BE4(v5, &v21);
  v22 = v9;
  if ( v9 == -1073741701 )
    return 3221225595LL;
  v10 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (unsigned __int64)a2 <= (v5 & 0xFFFFFFFFFFFFFFFCuLL) )
    return 3221225595LL;
  v11 = v21;
  if ( v21 )
  {
    if ( (unsigned __int64)a2 >= v10 + v21 )
      return 3221225595LL;
  }
  v12 = 0;
  if ( (v5 & 3) != 0 )
  {
    v12 = (v5 & 1) != 0;
    v5 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( v12 )
  {
    v24 = 0LL;
    RtlImageNtHeaderEx(1, v5, 0LL, &v24);
    if ( !v24 )
      return 3221225609LL;
    if ( *(_WORD *)(v24 + 24) == 267 )
    {
      v13 = *(_DWORD *)(v24 + 136);
    }
    else if ( *(_WORD *)(v24 + 24) == 523 )
    {
      v13 = *(_DWORD *)(v24 + 152);
    }
    else
    {
      v13 = 0;
    }
    if ( !v13 )
      return 3221225609LL;
    v8 = v5 + v13 - v7;
    v14 = RtlImageRvaToSection(v24);
    if ( !v14 )
      return 3221225609LL;
    if ( *a2 > *(_DWORD *)(v14 + 8) )
    {
      LODWORD(v21) = *(_DWORD *)(v14 + 12);
      v17 = RtlImageRvaToSection(v15);
      v24 = v17;
      if ( !v17 )
        return 3221225609LL;
      v19 = RtlAddressInSectionTable(v18, v5, *(unsigned int *)(v17 + 12));
      v8 += v7 + *(unsigned int *)(v24 + 12) - (unsigned __int64)(unsigned int)v21 - v19;
    }
  }
  if ( a3 && ((v16 = v5 + *a2 - v8, *a3 = v16, v16 <= v10) || v11 && v16 >= v10 + v11) )
  {
    *a3 = 0LL;
    return 3221225595LL;
  }
  else
  {
    if ( a4 )
      *a4 = a2[1];
    return v9;
  }
}
