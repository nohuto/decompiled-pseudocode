/*
 * XREFs of ?vDitherColor4bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z @ 0x1C0268BFC
 * Callers:
 *     EngDitherColor @ 0x1C02691A0 (EngDitherColor.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall vDitherColor4bpp(unsigned int *a1, struct _VERTEX_DATA *a2, struct _VERTEX_DATA *a3, unsigned int a4)
{
  struct _VERTEX_DATA *v5; // r10
  unsigned int v7; // r8d
  struct _VERTEX_DATA *v8; // rdx
  unsigned int v9; // eax
  struct _VERTEX_DATA *v10; // rcx
  __int64 v11; // rax
  unsigned int *v12; // rcx
  unsigned int v13; // edx
  char v14; // r8
  unsigned int i; // edx
  __int64 v16; // rax
  unsigned int v17; // ecx
  struct _VERTEX_DATA *v18; // r9
  char v19; // r8
  int v20; // edx
  unsigned int *v21; // rcx
  unsigned int v22; // r9d
  unsigned int v23; // r9d
  unsigned int *v24; // rcx
  __int64 v25; // rax
  int v26; // ecx
  int v27; // ecx
  int v28; // [rsp+0h] [rbp-60h]
  int v29; // [rsp+4h] [rbp-5Ch]
  int v30; // [rsp+8h] [rbp-58h]
  int v31; // [rsp+Ch] [rbp-54h]
  int v32; // [rsp+10h] [rbp-50h]
  int v33; // [rsp+14h] [rbp-4Ch]
  int v34; // [rsp+18h] [rbp-48h]
  int v35; // [rsp+1Ch] [rbp-44h]
  int v36; // [rsp+20h] [rbp-40h]
  int v37; // [rsp+24h] [rbp-3Ch]
  int v38; // [rsp+28h] [rbp-38h]
  int v39; // [rsp+2Ch] [rbp-34h]
  int v40; // [rsp+30h] [rbp-30h]
  int v41; // [rsp+34h] [rbp-2Ch]
  int v42; // [rsp+38h] [rbp-28h]
  int v43; // [rsp+3Ch] [rbp-24h]

  v5 = a2;
  if ( a4 > 2 )
  {
    if ( a4 == 3 )
    {
      v7 = *((_DWORD *)a2 + 4);
      v8 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      v9 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 < v7 )
      {
        v8 = (struct _VERTEX_DATA *)((char *)v5 + 16);
LABEL_7:
        v9 = v7;
      }
    }
    else
    {
      v7 = *((_DWORD *)a2 + 6);
      v8 = (struct _VERTEX_DATA *)((char *)a2 + 16);
      v9 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 < v7 )
      {
        v8 = (struct _VERTEX_DATA *)((char *)v5 + 24);
        goto LABEL_7;
      }
    }
    if ( *((_DWORD *)v5 + 2) > v9 )
    {
      v8 = (struct _VERTEX_DATA *)((char *)v5 + 8);
      v9 = *((_DWORD *)v5 + 2);
    }
    v10 = v5;
    if ( *(_DWORD *)v5 <= v9 )
      v10 = v8;
    v11 = *((unsigned int *)v10 + 1);
    *((_DWORD *)v10 + 1) = 255;
    v12 = (unsigned int *)&aulDither4bppOrder;
    v28 = ulNibbleTo4bppDword[v11];
    v29 = v28;
    v30 = v28;
    v31 = v28;
    v32 = v28;
    v33 = v28;
    v34 = v28;
    v35 = v28;
    v36 = v28;
    v37 = v28;
    v38 = v28;
    v39 = v28;
    v40 = v28;
    v41 = v28;
    v42 = v28;
    v43 = v28;
    while ( *((_DWORD *)v5 + 1) == 255 )
    {
      v12 += *(unsigned int *)v5;
LABEL_23:
      v5 = (struct _VERTEX_DATA *)((char *)v5 + 8);
      if ( v5 >= a3 )
        goto LABEL_38;
    }
    v13 = *(_DWORD *)v5;
    v14 = *((_BYTE *)v5 + 4);
    if ( (*(_DWORD *)v5 & 3) != 1 )
    {
      if ( (*(_DWORD *)v5 & 3) != 2 )
      {
        if ( (*(_DWORD *)v5 & 3) != 3 )
          goto LABEL_21;
        *((_BYTE *)&v28 + v12[2]) = v14;
      }
      *((_BYTE *)&v28 + v12[1]) = v14;
    }
    *((_BYTE *)&v28 + *v12) = v14;
    v12 += v13 & 3;
LABEL_21:
    for ( i = v13 >> 2; i; --i )
    {
      *((_BYTE *)&v28 + *v12) = v14;
      *((_BYTE *)&v28 + v12[1]) = v14;
      *((_BYTE *)&v28 + v12[2]) = v14;
      v16 = v12[3];
      v12 += 4;
      *((_BYTE *)&v28 + v16) = v14;
    }
    goto LABEL_23;
  }
  if ( a4 != 2 )
  {
    v26 = ulNibbleTo4bppDword[*((unsigned int *)a2 + 1)];
    v27 = (16 * v26) | v26;
    *a1 = v27;
    a1[1] = v27;
    a1[2] = v27;
    a1[3] = v27;
    a1[4] = v27;
    a1[5] = v27;
    a1[6] = v27;
    a1[7] = v27;
    return;
  }
  v17 = *(_DWORD *)a2;
  v18 = (struct _VERTEX_DATA *)((char *)a2 + 8);
  if ( *(_DWORD *)a2 < *((_DWORD *)a2 + 2) )
  {
    v21 = (unsigned int *)&aulDither4bppOrder;
    v19 = *((_BYTE *)a2 + 4);
    v18 = a2;
    v20 = ulNibbleTo4bppDword[*((unsigned int *)a2 + 3)];
  }
  else
  {
    v19 = *((_BYTE *)a2 + 12);
    v20 = ulNibbleTo4bppDword[*((unsigned int *)a2 + 1)];
    v21 = (unsigned int *)((char *)&aulDither4bppOrder + 4 * v17);
  }
  v22 = *(_DWORD *)v18;
  v28 = v20;
  v29 = v20;
  v30 = v20;
  v31 = v20;
  v32 = v20;
  v33 = v20;
  v34 = v20;
  v35 = v20;
  v36 = v20;
  v37 = v20;
  v38 = v20;
  v39 = v20;
  v40 = v20;
  v41 = v20;
  v42 = v20;
  v43 = v20;
  switch ( v22 & 3 )
  {
    case 1u:
      goto LABEL_34;
    case 2u:
LABEL_33:
      *((_BYTE *)&v28 + v21[1]) = v19;
LABEL_34:
      *((_BYTE *)&v28 + *v21) = v19;
      v21 += v22 & 3;
      break;
    case 3u:
      *((_BYTE *)&v28 + v21[2]) = v19;
      goto LABEL_33;
  }
  v23 = v22 >> 2;
  if ( v23 )
  {
    v24 = v21 + 2;
    do
    {
      *((_BYTE *)&v28 + *(v24 - 2)) = v19;
      *((_BYTE *)&v28 + *(v24 - 1)) = v19;
      v25 = *v24;
      v24 += 4;
      *((_BYTE *)&v28 + v25) = v19;
      *((_BYTE *)&v28 + *(v24 - 3)) = v19;
      --v23;
    }
    while ( v23 );
  }
LABEL_38:
  *a1 = v29 | (16 * v28);
  a1[1] = v31 | (16 * v30);
  a1[2] = v33 | (16 * v32);
  a1[3] = v35 | (16 * v34);
  a1[4] = v37 | (16 * v36);
  a1[5] = v39 | (16 * v38);
  a1[6] = v41 | (16 * v40);
  a1[7] = v43 | (16 * v42);
}
