/*
 * XREFs of AlphaBlendBGRF @ 0x1C024216C
 * Callers:
 *     ShrinkDIB_CY_SrkCX @ 0x1C0001010 (ShrinkDIB_CY_SrkCX.c)
 *     BltDIB_CY @ 0x1C00A2C50 (BltDIB_CY.c)
 *     RepDIB_CY @ 0x1C00A2F00 (RepDIB_CY.c)
 *     FastExpAA_CY @ 0x1C011DA50 (FastExpAA_CY.c)
 *     ExpandDIB_CY @ 0x1C02434D0 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1C0243E60 (ExpandDIB_CY_ExpCX.c)
 *     GrayExpandDIB_CY @ 0x1C0244A60 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1C0245210 (GrayExpandDIB_CY_ExpCX.c)
 *     GrayShrinkDIB_CY @ 0x1C0245EB0 (GrayShrinkDIB_CY.c)
 *     ShrinkDIB_CY @ 0x1C0246940 (ShrinkDIB_CY.c)
 *     SkipDIB_CY @ 0x1C0247140 (SkipDIB_CY.c)
 *     TileDIB_CY @ 0x1C02473B0 (TileDIB_CY.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall AlphaBlendBGRF(int *a1)
{
  unsigned __int8 *v1; // rsi
  int v3; // r15d
  int v4; // r12d
  unsigned __int16 *v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int8 *v9; // rsi
  unsigned __int8 *v10; // rbx
  __int64 v11; // rdx
  _BYTE *v12; // rbx
  unsigned __int8 *v13; // rsi
  __int64 v14; // rax
  __int16 v15; // dx
  unsigned __int8 *v16; // r9
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // cx
  _BYTE *v19; // r14
  unsigned __int8 *v20; // rbx
  _BYTE *v21; // rsi
  unsigned __int8 v22; // dl
  int v23; // r8d
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int8 v28; // cl
  __int64 v29; // rax
  _BYTE *v30; // rbx
  _BYTE *v31; // rsi
  int v32; // edx
  int v33; // r8d
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // rax
  char v38; // cl
  __int64 v39; // rax
  unsigned __int8 *v40; // rbx
  _BYTE *v41; // rsi
  int v42; // r8d
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rax
  unsigned __int8 v46; // cl
  __int64 v47; // rax
  unsigned __int8 v48; // cl
  __int64 v49; // rax
  _BYTE *v50; // rbx
  _BYTE *v51; // rsi
  int v52; // r8d
  __int64 v53; // rax
  int v54; // ecx
  __int64 v55; // rax
  char v56; // cl
  __int64 v57; // rax
  char v58; // cl
  __int64 v59; // rax

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
          LOWORD(v8) = *(_WORD *)(v7 + 2LL * *((unsigned __int8 *)v5 + 1)) + *(_WORD *)(v7 + 2 * v11 + 1536);
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
                                        + *(_WORD *)(v7 + 2LL * *(v13 - 2) + 1536)) >> 8;
          v14 = (unsigned __int8)*v12;
          *(v12 - 1) = (unsigned __int16)(*(_WORD *)(v7 + 2LL * (unsigned __int8)*(v12 - 1) + 512)
                                        + *(_WORD *)(v7 + 2LL * *(v13 - 1) + 1536)) >> 8;
          v15 = *(_WORD *)(v7 + 2 * v14 + 1024);
          v8 = *v13;
          v13 += 3;
          *v12 = (unsigned __int16)(*(_WORD *)(v7 + 2 * v8 + 1536) + v15) >> 8;
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
          LOWORD(v8) = *(_WORD *)(v7 + 2LL * *((unsigned __int8 *)v5 + 1)) + *(_WORD *)(v7 + 2LL * *v1 + 1536);
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
          *(v10 - 1) = (unsigned __int16)(*(_WORD *)(v7 + 2LL * *(v10 - 1)) + *(_WORD *)(v7 + 2LL * *(v9 - 2) + 1536)) >> 8;
          *v10 = (unsigned __int16)(*(_WORD *)(v7 + 2LL * *v10 + 512) + *(_WORD *)(v7 + 2LL * *(v9 - 1) + 1536)) >> 8;
          v10[1] = (unsigned __int16)(*(_WORD *)(v7 + 2LL * v10[1] + 1024) + *(_WORD *)(v7 + 2LL * *v9 + 1536)) >> 8;
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
  v16 = (unsigned __int8 *)*((_QWORD *)a1 + 43);
  if ( v4 )
  {
    if ( (v3 & 0x80u) != 0 )
    {
      while ( 1 )
      {
        if ( *((_BYTE *)v5 + 3) )
        {
          v17 = GrayIdxWORD[*v1];
          LOBYTE(v8) = *v16;
          if ( !*v16 )
            goto LABEL_25;
          if ( (_BYTE)v8 != 0xFF )
            break;
        }
LABEL_26:
        ++v16;
        ++v1;
        v5 += 2;
        if ( (unsigned __int64)v5 >= v6 )
          return v8;
      }
      LODWORD(v8) = *v5 - v17;
      v17 += (int)(v8 * (GrayIdxWORD[*v16] >> 4) + 2048) >> 12;
LABEL_25:
      *v5 = v17;
      goto LABEL_26;
    }
    while ( 1 )
    {
      v8 = *v1++;
      v18 = GrayIdxWORD[v8];
      LOBYTE(v8) = *v16;
      if ( !*v16 )
        goto LABEL_31;
      if ( (_BYTE)v8 != 0xFF )
        break;
LABEL_32:
      ++v16;
      v5 += 2;
      if ( (unsigned __int64)v5 >= v6 )
        return v8;
    }
    LODWORD(v8) = *v5 - v18;
    v18 += (int)(v8 * (GrayIdxWORD[*v16] >> 4) + 2048) >> 12;
LABEL_31:
    *v5 = v18;
    goto LABEL_32;
  }
  if ( (v3 & 0x100000) != 0 )
  {
    v19 = (_BYTE *)(*((_QWORD *)a1 + 17) + 3LL);
    if ( (v3 & 0x80u) == 0 )
    {
      v30 = v5 + 1;
      v31 = v1 + 2;
      do
      {
        v32 = *v16++;
        if ( (_BYTE)v32 )
        {
          if ( v32 == 255 )
          {
            v37 = (unsigned __int8)*(v30 - 1);
            *(v30 - 2) = *(_BYTE *)((unsigned __int8)*(v30 - 2) + v7);
            v38 = *(_BYTE *)(v37 + v7);
            v39 = (unsigned __int8)*v30;
            *(v30 - 1) = v38;
            *v30 = *(_BYTE *)(v39 + v7);
            *v19 = -1;
          }
          else
          {
            v33 = GrayIdxWORD[(unsigned __int8)v32];
            *v19 = v32 + *v19 - ((v33 * (unsigned int)(unsigned __int8)*v19 + 0x8000) >> 16);
            v34 = (unsigned __int8)*(v30 - 1);
            *(v30 - 2) = *(v31 - 2)
                       + ((v33
                         * (*(unsigned __int8 *)((unsigned __int8)*(v30 - 2) + v7)
                          - (unsigned int)(unsigned __int8)*(v31 - 2))
                         + 0x8000) >> 16);
            v35 = *(unsigned __int8 *)(v34 + v7 + 256);
            v36 = (unsigned __int8)*v30;
            *(v30 - 1) = *(v31 - 1) + ((v33 * (v35 - (unsigned int)(unsigned __int8)*(v31 - 1)) + 0x8000) >> 16);
            *v30 = *v31
                 + ((v33 * (*(unsigned __int8 *)(v36 + v7 + 512) - (unsigned int)(unsigned __int8)*v31) + 0x8000) >> 16);
          }
        }
        else
        {
          *((_WORD *)v30 - 1) = *((_WORD *)v31 - 1);
          *v30 = *v31;
        }
        v30 += 4;
        v19 += 4;
        v31 += 3;
        LOBYTE(v8) = (_BYTE)v30 - 2;
      }
      while ( (unsigned __int64)(v30 - 2) < v6 );
    }
    else
    {
      v20 = (unsigned __int8 *)v5 + 1;
      v21 = v1 + 2;
      do
      {
        if ( v20[2] )
        {
          v22 = *v16;
          if ( *v16 )
          {
            if ( v22 == 0xFF )
            {
              v27 = *v20;
              *(v20 - 1) = *(_BYTE *)(*(v20 - 1) + v7);
              v28 = *(_BYTE *)(v27 + v7);
              v29 = v20[1];
              *v20 = v28;
              v20[1] = *(_BYTE *)(v29 + v7);
              *v19 = -1;
            }
            else
            {
              v23 = GrayIdxWORD[v22];
              *v19 = v22 + *v19 - ((v23 * (unsigned int)(unsigned __int8)*v19 + 0x8000) >> 16);
              v24 = *v20;
              *(v20 - 1) = *(v21 - 2)
                         + ((v23 * (*(unsigned __int8 *)(*(v20 - 1) + v7) - (unsigned int)(unsigned __int8)*(v21 - 2))
                           + 0x8000) >> 16);
              v25 = *(unsigned __int8 *)(v24 + v7 + 256);
              v26 = v20[1];
              *v20 = *(v21 - 1) + ((v23 * (v25 - (unsigned int)(unsigned __int8)*(v21 - 1)) + 0x8000) >> 16);
              v20[1] = *v21
                     + ((v23 * (*(unsigned __int8 *)(v26 + v7 + 512) - (unsigned int)(unsigned __int8)*v21) + 0x8000) >> 16);
            }
          }
          else
          {
            *(_WORD *)(v20 - 1) = *((_WORD *)v21 - 1);
            v20[1] = *v21;
          }
        }
        v20 += 4;
        ++v16;
        v19 += 4;
        v21 += 3;
        LOBYTE(v8) = (_BYTE)v20 - 1;
      }
      while ( (unsigned __int64)(v20 - 1) < v6 );
    }
  }
  else if ( (v3 & 0x80u) == 0 )
  {
    v50 = v5 + 1;
    v51 = v1 + 2;
    do
    {
      if ( *v16 )
      {
        if ( *v16 == 0xFF )
        {
          v57 = (unsigned __int8)*(v50 - 1);
          *(v50 - 2) = *(_BYTE *)((unsigned __int8)*(v50 - 2) + v7);
          v58 = *(_BYTE *)(v57 + v7);
          v59 = (unsigned __int8)*v50;
          *(v50 - 1) = v58;
          v56 = *(_BYTE *)(v59 + v7);
        }
        else
        {
          v52 = GrayIdxWORD[*v16];
          v53 = (unsigned __int8)*(v50 - 1);
          *(v50 - 2) = *(v51 - 2)
                     + ((v52
                       * (*(unsigned __int8 *)((unsigned __int8)*(v50 - 2) + v7)
                        - (unsigned int)(unsigned __int8)*(v51 - 2))
                       + 0x8000) >> 16);
          v54 = *(unsigned __int8 *)(v53 + v7 + 256);
          v55 = (unsigned __int8)*v50;
          *(v50 - 1) = *(v51 - 1) + ((v52 * (v54 - (unsigned int)(unsigned __int8)*(v51 - 1)) + 0x8000) >> 16);
          v56 = *v51
              + ((v52 * (*(unsigned __int8 *)(v55 + v7 + 512) - (unsigned int)(unsigned __int8)*v51) + 0x8000) >> 16);
        }
        *v50 = v56;
      }
      else
      {
        *((_WORD *)v50 - 1) = *((_WORD *)v51 - 1);
        *v50 = *v51;
      }
      v50 += 4;
      ++v16;
      v51 += 3;
      LOBYTE(v8) = (_BYTE)v50 - 2;
    }
    while ( (unsigned __int64)(v50 - 2) < v6 );
  }
  else
  {
    v40 = (unsigned __int8 *)v5 + 1;
    v41 = v1 + 2;
    do
    {
      if ( v40[2] )
      {
        if ( *v16 )
        {
          if ( *v16 == 0xFF )
          {
            v47 = *v40;
            *(v40 - 1) = *(_BYTE *)(*(v40 - 1) + v7);
            v48 = *(_BYTE *)(v47 + v7);
            v49 = v40[1];
            *v40 = v48;
            v46 = *(_BYTE *)(v49 + v7);
          }
          else
          {
            v42 = GrayIdxWORD[*v16];
            v43 = *v40;
            *(v40 - 1) = *(v41 - 2)
                       + ((v42 * (*(unsigned __int8 *)(*(v40 - 1) + v7) - (unsigned int)(unsigned __int8)*(v41 - 2))
                         + 0x8000) >> 16);
            v44 = *(unsigned __int8 *)(v43 + v7 + 256);
            v45 = v40[1];
            *v40 = *(v41 - 1) + ((v42 * (v44 - (unsigned int)(unsigned __int8)*(v41 - 1)) + 0x8000) >> 16);
            v46 = *v41
                + ((v42 * (*(unsigned __int8 *)(v45 + v7 + 512) - (unsigned int)(unsigned __int8)*v41) + 0x8000) >> 16);
          }
          v40[1] = v46;
        }
        else
        {
          *(_WORD *)(v40 - 1) = *((_WORD *)v41 - 1);
          v40[1] = *v41;
        }
      }
      v40 += 4;
      ++v16;
      v41 += 3;
      LOBYTE(v8) = (_BYTE)v40 - 1;
    }
    while ( (unsigned __int64)(v40 - 1) < v6 );
  }
  return v8;
}
