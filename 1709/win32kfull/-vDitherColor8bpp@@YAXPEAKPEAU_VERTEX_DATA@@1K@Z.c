/*
 * XREFs of ?vDitherColor8bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z @ 0x1C0267CC4
 * Callers:
 *     EngDitherColor @ 0x1C0267F80 (EngDitherColor.c)
 * Callees:
 *     <none>
 */

void __fastcall vDitherColor8bpp(unsigned int *a1, struct _VERTEX_DATA *a2, struct _VERTEX_DATA *a3, unsigned int a4)
{
  struct _VERTEX_DATA *v5; // r11
  unsigned int v7; // r9d
  unsigned int v8; // eax
  unsigned int v9; // ebx
  struct _VERTEX_DATA *v10; // r8
  struct _VERTEX_DATA *v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int *v15; // rcx
  __int64 v16; // rax
  char v17; // r8
  unsigned int v18; // edx
  unsigned int i; // edx
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  unsigned int v23; // edx
  unsigned int *v24; // rcx
  __int64 v25; // rax
  char v26; // r9
  unsigned int v27; // r8d
  unsigned int *v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // ecx

  v5 = a2;
  if ( a4 > 2 )
  {
    if ( a4 == 3 )
    {
      v7 = *((_DWORD *)a2 + 2);
      v8 = *((_DWORD *)a2 + 4);
      v9 = v8;
      if ( v7 >= v8 )
        v9 = *((_DWORD *)a2 + 2);
      v10 = (struct _VERTEX_DATA *)((char *)a2 + (v7 < v8 ? 16LL : 8LL));
    }
    else
    {
      v10 = (struct _VERTEX_DATA *)((char *)a2 + 16);
      v9 = *((_DWORD *)a2 + 4);
      if ( v9 < *((_DWORD *)a2 + 6) )
      {
        v10 = (struct _VERTEX_DATA *)((char *)a2 + 24);
        v9 = *((_DWORD *)a2 + 6);
      }
    }
    v11 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    v12 = v9;
    if ( *(_DWORD *)v11 <= v9 )
      v11 = v10;
    else
      v12 = *(_DWORD *)v11;
    if ( *(_DWORD *)v5 > v12 )
      v11 = v5;
    v13 = *((unsigned int *)v11 + 1);
    *((_DWORD *)v11 + 1) = 255;
    v14 = *((_DWORD *)&ulNibbleTo8bppDword + v13);
    *a1 = v14;
    a1[1] = v14;
    a1[2] = v14;
    a1[3] = v14;
    a1[4] = v14;
    a1[5] = v14;
    a1[6] = v14;
    a1[7] = v14;
    a1[8] = v14;
    a1[9] = v14;
    a1[10] = v14;
    a1[11] = v14;
    a1[12] = v14;
    a1[13] = v14;
    a1[14] = v14;
    a1[15] = v14;
    v15 = (unsigned int *)&aulDither8bppOrder;
    while ( 1 )
    {
      v16 = *((unsigned int *)v5 + 1);
      if ( (_DWORD)v16 != 255 )
        break;
      v15 += *(unsigned int *)v5;
LABEL_24:
      v5 = (struct _VERTEX_DATA *)((char *)v5 + 8);
      if ( v5 >= a3 )
        return;
    }
    v17 = ajConvert[v16];
    v18 = *(_DWORD *)v5;
    if ( (*(_DWORD *)v5 & 3) != 1 )
    {
      if ( (*(_DWORD *)v5 & 3) != 2 )
      {
        if ( (*(_DWORD *)v5 & 3) != 3 )
          goto LABEL_22;
        *((_BYTE *)a1 + v15[2]) = v17;
      }
      *((_BYTE *)a1 + v15[1]) = v17;
    }
    *((_BYTE *)a1 + *v15) = v17;
    v15 += v18 & 3;
LABEL_22:
    for ( i = v18 >> 2; i; --i )
    {
      *((_BYTE *)a1 + *v15) = v17;
      *((_BYTE *)a1 + v15[1]) = v17;
      *((_BYTE *)a1 + v15[2]) = v17;
      v20 = v15[3];
      v15 += 4;
      *((_BYTE *)a1 + v20) = v17;
    }
    goto LABEL_24;
  }
  if ( a4 != 2 )
  {
    v30 = *((_DWORD *)&ulNibbleTo8bppDword + *((unsigned int *)a2 + 1));
    *a1 = v30;
    a1[1] = v30;
    a1[2] = v30;
    a1[3] = v30;
    a1[4] = v30;
    a1[5] = v30;
    a1[6] = v30;
    a1[7] = v30;
    a1[8] = v30;
    a1[9] = v30;
    a1[10] = v30;
    a1[11] = v30;
    a1[12] = v30;
    a1[13] = v30;
    a1[14] = v30;
    a1[15] = v30;
    return;
  }
  v21 = *(_DWORD *)a2;
  v22 = *((_DWORD *)a2 + 2);
  if ( *(_DWORD *)a2 < v22 )
  {
    v22 = *(_DWORD *)a2;
    v24 = (unsigned int *)&aulDither8bppOrder;
    v23 = *((_DWORD *)&ulNibbleTo8bppDword + *((unsigned int *)a2 + 3));
    v25 = *((unsigned int *)v5 + 1);
  }
  else
  {
    v23 = *((_DWORD *)&ulNibbleTo8bppDword + *((unsigned int *)a2 + 1));
    v24 = (unsigned int *)((char *)&aulDither8bppOrder + 4 * v21);
    v25 = *((unsigned int *)v5 + 3);
  }
  v26 = ajConvert[v25];
  *a1 = v23;
  a1[1] = v23;
  a1[2] = v23;
  a1[3] = v23;
  a1[4] = v23;
  a1[5] = v23;
  a1[6] = v23;
  a1[7] = v23;
  a1[8] = v23;
  a1[9] = v23;
  a1[10] = v23;
  a1[11] = v23;
  a1[12] = v23;
  a1[13] = v23;
  a1[14] = v23;
  a1[15] = v23;
  if ( (v22 & 3) != 1 )
  {
    if ( (v22 & 3) != 2 )
    {
      if ( (v22 & 3) != 3 )
        goto LABEL_36;
      *((_BYTE *)a1 + v24[2]) = v26;
    }
    *((_BYTE *)a1 + v24[1]) = v26;
  }
  *((_BYTE *)a1 + *v24) = v26;
  v24 += v22 & 3;
LABEL_36:
  v27 = v22 >> 2;
  if ( v27 )
  {
    v28 = v24 + 2;
    do
    {
      *((_BYTE *)a1 + *(v28 - 2)) = v26;
      *((_BYTE *)a1 + *(v28 - 1)) = v26;
      v29 = *v28;
      v28 += 4;
      *((_BYTE *)a1 + v29) = v26;
      *((_BYTE *)a1 + *(v28 - 3)) = v26;
      --v27;
    }
    while ( v27 );
  }
}
