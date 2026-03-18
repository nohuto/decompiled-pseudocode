/*
 * XREFs of AlphaBlendBGRF @ 0x1C0243B3C
 * Callers:
 *     ShrinkDIB_CY_SrkCX @ 0x1C0001010 (ShrinkDIB_CY_SrkCX.c)
 *     BltDIB_CY @ 0x1C007A370 (BltDIB_CY.c)
 *     RepDIB_CY @ 0x1C007A620 (RepDIB_CY.c)
 *     FastExpAA_CY @ 0x1C01272F0 (FastExpAA_CY.c)
 *     ExpandDIB_CY @ 0x1C0244EA0 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1C0245860 (ExpandDIB_CY_ExpCX.c)
 *     GrayExpandDIB_CY @ 0x1C0246470 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1C0246C30 (GrayExpandDIB_CY_ExpCX.c)
 *     GrayShrinkDIB_CY @ 0x1C02478E0 (GrayShrinkDIB_CY.c)
 *     ShrinkDIB_CY @ 0x1C0248370 (ShrinkDIB_CY.c)
 *     SkipDIB_CY @ 0x1C0248B70 (SkipDIB_CY.c)
 *     TileDIB_CY @ 0x1C0248DE0 (TileDIB_CY.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

char __fastcall AlphaBlendBGRF(int *a1)
{
  unsigned __int8 *v1; // rbx
  int v3; // r15d
  int v4; // r12d
  unsigned __int16 *v5; // rdi
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int8 *v9; // rbx
  unsigned __int8 *v10; // rdi
  int v11; // edx
  _BYTE *v12; // rdi
  unsigned __int8 *v13; // rbx
  unsigned __int8 *v14; // r9
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // cx
  _BYTE *v17; // r14
  unsigned __int8 *v18; // rdi
  unsigned __int8 v19; // dl
  int v20; // r8d
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int8 v25; // cl
  __int64 v26; // rax
  _BYTE *v27; // rdi
  int v28; // edx
  int v29; // r8d
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rax
  char v34; // cl
  __int64 v35; // rax
  unsigned __int8 *v36; // rdi
  int v37; // r8d
  __int64 v38; // rax
  int v39; // ecx
  __int64 v40; // rax
  unsigned __int8 v41; // cl
  __int64 v42; // rax
  unsigned __int8 v43; // cl
  __int64 v44; // rax
  _BYTE *v45; // rdi
  int v46; // r8d
  __int64 v47; // rax
  int v48; // ecx
  __int64 v49; // rax
  char v50; // cl
  __int64 v51; // rax
  char v52; // cl
  __int64 v53; // rax

  v1 = (unsigned __int8 *)*((_QWORD *)a1 + 67);
  v3 = *a1;
  v4 = a1[2] & 4;
  v5 = (unsigned __int16 *)*((_QWORD *)a1 + 68);
  v6 = *((_QWORD *)a1 + 69);
  v7 = *((_QWORD *)a1 + 42);
  LOBYTE(v8) = (*((__int64 (__fastcall **)(int *, unsigned __int8 *))a1 + 14))(a1 + 24, v1);
  if ( (v3 & 0x1000) != 0 )
  {
    if ( (v3 & 0x80u) == 0 )
    {
      if ( v4 )
      {
        do
        {
          v11 = *v1++;
          LOWORD(v8) = *(_WORD *)(v7 + 2LL * *((unsigned __int8 *)v5 + 1))
                     + *(_WORD *)(v7 + 2LL * (unsigned int)(v11 + 768));
          *v5 = v8;
          v5 += 2;
        }
        while ( (unsigned __int64)v5 < v6 );
      }
      else
      {
        v12 = v5 + 1;
        v13 = v1 + 2;
        do
        {
          *(v12 - 2) = (unsigned __int16)(*(_WORD *)(v7 + 2LL * (unsigned __int8)*(v12 - 2))
                                        + *(_WORD *)(v7 + 2LL * ((unsigned int)*(v13 - 2) + 768))) >> 8;
          *(v12 - 1) = (unsigned __int16)(*(_WORD *)(v7 + 2LL * ((unsigned int)(unsigned __int8)*(v12 - 1) + 256))
                                        + *(_WORD *)(v7 + 2LL * ((unsigned int)*(v13 - 1) + 768))) >> 8;
          LODWORD(v8) = *v13;
          v13 += 3;
          *v12 = (unsigned __int16)(*(_WORD *)(v7 + 2LL * ((unsigned int)(unsigned __int8)*v12 + 512))
                                  + *(_WORD *)(v7 + 2LL * (unsigned int)(v8 + 768))) >> 8;
          v12 += 4;
          LOBYTE(v8) = (_BYTE)v12 - 2;
        }
        while ( (unsigned __int64)(v12 - 2) < v6 );
      }
    }
    else if ( v4 )
    {
      do
      {
        if ( *((_BYTE *)v5 + 3) )
        {
          LOWORD(v8) = *(_WORD *)(v7 + 2LL * *((unsigned __int8 *)v5 + 1))
                     + *(_WORD *)(v7 + 2LL * ((unsigned int)*v1 + 768));
          *v5 = v8;
        }
        ++v1;
        v5 += 2;
      }
      while ( (unsigned __int64)v5 < v6 );
    }
    else
    {
      v9 = v1 + 2;
      v10 = (unsigned __int8 *)v5 + 1;
      do
      {
        if ( v10[2] )
        {
          *(v10 - 1) = (unsigned __int16)(*(_WORD *)(v7 + 2LL * *(v10 - 1))
                                        + *(_WORD *)(v7 + 2LL * ((unsigned int)*(v9 - 2) + 768))) >> 8;
          *v10 = (unsigned __int16)(*(_WORD *)(v7 + 2LL * ((unsigned int)*v10 + 256))
                                  + *(_WORD *)(v7 + 2LL * ((unsigned int)*(v9 - 1) + 768))) >> 8;
          v10[1] = (unsigned __int16)(*(_WORD *)(v7 + 2LL * ((unsigned int)v10[1] + 512))
                                    + *(_WORD *)(v7 + 2LL * ((unsigned int)*v9 + 768))) >> 8;
        }
        v10 += 4;
        v9 += 3;
        LOBYTE(v8) = (_BYTE)v10 - 1;
      }
      while ( (unsigned __int64)(v10 - 1) < v6 );
    }
    return v8;
  }
  LOBYTE(v8) = (*((__int64 (__fastcall **)(int *))a1 + 30))(a1);
  v14 = (unsigned __int8 *)*((_QWORD *)a1 + 43);
  if ( v4 )
  {
    if ( (v3 & 0x80u) != 0 )
    {
      while ( 1 )
      {
        if ( *((_BYTE *)v5 + 3) )
        {
          v15 = GrayIdxWORD[*v1];
          LOBYTE(v8) = *v14;
          if ( !*v14 )
            goto LABEL_25;
          if ( (_BYTE)v8 != 0xFF )
            break;
        }
LABEL_26:
        ++v14;
        ++v1;
        v5 += 2;
        if ( (unsigned __int64)v5 >= v6 )
          return v8;
      }
      LODWORD(v8) = *v5 - v15;
      v15 += (int)(v8 * (GrayIdxWORD[*v14] >> 4) + 2048) >> 12;
LABEL_25:
      *v5 = v15;
      goto LABEL_26;
    }
    while ( 1 )
    {
      v8 = *v1++;
      v16 = GrayIdxWORD[v8];
      LOBYTE(v8) = *v14;
      if ( !*v14 )
        goto LABEL_31;
      if ( (_BYTE)v8 != 0xFF )
        break;
LABEL_32:
      ++v14;
      v5 += 2;
      if ( (unsigned __int64)v5 >= v6 )
        return v8;
    }
    LODWORD(v8) = *v5 - v16;
    v16 += (int)(v8 * (GrayIdxWORD[*v14] >> 4) + 2048) >> 12;
LABEL_31:
    *v5 = v16;
    goto LABEL_32;
  }
  if ( (v3 & 0x100000) != 0 )
  {
    v17 = (_BYTE *)(*((_QWORD *)a1 + 17) + 3LL);
    if ( (v3 & 0x80u) == 0 )
    {
      v27 = v5 + 1;
      do
      {
        v28 = *v14++;
        if ( (_BYTE)v28 )
        {
          if ( v28 == 255 )
          {
            v33 = (unsigned __int8)*(v27 - 1);
            *(v27 - 2) = *(_BYTE *)((unsigned __int8)*(v27 - 2) + v7);
            v34 = *(_BYTE *)(v33 + v7);
            v35 = (unsigned __int8)*v27;
            *(v27 - 1) = v34;
            *v27 = *(_BYTE *)(v35 + v7);
            *v17 = -1;
          }
          else
          {
            v29 = GrayIdxWORD[(unsigned __int8)v28];
            *v17 = v28 + *v17 - ((v29 * (unsigned int)(unsigned __int8)*v17 + 0x8000) >> 16);
            v30 = (unsigned int)(unsigned __int8)*(v27 - 1) + 256;
            *(v27 - 2) = *v1
                       + ((v29 * (*(unsigned __int8 *)((unsigned __int8)*(v27 - 2) + v7) - (unsigned int)*v1) + 0x8000) >> 16);
            v31 = *(unsigned __int8 *)(v30 + v7);
            v32 = (unsigned int)(unsigned __int8)*v27 + 512;
            *(v27 - 1) = v1[1] + ((v29 * (v31 - (unsigned int)v1[1]) + 0x8000) >> 16);
            *v27 = v1[2] + ((v29 * (*(unsigned __int8 *)(v32 + v7) - (unsigned int)v1[2]) + 0x8000) >> 16);
          }
        }
        else
        {
          *((_WORD *)v27 - 1) = *(_WORD *)v1;
          *v27 = v1[2];
        }
        v27 += 4;
        v17 += 4;
        v1 += 3;
        LOBYTE(v8) = (_BYTE)v27 - 2;
      }
      while ( (unsigned __int64)(v27 - 2) < v6 );
    }
    else
    {
      v18 = (unsigned __int8 *)v5 + 1;
      do
      {
        if ( v18[2] )
        {
          v19 = *v14;
          if ( *v14 )
          {
            if ( v19 == 0xFF )
            {
              v24 = *v18;
              *(v18 - 1) = *(_BYTE *)(*(v18 - 1) + v7);
              v25 = *(_BYTE *)(v24 + v7);
              v26 = v18[1];
              *v18 = v25;
              v18[1] = *(_BYTE *)(v26 + v7);
              *v17 = -1;
            }
            else
            {
              v20 = GrayIdxWORD[v19];
              *v17 = v19 + *v17 - ((v20 * (unsigned int)(unsigned __int8)*v17 + 0x8000) >> 16);
              v21 = (unsigned int)*v18 + 256;
              *(v18 - 1) = *v1 + ((v20 * (*(unsigned __int8 *)(*(v18 - 1) + v7) - (unsigned int)*v1) + 0x8000) >> 16);
              v22 = *(unsigned __int8 *)(v21 + v7);
              v23 = (unsigned int)v18[1] + 512;
              *v18 = v1[1] + ((v20 * (v22 - (unsigned int)v1[1]) + 0x8000) >> 16);
              v18[1] = v1[2] + ((v20 * (*(unsigned __int8 *)(v23 + v7) - (unsigned int)v1[2]) + 0x8000) >> 16);
            }
          }
          else
          {
            *(_WORD *)(v18 - 1) = *(_WORD *)v1;
            v18[1] = v1[2];
          }
        }
        v18 += 4;
        ++v14;
        v17 += 4;
        v1 += 3;
        LOBYTE(v8) = (_BYTE)v18 - 1;
      }
      while ( (unsigned __int64)(v18 - 1) < v6 );
    }
  }
  else if ( (v3 & 0x80u) == 0 )
  {
    v45 = v5 + 1;
    do
    {
      if ( *v14 )
      {
        if ( *v14 == 0xFF )
        {
          v51 = (unsigned __int8)*(v45 - 1);
          *(v45 - 2) = *(_BYTE *)((unsigned __int8)*(v45 - 2) + v7);
          v52 = *(_BYTE *)(v51 + v7);
          v53 = (unsigned __int8)*v45;
          *(v45 - 1) = v52;
          v50 = *(_BYTE *)(v53 + v7);
        }
        else
        {
          v46 = GrayIdxWORD[*v14];
          v47 = (unsigned int)(unsigned __int8)*(v45 - 1) + 256;
          *(v45 - 2) = *v1
                     + ((v46 * (*(unsigned __int8 *)((unsigned __int8)*(v45 - 2) + v7) - (unsigned int)*v1) + 0x8000) >> 16);
          v48 = *(unsigned __int8 *)(v47 + v7);
          v49 = (unsigned int)(unsigned __int8)*v45 + 512;
          *(v45 - 1) = v1[1] + ((v46 * (v48 - (unsigned int)v1[1]) + 0x8000) >> 16);
          v50 = v1[2] + ((v46 * (*(unsigned __int8 *)(v49 + v7) - (unsigned int)v1[2]) + 0x8000) >> 16);
        }
        *v45 = v50;
      }
      else
      {
        *((_WORD *)v45 - 1) = *(_WORD *)v1;
        *v45 = v1[2];
      }
      v45 += 4;
      ++v14;
      v1 += 3;
      LOBYTE(v8) = (_BYTE)v45 - 2;
    }
    while ( (unsigned __int64)(v45 - 2) < v6 );
  }
  else
  {
    v36 = (unsigned __int8 *)v5 + 1;
    do
    {
      if ( v36[2] )
      {
        if ( *v14 )
        {
          if ( *v14 == 0xFF )
          {
            v42 = *v36;
            *(v36 - 1) = *(_BYTE *)(*(v36 - 1) + v7);
            v43 = *(_BYTE *)(v42 + v7);
            v44 = v36[1];
            *v36 = v43;
            v41 = *(_BYTE *)(v44 + v7);
          }
          else
          {
            v37 = GrayIdxWORD[*v14];
            v38 = (unsigned int)*v36 + 256;
            *(v36 - 1) = *v1 + ((v37 * (*(unsigned __int8 *)(*(v36 - 1) + v7) - (unsigned int)*v1) + 0x8000) >> 16);
            v39 = *(unsigned __int8 *)(v38 + v7);
            v40 = (unsigned int)v36[1] + 512;
            *v36 = v1[1] + ((v37 * (v39 - (unsigned int)v1[1]) + 0x8000) >> 16);
            v41 = v1[2] + ((v37 * (*(unsigned __int8 *)(v40 + v7) - (unsigned int)v1[2]) + 0x8000) >> 16);
          }
          v36[1] = v41;
        }
        else
        {
          *(_WORD *)(v36 - 1) = *(_WORD *)v1;
          v36[1] = v1[2];
        }
      }
      v36 += 4;
      ++v14;
      v1 += 3;
      LOBYTE(v8) = (_BYTE)v36 - 1;
    }
    while ( (unsigned __int64)(v36 - 1) < v6 );
  }
  return v8;
}
