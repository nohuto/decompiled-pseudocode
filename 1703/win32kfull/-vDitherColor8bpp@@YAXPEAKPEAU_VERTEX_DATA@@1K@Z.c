/*
 * XREFs of ?vDitherColor8bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z @ 0x1C0268EF8
 * Callers:
 *     EngDitherColor @ 0x1C02691A0 (EngDitherColor.c)
 * Callees:
 *     <none>
 */

void __fastcall vDitherColor8bpp(unsigned int *a1, struct _VERTEX_DATA *a2, struct _VERTEX_DATA *a3, unsigned int a4)
{
  unsigned int v6; // r8d
  struct _VERTEX_DATA *v7; // r9
  unsigned int v8; // eax
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int *v11; // rcx
  __int64 v12; // rax
  char v13; // r9
  unsigned int v14; // r8d
  unsigned int i; // r8d
  __int64 v16; // rax
  struct _VERTEX_DATA *v17; // r9
  int v18; // ebx
  unsigned int v19; // r8d
  unsigned int *v20; // rcx
  unsigned int v21; // r9d
  char v22; // dl
  unsigned int v23; // r9d
  unsigned int *v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // ecx

  if ( a4 > 2 )
  {
    if ( a4 == 3 )
    {
      v6 = *((_DWORD *)a2 + 4);
      v7 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      v8 = *((_DWORD *)a2 + 2);
      if ( v8 < v6 )
      {
        v7 = (struct _VERTEX_DATA *)((char *)a2 + 16);
LABEL_7:
        v8 = v6;
      }
    }
    else
    {
      v6 = *((_DWORD *)a2 + 6);
      v7 = (struct _VERTEX_DATA *)((char *)a2 + 16);
      v8 = *((_DWORD *)a2 + 4);
      if ( v8 < v6 )
      {
        v7 = (struct _VERTEX_DATA *)((char *)a2 + 24);
        goto LABEL_7;
      }
    }
    if ( *((_DWORD *)a2 + 2) > v8 )
    {
      v7 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      v8 = *((_DWORD *)a2 + 2);
    }
    if ( *(_DWORD *)a2 > v8 )
      v7 = a2;
    v9 = *((unsigned int *)v7 + 1);
    *((_DWORD *)v7 + 1) = 255;
    v10 = *((_DWORD *)&ulNibbleTo8bppDword + v9);
    *a1 = v10;
    a1[1] = v10;
    a1[2] = v10;
    a1[3] = v10;
    a1[4] = v10;
    a1[5] = v10;
    a1[6] = v10;
    a1[7] = v10;
    a1[8] = v10;
    a1[9] = v10;
    a1[10] = v10;
    a1[11] = v10;
    a1[12] = v10;
    a1[13] = v10;
    a1[14] = v10;
    a1[15] = v10;
    v11 = (unsigned int *)&aulDither8bppOrder;
    while ( 1 )
    {
      v12 = *((unsigned int *)a2 + 1);
      if ( (_DWORD)v12 != 255 )
        break;
      v11 += *(unsigned int *)a2;
LABEL_23:
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      if ( a2 >= a3 )
        return;
    }
    v13 = ajConvert[v12];
    v14 = *(_DWORD *)a2;
    if ( (*(_DWORD *)a2 & 3) != 1 )
    {
      if ( (*(_DWORD *)a2 & 3) != 2 )
      {
        if ( (*(_DWORD *)a2 & 3) != 3 )
          goto LABEL_21;
        *((_BYTE *)a1 + v11[2]) = v13;
      }
      *((_BYTE *)a1 + v11[1]) = v13;
    }
    *((_BYTE *)a1 + *v11) = v13;
    v11 += v14 & 3;
LABEL_21:
    for ( i = v14 >> 2; i; --i )
    {
      *((_BYTE *)a1 + *v11) = v13;
      *((_BYTE *)a1 + v11[1]) = v13;
      *((_BYTE *)a1 + v11[2]) = v13;
      v16 = v11[3];
      v11 += 4;
      *((_BYTE *)a1 + v16) = v13;
    }
    goto LABEL_23;
  }
  if ( a4 != 2 )
  {
    v26 = *((_DWORD *)&ulNibbleTo8bppDword + *((unsigned int *)a2 + 1));
    *a1 = v26;
    a1[1] = v26;
    a1[2] = v26;
    a1[3] = v26;
    a1[4] = v26;
    a1[5] = v26;
    a1[6] = v26;
    a1[7] = v26;
    a1[8] = v26;
    a1[9] = v26;
    a1[10] = v26;
    a1[11] = v26;
    a1[12] = v26;
    a1[13] = v26;
    a1[14] = v26;
    a1[15] = v26;
    return;
  }
  v17 = (struct _VERTEX_DATA *)((char *)a2 + 8);
  if ( *(_DWORD *)a2 < *((_DWORD *)a2 + 2) )
  {
    v20 = (unsigned int *)&aulDither8bppOrder;
    v18 = *((_DWORD *)a2 + 1);
    v17 = a2;
    v19 = *((_DWORD *)&ulNibbleTo8bppDword + *((unsigned int *)a2 + 3));
  }
  else
  {
    v18 = *((_DWORD *)a2 + 3);
    v19 = *((_DWORD *)&ulNibbleTo8bppDword + *((unsigned int *)a2 + 1));
    v20 = (unsigned int *)((char *)&aulDither8bppOrder + 4 * *(unsigned int *)a2);
  }
  v21 = *(_DWORD *)v17;
  v22 = ajConvert[v18];
  *a1 = v19;
  a1[1] = v19;
  a1[2] = v19;
  a1[3] = v19;
  a1[4] = v19;
  a1[5] = v19;
  a1[6] = v19;
  a1[7] = v19;
  a1[8] = v19;
  a1[9] = v19;
  a1[10] = v19;
  a1[11] = v19;
  a1[12] = v19;
  a1[13] = v19;
  a1[14] = v19;
  a1[15] = v19;
  if ( (v21 & 3) != 1 )
  {
    if ( (v21 & 3) != 2 )
    {
      if ( (v21 & 3) != 3 )
        goto LABEL_35;
      *((_BYTE *)a1 + v20[2]) = v22;
    }
    *((_BYTE *)a1 + v20[1]) = v22;
  }
  *((_BYTE *)a1 + *v20) = v22;
  v20 += v21 & 3;
LABEL_35:
  v23 = v21 >> 2;
  if ( v23 )
  {
    v24 = v20 + 2;
    do
    {
      *((_BYTE *)a1 + *(v24 - 2)) = v22;
      *((_BYTE *)a1 + *(v24 - 1)) = v22;
      v25 = *v24;
      v24 += 4;
      *((_BYTE *)a1 + v25) = v22;
      *((_BYTE *)a1 + *(v24 - 3)) = v22;
      --v23;
    }
    while ( v23 );
  }
}
