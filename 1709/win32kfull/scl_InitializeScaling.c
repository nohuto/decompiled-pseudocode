/*
 * XREFs of scl_InitializeScaling @ 0x1C02B8724
 * Callers:
 *     fsg_InitInterpreterTrans @ 0x1C02C1ABC (fsg_InitInterpreterTrans.c)
 * Callees:
 *     CompDiv @ 0x1C02B6F58 (CompDiv.c)
 *     FixMul @ 0x1C02B6FFC (FixMul.c)
 *     mth_90degClosestRotationFactor @ 0x1C02B72E4 (mth_90degClosestRotationFactor.c)
 *     mth_90degRotationFactorForEmboldening @ 0x1C02B7478 (mth_90degRotationFactorForEmboldening.c)
 *     mth_FoldPointSizeResolution @ 0x1C02B7630 (mth_FoldPointSizeResolution.c)
 *     mth_IntelMul @ 0x1C02B76D8 (mth_IntelMul.c)
 *     mth_Non90DegreeTransformation @ 0x1C02B7950 (mth_Non90DegreeTransformation.c)
 *     mth_PositiveSquare @ 0x1C02B7A80 (mth_PositiveSquare.c)
 *     mth_ReduceMatrix @ 0x1C02B7AA4 (mth_ReduceMatrix.c)
 *     adjustTrans @ 0x1C02B7BD0 (adjustTrans.c)
 *     scl_ComputeScaling @ 0x1C02B83C8 (scl_ComputeScaling.c)
 *     scl_Scale @ 0x1C02B90AC (scl_Scale.c)
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
  __int64 v16; // r13
  __int128 v18; // xmm1
  int v20; // r12d
  int v21; // r15d
  int *v22; // r14
  int *v23; // rbx
  int v24; // ecx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  int v34; // eax
  int v35; // ecx
  int v36; // r8d
  __int128 v37; // xmm0
  int *v38; // rax
  __int128 v39; // xmm0
  int v40; // r8d
  int v41; // edx
  bool v42; // zf
  _WORD *v43; // r14
  __int16 *v44; // rbx
  __int16 v45; // r15
  int *v46; // rcx
  unsigned __int16 v47; // r10
  __int16 v48; // r11
  int v49; // ecx
  int v50; // r9d
  int v51; // ecx
  __int16 v52; // ax
  __int16 v53; // ax
  __int16 v54; // ax
  __int16 v55; // ax
  int v56; // esi
  int v57; // r14d
  int fixed; // eax
  int v59; // r12d
  int v60; // ebx
  int v61; // eax
  int v62; // r10d
  int v63; // ecx
  int v64; // ebx
  int v65; // edx
  __int128 v67; // [rsp+30h] [rbp-51h] BYREF
  __int128 v68; // [rsp+40h] [rbp-41h]
  int v69; // [rsp+50h] [rbp-31h]
  _OWORD v70[2]; // [rsp+58h] [rbp-29h] BYREF
  int v71; // [rsp+78h] [rbp-9h]
  int v72; // [rsp+D0h] [rbp+4Fh]
  __int64 v74; // [rsp+E0h] [rbp+5Fh]
  int v75; // [rsp+E8h] [rbp+67h] BYREF

  LOWORD(v75) = a4;
  v16 = a5;
  v18 = *((_OWORD *)a3 + 1);
  v72 = a3[8];
  v67 = *(_OWORD *)a3;
  v69 = v72;
  v68 = v18;
  mth_FoldPointSizeResolution(a5, a6, a7, a3);
  if ( ((_WORD)a8 || a9) && ((unsigned int)CompDiv(72, a7 * v16) + 0x8000) >> 16 > 0x32 )
    adjustTrans(a3);
  mth_ReduceMatrix(a3);
  v20 = a14;
  v21 = a4 << 16;
  *(_DWORD *)(a1 + 472) = a14;
  if ( v20 )
  {
    v22 = (int *)(a1 + 376);
    *(_DWORD *)(a1 + 376) = v21;
    v23 = (int *)(a1 + 380);
    *(_DWORD *)(a1 + 380) = v21;
    v24 = *a3;
    v25 = a3[1];
    if ( *a3 < 0 )
      v24 = -v24;
    if ( v25 < 0 )
      v25 = -v25;
    if ( v24 > v25 )
      v25 = v24;
    *(_DWORD *)(a1 + 384) = v25;
    v26 = a3[3];
    v27 = a3[4];
    if ( v26 < 0 )
      v26 = -v26;
    if ( v27 < 0 )
      v27 = -v27;
    if ( v26 > v27 )
      v27 = v26;
    *(_DWORD *)(a1 + 388) = v27;
  }
  else
  {
    v28 = *a3;
    v29 = a3[1];
    if ( *a3 < 0 )
      v28 = -v28;
    if ( v29 < 0 )
      v29 = -v29;
    v22 = (int *)(a1 + 376);
    if ( v28 > v29 )
      v29 = v28;
    *v22 = v29;
    v30 = a3[3];
    v31 = a3[4];
    if ( v30 < 0 )
      v30 = -v30;
    if ( v31 < 0 )
      v31 = -v31;
    *(_DWORD *)(a1 + 384) = v29;
    v23 = (int *)(a1 + 380);
    if ( v30 > v31 )
      v31 = v30;
    *v23 = v31;
    *(_DWORD *)(a1 + 388) = v31;
    if ( a2 )
    {
      *v22 = (v29 + 0x8000) & 0xFFFF0000;
      *v23 = (v31 + 0x8000) & 0xFFFF0000;
    }
  }
  v32 = scl_ComputeScaling((_DWORD *)(a1 + 264), *v22, v21);
  v33 = *v23;
  *(_DWORD *)(a1 + 184) = v32;
  v34 = scl_ComputeScaling((_DWORD *)(a1 + 280), v33, v21);
  v35 = *v22;
  v36 = *v23;
  *(_DWORD *)(a1 + 188) = v34;
  if ( v35 < v36 )
  {
    v39 = *(_OWORD *)(a1 + 280);
    *(_DWORD *)(a1 + 192) = v34;
    LODWORD(v74) = v35 << 16;
    HIDWORD(v74) = v35 >> 16;
    *(_OWORD *)(a1 + 296) = v39;
    *(_DWORD *)(a1 + 312) = CompDiv(v36, v74);
    v38 = v23;
    *(_DWORD *)(a1 + 316) = 0x10000;
  }
  else
  {
    v37 = *(_OWORD *)(a1 + 264);
    *(_DWORD *)(a1 + 192) = *(_DWORD *)(a1 + 184);
    *(_OWORD *)(a1 + 296) = v37;
    *(_DWORD *)(a1 + 312) = 0x10000;
    *(_DWORD *)(a1 + 316) = CompDiv(v35, (__int64)v36 << 16);
    v38 = v22;
  }
  v40 = *v38;
  v41 = *v23;
  *(_DWORD *)(a1 + 28) = *v38;
  v42 = *v22 == v41;
  *a15 = (__int16)((unsigned int)(v41 + 0x8000) >> 16);
  *(_BYTE *)(a1 + 340) = v42;
  *(_WORD *)(a1 + 24) = (unsigned int)(v40 + 0x8000) >> 16;
  *(_WORD *)(a1 + 26) = (unsigned int)(v16 + 0x8000) >> 16;
  *(_BYTE *)(a1 + 320) = mth_PositiveSquare(a3);
  mth_Non90DegreeTransformation((int *)&v67, &a5, &a14);
  *(_BYTE *)(a1 + 321) = 0;
  if ( a5 )
    *(_BYTE *)(a1 + 321) = 1;
  if ( a14 )
    *(_BYTE *)(a1 + 321) |= 2u;
  v43 = a12;
  v44 = a13;
  *a12 = 0;
  *v44 = 0;
  if ( !(_WORD)a8 && !a9 )
  {
    *(_QWORD *)(a1 + 444) = 0LL;
    return 0LL;
  }
  v45 = a7;
  CompDiv(72, a7 * v16);
  v48 = mth_90degRotationFactorForEmboldening(a3);
  if ( v48 == 8 )
    v48 = mth_90degClosestRotationFactor(v46);
  if ( v20 )
  {
    v49 = v47;
    v47 = v75;
    *v44 = (a9 * v49 - 10) / 1000;
  }
  v50 = (v47 * a9 - 10) / 1000;
  v51 = v47 * (unsigned __int16)a8;
  *(_WORD *)(a1 + 444) = (__int16)(v47 * a9 - 10) / 1000;
  *(_WORD *)(a1 + 446) = (v51 - 10) / 1000 + 1;
  if ( !v20 )
    *v44 = v50;
  switch ( v48 )
  {
    case 0:
      v53 = *v44 + 1;
      goto LABEL_69;
    case 1:
      v54 = -*v44;
      goto LABEL_67;
    case 2:
      v55 = ~*v44;
      goto LABEL_65;
    case 3:
      v52 = *v44;
      goto LABEL_63;
    case 4:
      v55 = *v44 + 1;
LABEL_65:
      *v43 = v55;
      goto LABEL_70;
    case 5:
      v54 = *v44;
LABEL_67:
      *v43 = v54;
      *v44 = ~*v44;
      goto LABEL_70;
    case 6:
      v53 = ~*v44;
LABEL_69:
      *v43 = v53;
      *v44 = -*v44;
      goto LABEL_70;
    case 7:
      v52 = -*v44;
LABEL_63:
      *v43 = v52;
      ++*v44;
      goto LABEL_70;
  }
  *v43 = 0;
  *v44 = 0;
LABEL_70:
  if ( v20 )
    goto LABEL_79;
  if ( v45 != a6 )
  {
    v56 = HIDWORD(v67);
    v57 = DWORD1(v67);
    a8 = *(unsigned __int16 *)(a1 + 446) << 16;
    v75 = *(unsigned __int16 *)(a1 + 444) << 16;
    fixed = FixMul(SDWORD1(v67), SHIDWORD(v67));
    v59 = v68;
    v60 = fixed;
    v61 = FixMul(v67, v68);
    v63 = v61 - v60;
    v64 = v60 - v61;
    if ( v63 >= 0 )
      v64 = v63;
    if ( v64 )
    {
      a15 = (_DWORD *)((__int64)v62 << 16);
      LODWORD(v67) = CompDiv(v64, (__int64)a15);
      a15 = (_DWORD *)__PAIR64__(v57 >> 16, v57 << 16);
      DWORD1(v67) = CompDiv(v64, __SPAIR64__(v57 >> 16, v57 << 16));
      a15 = (_DWORD *)__PAIR64__(v56 >> 16, v56 << 16);
      HIDWORD(v67) = CompDiv(v64, __SPAIR64__(v56 >> 16, v56 << 16));
      a15 = (_DWORD *)__PAIR64__(v59 >> 16, v59 << 16);
      LODWORD(v68) = CompDiv(v64, __SPAIR64__(v59 >> 16, v59 << 16));
      v71 = v72;
      v70[0] = v67;
      DWORD1(v70[0]) = -DWORD1(v67);
      HIDWORD(v70[0]) = -HIDWORD(v67);
      v70[1] = v68;
      mth_IntelMul(1, (char *)&a8, &v75, (int *)&v67, 0x10000, 0x10000);
      a8 = CompDiv(v45, a6 * (__int64)a8);
      mth_IntelMul(1, (char *)&a8, &v75, (int *)v70, 0x10000, 0x10000);
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
LABEL_79:
    v65 = *(_DWORD *)(a1 + 188);
    a8 = a10;
    scl_Scale(a1 + 280, v65, (unsigned int)&a8, a1 + 448, 1);
    *(_DWORD *)(a1 + 448) &= 0xFFFFFFC0;
  }
  else
  {
    *(_DWORD *)(a1 + 448) = -64 * a11;
  }
  return 0LL;
}
