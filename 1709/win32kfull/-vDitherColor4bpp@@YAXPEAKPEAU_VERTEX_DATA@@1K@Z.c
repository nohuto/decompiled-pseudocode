/*
 * XREFs of ?vDitherColor4bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z @ 0x1C02679BC
 * Callers:
 *     EngDitherColor @ 0x1C0267F80 (EngDitherColor.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall vDitherColor4bpp(unsigned int *a1, struct _VERTEX_DATA *a2, struct _VERTEX_DATA *a3, unsigned int a4)
{
  struct _VERTEX_DATA *v5; // r10
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  struct _VERTEX_DATA *v10; // r9
  struct _VERTEX_DATA *v11; // r8
  unsigned int v12; // edx
  struct _VERTEX_DATA *v13; // rcx
  __int64 v14; // rax
  unsigned int *v15; // rcx
  unsigned int v16; // edx
  char v17; // r8
  unsigned int i; // edx
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // r8d
  char v22; // r9
  int v23; // edx
  unsigned int *v24; // rcx
  unsigned int v25; // r8d
  unsigned int *v26; // rcx
  __int64 v27; // rax
  int v28; // ecx
  int v29; // ecx
  int v30; // [rsp+0h] [rbp-50h]
  int v31; // [rsp+4h] [rbp-4Ch]
  int v32; // [rsp+8h] [rbp-48h]
  int v33; // [rsp+Ch] [rbp-44h]
  int v34; // [rsp+10h] [rbp-40h]
  int v35; // [rsp+14h] [rbp-3Ch]
  int v36; // [rsp+18h] [rbp-38h]
  int v37; // [rsp+1Ch] [rbp-34h]
  int v38; // [rsp+20h] [rbp-30h]
  int v39; // [rsp+24h] [rbp-2Ch]
  int v40; // [rsp+28h] [rbp-28h]
  int v41; // [rsp+2Ch] [rbp-24h]
  int v42; // [rsp+30h] [rbp-20h]
  int v43; // [rsp+34h] [rbp-1Ch]
  int v44; // [rsp+38h] [rbp-18h]
  int v45; // [rsp+3Ch] [rbp-14h]

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
    v13 = v5;
    if ( *(_DWORD *)v5 <= v12 )
      v13 = v11;
    v14 = *((unsigned int *)v13 + 1);
    *((_DWORD *)v13 + 1) = 255;
    v15 = (unsigned int *)&aulDither4bppOrder;
    v30 = ulNibbleTo4bppDword[v14];
    v31 = v30;
    v32 = v30;
    v33 = v30;
    v34 = v30;
    v35 = v30;
    v36 = v30;
    v37 = v30;
    v38 = v30;
    v39 = v30;
    v40 = v30;
    v41 = v30;
    v42 = v30;
    v43 = v30;
    v44 = v30;
    v45 = v30;
    while ( *((_DWORD *)v5 + 1) == 255 )
    {
      v15 += *(unsigned int *)v5;
LABEL_24:
      v5 = (struct _VERTEX_DATA *)((char *)v5 + 8);
      if ( v5 >= a3 )
        goto LABEL_39;
    }
    v16 = *(_DWORD *)v5;
    v17 = *((_BYTE *)v5 + 4);
    if ( (*(_DWORD *)v5 & 3) != 1 )
    {
      if ( (*(_DWORD *)v5 & 3) != 2 )
      {
        if ( (*(_DWORD *)v5 & 3) != 3 )
          goto LABEL_22;
        *((_BYTE *)&v30 + v15[2]) = v17;
      }
      *((_BYTE *)&v30 + v15[1]) = v17;
    }
    *((_BYTE *)&v30 + *v15) = v17;
    v15 += v16 & 3;
LABEL_22:
    for ( i = v16 >> 2; i; --i )
    {
      *((_BYTE *)&v30 + *v15) = v17;
      *((_BYTE *)&v30 + v15[1]) = v17;
      *((_BYTE *)&v30 + v15[2]) = v17;
      v19 = v15[3];
      v15 += 4;
      *((_BYTE *)&v30 + v19) = v17;
    }
    goto LABEL_24;
  }
  if ( a4 != 2 )
  {
    v28 = ulNibbleTo4bppDword[*((unsigned int *)a2 + 1)];
    v29 = (16 * v28) | v28;
    *a1 = v29;
    a1[1] = v29;
    a1[2] = v29;
    a1[3] = v29;
    a1[4] = v29;
    a1[5] = v29;
    a1[6] = v29;
    a1[7] = v29;
    return;
  }
  v20 = *(_DWORD *)a2;
  v21 = *((_DWORD *)a2 + 2);
  if ( *(_DWORD *)a2 < v21 )
  {
    v21 = *(_DWORD *)a2;
    v22 = *((_BYTE *)a2 + 4);
    v24 = (unsigned int *)&aulDither4bppOrder;
    v23 = ulNibbleTo4bppDword[*((unsigned int *)a2 + 3)];
  }
  else
  {
    v22 = *((_BYTE *)a2 + 12);
    v23 = ulNibbleTo4bppDword[*((unsigned int *)a2 + 1)];
    v24 = (unsigned int *)((char *)&aulDither4bppOrder + 4 * v20);
  }
  v30 = v23;
  v31 = v23;
  v32 = v23;
  v33 = v23;
  v34 = v23;
  v35 = v23;
  v36 = v23;
  v37 = v23;
  v38 = v23;
  v39 = v23;
  v40 = v23;
  v41 = v23;
  v42 = v23;
  v43 = v23;
  v44 = v23;
  v45 = v23;
  switch ( v21 & 3 )
  {
    case 1u:
      goto LABEL_35;
    case 2u:
LABEL_34:
      *((_BYTE *)&v30 + v24[1]) = v22;
LABEL_35:
      *((_BYTE *)&v30 + *v24) = v22;
      v24 += v21 & 3;
      break;
    case 3u:
      *((_BYTE *)&v30 + v24[2]) = v22;
      goto LABEL_34;
  }
  v25 = v21 >> 2;
  if ( v25 )
  {
    v26 = v24 + 2;
    do
    {
      *((_BYTE *)&v30 + *(v26 - 2)) = v22;
      *((_BYTE *)&v30 + *(v26 - 1)) = v22;
      v27 = *v26;
      v26 += 4;
      *((_BYTE *)&v30 + v27) = v22;
      *((_BYTE *)&v30 + *(v26 - 3)) = v22;
      --v25;
    }
    while ( v25 );
  }
LABEL_39:
  *a1 = v31 | (16 * v30);
  a1[1] = v33 | (16 * v32);
  a1[2] = v35 | (16 * v34);
  a1[3] = v37 | (16 * v36);
  a1[4] = v39 | (16 * v38);
  a1[5] = v41 | (16 * v40);
  a1[6] = v43 | (16 * v42);
  a1[7] = v45 | (16 * v44);
}
