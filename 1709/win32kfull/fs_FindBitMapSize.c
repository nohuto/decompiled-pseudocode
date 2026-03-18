/*
 * XREFs of fs_FindBitMapSize @ 0x1C02B4CD4
 * Callers:
 *     lQueryTTOutline @ 0x1C022D294 (lQueryTTOutline.c)
 *     bGetGlyphMetrics @ 0x1C022DCFC (bGetGlyphMetrics.c)
 *     lGGOBitmap @ 0x1C022E970 (lGGOBitmap.c)
 * Callees:
 *     fs_SetUpKey @ 0x1C02B5FE4 (fs_SetUpKey.c)
 *     CompDiv @ 0x1C02B6F58 (CompDiv.c)
 *     mth_DivShiftLong @ 0x1C02B74FC (mth_DivShiftLong.c)
 *     mth_FixXYMul @ 0x1C02B7548 (mth_FixXYMul.c)
 *     scl_CalcLSBsAndAdvanceWidths @ 0x1C02B8138 (scl_CalcLSBsAndAdvanceWidths.c)
 *     scl_ScaleAdvanceWidth @ 0x1C02B917C (scl_ScaleAdvanceWidth.c)
 *     fsc_MeasureGlyph @ 0x1C02BAC28 (fsc_MeasureGlyph.c)
 *     fsc_OverScaleOutline @ 0x1C02BB3B0 (fsc_OverScaleOutline.c)
 *     fsc_RemoveDups @ 0x1C02BB4C8 (fsc_RemoveDups.c)
 *     sbit_GetMetrics @ 0x1C02BE560 (sbit_GetMetrics.c)
 *     fsg_CheckWorkSpaceForFit @ 0x1C02C06AC (fsg_CheckWorkSpaceForFit.c)
 *     fsg_GetContourData @ 0x1C02C1828 (fsg_GetContourData.c)
 *     fsg_UpdateWorkSpaceElement @ 0x1C02C2890 (fsg_UpdateWorkSpaceElement.c)
 *     sfac_ReadGlyphMetrics @ 0x1C02C4B74 (sfac_ReadGlyphMetrics.c)
 */

