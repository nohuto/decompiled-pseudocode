/*
 * XREFs of ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C00529A0
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C00548A0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEAAHXZ @ 0x1C0051E88 (-bDpiScaleTransform@DC@@QEAAHXZ.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0054A60 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?bIs16@EFLOAT@@QEAAHXZ @ 0x1C0054A80 (-bIs16@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C0070F2C (bFToL.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00F2914 (-vMakeIso@DC@@QEAAXXZ.c)
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
  int v10; // eax
  int v11; // xmm1_4
  __int64 v12; // rcx
  DC *v13; // rcx
  EFLOAT *v14; // r14
  EFLOAT *v15; // rsi
  EFLOAT *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  int v22; // eax
  float v23; // xmm0_4
  __int64 v24; // rax
  __int64 v25; // rcx
  float v26; // xmm0_4
  __int64 v27; // rcx
  float v28; // xmm0_4
  __int64 v29; // rax
  float v30; // xmm0_4
  __int64 v31; // rcx
  float v32; // xmm0_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  __int64 v35; // rcx
  __int64 v36; // r8
  float *v37; // rcx
  int v38; // r8d
  int v39; // edx
  float v40; // xmm1_4
  __int64 v41; // rcx
  float v42; // xmm1_4
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // xmm0_4
  __int64 v46; // rax
  int v47; // xmm1_4
  __int64 v48; // rcx
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // r8
  float v52; // xmm3_4
  float v53; // xmm4_4
  float v54; // xmm5_4
  __int64 v55; // rcx
  __int64 v56; // r8

  v2 = (char *)this + 336;
  v3 = *((_QWORD *)this + 10);
  v4 = *(_DWORD *)(v3 + 352);
  if ( (v4 & 0xE000) != 0 )
  {
    if ( (v4 & 0x4000) != 0 )
    {
      if ( *(_DWORD *)(v3 + 308) == 7 )
        DC::vMakeIso(this);
      v37 = (float *)*((_QWORD *)this + 10);
      v38 = *((_DWORD *)v37 + 82);
      v39 = *((_DWORD *)v37 + 86);
      if ( v38 == v39 && *((_DWORD *)v37 + 83) == *((_DWORD *)v37 + 87) )
      {
        v45 = ef16;
        *((_DWORD *)v37 + 73) = ef16;
        v46 = *((_QWORD *)this + 10);
        *((_DWORD *)this + 111) = v45;
        v47 = ef16;
        *(_DWORD *)(v46 + 296) = ef16;
        *((_DWORD *)this + 112) = v47;
        *((_DWORD *)v2 + 8) = 11;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x1000u;
      }
      else
      {
        v40 = (float)(16 * v39) / (float)v38;
        v37[73] = v40;
        v41 = *((_QWORD *)this + 10);
        *((float *)this + 111) = v40;
        v42 = (float)(16 * *(_DWORD *)(v41 + 348)) / (float)*(int *)(v41 + 332);
        *(float *)(v41 + 296) = v42;
        *((float *)this + 112) = v42;
        *((_DWORD *)v2 + 8) = 9;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFE7FF;
      }
      v43 = *((_QWORD *)this + 10);
      if ( *((float *)this + 111) < 0.0 )
        *(_DWORD *)(v43 + 352) |= 0x100u;
      else
        *(_DWORD *)(v43 + 352) &= ~0x100u;
      v44 = *((_QWORD *)this + 10);
      if ( *((float *)this + 112) < 0.0 )
        *(_DWORD *)(v44 + 352) |= 0x200u;
      else
        *(_DWORD *)(v44 + 352) &= ~0x200u;
    }
    v5 = *((_QWORD *)this + 10);
    if ( !*(_DWORD *)(v5 + 320) && !*(_DWORD *)(v5 + 324) )
    {
      v6 = *(_DWORD *)(v5 + 336);
      if ( v6 || *(_DWORD *)(v5 + 340) )
      {
        v26 = (float)(16 * v6);
        *(float *)(v5 + 300) = v26;
        v27 = *((_QWORD *)this + 10);
        *((float *)this + 113) = v26;
        v28 = (float)(16 * *(_DWORD *)(v27 + 340));
        *(float *)(v27 + 304) = v28;
        v29 = *((_QWORD *)this + 10);
        *((float *)this + 114) = v28;
        *((_DWORD *)v2 + 6) = 16 * *(_DWORD *)(v29 + 336);
        LODWORD(v27) = *(_DWORD *)(*((_QWORD *)this + 10) + 340LL);
        *((_DWORD *)v2 + 8) &= ~0x40u;
        *((_DWORD *)v2 + 7) = 16 * v27;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= ~0x800u;
      }
      else
      {
        *(_DWORD *)(v5 + 300) = 0;
        v7 = *((_QWORD *)this + 10);
        *((_DWORD *)this + 113) = 0;
        *(_DWORD *)(v7 + 304) = 0;
        *((_DWORD *)this + 114) = 0;
        *((_QWORD *)v2 + 3) = 0LL;
        *((_DWORD *)v2 + 8) |= 0x40u;
        v8 = *((_QWORD *)this + 10);
        v9 = *(_DWORD *)(v8 + 352);
        if ( (v9 & 0x1000) != 0 )
          *(_DWORD *)(v8 + 352) = v9 | 0x800;
      }
LABEL_9:
      if ( (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 2) != 0 )
      {
        v10 = *((_DWORD *)this + 134);
        if ( (v10 & 1) == 0 || (v10 & 2) != 0 )
        {
          *(_DWORD *)v2 = *((_DWORD *)this + 111);
          v11 = *((_DWORD *)this + 112);
          *(_QWORD *)(v2 + 4) = 0LL;
          *((_DWORD *)v2 + 3) = v11;
          *((_DWORD *)v2 + 4) = *((_DWORD *)this + 113);
          *((_DWORD *)v2 + 5) = *((_DWORD *)this + 114);
          if ( (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x800) == 0 )
          {
            *((_DWORD *)v2 + 8) = (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x1000 | 0x4800u) >> 11;
LABEL_13:
            *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFF1FFF;
LABEL_14:
            v12 = *((_QWORD *)this + 10);
            *(_OWORD *)(v12 + 184) = *(_OWORD *)v2;
            *(_OWORD *)(v12 + 200) = *((_OWORD *)v2 + 1);
            *(_DWORD *)(v12 + 216) = *((_DWORD *)v2 + 8);
            return;
          }
LABEL_33:
          *((_DWORD *)v2 + 8) = 75;
          goto LABEL_13;
        }
      }
      goto LABEL_15;
    }
    *(_DWORD *)(v5 + 352) &= ~0x800u;
    *((_DWORD *)v2 + 8) &= ~0x40u;
    v21 = *((_QWORD *)this + 10);
    v22 = -*(_DWORD *)(v21 + 320);
    if ( (*(_DWORD *)(v21 + 352) & 0x1000) != 0 )
    {
      *(float *)(v21 + 300) = (float)(-16 * *(_DWORD *)(v21 + 320));
      v25 = *((_QWORD *)this + 10);
      *((float *)this + 113) = (float)(16 * v22);
      v23 = (float)(-16 * *(_DWORD *)(v25 + 324));
      *(float *)(v25 + 304) = v23;
      v24 = *((_QWORD *)this + 10);
      *((float *)this + 114) = v23;
      LODWORD(v25) = *(_DWORD *)(v24 + 336);
      if ( !(_DWORD)v25 && !*(_DWORD *)(v24 + 340) )
      {
        *((_DWORD *)v2 + 6) = -16 * *(_DWORD *)(v24 + 320);
        *((_DWORD *)v2 + 7) = -16 * *(_DWORD *)(*((_QWORD *)this + 10) + 324LL);
        goto LABEL_9;
      }
    }
    else
    {
      v30 = (float)v22 * *((float *)this + 111);
      *(float *)(v21 + 300) = v30;
      v31 = *((_QWORD *)this + 10);
      *((float *)this + 113) = v30;
      v32 = (float)-*(_DWORD *)(v31 + 324) * *((float *)this + 112);
      *(float *)(v31 + 304) = v32;
      v24 = *((_QWORD *)this + 10);
      *((float *)this + 114) = v32;
      v25 = *(unsigned int *)(v24 + 336);
      if ( !*(_QWORD *)(v24 + 336) )
        goto LABEL_37;
    }
    v33 = (float)(16 * v25) + *((float *)this + 113);
    *(float *)(v24 + 300) = v33;
    v25 = *((_QWORD *)this + 10);
    *((float *)this + 113) = v33;
    v34 = (float)(16 * *(_DWORD *)(v25 + 340)) + *((float *)this + 114);
    *(float *)(v25 + 304) = v34;
    *((float *)this + 114) = v34;
LABEL_37:
    bFToL(v25, v2 + 24, 6LL);
    bFToL(v35, v2 + 28, v36);
    goto LABEL_9;
  }
  if ( (v4 & 2) != 0 && !(unsigned int)DC::bDpiScaleTransform(this) )
  {
    *(_DWORD *)v2 = *((_DWORD *)this + 111);
    *((_DWORD *)v2 + 3) = *((_DWORD *)this + 112);
    *(_QWORD *)(v2 + 4) = v49;
    *((_DWORD *)v2 + 4) = *((_DWORD *)this + 113);
    *((_DWORD *)v2 + 5) = *((_DWORD *)this + 114);
    bFToL(v48, v2 + 24, 6LL);
    bFToL(v50, v2 + 28, v51);
    if ( (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x800) == 0 )
    {
      *((_DWORD *)v2 + 8) = (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x1000 | 0x4800u) >> 11;
      goto LABEL_13;
    }
    goto LABEL_33;
  }
LABEL_15:
  if ( (unsigned int)DC::bDpiScaleTransform(this) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFE7FF;
  if ( (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x1000) != 0 )
  {
    v14 = (EFLOAT *)(v2 + 4);
    v15 = (EFLOAT *)(v2 + 8);
    *(_OWORD *)v2 = *(_OWORD *)((char *)this + 408);
    v16 = (EFLOAT *)(v2 + 12);
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
    v52 = *((float *)this + 111);
    if ( (unsigned int)DC::bDpiScaleTransform(v13) )
    {
      v52 = v52 * *((float *)this + 135);
      v53 = v53 * *((float *)this + 136);
    }
    v15 = (EFLOAT *)(v2 + 8);
    v14 = (EFLOAT *)(v2 + 4);
    v16 = (EFLOAT *)(v2 + 12);
    *(float *)v2 = v52 * *((float *)this + 102);
    *((float *)v2 + 2) = v52 * *((float *)this + 104);
    *((float *)v2 + 1) = v53 * *((float *)this + 103);
    *((float *)v2 + 3) = v53 * *((float *)this + 105);
    *((float *)v2 + 4) = *((float *)this + 111) * *((float *)this + 106);
    *((float *)v2 + 5) = *((float *)this + 112) * *((float *)this + 107);
  }
  *((float *)v2 + 4) = *((float *)this + 113) + *((float *)v2 + 4);
  bFToL(v13, v2 + 24, 6LL);
  *((float *)v2 + 5) = *((float *)this + 114) + *((float *)v2 + 5);
  bFToL(v17, v2 + 28, v18);
  if ( (unsigned int)DC::bDpiScaleTransform(this) )
  {
    *((float *)v2 + 4) = *((float *)this + 135) * *((float *)v2 + 4);
    *((float *)v2 + 5) = *((float *)this + 136) * *((float *)v2 + 5);
    v54 = (float)((float)((float)*((int *)this + 2 * (*((_DWORD *)this + 10) & 1) + 359) * *((float *)this + 136))
                - (float)*((int *)this + 2 * (*((_DWORD *)this + 10) & 1) + 359))
        * 16.0;
    *((float *)v2 + 4) = (float)((float)((float)((float)*((int *)this + 2 * (*((_DWORD *)this + 10) & 1) + 358)
                                               * *((float *)this + 135))
                                       - (float)*((int *)this + 2 * (*((_DWORD *)this + 10) & 1) + 358))
                               * 16.0)
                       + *((float *)v2 + 4);
    *((float *)v2 + 5) = v54 + *((float *)v2 + 5);
    bFToL(v19, v2 + 24, v20);
    bFToL(v55, v2 + 28, v56);
  }
  *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= ~0x10000u;
  if ( (unsigned int)EFLOAT::bIsZero(v14) && (unsigned int)EFLOAT::bIsZero(v15) )
  {
    if ( (unsigned int)EFLOAT::bIs16((EFLOAT *)v2) && (unsigned int)EFLOAT::bIs16(v16) )
      *((_DWORD *)v2 + 8) = 11;
    else
      *((_DWORD *)v2 + 8) = 9;
  }
  else
  {
    *((_DWORD *)v2 + 8) = 8;
  }
  if ( !*((_DWORD *)v2 + 6) && !*((_DWORD *)v2 + 7) )
    *((_DWORD *)v2 + 8) |= 0x40u;
  *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFF1FFF;
  if ( !(unsigned int)DC::bDpiScaleTransform(this) )
    goto LABEL_14;
}
