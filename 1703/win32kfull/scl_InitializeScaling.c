/*
 * XREFs of scl_InitializeScaling @ 0x1C02BE930
 * Callers:
 *     fsg_InitInterpreterTrans @ 0x1C02C7CB4 (fsg_InitInterpreterTrans.c)
 * Callees:
 *     CompDiv @ 0x1C02BD158 (CompDiv.c)
 *     FixMul @ 0x1C02BD1FC (FixMul.c)
 *     mth_90degClosestRotationFactor @ 0x1C02BD4E4 (mth_90degClosestRotationFactor.c)
 *     mth_90degRotationFactorForEmboldening @ 0x1C02BD670 (mth_90degRotationFactorForEmboldening.c)
 *     mth_FoldPointSizeResolution @ 0x1C02BD834 (mth_FoldPointSizeResolution.c)
 *     mth_IntelMul @ 0x1C02BD8DC (mth_IntelMul.c)
 *     mth_Non90DegreeTransformation @ 0x1C02BDB54 (mth_Non90DegreeTransformation.c)
 *     mth_PositiveSquare @ 0x1C02BDC84 (mth_PositiveSquare.c)
 *     mth_ReduceMatrix @ 0x1C02BDCA8 (mth_ReduceMatrix.c)
 *     adjustTrans @ 0x1C02BDDD8 (adjustTrans.c)
 *     scl_ComputeScaling @ 0x1C02BE5D4 (scl_ComputeScaling.c)
 *     scl_Scale @ 0x1C02BF2AC (scl_Scale.c)
 */