__int64 __fastcall fs_FindBitMapSize(_QWORD *a1, __int64 a2)
{
  __int16 v2; // bx
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int16 *v9; // r12
  __int64 v10; // rdi
  __int16 v11; // r14
  int v12; // ebx
  int v13; // r11d
  int v14; // r10d
  int v15; // r9d
  unsigned __int64 v16; // kr00_8
  int v17; // ecx
  int v18; // eax
  int v19; // r8d
  __int16 v20; // ax
  __int16 v21; // r8
  int v22; // eax
  int v23; // eax
  _DWORD *v24; // rdx
  _WORD *v25; // r10
  _WORD *v26; // r11
  __int16 *v27; // rdi
  __int16 *v28; // rsi
  __int16 *v29; // r8
  int v30; // r9d
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rdx
  _DWORD *v34; // r8
  __int16 i; // dx
  int v36; // esi
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
  __int64 v53; // r10
  __int64 v54; // r9
  unsigned __int16 v55; // r11
  __int64 v56; // r8
  __int64 v57; // rcx
  int v58; // edi
  int v59; // esi
  unsigned __int16 v60; // ax
  int v61; // ebx
  int v62; // r14d
  __int64 v63; // rbx
  __int16 v64; // ax
  __int16 v65; // r8
  int v66; // eax
  int v67; // eax
  _DWORD *v68; // rdx
  int v69; // ecx
  unsigned int v70; // edx
  int v71; // ecx
  unsigned int v72; // edx
  int v73; // ecx
  unsigned int v74; // edx
  int v75; // ecx
  unsigned int v76; // edx
  int v77; // ecx
  unsigned int v78; // edx
  int v79; // ecx
  unsigned int v80; // edx
  int v81; // ecx
  unsigned int v82; // edx
  int v83; // ecx
  unsigned int v84; // edx
  int v85; // ecx
  __int16 v86; // ax
  int v87; // ecx
  int v88; // eax
  unsigned int v89; // edx
  unsigned int v90; // r9d
  int v91; // ecx
  __int64 v92; // kr08_8
  int v93; // edx
  _WORD *v94; // r9
  bool v95; // zf
  __int128 v96; // xmm1
  __int128 v97; // xmm0
  int v98; // ecx
  int v99; // edx
  int v100; // ecx
  int v101; // edx
  int v102; // ecx
  int v103; // edx
  int v104; // ecx
  int v105; // edx
  int v106; // ecx
  int v107; // edx
  int v108; // ecx
  int v109; // edx
  int v110; // ecx
  int v111; // edx
  int v112; // ecx
  int v113; // edx
  int v114; // ecx
  __int16 v115; // ax
  int v116; // ecx
  int v117; // eax
  int v118; // ecx
  int v119; // edx
  int v120; // ecx
  int v121; // ecx
  int v122; // ecx
  int v123; // eax
  __int16 v124; // dx
  int v125; // eax
  __int16 v126; // dx
  int v127; // ecx
  int v128; // [rsp+60h] [rbp-49h] BYREF
  int v129; // [rsp+64h] [rbp-45h]
  unsigned __int64 v130; // [rsp+68h] [rbp-41h] BYREF
  int v131; // [rsp+70h] [rbp-39h] BYREF
  int v132; // [rsp+74h] [rbp-35h]
  int v133; // [rsp+78h] [rbp-31h] BYREF
  int v134; // [rsp+7Ch] [rbp-2Dh]
  int v135; // [rsp+80h] [rbp-29h] BYREF
  __int64 v136; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v137[8]; // [rsp+90h] [rbp-19h] BYREF
  _BYTE v138[8]; // [rsp+98h] [rbp-11h] BYREF
  _BYTE v139[8]; // [rsp+A0h] [rbp-9h] BYREF
  char v140; // [rsp+A8h] [rbp-1h] BYREF
  _BYTE v141[8]; // [rsp+B0h] [rbp+7h] BYREF
  _BYTE v142[8]; // [rsp+B8h] [rbp+Fh] BYREF
  _BYTE v143[64]; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v144; // [rsp+110h] [rbp+67h] BYREF
  __int64 v145; // [rsp+120h] [rbp+77h] BYREF
  int v146; // [rsp+128h] [rbp+7Fh] BYREF
  int v147; // [rsp+12Ch] [rbp+83h]

  v2 = 0;
  if ( !a1[1] || !a1[4] || !a1[5] )
    return 4099LL;
  v4 = fs_SetUpKey(a1, 30LL, &v144);
  v5 = v4;
  if ( !v4 )
    return (unsigned int)v144;
  v7 = *(_QWORD *)(v4 + 232);
  v8 = *(_QWORD *)(v7 + 24);
  if ( *(_QWORD *)(v5 + 264) != v8 )
  {
    *(_QWORD *)(v5 + 432) = v8 + *(unsigned int *)(v5 + 480);
    *(_QWORD *)(v5 + 440) = v8 + *(unsigned int *)(v5 + 484);
    *(_QWORD *)(v5 + 448) = v8 + *(unsigned int *)(v5 + 488);
    *(_QWORD *)(v5 + 456) = v8 + *(unsigned int *)(v5 + 492);
    *(_QWORD *)(v5 + 464) = v8 + *(unsigned int *)(v5 + 496);
    *(_QWORD *)(v5 + 472) = v8 + *(unsigned int *)(v5 + 548);
    fsg_UpdateWorkSpaceElement();
    v7 = *(_QWORD *)(v5 + 232);
    *(_OWORD *)(v5 + 240) = *(_OWORD *)v7;
    *(_OWORD *)(v5 + 256) = *(_OWORD *)(v7 + 16);
    *(_OWORD *)(v5 + 272) = *(_OWORD *)(v7 + 32);
    *(_OWORD *)(v5 + 288) = *(_OWORD *)(v7 + 48);
    *(_QWORD *)(v5 + 304) = *(_QWORD *)(v7 + 64);
  }
  v9 = (__int16 *)(v5 + 694);
  v10 = *(_QWORD *)(v7 + 32) + *(unsigned int *)(v5 + 584);
  v11 = 1;
  v136 = v10;
  if ( *(_DWORD *)(v5 + 844) && (*(_BYTE *)(v5 + 1076) & 1) == 0 )
  {
    result = sbit_GetMetrics(
               (int)v5 + 964,
               v5,
               (unsigned int)&v145,
               (unsigned int)&v146,
               (__int64)&v128,
               (__int64)&v133,
               (__int64)&v130,
               (__int64)&v131,
               v5 + 694,
               (__int64)&v144,
               (__int64)&v135,
               (__int64)&v136);
    if ( (_DWORD)result )
      return result;
    v12 = v146;
    v13 = v147;
    v14 = v128;
    v15 = v129;
    v16 = v130;
    v17 = v131;
    *(_DWORD *)(a2 + 72) = (_DWORD)v145 << 10;
    *(_DWORD *)(a2 + 76) = HIDWORD(v145) << 10;
    *(_DWORD *)(a2 + 204) = v133 << 10;
    *(_DWORD *)(a2 + 208) = v134 << 10;
    v18 = v132 << 10;
    *(_DWORD *)(a2 + 184) = v132 << 10;
    *(_DWORD *)(a2 + 192) = v18;
    v15 <<= 10;
    v17 <<= 10;
    v12 <<= 10;
    *(_DWORD *)(a2 + 80) = v12;
    v13 <<= 10;
    v14 <<= 10;
    *(_DWORD *)(a2 + 64) = v12;
    *(_DWORD *)(a2 + 52) = v15;
    *(_DWORD *)(a2 + 212) = (_DWORD)v16 << 10;
    *(_DWORD *)(a2 + 180) = v17;
    *(_DWORD *)(a2 + 60) = v15;
    *(_DWORD *)(a2 + 196) = (_DWORD)v16 << 10;
    *(_DWORD *)(a2 + 188) = v17;
    *(_DWORD *)(a2 + 84) = v13;
    *(_DWORD *)(a2 + 48) = v14;
    *(_DWORD *)(a2 + 216) = HIDWORD(v16) << 10;
    *(_DWORD *)(a2 + 68) = v13;
    *(_DWORD *)(a2 + 56) = v14;
    *(_DWORD *)(a2 + 200) = HIDWORD(v16) << 10;
    result = sfac_ReadGlyphMetrics(
               v5,
               *(unsigned __int16 *)(v5 + 216),
               (int)v5 + 384,
               (int)v5 + 386,
               (__int64)&v146,
               (__int64)&v145);
    if ( (_DWORD)result )
      return result;
    v19 = *(unsigned __int16 *)(v5 + 384);
    *(_DWORD *)(a2 + 44) = 0;
    scl_ScaleAdvanceWidth(v10, a2 + 40, v19, *(_DWORD *)(v5 + 360), *(_WORD *)(v5 + 316), v5 + 320);
    v20 = *(_WORD *)(v5 + 386);
    *(_DWORD *)(a2 + 172) = 0;
    v21 = *(_WORD *)(v5 + 316);
    if ( *(_DWORD *)(v5 + 360) )
    {
      v22 = CompDiv((unsigned int)v21, v20 * (__int64)*(int *)(v10 + 388));
      *(_DWORD *)(a2 + 176) = v22;
      if ( v22 )
        *(_DWORD *)(a2 + 176) = v22 + 0x10000;
    }
    else
    {
      LODWORD(v145) = v20 << 16;
      HIDWORD(v145) = v20 >> 15;
      v23 = CompDiv((unsigned int)v21, v145);
      v24 = (_DWORD *)(a2 + 176);
      *(_DWORD *)(a2 + 176) = v23;
      if ( v23 )
        *v24 = v23 + 0x10000;
      mth_FixXYMul(a2 + 172, v24, v5 + 320);
    }
    v25 = (_WORD *)(a2 + 100);
    *(_WORD *)(a2 + 100) = *(_WORD *)(v5 + 696);
    v26 = (_WORD *)(a2 + 104);
    v27 = (__int16 *)(a2 + 98);
    *(_WORD *)(a2 + 104) = *(_WORD *)(v5 + 700);
    v28 = (__int16 *)(a2 + 102);
    v29 = (__int16 *)(a2 + 96);
    *(_WORD *)(a2 + 98) = *(_WORD *)(v5 + 698);
    v30 = a2 + 24;
    v31 = a2 + 28;
    *(_WORD *)(a2 + 102) = *v9;
    *(_WORD *)(a2 + 96) = v144;
    v32 = v135;
    *(_QWORD *)(a2 + 88) = 0LL;
    *(_DWORD *)(a2 + 20) = v32;
    *(_DWORD *)(a2 + 24) = v136;
    *(_DWORD *)(a2 + 28) = 0;
    *(_DWORD *)(a2 + 32) = 0;
    goto LABEL_75;
  }
  if ( *(_DWORD *)(v5 + 356) )
  {
    v33 = *(_QWORD *)(v5 + 448);
    v34 = *(_DWORD **)v33;
    for ( i = *(_WORD *)(*(_QWORD *)(v33 + 64) + 2LL * (*(__int16 *)(v33 + 80) - 1)); i >= 0; --i )
      ++*v34++;
  }
  fsg_GetContourData(
    v5 + 432,
    0,
    0,
    (unsigned int)&v140,
    (__int64)v141,
    (__int64)v138,
    (__int64)v139,
    (__int64)v142,
    (__int64)v143,
    (__int64)v137);
  result = fsc_RemoveDups(v137);
  if ( !(_DWORD)result )
  {
    v36 = v5 + 688;
    if ( *(_DWORD *)(v5 + 836) )
    {
      result = fsc_OverScaleOutline(v137, *(unsigned __int16 *)(v5 + 832));
      if ( (_DWORD)result )
        return result;
      v11 = *(_WORD *)(v5 + 832);
      v36 = v5 + 784;
    }
    v37 = *(_DWORD *)(v5 + 944);
    *(_QWORD *)(v5 + 760) = *(_QWORD *)(*(_QWORD *)(v5 + 232) + 24LL) + *(unsigned int *)(v5 + 548);
    *(_DWORD *)(v5 + 736) = v37;
    if ( *(_DWORD *)(v5 + 1068) )
    {
      if ( *(_DWORD *)(v5 + 836) )
      {
        v38 = *(_WORD *)(v5 + 832) * *(_WORD *)(v5 + 1072);
        v2 = *(_WORD *)(v5 + 832) * *(_WORD *)(v5 + 1074);
      }
      else
      {
        v39 = *(_WORD *)(v5 + 1076);
        v2 = *(_WORD *)(v5 + 1074);
        if ( (v39 & 1) != 0 )
        {
          v38 = 6 * *(_WORD *)(v5 + 1072);
          if ( (v39 & 0x10) != 0 )
            v2 *= 5;
        }
        else
        {
          v38 = *(_WORD *)(v5 + 1072);
        }
      }
    }
    else
    {
      v38 = 0;
    }
    result = fsc_MeasureGlyph((unsigned int)v137, v36, (int)v5 + 736, *(unsigned __int16 *)(v5 + 312), v11, v38, v2);
    if ( (_DWORD)result == 4869 )
    {
      *(_WORD *)(v5 + 312) &= ~4u;
      result = fsc_MeasureGlyph((unsigned int)v137, v36, (int)v5 + 736, *(unsigned __int16 *)(v5 + 312), v11, v38, v2);
    }
    if ( !(_DWORD)result )
    {
      if ( !*(_DWORD *)(v5 + 836) )
        goto LABEL_45;
      v40 = *(unsigned __int16 *)(v5 + 832);
      if ( *(_DWORD *)(v5 + 840) )
      {
        *(_WORD *)(v5 + 696) = (int)(mth_DivShiftLong(*(unsigned int *)(v5 + 804), v40) + 31) >> 6;
        *(_WORD *)(v5 + 700) = (int)(mth_DivShiftLong(*(unsigned int *)(v5 + 808), v41) + 32) >> 6;
        *(_WORD *)(v5 + 698) = (int)(mth_DivShiftLong(*(unsigned int *)(v5 + 812), v42) + 31) >> 6;
        v44 = (int)(mth_DivShiftLong(*(unsigned int *)(v5 + 816), v43) + 32) >> 6;
        *v9 = v44;
        if ( v46 == v45 )
          *(_WORD *)(v5 + 700) = v45 + 1;
        if ( *(_WORD *)(v5 + 698) != (_WORD)v44 )
        {
LABEL_45:
          scl_CalcLSBsAndAdvanceWidths(
            *(_QWORD *)(v5 + 448),
            *(__int16 *)(v5 + 696) << 6,
            *v9 << 6,
            (unsigned int)&v145,
            (__int64)&v146,
            (__int64)&v128,
            (__int64)&v144,
            (__int64)&v133);
          *(_DWORD *)(a2 + 72) = (_DWORD)v145 << 10;
          *(_DWORD *)(a2 + 76) = HIDWORD(v145) << 10;
          *(_DWORD *)(a2 + 80) = v146 << 10;
          *(_DWORD *)(a2 + 84) = v147 << 10;
          *(_DWORD *)(a2 + 48) = v128 << 10;
          *(_DWORD *)(a2 + 52) = v129 << 10;
          *(_DWORD *)(a2 + 64) = (_DWORD)v144 << 10;
          *(_DWORD *)(a2 + 68) = HIDWORD(v144) << 10;
          *(_DWORD *)(a2 + 56) = v133 << 10;
          *(_DWORD *)(a2 + 60) = v134 << 10;
          v52 = *(__int64 **)(v5 + 448);
          v53 = *v52;
          v54 = v52[1];
          v55 = *(_WORD *)(v52[8] + 2LL * (*((__int16 *)v52 + 40) - 1));
          v56 = (unsigned __int16)(v55 + 4);
          v57 = (unsigned __int16)(v55 + 3);
          v58 = *(_DWORD *)(*v52 + 4 * v57) - *(_DWORD *)(*v52 + 4 * v56);
          v59 = (*(__int16 *)(v5 + 696) << 6) - *(_DWORD *)(*v52 + 4 * v57);
          LODWORD(v52) = *(_DWORD *)(v54 + 4 * v57);
          v60 = v55 + 8;
          v55 += 7;
          v61 = (_DWORD)v52 - *(_DWORD *)(v54 + 4 * v56);
          LODWORD(v56) = (*v9 << 6) - (_DWORD)v52;
          v131 = (*(__int16 *)(v5 + 696) << 6) - *(_DWORD *)(v53 + 4LL * v55) - *(_DWORD *)(v53 + 4LL * v60);
          v62 = v131;
          v130 = __PAIR64__(v56, v59);
          LODWORD(v52) = *(_DWORD *)(v54 + 4LL * v60) - *(_DWORD *)(v54 + 4LL * v55);
          *(_DWORD *)(a2 + 200) = (_DWORD)v56 << 10;
          *(_DWORD *)(a2 + 216) = (_DWORD)v56 << 10;
          v132 = (int)v52;
          *(_DWORD *)(a2 + 192) = (_DWORD)v52 << 10;
          v62 <<= 10;
          *(_DWORD *)(a2 + 180) = v62;
          *(_DWORD *)(a2 + 188) = v62;
          *(_DWORD *)(a2 + 184) = (_DWORD)v52 << 10;
          *(_DWORD *)(a2 + 208) = v61 << 10;
          v63 = v136;
          v59 <<= 10;
          *(_DWORD *)(a2 + 212) = v59;
          *(_DWORD *)(a2 + 196) = v59;
          *(_DWORD *)(a2 + 204) = v58 << 10;
          LODWORD(v56) = *(unsigned __int16 *)(v5 + 384);
          *(_DWORD *)(a2 + 44) = 0;
          scl_ScaleAdvanceWidth(v63, a2 + 40, v56, *(_DWORD *)(v5 + 360), *(_WORD *)(v5 + 316), v5 + 320);
          v64 = *(_WORD *)(v5 + 386);
          *(_DWORD *)(a2 + 172) = 0;
          v65 = *(_WORD *)(v5 + 316);
          if ( *(_DWORD *)(v5 + 360) )
          {
            v66 = CompDiv((unsigned int)v65, v64 * (__int64)*(int *)(v63 + 388));
            *(_DWORD *)(a2 + 176) = v66;
            if ( v66 )
              *(_DWORD *)(a2 + 176) = v66 + 0x10000;
          }
          else
          {
            LODWORD(v144) = v64 << 16;
            HIDWORD(v144) = v64 >> 15;
            v67 = CompDiv((unsigned int)v65, v144);
            v68 = (_DWORD *)(a2 + 176);
            *(_DWORD *)(a2 + 176) = v67;
            if ( v67 )
              *v68 = v67 + 0x10000;
            mth_FixXYMul(a2 + 172, v68, v5 + 320);
          }
          v28 = (__int16 *)(a2 + 102);
          *(_OWORD *)(v5 + 848) = *(_OWORD *)(a2 + 40);
          *(_OWORD *)(v5 + 864) = *(_OWORD *)(a2 + 56);
          *(_OWORD *)(v5 + 880) = *(_OWORD *)(a2 + 72);
          *(_OWORD *)(v5 + 896) = *(_OWORD *)(a2 + 172);
          *(_OWORD *)(v5 + 912) = *(_OWORD *)(a2 + 188);
          v27 = (__int16 *)(a2 + 98);
          *(_OWORD *)(v5 + 928) = *(_OWORD *)(a2 + 204);
          *(_WORD *)(a2 + 98) = *(_WORD *)(v5 + 698);
          *(_WORD *)(a2 + 102) = *v9;
          *(_QWORD *)(a2 + 88) = 0LL;
          *(_WORD *)(a2 + 232) = 0;
          if ( (*(_BYTE *)(v5 + 1076) & 1) == 0 )
          {
            v25 = (_WORD *)(a2 + 100);
            *(_WORD *)(a2 + 100) = *(_WORD *)(v5 + 696);
            v26 = (_WORD *)(a2 + 104);
            v94 = (_WORD *)(v5 + 688);
            *(_WORD *)(a2 + 104) = *(_WORD *)(v5 + 700);
            v29 = (__int16 *)(a2 + 96);
            *(_WORD *)(a2 + 96) = *(_WORD *)(v5 + 688);
            goto LABEL_72;
          }
          v69 = *(_DWORD *)(a2 + 80) + 3;
          *(_DWORD *)(a2 + 72) = (*(_DWORD *)(a2 + 72) + 3) / 6;
          v70 = (unsigned __int64)(715827883LL * v69) >> 32;
          v71 = *(_DWORD *)(a2 + 48) + 3;
          *(_DWORD *)(a2 + 80) = (v70 >> 31) + v70;
          v72 = (unsigned __int64)(715827883LL * v71) >> 32;
          v73 = *(_DWORD *)(a2 + 64) + 3;
          *(_DWORD *)(a2 + 48) = (v72 >> 31) + v72;
          v74 = (unsigned __int64)(715827883LL * v73) >> 32;
          v75 = *(_DWORD *)(a2 + 56) + 3;
          *(_DWORD *)(a2 + 64) = (v74 >> 31) + v74;
          v76 = (unsigned __int64)(715827883LL * v75) >> 32;
          v77 = *(_DWORD *)(a2 + 204) + 3;
          *(_DWORD *)(a2 + 56) = (v76 >> 31) + v76;
          v78 = (unsigned __int64)(715827883LL * v77) >> 32;
          v79 = *(_DWORD *)(a2 + 212) + 3;
          *(_DWORD *)(a2 + 204) = (v78 >> 31) + v78;
          v80 = (unsigned __int64)(715827883LL * v79) >> 32;
          v81 = *(_DWORD *)(a2 + 180) + 3;
          *(_DWORD *)(a2 + 212) = (v80 >> 31) + v80;
          v82 = (unsigned __int64)(715827883LL * v81) >> 32;
          v83 = *(_DWORD *)(a2 + 196) + 3;
          *(_DWORD *)(a2 + 180) = (v82 >> 31) + v82;
          v84 = (unsigned __int64)(715827883LL * v83) >> 32;
          v85 = *(_DWORD *)(a2 + 188) + 3;
          *(_DWORD *)(a2 + 196) = (v84 >> 31) + v84;
          *(_DWORD *)(a2 + 188) = v85 / 6;
          v86 = *(_WORD *)(v5 + 696);
          if ( v86 >= 0 )
          {
            v87 = v86;
            v88 = 715827883;
          }
          else
          {
            v87 = 5 - v86;
            v88 = -715827883;
          }
          v89 = (unsigned __int64)(v87 * (__int64)v88) >> 32;
          v25 = (_WORD *)(a2 + 100);
          v90 = v89 + (v89 >> 31);
          *(_WORD *)(a2 + 100) = v89 + (v89 >> 31);
          v91 = *(__int16 *)(v5 + 700);
          if ( v91 + 5 >= 0 )
            v92 = 715827883LL * (v91 + 5);
          else
            v92 = 715827883LL * *(__int16 *)(v5 + 700);
          v26 = (_WORD *)(a2 + 104);
          v29 = (__int16 *)(a2 + 96);
          v93 = (HIDWORD(v92) >> 31) + HIDWORD(v92);
          *(_WORD *)(a2 + 104) = v93;
          LOWORD(v93) = v93 - v90;
          v94 = (_WORD *)(v5 + 688);
          *(_WORD *)(a2 + 96) = (v93 + 3) & 0xFFFC;
          v95 = (*(_BYTE *)(v5 + 1076) & 0x10) == 0;
          v96 = *(_OWORD *)(v5 + 704);
          *(_OWORD *)(v5 + 784) = *(_OWORD *)(v5 + 688);
          v97 = *(_OWORD *)(v5 + 720);
          *(_OWORD *)(v5 + 800) = v96;
          *(_OWORD *)(v5 + 816) = v97;
          *(_WORD *)(v5 + 688) = *(_WORD *)(a2 + 96);
          *(_WORD *)(v5 + 696) = *v25;
          *(_WORD *)(v5 + 700) = *(_WORD *)(a2 + 104);
          if ( !v95 )
          {
            v98 = *(_DWORD *)(a2 + 84) + 2;
            *(_DWORD *)(a2 + 76) = (*(_DWORD *)(a2 + 76) + 2) / 5;
            v99 = (unsigned __int64)(1717986919LL * v98) >> 32;
            v100 = *(_DWORD *)(a2 + 52) + 2;
            *(_DWORD *)(a2 + 84) = ((unsigned int)v99 >> 31) + (v99 >> 1);
            v101 = (unsigned __int64)(1717986919LL * v100) >> 32;
            v102 = *(_DWORD *)(a2 + 68) + 2;
            *(_DWORD *)(a2 + 52) = ((unsigned int)v101 >> 31) + (v101 >> 1);
            v103 = (unsigned __int64)(1717986919LL * v102) >> 32;
            v104 = *(_DWORD *)(a2 + 60) + 2;
            *(_DWORD *)(a2 + 68) = ((unsigned int)v103 >> 31) + (v103 >> 1);
            v105 = (unsigned __int64)(1717986919LL * v104) >> 32;
            v106 = *(_DWORD *)(a2 + 208) + 2;
            *(_DWORD *)(a2 + 60) = ((unsigned int)v105 >> 31) + (v105 >> 1);
            v107 = (unsigned __int64)(1717986919LL * v106) >> 32;
            v108 = *(_DWORD *)(a2 + 216) + 2;
            *(_DWORD *)(a2 + 208) = ((unsigned int)v107 >> 31) + (v107 >> 1);
            v109 = (unsigned __int64)(1717986919LL * v108) >> 32;
            v110 = *(_DWORD *)(a2 + 184) + 2;
            *(_DWORD *)(a2 + 216) = ((unsigned int)v109 >> 31) + (v109 >> 1);
            v111 = (unsigned __int64)(1717986919LL * v110) >> 32;
            v112 = *(_DWORD *)(a2 + 200) + 2;
            *(_DWORD *)(a2 + 184) = ((unsigned int)v111 >> 31) + (v111 >> 1);
            v113 = v112 / 5;
            v114 = *(_DWORD *)(a2 + 192);
            *(_DWORD *)(a2 + 200) = v113;
            *(_DWORD *)(a2 + 192) = (v114 + 2) / 5;
            v115 = *(_WORD *)(v5 + 698);
            if ( v115 >= 0 )
            {
              v116 = v115;
              v117 = 1717986919;
            }
            else
            {
              v116 = 4 - v115;
              v117 = -1717986919;
            }
            *v27 = ((unsigned int)((unsigned __int64)(v116 * (__int64)v117) >> 32) >> 31)
                 + ((int)((unsigned __int64)(v116 * (__int64)v117) >> 32) >> 1);
            v118 = *v9;
            if ( v118 + 4 >= 0 )
              LOWORD(v119) = (__int16)(v118 + 4) / 5;
            else
              v119 = v118 / 5;
            *v28 = v119;
            *(_WORD *)(a2 + 232) = *v9 - *(_WORD *)(v5 + 698);
            v120 = *v9;
            if ( *v9 < 0 )
            {
              v122 = -v120 % 5;
              *(_WORD *)(a2 + 234) = 5 - v122;
              if ( (unsigned __int16)v122 > 5u && (_WORD)v122 != 0 )
LABEL_69:
                *(_WORD *)(a2 + 234) = 5;
            }
            else
            {
              v121 = v120 % 5;
              *(_WORD *)(a2 + 234) = v121;
              if ( !(_WORD)v121 )
                goto LABEL_69;
            }
          }
          v123 = *(_DWORD *)(v5 + 820);
          *(_DWORD *)(v5 + 724) = *v29 * (*v9 - *(__int16 *)(v5 + 698));
          *(_DWORD *)(a2 + 32) = v123;
LABEL_72:
          if ( *(_DWORD *)(v5 + 836) )
          {
            v124 = (*(_WORD *)(v5 + 700) - *(_WORD *)(v5 + 696) + 3) & 0xFFFC;
            *v29 = v124;
            v125 = *(_DWORD *)(v5 + 820);
            *(_DWORD *)(v5 + 724) = v124 * (*(__int16 *)(v5 + 694) - *(__int16 *)(v5 + 698));
            *(_DWORD *)(a2 + 32) = v125;
          }
          v31 = a2 + 28;
          *v94 = *v29;
          v30 = a2 + 24;
          *(_DWORD *)(a2 + 20) = *(_DWORD *)(v5 + 724);
          *(_DWORD *)(a2 + 24) = *(_DWORD *)(v5 + 740);
          *(_DWORD *)(a2 + 28) = *(_DWORD *)(v5 + 744);
LABEL_75:
          if ( *(_DWORD *)(v5 + 1152) )
          {
            v126 = (*v26 - *v25 + 3) & 0xFFFC;
            v127 = v126 * (*v28 - *v27);
            *v29 = v126;
            *(_DWORD *)(a2 + 20) = v127;
          }
          fsg_CheckWorkSpaceForFit(v5 + 480, *(_DWORD *)(v5 + 944), *(_DWORD *)(v5 + 736), v30, v31);
          *(_DWORD *)(v5 + 680) = 0;
          result = 0LL;
          *(_DWORD *)(v5 + 948) = 0;
          *(_DWORD *)(v5 + 420) = 62;
          return result;
        }
        v47 = v44 + 1;
      }
      else
      {
        *(_WORD *)(v5 + 696) = mth_DivShiftLong((unsigned int)*(__int16 *)(v5 + 792), v40);
        *(_WORD *)(v5 + 700) = mth_DivShiftLong((unsigned int)(__int16)(v48 + *(_WORD *)(v5 + 796) - 1), v48);
        *(_WORD *)(v5 + 698) = mth_DivShiftLong((unsigned int)*(__int16 *)(v5 + 794), v49);
        v47 = mth_DivShiftLong((unsigned int)(__int16)(v50 + *(_WORD *)(v5 + 790) - v51), v50);
      }
      *v9 = v47;
      goto LABEL_45;
    }
  }
  return result;
}
