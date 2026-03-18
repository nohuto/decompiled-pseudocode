/*
 * XREFs of ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C0039E90
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0021740 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0021908 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?bIs16@EFLOAT@@QEAAHXZ @ 0x1C0021928 (-bIs16@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C00777EC (bFToL.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00EFDEC (-vMakeIso@DC@@QEAAXXZ.c)
 */

void __fastcall DC::vUpdateWtoDXform(DC *this)
{
  char *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  EFLOAT *v11; // r12
  EFLOAT *v12; // r14
  EFLOAT *v13; // r13
  __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // r15
  __int64 v17; // rcx
  int v18; // eax
  float v19; // xmm0_4
  __int64 v20; // rax
  __int64 v21; // rcx
  float v22; // xmm0_4
  __int64 v23; // rcx
  float v24; // xmm0_4
  __int64 v25; // rax
  float v26; // xmm0_4
  __int64 v27; // rcx
  float v28; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  __int64 v31; // rcx
  __int64 v32; // r8
  float *v33; // rcx
  int v34; // r8d
  int v35; // edx
  float v36; // xmm1_4
  __int64 v37; // rcx
  float v38; // xmm1_4
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // xmm0_4
  __int64 v42; // rax
  int v43; // xmm1_4
  __int64 v44; // rcx
  __int64 v45; // r8
  float v46; // xmm3_4
  float v47; // xmm4_4
  __int64 v48; // rcx
  float v49; // xmm5_4
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // [rsp+60h] [rbp+30h]

  v2 = (char *)this + 336;
  v3 = *((_QWORD *)this + 10);
  v4 = *(_DWORD *)(v3 + 352);
  if ( (v4 & 0xE000) != 0 )
  {
    if ( (v4 & 0x4000) != 0 )
    {
      if ( *(_DWORD *)(v3 + 308) == 7 )
        DC::vMakeIso(this);
      v33 = (float *)*((_QWORD *)this + 10);
      v34 = *((_DWORD *)v33 + 82);
      v35 = *((_DWORD *)v33 + 86);
      if ( v34 == v35 && *((_DWORD *)v33 + 83) == *((_DWORD *)v33 + 87) )
      {
        v41 = ef16;
        *((_DWORD *)v33 + 73) = ef16;
        v42 = *((_QWORD *)this + 10);
        *((_DWORD *)this + 111) = v41;
        v43 = ef16;
        *(_DWORD *)(v42 + 296) = ef16;
        *((_DWORD *)this + 112) = v43;
        *((_DWORD *)v2 + 8) = 11;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x1000u;
      }
      else
      {
        v36 = (float)(16 * v35) / (float)v34;
        v33[73] = v36;
        v37 = *((_QWORD *)this + 10);
        *((float *)this + 111) = v36;
        v38 = (float)(16 * *(_DWORD *)(v37 + 348)) / (float)*(int *)(v37 + 332);
        *(float *)(v37 + 296) = v38;
        *((float *)this + 112) = v38;
        *((_DWORD *)v2 + 8) = 9;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFE7FF;
      }
      v39 = *((_QWORD *)this + 10);
      if ( *((float *)this + 111) < 0.0 )
        *(_DWORD *)(v39 + 352) |= 0x100u;
      else
        *(_DWORD *)(v39 + 352) &= ~0x100u;
      v40 = *((_QWORD *)this + 10);
      if ( *((float *)this + 112) < 0.0 )
        *(_DWORD *)(v40 + 352) |= 0x200u;
      else
        *(_DWORD *)(v40 + 352) &= ~0x200u;
    }
    v5 = *((_QWORD *)this + 10);
    if ( !*(_DWORD *)(v5 + 320) && !*(_DWORD *)(v5 + 324) )
    {
      v6 = *(_DWORD *)(v5 + 336);
      if ( v6 || *(_DWORD *)(v5 + 340) )
      {
        v22 = (float)(16 * v6);
        *(float *)(v5 + 300) = v22;
        v23 = *((_QWORD *)this + 10);
        *((float *)this + 113) = v22;
        v24 = (float)(16 * *(_DWORD *)(v23 + 340));
        *(float *)(v23 + 304) = v24;
        v25 = *((_QWORD *)this + 10);
        *((float *)this + 114) = v24;
        *((_DWORD *)v2 + 6) = 16 * *(_DWORD *)(v25 + 336);
        LODWORD(v23) = *(_DWORD *)(*((_QWORD *)this + 10) + 340LL);
        *((_DWORD *)v2 + 8) &= ~0x40u;
        *((_DWORD *)v2 + 7) = 16 * v23;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= ~0x800u;
      }
      else
      {
        *(_DWORD *)(v5 + 300) = 0;
        v7 = *((_QWORD *)this + 10);
        *((_DWORD *)this + 113) = 0;
        *(_DWORD *)(v7 + 304) = 0;
        *((_DWORD *)this + 114) = 0;
        *((_DWORD *)v2 + 8) |= 0x40u;
        *((_QWORD *)v2 + 3) = 0LL;
        v8 = *((_QWORD *)this + 10);
        v9 = *(_DWORD *)(v8 + 352);
        if ( (v9 & 0x1000) != 0 )
          *(_DWORD *)(v8 + 352) = v9 | 0x800;
      }
LABEL_9:
      v3 = *(unsigned int *)(*((_QWORD *)this + 10) + 352LL);
      if ( (v3 & 2) != 0 && (*((_DWORD *)this + 134) & 3) != 1 )
      {
        *(_DWORD *)v2 = *((_DWORD *)this + 111);
        *((_DWORD *)v2 + 3) = *((_DWORD *)this + 112);
        *(_QWORD *)(v2 + 4) = 0LL;
        *((_DWORD *)v2 + 4) = *((_DWORD *)this + 113);
        *((_DWORD *)v2 + 5) = *((_DWORD *)this + 114);
        if ( (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x800) == 0 )
        {
          *((_DWORD *)v2 + 8) = (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x1000 | 0x4800u) >> 11;
LABEL_13:
          *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFF1FFF;
LABEL_14:
          v10 = *((_QWORD *)this + 10);
          *(_OWORD *)(v10 + 184) = *(_OWORD *)v2;
          *(_OWORD *)(v10 + 200) = *((_OWORD *)v2 + 1);
          *(_DWORD *)(v10 + 216) = *((_DWORD *)v2 + 8);
          return;
        }
LABEL_33:
        *((_DWORD *)v2 + 8) = 75;
        goto LABEL_13;
      }
      goto LABEL_15;
    }
    *(_DWORD *)(v5 + 352) &= ~0x800u;
    *((_DWORD *)v2 + 8) &= ~0x40u;
    v17 = *((_QWORD *)this + 10);
    v18 = -*(_DWORD *)(v17 + 320);
    if ( (*(_DWORD *)(v17 + 352) & 0x1000) != 0 )
    {
      *(float *)(v17 + 300) = (float)(-16 * *(_DWORD *)(v17 + 320));
      v21 = *((_QWORD *)this + 10);
      *((float *)this + 113) = (float)(16 * v18);
      v19 = (float)(-16 * *(_DWORD *)(v21 + 324));
      *(float *)(v21 + 304) = v19;
      v20 = *((_QWORD *)this + 10);
      *((float *)this + 114) = v19;
      LODWORD(v21) = *(_DWORD *)(v20 + 336);
      if ( !(_DWORD)v21 && !*(_DWORD *)(v20 + 340) )
      {
        *((_DWORD *)v2 + 6) = -16 * *(_DWORD *)(v20 + 320);
        *((_DWORD *)v2 + 7) = -16 * *(_DWORD *)(*((_QWORD *)this + 10) + 324LL);
        goto LABEL_9;
      }
    }
    else
    {
      v26 = (float)v18 * *((float *)this + 111);
      *(float *)(v17 + 300) = v26;
      v27 = *((_QWORD *)this + 10);
      *((float *)this + 113) = v26;
      v28 = (float)-*(_DWORD *)(v27 + 324) * *((float *)this + 112);
      *(float *)(v27 + 304) = v28;
      v20 = *((_QWORD *)this + 10);
      *((float *)this + 114) = v28;
      v21 = *(unsigned int *)(v20 + 336);
      if ( !*(_QWORD *)(v20 + 336) )
        goto LABEL_37;
    }
    v29 = (float)(16 * v21) + *((float *)this + 113);
    *(float *)(v20 + 300) = v29;
    v21 = *((_QWORD *)this + 10);
    *((float *)this + 113) = v29;
    v30 = (float)(16 * *(_DWORD *)(v21 + 340)) + *((float *)this + 114);
    *(float *)(v21 + 304) = v30;
    *((float *)this + 114) = v30;
LABEL_37:
    bFToL(v21, v2 + 24, 6LL);
    bFToL(v31, v2 + 28, v32);
    goto LABEL_9;
  }
  if ( (v4 & 2) != 0 && (*((_DWORD *)this + 134) & 3) != 1 )
  {
    *(_DWORD *)v2 = *((_DWORD *)this + 111);
    *((_DWORD *)v2 + 3) = *((_DWORD *)this + 112);
    *(_QWORD *)(v2 + 4) = 0LL;
    *((_DWORD *)v2 + 4) = *((_DWORD *)this + 113);
    *((_DWORD *)v2 + 5) = *((_DWORD *)this + 114);
    bFToL(v3, v2 + 24, 6LL);
    bFToL(v44, v2 + 28, v45);
    if ( (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x800) == 0 )
    {
      *((_DWORD *)v2 + 8) = (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x1000 | 0x4800u) >> 11;
      goto LABEL_13;
    }
    goto LABEL_33;
  }
LABEL_15:
  if ( (*((_DWORD *)this + 134) & 3) == 1 )
    *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFE7FF;
  if ( (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x1000) != 0 )
  {
    v11 = (EFLOAT *)(v2 + 4);
    v12 = (EFLOAT *)(v2 + 8);
    *(_OWORD *)v2 = *(_OWORD *)((char *)this + 408);
    v13 = (EFLOAT *)(v2 + 12);
    *((_OWORD *)v2 + 1) = *(_OWORD *)((char *)this + 424);
    *(float *)v2 = *(float *)v2 * 16.0;
    *((float *)v2 + 1) = *((float *)v2 + 1) * 16.0;
    *((float *)v2 + 2) = *((float *)v2 + 2) * 16.0;
    *((float *)v2 + 3) = *((float *)v2 + 3) * 16.0;
    *((float *)v2 + 4) = *((float *)v2 + 4) * 16.0;
    *((float *)v2 + 5) = *((float *)v2 + 5) * 16.0;
  }
  else
  {
    v46 = *((float *)this + 111);
    v47 = *((float *)this + 112);
    if ( (*((_DWORD *)this + 134) & 3) == 1 )
    {
      v46 = v46 * COERCE_FLOAT(*(_QWORD *)((char *)this + 540));
      v47 = v47 * COERCE_FLOAT(HIDWORD(*(_QWORD *)((char *)this + 540)));
    }
    v12 = (EFLOAT *)(v2 + 8);
    v11 = (EFLOAT *)(v2 + 4);
    v13 = (EFLOAT *)(v2 + 12);
    *(float *)v2 = v46 * *((float *)this + 102);
    *((float *)v2 + 2) = v46 * *((float *)this + 104);
    *((float *)v2 + 1) = v47 * *((float *)this + 103);
    *((float *)v2 + 3) = v47 * *((float *)this + 105);
    *((float *)v2 + 4) = *((float *)this + 111) * *((float *)this + 106);
    *((float *)v2 + 5) = *((float *)this + 112) * *((float *)this + 107);
  }
  *((float *)v2 + 4) = *((float *)this + 113) + *((float *)v2 + 4);
  bFToL(v3, v2 + 24, 6LL);
  *((float *)v2 + 5) = *((float *)this + 114) + *((float *)v2 + 5);
  bFToL(v14, v2 + 28, v15);
  if ( (*((_DWORD *)this + 134) & 3) == 1 )
  {
    *((float *)v2 + 4) = COERCE_FLOAT(*(_QWORD *)((char *)this + 540)) * *((float *)v2 + 4);
    *((float *)v2 + 5) = COERCE_FLOAT(HIDWORD(*(_QWORD *)((char *)this + 540))) * *((float *)v2 + 5);
    v52 = *(_QWORD *)((char *)this + 540);
    v48 = (*((_DWORD *)this + 10) & 1) != 0 ? 1440LL : 1432LL;
    v49 = (float)((float)((float)*(int *)((char *)this + v48 + 4) * *((float *)&v52 + 1))
                - (float)*(int *)((char *)this + v48 + 4))
        * 16.0;
    *((float *)v2 + 4) = (float)((float)((float)((float)*(int *)((char *)this + v48) * *(float *)&v52)
                                       - (float)*(int *)((char *)this + v48))
                               * 16.0)
                       + *((float *)v2 + 4);
    *((float *)v2 + 5) = v49 + *((float *)v2 + 5);
    bFToL(v48, v2 + 24, 6LL);
    v16 = v2 + 28;
    bFToL(v50, v2 + 28, v51);
  }
  else
  {
    v16 = v2 + 28;
  }
  *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= ~0x10000u;
  if ( EFLOAT::bIsZero(v11) && EFLOAT::bIsZero(v12) )
  {
    if ( EFLOAT::bIs16((EFLOAT *)v2) && EFLOAT::bIs16(v13) )
      *((_DWORD *)v2 + 8) = 11;
    else
      *((_DWORD *)v2 + 8) = 9;
  }
  else
  {
    *((_DWORD *)v2 + 8) = 8;
  }
  if ( !*((_DWORD *)v2 + 6) && !*v16 )
    *((_DWORD *)v2 + 8) |= 0x40u;
  *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFF1FFF;
  if ( (*((_DWORD *)this + 134) & 3) != 1 )
    goto LABEL_14;
}
