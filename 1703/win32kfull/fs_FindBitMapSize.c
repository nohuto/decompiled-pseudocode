/*
 * XREFs of fs_FindBitMapSize @ 0x1C02BAEC8
 * Callers:
 *     lQueryTTOutline @ 0x1C022BD84 (lQueryTTOutline.c)
 *     bGetGlyphMetrics @ 0x1C022C7EC (bGetGlyphMetrics.c)
 *     lGGOBitmap @ 0x1C022D44C (lGGOBitmap.c)
 * Callees:
 *     fs_SetUpKey @ 0x1C02BC1D0 (fs_SetUpKey.c)
 *     CompDiv @ 0x1C02BD158 (CompDiv.c)
 *     mth_DivShiftLong @ 0x1C02BD6F4 (mth_DivShiftLong.c)
 *     mth_FixXYMul @ 0x1C02BD740 (mth_FixXYMul.c)
 *     scl_CalcLSBsAndAdvanceWidths @ 0x1C02BE344 (scl_CalcLSBsAndAdvanceWidths.c)
 *     scl_ScaleAdvanceWidth @ 0x1C02BF378 (scl_ScaleAdvanceWidth.c)
 *     fsc_MeasureGlyph @ 0x1C02C0E00 (fsc_MeasureGlyph.c)
 *     fsc_OverScaleOutline @ 0x1C02C1588 (fsc_OverScaleOutline.c)
 *     fsc_RemoveDups @ 0x1C02C16A0 (fsc_RemoveDups.c)
 *     sbit_GetMetrics @ 0x1C02C4708 (sbit_GetMetrics.c)
 *     fsg_CheckWorkSpaceForFit @ 0x1C02C68A0 (fsg_CheckWorkSpaceForFit.c)
 *     fsg_GetContourData @ 0x1C02C7A20 (fsg_GetContourData.c)
 *     fsg_UpdateWorkSpaceElement @ 0x1C02C8A7C (fsg_UpdateWorkSpaceElement.c)
 *     sfac_ReadGlyphMetrics @ 0x1C02CAD54 (sfac_ReadGlyphMetrics.c)
 */