__int64 __fastcall scl_InitializeScaling(
        __int64 a1,
        int a2,
        int *a3,
        unsigned __int16 a4,
        int a5,
        __int16 a6,
        __int16 a7,
        int a8,
        unsigned __int16 a9,
        __int16 a10,
        int a11,
        _WORD *a12,
        __int16 *a13,
        int a14,
        _DWORD *a15)
{
  __int128 v16; // xmm0
  __int64 v17; // r13
  __int128 v19; // xmm1
  unsigned __int16 v22; // r12
  int v23; // r15d
  int v24; // ebx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // edx
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // ecx
  int v37; // r8d
  __int128 v38; // xmm0
  int v39; // eax
  int v40; // r8d
  __int128 v41; // xmm0
  int v42; // eax
  int v43; // edx
  bool v44; // zf
  _WORD *v45; // r14
  __int16 *v46; // rbx
  __int64 v47; // rdx
  __int16 v48; // r13
  int *v49; // rcx
  unsigned __int16 v50; // r10
  __int16 v51; // r11
  int v52; // ecx
  int v53; // ecx
  __int16 v54; // ax
  __int16 v55; // ax
  __int16 v56; // ax
  __int16 v57; // ax
  int v58; // esi
  int v59; // r14d
  int fixed; // eax
  int v61; // r15d
  int v62; // ebx
  int v63; // eax
  int v64; // r10d
  int v65; // ebx
  int v66; // edx
  __int128 v68; // [rsp+30h] [rbp-50h] BYREF
  __int128 v69; // [rsp+40h] [rbp-40h]
  int v70; // [rsp+50h] [rbp-30h]
  _OWORD v71[2]; // [rsp+58h] [rbp-28h] BYREF
  int v72; // [rsp+78h] [rbp-8h]
  int v73; // [rsp+C0h] [rbp+40h]
  __int64 v74; // [rsp+D0h] [rbp+50h]
  int v75; // [rsp+D8h] [rbp+58h] BYREF

  LOWORD(v75) = a4;
  v16 = *(_OWORD *)a3;
  v17 = a5;
  v19 = *((_OWORD *)a3 + 1);
  v73 = a3[8];
  v70 = v73;
  v68 = v16;
  v69 = v19;
  mth_FoldPointSizeResolution(a5, a6, a7, a3);
  v22 = a9;
  if ( ((_WORD)a8 || a9) && ((unsigned int)CompDiv(72, a7 * v17) + 0x8000) >> 16 > 0x32 )
    adjustTrans(a3);
  mth_ReduceMatrix(a3);
  v23 = a14;
  v24 = a4 << 16;
  *(_DWORD *)(a1 + 472) = a14;
  if ( v23 )
  {
    *(_DWORD *)(a1 + 376) = v24;
    *(_DWORD *)(a1 + 380) = v24;
    v25 = *a3;
    v26 = a3[1];
    if ( *a3 < 0 )
      v25 = -v25;
    if ( v26 < 0 )
      v26 = -v26;
    if ( v25 > v26 )
      v26 = v25;
    *(_DWORD *)(a1 + 384) = v26;
    v27 = a3[3];
    v28 = a3[4];
    if ( v27 < 0 )
      v27 = -v27;
    if ( v28 < 0 )
      v28 = -v28;
    if ( v27 > v28 )
      v28 = v27;
    *(_DWORD *)(a1 + 388) = v28;
  }
  else
  {
    v29 = *a3;
    v30 = a3[1];
    if ( *a3 < 0 )
      v29 = -v29;
    if ( v30 < 0 )
      v30 = -v30;
    if ( v29 > v30 )
      v30 = v29;
    *(_DWORD *)(a1 + 376) = v30;
    v31 = a3[3];
    v32 = a3[4];
    if ( v31 < 0 )
      v31 = -v31;
    if ( v32 < 0 )
      v32 = -v32;
    *(_DWORD *)(a1 + 384) = v30;
    if ( v31 > v32 )
      v32 = v31;
    *(_DWORD *)(a1 + 380) = v32;
    *(_DWORD *)(a1 + 388) = v32;
    if ( a2 )
    {
      *(_DWORD *)(a1 + 376) = (v30 + 0x8000) & 0xFFFF0000;
      *(_DWORD *)(a1 + 380) = (v32 + 0x8000) & 0xFFFF0000;
    }
  }
  v33 = scl_ComputeScaling((_DWORD *)(a1 + 264), *(_DWORD *)(a1 + 376), v24);
  v34 = *(_DWORD *)(a1 + 380);
  *(_DWORD *)(a1 + 184) = v33;
  v35 = scl_ComputeScaling((_DWORD *)(a1 + 280), v34, v24);
  v36 = *(_DWORD *)(a1 + 376);
  v37 = *(_DWORD *)(a1 + 380);
  *(_DWORD *)(a1 + 188) = v35;
  if ( v36 < v37 )
  {
    v41 = *(_OWORD *)(a1 + 280);
    *(_DWORD *)(a1 + 192) = v35;
    LODWORD(v74) = v36 << 16;
    HIDWORD(v74) = v36 >> 16;
    *(_OWORD *)(a1 + 296) = v41;
    v42 = CompDiv(v37, v74);
    v40 = *(_DWORD *)(a1 + 380);
    *(_DWORD *)(a1 + 312) = v42;
    *(_DWORD *)(a1 + 316) = 0x10000;
  }
  else
  {
    v38 = *(_OWORD *)(a1 + 264);
    *(_DWORD *)(a1 + 192) = *(_DWORD *)(a1 + 184);
    *(_OWORD *)(a1 + 296) = v38;
    *(_DWORD *)(a1 + 312) = 0x10000;
    v39 = CompDiv(v36, (__int64)v37 << 16);
    v40 = *(_DWORD *)(a1 + 376);
    *(_DWORD *)(a1 + 316) = v39;
  }
  v43 = *(_DWORD *)(a1 + 380);
  *(_DWORD *)(a1 + 28) = v40;
  v44 = *(_DWORD *)(a1 + 376) == v43;
  *a15 = (__int16)((unsigned int)(v43 + 0x8000) >> 16);
  *(_BYTE *)(a1 + 340) = v44;
  *(_WORD *)(a1 + 24) = (unsigned int)(v40 + 0x8000) >> 16;
  *(_WORD *)(a1 + 26) = (unsigned int)(v17 + 0x8000) >> 16;
  *(_BYTE *)(a1 + 320) = mth_PositiveSquare(a3);
  mth_Non90DegreeTransformation((int *)&v68, &a5, &a14);
  v44 = a5 == 0;
  *(_BYTE *)(a1 + 321) = 0;
  *(_BYTE *)(a1 + 321) = !v44;
  if ( a14 )
    *(_BYTE *)(a1 + 321) |= 2u;
  v45 = a12;
  v46 = a13;
  *a12 = 0;
  *v46 = 0;
  if ( !(_WORD)a8 && !v22 )
  {
    *(_QWORD *)(a1 + 444) = 0LL;
    return 0LL;
  }
  v47 = v17;
  v48 = a7;
  CompDiv(72, a7 * v47);
  v51 = mth_90degRotationFactorForEmboldening(a3);
  if ( v51 == 8 )
    v51 = mth_90degClosestRotationFactor(v49);
  if ( v23 )
  {
    v52 = v50;
    v50 = v75;
    *v46 = (v22 * v52 - 10) / 1000;
  }
  v53 = v50 * (unsigned __int16)a8;
  *(_WORD *)(a1 + 444) = (__int16)(v50 * v22 - 10) / 1000;
  *(_WORD *)(a1 + 446) = (v53 - 10) / 1000 + 1;
  if ( !v23 )
    *v46 = (v50 * v22 - 10) / 1000;
  switch ( v51 )
  {
    case 0:
      v55 = *v46 + 1;
      goto LABEL_67;
    case 1:
      v56 = -*v46;
      goto LABEL_65;
    case 2:
      v57 = ~*v46;
      goto LABEL_63;
    case 3:
      v54 = *v46;
      goto LABEL_61;
    case 4:
      v57 = *v46 + 1;
LABEL_63:
      *v45 = v57;
      goto LABEL_68;
    case 5:
      v56 = *v46;
LABEL_65:
      *v45 = v56;
      *v46 = ~*v46;
      goto LABEL_68;
    case 6:
      v55 = ~*v46;
LABEL_67:
      *v45 = v55;
      *v46 = -*v46;
      goto LABEL_68;
    case 7:
      v54 = -*v46;
LABEL_61:
      *v45 = v54;
      ++*v46;
      goto LABEL_68;
  }
  *v45 = 0;
  *v46 = 0;
LABEL_68:
  if ( v23 )
    goto LABEL_78;
  if ( v48 != a6 )
  {
    v58 = HIDWORD(v68);
    v59 = DWORD1(v68);
    a8 = *(unsigned __int16 *)(a1 + 446) << 16;
    v75 = *(unsigned __int16 *)(a1 + 444) << 16;
    fixed = FixMul(SDWORD1(v68), SHIDWORD(v68));
    v61 = v69;
    v62 = fixed;
    v63 = FixMul(v68, v69);
    if ( v63 - v62 >= 0 )
      v65 = v63 - v62;
    else
      v65 = v62 - v63;
    if ( v65 )
    {
      a15 = (_DWORD *)((__int64)v64 << 16);
      LODWORD(v68) = CompDiv(v65, (__int64)a15);
      a15 = (_DWORD *)__PAIR64__(v59 >> 16, v59 << 16);
      DWORD1(v68) = CompDiv(v65, __SPAIR64__(v59 >> 16, v59 << 16));
      a15 = (_DWORD *)__PAIR64__(v58 >> 16, v58 << 16);
      HIDWORD(v68) = CompDiv(v65, __SPAIR64__(v58 >> 16, v58 << 16));
      a15 = (_DWORD *)__PAIR64__(v61 >> 16, v61 << 16);
      LODWORD(v69) = CompDiv(v65, __SPAIR64__(v61 >> 16, v61 << 16));
      v72 = v73;
      v71[0] = v68;
      DWORD1(v71[0]) = -DWORD1(v68);
      HIDWORD(v71[0]) = -HIDWORD(v68);
      v71[1] = v69;
      mth_IntelMul(1, (char *)&a8, &v75, (int *)&v68, 0x10000, 0x10000);
      a8 = CompDiv(v48, a6 * (__int64)a8);
      mth_IntelMul(1, (char *)&a8, &v75, (int *)v71, 0x10000, 0x10000);
      *(_WORD *)(a1 + 446) = (abs32(a8) + 0x8000) >> 16;
      *(_WORD *)(a1 + 444) = (abs32(v75) + 0x8000) >> 16;
    }
    else
    {
      *(_DWORD *)(a1 + 444) = 0;
    }
  }
  if ( (*(_BYTE *)(a1 + 321) & 1) != 0 )
  {
LABEL_78:
    v66 = *(_DWORD *)(a1 + 188);
    a8 = a10;
    scl_Scale(a1 + 280, v66, (unsigned int)&a8, a1 + 448, 1);
    *(_DWORD *)(a1 + 448) &= 0xFFFFFFC0;
  }
  else
  {
    *(_DWORD *)(a1 + 448) = -64 * a11;
  }
  return 0LL;
}
