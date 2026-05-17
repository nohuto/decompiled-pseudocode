/*
 * XREFs of sub_180011630 @ 0x180011630
 * Callers:
 *     sub_180012070 @ 0x180012070 (sub_180012070.c)
 *     sub_1800623C8 @ 0x1800623C8 (sub_1800623C8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180011630(__int64 a1, __int64 a2, int *a3, _DWORD *a4, int a5)
{
  unsigned __int64 v7; // rbx
  int v8; // r14d
  unsigned int v9; // edi
  char v10; // cl
  int v11; // r11d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned int v15; // ebp
  unsigned int v16; // r8d
  unsigned __int64 v17; // rsi
  int v18; // ecx
  unsigned __int64 v19; // rsi
  unsigned int v20; // r15d
  unsigned int v21; // r9d
  bool v22; // zf
  unsigned int v23; // edx
  int v24; // ecx
  __int64 result; // rax
  unsigned int v26; // r8d
  int v27; // edx
  int v28; // ecx
  unsigned int v29; // ecx
  int v30; // ecx
  unsigned int v31; // edx
  unsigned int v32; // r8d
  unsigned int v33; // r9d
  int v34; // r8d

  v7 = (unsigned int)*a3;
  v8 = -1;
  v9 = 1 << *(_BYTE *)(a1 + 9);
  v10 = *(_BYTE *)(a1 + 9);
  v11 = 0;
  v12 = v7 >> v10;
  v13 = v7 >> v10 << v10;
  v14 = a2 + 32 * v12;
  v15 = *a3 & (v9 - 1);
  v16 = v15 + *a4 - 1;
  v17 = (unsigned __int64)v16 >> v10;
  v18 = -1;
  v19 = v14 + 32 * v17;
  v20 = (v16 & (v9 - 1)) + 1;
  v21 = 0;
  if ( v15 )
  {
    v31 = *(unsigned __int8 *)(v14 + 25);
    v32 = v9;
    if ( v14 == v19 )
      v32 = v20;
    if ( a5 > 1 || v31 >= v32 )
    {
      if ( a5 != 2 || v31 <= v15 )
      {
LABEL_42:
        v14 += 32LL;
        LODWORD(v13) = v9 + v13;
        goto LABEL_2;
      }
      v33 = v15;
      v32 = *(unsigned __int8 *)(v14 + 25);
    }
    else
    {
      v33 = v32;
      v15 = *(unsigned __int8 *)(v14 + 25);
    }
    v34 = v13 + v32;
    v21 = v33 - v31;
    v8 = v13 + v15;
    v18 = v34;
    if ( v21 && a5 >= 1 )
    {
      *(_BYTE *)(v14 + 25) = v31 + v21;
      v18 = v34;
    }
    goto LABEL_42;
  }
LABEL_2:
  v22 = v14 == v19;
  if ( v14 < v19 )
  {
    while ( 1 )
    {
      v26 = *(unsigned __int8 *)(v14 + 25);
      v27 = 0;
      if ( a5 <= 1 && v26 < v9 )
        break;
      if ( a5 == 2 && *(_BYTE *)(v14 + 25) )
      {
        v28 = v13;
        v27 = -v26;
        if ( v8 != -1 )
          v28 = v8;
        v8 = v28;
        v29 = *(unsigned __int8 *)(v14 + 25);
        goto LABEL_24;
      }
LABEL_19:
      v21 += v27;
      v14 += 32LL;
      LODWORD(v13) = v9 + v13;
      v22 = v14 == v19;
      if ( v14 >= v19 )
        goto LABEL_3;
    }
    v30 = v26 + v13;
    v27 = v9 - v26;
    if ( v8 != -1 )
      v30 = v8;
    v8 = v30;
    v29 = v9;
LABEL_24:
    v18 = v13 + v29;
    if ( v27 && a5 >= 1 )
      *(_BYTE *)(v14 + 25) = v27 + v26;
    goto LABEL_19;
  }
LABEL_3:
  if ( !v22 )
    goto LABEL_13;
  v23 = *(unsigned __int8 *)(v14 + 25);
  if ( a5 <= 1 && v23 < v20 )
  {
    v24 = v23 + v13;
    v11 = v20 - v23;
LABEL_7:
    if ( v8 != -1 )
      v24 = v8;
    v8 = v24;
    v18 = v13 + v20;
    if ( v11 && a5 >= 1 )
      *(_BYTE *)(v14 + 25) = v11 + v23;
    goto LABEL_12;
  }
  if ( a5 == 2 && *(_BYTE *)(v14 + 25) )
  {
    v24 = v13;
    v11 = -v23;
    v20 = *(unsigned __int8 *)(v14 + 25);
    goto LABEL_7;
  }
LABEL_12:
  v21 += v11;
LABEL_13:
  result = v21;
  if ( v21 )
  {
    *a3 = v8;
    *a4 = v18 - v8;
  }
  return result;
}