__int64 __fastcall fs_FindBitMapSize(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  __int16 *v8; // r12
  __int64 v9; // rdi
  int v10; // ebx
  int v11; // r11d
  int v12; // r10d
  int v13; // r9d
  unsigned __int64 v14; // kr00_8
  int v15; // ecx
  int v16; // eax
  int v17; // r8d
  __int16 v18; // ax
  __int16 v19; // r8
  int v20; // eax
  int v21; // eax
  _DWORD *v22; // rdx
  _WORD *v23; // r10
  _WORD *v24; // r11
  __int16 *v25; // rdi
  __int16 *v26; // rsi
  __int16 *v27; // r8
  int v28; // r9d
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // rdx
  _DWORD *v32; // r8
  __int16 i; // dx
  __int16 v34; // r14
  int v35; // esi
  __int16 v36; // bx
  int v37; // eax
  __int16 v38; // di
  __int16 v39; // r8
  __int64 v40; // rdx
  unsigned __int16 v41; // r10
  unsigned __int16 v42; // r10
  unsigned __int16 v43; // r10
  int v44; // eax
  __int16 v45; // r11
  __int16 v46; // r9
  __int16 v47; // ax
  unsigned __int16 v48; // r10
  unsigned __int16 v49; // r10
  unsigned __int16 v50; // r10
  __int16 v51; // r9
  __int64 *v52; // rdx
  int v53; // r14d
  __int64 v54; // r10
  __int64 v55; // r9
  unsigned __int16 v56; // r11
  __int64 v57; // r8
  __int64 v58; // rcx
  unsigned __int16 v59; // ax
  int v60; // esi
  int v61; // edi
  int v62; // ebx
  __int64 v63; // rcx
  int v64; // eax
  int v65; // r14d
  __int64 v66; // rbx
  __int16 v67; // ax
  __int16 v68; // r8
  int v69; // eax
  int v70; // eax
  _DWORD *v71; // rdx
  int v72; // ecx
  unsigned int v73; // edx
  int v74; // ecx
  unsigned int v75; // edx
  int v76; // ecx
  unsigned int v77; // edx
  int v78; // ecx
  unsigned int v79; // edx
  int v80; // ecx
  unsigned int v81; // edx
  int v82; // ecx
  unsigned int v83; // edx
  int v84; // ecx
  unsigned int v85; // edx
  int v86; // ecx
  unsigned int v87; // edx
  int v88; // ecx
  __int16 v89; // ax
  int v90; // ecx
  int v91; // eax
  unsigned int v92; // edx
  unsigned int v93; // r9d
  int v94; // ecx
  __int64 v95; // kr08_8
  int v96; // edx
  _WORD *v97; // r9
  bool v98; // zf
  __int128 v99; // xmm1
  __int128 v100; // xmm0
  int v101; // ecx
  int v102; // edx
  int v103; // ecx
  int v104; // edx
  int v105; // ecx
  int v106; // edx
  int v107; // ecx
  int v108; // edx
  int v109; // ecx
  int v110; // edx
  int v111; // ecx
  int v112; // edx
  int v113; // ecx
  int v114; // edx
  int v115; // ecx
  int v116; // edx
  int v117; // ecx
  __int16 v118; // ax
  int v119; // ecx
  int v120; // eax
  int v121; // ecx
  int v122; // edx
  int v123; // ecx
  int v124; // ecx
  int v125; // ecx
  int v126; // eax
  __int16 v127; // dx
  int v128; // eax
  __int16 v129; // dx
  int v130; // ecx
  int v131; // [rsp+60h] [rbp-49h] BYREF
  int v132; // [rsp+64h] [rbp-45h]
  unsigned __int64 v133; // [rsp+68h] [rbp-41h] BYREF
  int v134; // [rsp+70h] [rbp-39h] BYREF
  int v135; // [rsp+74h] [rbp-35h]
  int v136; // [rsp+78h] [rbp-31h] BYREF
  int v137; // [rsp+7Ch] [rbp-2Dh]
  int v138; // [rsp+80h] [rbp-29h] BYREF
  __int64 v139; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v140[8]; // [rsp+90h] [rbp-19h] BYREF
  _BYTE v141[8]; // [rsp+98h] [rbp-11h] BYREF
  _BYTE v142[8]; // [rsp+A0h] [rbp-9h] BYREF
  char v143; // [rsp+A8h] [rbp-1h] BYREF
  _BYTE v144[8]; // [rsp+B0h] [rbp+7h] BYREF
  _BYTE v145[8]; // [rsp+B8h] [rbp+Fh] BYREF
  _BYTE v146[64]; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v147; // [rsp+110h] [rbp+67h] BYREF
  __int64 v148; // [rsp+120h] [rbp+77h] BYREF
  int v149; // [rsp+128h] [rbp+7Fh] BYREF
  int v150; // [rsp+12Ch] [rbp+83h]

  if ( !a1[1] || !a1[4] || !a1[5] )
    return 4099LL;
  v3 = fs_SetUpKey(a1, 30LL, &v147);
  v4 = v3;
  if ( !v3 )
    return (unsigned int)v147;
  v6 = *(_QWORD *)(v3 + 232);
  v7 = *(_QWORD *)(v6 + 24);
  if ( *(_QWORD *)(v4 + 264) != v7 )
  {
    *(_QWORD *)(v4 + 432) = v7 + *(unsigned int *)(v4 + 480);
    *(_QWORD *)(v4 + 440) = v7 + *(unsigned int *)(v4 + 484);
    *(_QWORD *)(v4 + 448) = v7 + *(unsigned int *)(v4 + 488);
    *(_QWORD *)(v4 + 456) = v7 + *(unsigned int *)(v4 + 492);
    *(_QWORD *)(v4 + 464) = v7 + *(unsigned int *)(v4 + 496);
    *(_QWORD *)(v4 + 472) = v7 + *(unsigned int *)(v4 + 548);
    fsg_UpdateWorkSpaceElement();
    v6 = *(_QWORD *)(v4 + 232);
    *(_OWORD *)(v4 + 240) = *(_OWORD *)v6;
    *(_OWORD *)(v4 + 256) = *(_OWORD *)(v6 + 16);
    *(_OWORD *)(v4 + 272) = *(_OWORD *)(v6 + 32);
    *(_OWORD *)(v4 + 288) = *(_OWORD *)(v6 + 48);
    *(_QWORD *)(v4 + 304) = *(_QWORD *)(v6 + 64);
  }
  v8 = (__int16 *)(v4 + 694);
  v9 = *(_QWORD *)(v6 + 32) + *(unsigned int *)(v4 + 584);
  v139 = v9;
  if ( *(_DWORD *)(v4 + 844) && (*(_BYTE *)(v4 + 1076) & 1) == 0 )
  {
    result = sbit_GetMetrics(
               (int)v4 + 964,
               v4,
               (unsigned int)&v148,
               (unsigned int)&v149,
               (__int64)&v131,
               (__int64)&v136,
               (__int64)&v133,
               (__int64)&v134,
               v4 + 694,
               (__int64)&v147,
               (__int64)&v138,
               (__int64)&v139);
    if ( (_DWORD)result )
      return result;
    v10 = v149;
    v11 = v150;
    v12 = v131;
    v13 = v132;
    v14 = v133;
    v15 = v134;
    *(_DWORD *)(a2 + 72) = (_DWORD)v148 << 10;
    *(_DWORD *)(a2 + 76) = HIDWORD(v148) << 10;
    *(_DWORD *)(a2 + 204) = v136 << 10;
    *(_DWORD *)(a2 + 208) = v137 << 10;
    v16 = v135 << 10;
    *(_DWORD *)(a2 + 184) = v135 << 10;
    *(_DWORD *)(a2 + 192) = v16;
    v13 <<= 10;
    v15 <<= 10;
    v10 <<= 10;
    *(_DWORD *)(a2 + 80) = v10;
    v11 <<= 10;
    v12 <<= 10;
    *(_DWORD *)(a2 + 64) = v10;
    *(_DWORD *)(a2 + 52) = v13;
    *(_DWORD *)(a2 + 212) = (_DWORD)v14 << 10;
    *(_DWORD *)(a2 + 180) = v15;
    *(_DWORD *)(a2 + 60) = v13;
    *(_DWORD *)(a2 + 196) = (_DWORD)v14 << 10;
    *(_DWORD *)(a2 + 188) = v15;
    *(_DWORD *)(a2 + 84) = v11;
    *(_DWORD *)(a2 + 48) = v12;
    *(_DWORD *)(a2 + 216) = HIDWORD(v14) << 10;
    *(_DWORD *)(a2 + 68) = v11;
    *(_DWORD *)(a2 + 56) = v12;
    *(_DWORD *)(a2 + 200) = HIDWORD(v14) << 10;
    result = sfac_ReadGlyphMetrics(
               v4,
               *(unsigned __int16 *)(v4 + 216),
               (int)v4 + 384,
               (int)v4 + 386,
               (__int64)&v149,
               (__int64)&v148);
    if ( (_DWORD)result )
      return result;
    v17 = *(unsigned __int16 *)(v4 + 384);
    *(_DWORD *)(a2 + 44) = 0;
    scl_ScaleAdvanceWidth(v9, a2 + 40, v17, *(_DWORD *)(v4 + 360), *(_WORD *)(v4 + 316), v4 + 320);
    v18 = *(_WORD *)(v4 + 386);
    *(_DWORD *)(a2 + 172) = 0;
    v19 = *(_WORD *)(v4 + 316);
    if ( *(_DWORD *)(v4 + 360) )
    {
      v20 = CompDiv((unsigned int)v19, v18 * (__int64)*(int *)(v9 + 388));
      *(_DWORD *)(a2 + 176) = v20;
      if ( v20 )
        *(_DWORD *)(a2 + 176) = v20 + 0x10000;
    }
    else
    {
      LODWORD(v148) = v18 << 16;
      HIDWORD(v148) = v18 >> 15;
      v21 = CompDiv((unsigned int)v19, v148);
      v22 = (_DWORD *)(a2 + 176);
      *(_DWORD *)(a2 + 176) = v21;
      if ( v21 )
        *v22 = v21 + 0x10000;
      mth_FixXYMul(a2 + 172, v22, v4 + 320);
    }
    v23 = (_WORD *)(a2 + 100);
    *(_WORD *)(a2 + 100) = *(_WORD *)(v4 + 696);
    v24 = (_WORD *)(a2 + 104);
    v25 = (__int16 *)(a2 + 98);
    *(_WORD *)(a2 + 104) = *(_WORD *)(v4 + 700);
    v26 = (__int16 *)(a2 + 102);
    v27 = (__int16 *)(a2 + 96);
    *(_WORD *)(a2 + 98) = *(_WORD *)(v4 + 698);
    v28 = a2 + 24;
    v29 = a2 + 28;
    *(_WORD *)(a2 + 102) = *v8;
    *(_WORD *)(a2 + 96) = v147;
    v30 = v138;
    *(_QWORD *)(a2 + 88) = 0LL;
    *(_DWORD *)(a2 + 20) = v30;
    *(_DWORD *)(a2 + 24) = v139;
    *(_DWORD *)(a2 + 28) = 0;
    *(_DWORD *)(a2 + 32) = 0;
    goto LABEL_75;
  }
  if ( *(_DWORD *)(v4 + 356) )
  {
    v31 = *(_QWORD *)(v4 + 448);
    v32 = *(_DWORD **)v31;
    for ( i = *(_WORD *)(*(_QWORD *)(v31 + 64) + 2LL * (*(__int16 *)(v31 + 80) - 1)); i >= 0; --i )
      ++*v32++;
  }
  fsg_GetContourData(
    v4 + 432,
    0,
    0,
    (unsigned int)&v143,
    (__int64)v144,
    (__int64)v141,
    (__int64)v142,
    (__int64)v145,
    (__int64)v146,
    (__int64)v140);
  result = fsc_RemoveDups(v140);
  if ( !(_DWORD)result )
  {
    v34 = 1;
    v35 = v4 + 688;
    v36 = 0;
    if ( *(_DWORD *)(v4 + 836) )
    {
      result = fsc_OverScaleOutline(v140, *(unsigned __int16 *)(v4 + 832));
      if ( (_DWORD)result )
        return result;
      v34 = *(_WORD *)(v4 + 832);
      v35 = v4 + 784;
    }
    v37 = *(_DWORD *)(v4 + 944);
    *(_QWORD *)(v4 + 760) = *(_QWORD *)(*(_QWORD *)(v4 + 232) + 24LL) + *(unsigned int *)(v4 + 548);
    *(_DWORD *)(v4 + 736) = v37;
    if ( *(_DWORD *)(v4 + 1068) )
    {
      if ( *(_DWORD *)(v4 + 836) )
      {
        v38 = *(_WORD *)(v4 + 832) * *(_WORD *)(v4 + 1072);
        v36 = *(_WORD *)(v4 + 832) * *(_WORD *)(v4 + 1074);
      }
      else
      {
        v39 = *(_WORD *)(v4 + 1076);
        v36 = *(_WORD *)(v4 + 1074);
        if ( (v39 & 1) != 0 )
        {
          v38 = 6 * *(_WORD *)(v4 + 1072);
          if ( (v39 & 0x10) != 0 )
            v36 *= 5;
        }
        else
        {
          v38 = *(_WORD *)(v4 + 1072);
        }
      }
    }
    else
    {
      v38 = 0;
    }
    result = fsc_MeasureGlyph((unsigned int)v140, v35, (int)v4 + 736, *(unsigned __int16 *)(v4 + 312), v34, v38, v36);
    if ( (_DWORD)result == 4869 )
    {
      *(_WORD *)(v4 + 312) &= ~4u;
      result = fsc_MeasureGlyph((unsigned int)v140, v35, (int)v4 + 736, *(unsigned __int16 *)(v4 + 312), v34, v38, v36);
    }
    if ( !(_DWORD)result )
    {
      if ( !*(_DWORD *)(v4 + 836) )
        goto LABEL_45;
      v40 = *(unsigned __int16 *)(v4 + 832);
      if ( *(_DWORD *)(v4 + 840) )
      {
        *(_WORD *)(v4 + 696) = (int)(mth_DivShiftLong(*(unsigned int *)(v4 + 804), v40) + 31) >> 6;
        *(_WORD *)(v4 + 700) = (int)(mth_DivShiftLong(*(unsigned int *)(v4 + 808), v41) + 32) >> 6;
        *(_WORD *)(v4 + 698) = (int)(mth_DivShiftLong(*(unsigned int *)(v4 + 812), v42) + 31) >> 6;
        v44 = (int)(mth_DivShiftLong(*(unsigned int *)(v4 + 816), v43) + 32) >> 6;
        *v8 = v44;
        if ( v46 == v45 )
          *(_WORD *)(v4 + 700) = v45 + 1;
        if ( *(_WORD *)(v4 + 698) != (_WORD)v44 )
        {
LABEL_45:
          scl_CalcLSBsAndAdvanceWidths(
            *(_QWORD *)(v4 + 448),
            *(__int16 *)(v4 + 696) << 6,
            *v8 << 6,
            (unsigned int)&v148,
            (__int64)&v149,
            (__int64)&v131,
            (__int64)&v147,
            (__int64)&v136);
          *(_DWORD *)(a2 + 72) = (_DWORD)v148 << 10;
          *(_DWORD *)(a2 + 76) = HIDWORD(v148) << 10;
          *(_DWORD *)(a2 + 80) = v149 << 10;
          *(_DWORD *)(a2 + 84) = v150 << 10;
          *(_DWORD *)(a2 + 48) = v131 << 10;
          *(_DWORD *)(a2 + 52) = v132 << 10;
          *(_DWORD *)(a2 + 64) = (_DWORD)v147 << 10;
          *(_DWORD *)(a2 + 68) = HIDWORD(v147) << 10;
          *(_DWORD *)(a2 + 56) = v136 << 10;
          *(_DWORD *)(a2 + 60) = v137 << 10;
          v52 = *(__int64 **)(v4 + 448);
          v53 = *(__int16 *)(v4 + 696) << 6;
          v54 = *v52;
          v55 = v52[1];
          v56 = *(_WORD *)(v52[8] + 2LL * (*((__int16 *)v52 + 40) - 1));
          v57 = (unsigned __int16)(v56 + 4);
          v58 = (unsigned __int16)(v56 + 3);
          v59 = v56 + 8;
          v56 += 7;
          v60 = v53 - *(_DWORD *)(*v52 + 4 * v58);
          v61 = *(_DWORD *)(*v52 + 4 * v58) - *(_DWORD *)(*v52 + 4 * v57);
          v62 = *(_DWORD *)(v55 + 4 * v58) - *(_DWORD *)(v55 + 4 * v57);
          LODWORD(v57) = (*v8 << 6) - *(_DWORD *)(v55 + 4 * v58);
          v63 = v59;
          v133 = __PAIR64__(v57, v60);
          LODWORD(v52) = *(_DWORD *)(v55 + 4LL * v59);
          v64 = *(_DWORD *)(v55 + 4LL * v56);
          v134 = v53 - *(_DWORD *)(v54 + 4LL * v56) - *(_DWORD *)(v54 + 4 * v63);
          LODWORD(v52) = (_DWORD)v52 - v64;
          v65 = v134 << 10;
          *(_DWORD *)(a2 + 200) = (_DWORD)v57 << 10;
          *(_DWORD *)(a2 + 180) = v65;
          *(_DWORD *)(a2 + 188) = v65;
          v135 = (int)v52;
          *(_DWORD *)(a2 + 192) = (_DWORD)v52 << 10;
          *(_DWORD *)(a2 + 216) = (_DWORD)v57 << 10;
          *(_DWORD *)(a2 + 184) = (_DWORD)v52 << 10;
          *(_DWORD *)(a2 + 208) = v62 << 10;
          v66 = v139;
          v60 <<= 10;
          LODWORD(v63) = v139;
          *(_DWORD *)(a2 + 212) = v60;
          *(_DWORD *)(a2 + 196) = v60;
          *(_DWORD *)(a2 + 204) = v61 << 10;
          LODWORD(v57) = *(unsigned __int16 *)(v4 + 384);
          *(_DWORD *)(a2 + 44) = 0;
          scl_ScaleAdvanceWidth(v63, a2 + 40, v57, *(_DWORD *)(v4 + 360), *(_WORD *)(v4 + 316), v4 + 320);
          v67 = *(_WORD *)(v4 + 386);
          *(_DWORD *)(a2 + 172) = 0;
          v68 = *(_WORD *)(v4 + 316);
          if ( *(_DWORD *)(v4 + 360) )
          {
            v69 = CompDiv((unsigned int)v68, v67 * (__int64)*(int *)(v66 + 388));
            *(_DWORD *)(a2 + 176) = v69;
            if ( v69 )
              *(_DWORD *)(a2 + 176) = v69 + 0x10000;
          }
          else
          {
            LODWORD(v147) = v67 << 16;
            HIDWORD(v147) = v67 >> 15;
            v70 = CompDiv((unsigned int)v68, v147);
            v71 = (_DWORD *)(a2 + 176);
            *(_DWORD *)(a2 + 176) = v70;
            if ( v70 )
              *v71 = v70 + 0x10000;
            mth_FixXYMul(a2 + 172, v71, v4 + 320);
          }
          v26 = (__int16 *)(a2 + 102);
          *(_OWORD *)(v4 + 848) = *(_OWORD *)(a2 + 40);
          *(_OWORD *)(v4 + 864) = *(_OWORD *)(a2 + 56);
          *(_OWORD *)(v4 + 880) = *(_OWORD *)(a2 + 72);
          *(_OWORD *)(v4 + 896) = *(_OWORD *)(a2 + 172);
          *(_OWORD *)(v4 + 912) = *(_OWORD *)(a2 + 188);
          v25 = (__int16 *)(a2 + 98);
          *(_OWORD *)(v4 + 928) = *(_OWORD *)(a2 + 204);
          *(_WORD *)(a2 + 98) = *(_WORD *)(v4 + 698);
          *(_WORD *)(a2 + 102) = *v8;
          *(_QWORD *)(a2 + 88) = 0LL;
          *(_WORD *)(a2 + 232) = 0;
          if ( (*(_BYTE *)(v4 + 1076) & 1) == 0 )
          {
            v23 = (_WORD *)(a2 + 100);
            *(_WORD *)(a2 + 100) = *(_WORD *)(v4 + 696);
            v24 = (_WORD *)(a2 + 104);
            v97 = (_WORD *)(v4 + 688);
            *(_WORD *)(a2 + 104) = *(_WORD *)(v4 + 700);
            v27 = (__int16 *)(a2 + 96);
            *(_WORD *)(a2 + 96) = *(_WORD *)(v4 + 688);
            goto LABEL_72;
          }
          v72 = *(_DWORD *)(a2 + 80) + 3;
          *(_DWORD *)(a2 + 72) = (*(_DWORD *)(a2 + 72) + 3) / 6;
          v73 = (unsigned __int64)(715827883LL * v72) >> 32;
          v74 = *(_DWORD *)(a2 + 48) + 3;
          *(_DWORD *)(a2 + 80) = (v73 >> 31) + v73;
          v75 = (unsigned __int64)(715827883LL * v74) >> 32;
          v76 = *(_DWORD *)(a2 + 64) + 3;
          *(_DWORD *)(a2 + 48) = (v75 >> 31) + v75;
          v77 = (unsigned __int64)(715827883LL * v76) >> 32;
          v78 = *(_DWORD *)(a2 + 56) + 3;
          *(_DWORD *)(a2 + 64) = (v77 >> 31) + v77;
          v79 = (unsigned __int64)(715827883LL * v78) >> 32;
          v80 = *(_DWORD *)(a2 + 204) + 3;
          *(_DWORD *)(a2 + 56) = (v79 >> 31) + v79;
          v81 = (unsigned __int64)(715827883LL * v80) >> 32;
          v82 = *(_DWORD *)(a2 + 212) + 3;
          *(_DWORD *)(a2 + 204) = (v81 >> 31) + v81;
          v83 = (unsigned __int64)(715827883LL * v82) >> 32;
          v84 = *(_DWORD *)(a2 + 180) + 3;
          *(_DWORD *)(a2 + 212) = (v83 >> 31) + v83;
          v85 = (unsigned __int64)(715827883LL * v84) >> 32;
          v86 = *(_DWORD *)(a2 + 196) + 3;
          *(_DWORD *)(a2 + 180) = (v85 >> 31) + v85;
          v87 = (unsigned __int64)(715827883LL * v86) >> 32;
          v88 = *(_DWORD *)(a2 + 188) + 3;
          *(_DWORD *)(a2 + 196) = (v87 >> 31) + v87;
          *(_DWORD *)(a2 + 188) = v88 / 6;
          v89 = *(_WORD *)(v4 + 696);
          if ( v89 >= 0 )
          {
            v90 = v89;
            v91 = 715827883;
          }
          else
          {
            v90 = 5 - v89;
            v91 = -715827883;
          }
          v92 = (unsigned __int64)(v90 * (__int64)v91) >> 32;
          v23 = (_WORD *)(a2 + 100);
          v93 = v92 + (v92 >> 31);
          *(_WORD *)(a2 + 100) = v92 + (v92 >> 31);
          v94 = *(__int16 *)(v4 + 700);
          if ( v94 + 5 >= 0 )
            v95 = 715827883LL * (v94 + 5);
          else
            v95 = 715827883LL * *(__int16 *)(v4 + 700);
          v24 = (_WORD *)(a2 + 104);
          v27 = (__int16 *)(a2 + 96);
          v96 = (HIDWORD(v95) >> 31) + HIDWORD(v95);
          *(_WORD *)(a2 + 104) = v96;
          LOWORD(v96) = v96 - v93;
          v97 = (_WORD *)(v4 + 688);
          *(_WORD *)(a2 + 96) = (v96 + 3) & 0xFFFC;
          v98 = (*(_BYTE *)(v4 + 1076) & 0x10) == 0;
          v99 = *(_OWORD *)(v4 + 704);
          *(_OWORD *)(v4 + 784) = *(_OWORD *)(v4 + 688);
          v100 = *(_OWORD *)(v4 + 720);
          *(_OWORD *)(v4 + 800) = v99;
          *(_OWORD *)(v4 + 816) = v100;
          *(_WORD *)(v4 + 688) = *(_WORD *)(a2 + 96);
          *(_WORD *)(v4 + 696) = *v23;
          *(_WORD *)(v4 + 700) = *(_WORD *)(a2 + 104);
          if ( !v98 )
          {
            v101 = *(_DWORD *)(a2 + 84) + 2;
            *(_DWORD *)(a2 + 76) = (*(_DWORD *)(a2 + 76) + 2) / 5;
            v102 = (unsigned __int64)(1717986919LL * v101) >> 32;
            v103 = *(_DWORD *)(a2 + 52) + 2;
            *(_DWORD *)(a2 + 84) = ((unsigned int)v102 >> 31) + (v102 >> 1);
            v104 = (unsigned __int64)(1717986919LL * v103) >> 32;
            v105 = *(_DWORD *)(a2 + 68) + 2;
            *(_DWORD *)(a2 + 52) = ((unsigned int)v104 >> 31) + (v104 >> 1);
            v106 = (unsigned __int64)(1717986919LL * v105) >> 32;
            v107 = *(_DWORD *)(a2 + 60) + 2;
            *(_DWORD *)(a2 + 68) = ((unsigned int)v106 >> 31) + (v106 >> 1);
            v108 = (unsigned __int64)(1717986919LL * v107) >> 32;
            v109 = *(_DWORD *)(a2 + 208) + 2;
            *(_DWORD *)(a2 + 60) = ((unsigned int)v108 >> 31) + (v108 >> 1);
            v110 = (unsigned __int64)(1717986919LL * v109) >> 32;
            v111 = *(_DWORD *)(a2 + 216) + 2;
            *(_DWORD *)(a2 + 208) = ((unsigned int)v110 >> 31) + (v110 >> 1);
            v112 = (unsigned __int64)(1717986919LL * v111) >> 32;
            v113 = *(_DWORD *)(a2 + 184) + 2;
            *(_DWORD *)(a2 + 216) = ((unsigned int)v112 >> 31) + (v112 >> 1);
            v114 = (unsigned __int64)(1717986919LL * v113) >> 32;
            v115 = *(_DWORD *)(a2 + 200) + 2;
            *(_DWORD *)(a2 + 184) = ((unsigned int)v114 >> 31) + (v114 >> 1);
            v116 = v115 / 5;
            v117 = *(_DWORD *)(a2 + 192);
            *(_DWORD *)(a2 + 200) = v116;
            *(_DWORD *)(a2 + 192) = (v117 + 2) / 5;
            v118 = *(_WORD *)(v4 + 698);
            if ( v118 >= 0 )
            {
              v119 = v118;
              v120 = 1717986919;
            }
            else
            {
              v119 = 4 - v118;
              v120 = -1717986919;
            }
            *v25 = ((unsigned int)((unsigned __int64)(v119 * (__int64)v120) >> 32) >> 31)
                 + ((int)((unsigned __int64)(v119 * (__int64)v120) >> 32) >> 1);
            v121 = *v8;
            if ( v121 + 4 >= 0 )
              LOWORD(v122) = (__int16)(v121 + 4) / 5;
            else
              v122 = v121 / 5;
            *v26 = v122;
            *(_WORD *)(a2 + 232) = *v8 - *(_WORD *)(v4 + 698);
            v123 = *v8;
            if ( *v8 < 0 )
            {
              v125 = -v123 % 5;
              *(_WORD *)(a2 + 234) = 5 - v125;
              if ( (unsigned __int16)v125 > 5u && (_WORD)v125 != 0 )
LABEL_69:
                *(_WORD *)(a2 + 234) = 5;
            }
            else
            {
              v124 = v123 % 5;
              *(_WORD *)(a2 + 234) = v124;
              if ( !(_WORD)v124 )
                goto LABEL_69;
            }
          }
          v126 = *(_DWORD *)(v4 + 820);
          *(_DWORD *)(v4 + 724) = *v27 * (*v8 - *(__int16 *)(v4 + 698));
          *(_DWORD *)(a2 + 32) = v126;
LABEL_72:
          if ( *(_DWORD *)(v4 + 836) )
          {
            v127 = (*(_WORD *)(v4 + 700) - *(_WORD *)(v4 + 696) + 3) & 0xFFFC;
            *v27 = v127;
            v128 = *(_DWORD *)(v4 + 820);
            *(_DWORD *)(v4 + 724) = v127 * (*(__int16 *)(v4 + 694) - *(__int16 *)(v4 + 698));
            *(_DWORD *)(a2 + 32) = v128;
          }
          v29 = a2 + 28;
          *v97 = *v27;
          v28 = a2 + 24;
          *(_DWORD *)(a2 + 20) = *(_DWORD *)(v4 + 724);
          *(_DWORD *)(a2 + 24) = *(_DWORD *)(v4 + 740);
          *(_DWORD *)(a2 + 28) = *(_DWORD *)(v4 + 744);
LABEL_75:
          if ( *(_DWORD *)(v4 + 1152) )
          {
            v129 = (*v24 - *v23 + 3) & 0xFFFC;
            v130 = v129 * (*v26 - *v25);
            *v27 = v129;
            *(_DWORD *)(a2 + 20) = v130;
          }
          fsg_CheckWorkSpaceForFit(v4 + 480, *(_DWORD *)(v4 + 944), *(_DWORD *)(v4 + 736), v28, v29);
          *(_DWORD *)(v4 + 680) = 0;
          result = 0LL;
          *(_DWORD *)(v4 + 948) = 0;
          *(_DWORD *)(v4 + 420) = 62;
          return result;
        }
        v47 = v44 + 1;
      }
      else
      {
        *(_WORD *)(v4 + 696) = mth_DivShiftLong((unsigned int)*(__int16 *)(v4 + 792), v40);
        *(_WORD *)(v4 + 700) = mth_DivShiftLong((unsigned int)(__int16)(v48 + *(_WORD *)(v4 + 796) - 1), v48);
        *(_WORD *)(v4 + 698) = mth_DivShiftLong((unsigned int)*(__int16 *)(v4 + 794), v49);
        v47 = mth_DivShiftLong((unsigned int)(__int16)(v50 + *(_WORD *)(v4 + 790) - v51), v50);
      }
      *v8 = v47;
      goto LABEL_45;
    }
  }
  return result;
}
