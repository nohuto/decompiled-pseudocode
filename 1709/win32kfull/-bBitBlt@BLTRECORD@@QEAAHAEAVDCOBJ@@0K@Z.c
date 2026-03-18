/*
 * XREFs of ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C001C124
 * Callers:
 *     GrePlgBlt @ 0x1C0001CD0 (GrePlgBlt.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0002190 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreStretchBltInternal @ 0x1C001AF30 (GreStretchBltInternal.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C001BA20 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C001BC9C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreMaskBlt @ 0x1C01023EC (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C0105D00 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0012530 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0018340 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C001C78C (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C00289C8 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BE10 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002BF34 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BLTRECORD::bBitBlt(BLTRECORD *this, DC **a2, struct DCOBJ *a3, char a4)
{
  struct ERECTL *v4; // r15
  int v9; // eax
  __int64 v10; // r11
  int v11; // r12d
  DC *v12; // rdx
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // ecx
  _DWORD *v17; // r12
  int v18; // eax
  int v19; // ecx
  DC *v20; // rcx
  __int64 v21; // r8
  int v22; // r10d
  int v23; // edx
  int v24; // r9d
  __int64 v25; // rcx
  int v26; // r9d
  int v27; // r10d
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rcx
  struct REGION *v32; // rax
  __int64 v33; // r11
  __m128i v34; // xmm6
  __int64 v35; // rax
  int v36; // r9d
  int v37; // r10d
  int v38; // r15d
  __int64 v39; // r11
  BOOL (__stdcall *v40)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v41; // r9
  __int64 v42; // rdx
  __int128 *v43; // rax
  __int64 v44; // rcx
  _BYTE *v45; // r8
  int v48; // eax
  int v49; // eax
  struct ECLIPOBJ *v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // r14
  struct SURFACE *v53; // rax
  SURFACE *v54; // rcx
  char *v55; // rbx
  __int64 v56; // rdi
  int (*v57)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v58; // r10
  __int64 v59; // r11
  __int64 v60; // r9
  _BYTE *v61; // r9
  int v62; // edx
  int v63; // r8d
  __int64 v64; // r11
  int v65; // r15d
  struct REGION *v66; // rax
  __int64 v67; // r11
  int v68; // edx
  int v69; // r8d
  struct ECLIPOBJ *v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rbx
  int (*v73)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // r10
  __int64 v77; // r11
  int v78; // ecx
  int v79; // ecx
  int v80; // ecx
  int v81; // r9d
  __int64 v82; // r10
  int v83; // ecx
  int v84; // ecx
  int v85; // ecx
  __int64 v86; // rcx
  int v87; // r9d
  int v88; // r10d
  __int64 v89; // rax
  int v90; // r8d
  int v91; // edx
  __int64 v92; // rcx
  struct REGION *v93; // rax
  __int64 v94; // r11
  __m128i v95; // xmm6
  int v96; // edx
  int v97; // r8d
  __int64 v98; // r9
  int v99; // r10d
  struct ECLIPOBJ *v100; // rdx
  __int64 v101; // rax
  int v102; // r8d
  int v103; // ecx
  int v104; // edx
  int v105; // eax
  int v106; // eax
  int v107; // r14d
  __int64 v108; // r8
  __int64 v109; // rax
  bool v110; // cf
  __int64 v111; // rsi
  struct SURFACE *v112; // rax
  SURFACE *v113; // rcx
  char *v114; // rbx
  __int64 v115; // r9
  struct SURFACE *v116; // rax
  XDCOBJ *v117; // rcx
  __int16 v118; // r11
  struct SURFACE *v119; // rax
  struct SURFACE *v120; // rax
  XDCOBJ *v121; // rcx
  __int16 v122; // r11
  struct SURFACE *v123; // rax
  __int64 v124; // rax
  __int64 v125; // [rsp+28h] [rbp-E0h]
  __int128 *v126; // [rsp+30h] [rbp-D8h]
  _DWORD *v127; // [rsp+38h] [rbp-D0h]
  char *v128; // [rsp+40h] [rbp-C8h]
  __int64 v129; // [rsp+48h] [rbp-C0h]
  __int64 v130; // [rsp+50h] [rbp-B8h]
  int v131; // [rsp+58h] [rbp-B0h]
  int v132; // [rsp+68h] [rbp-A0h]
  __m128i v133; // [rsp+70h] [rbp-98h] BYREF
  __int128 v134; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v135[4]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v136; // [rsp+9Ch] [rbp-6Ch] BYREF
  __int64 v137; // [rsp+E8h] [rbp-20h]
  int v138; // [rsp+F0h] [rbp-18h]
  int v139; // [rsp+118h] [rbp+10h]
  __int64 v140; // [rsp+128h] [rbp+20h]
  _BYTE v141[4]; // [rsp+138h] [rbp+30h] BYREF
  __int128 v142; // [rsp+13Ch] [rbp+34h] BYREF
  __int64 v143; // [rsp+188h] [rbp+80h]
  int v144; // [rsp+190h] [rbp+88h]
  int v145; // [rsp+1B8h] [rbp+B0h]
  __int64 v146; // [rsp+1C8h] [rbp+C0h]

  v4 = (BLTRECORD *)((char *)this + 152);
  ERECTL::vOrder((BLTRECORD *)((char *)this + 152));
  v9 = DC::bTightenRao(*a2);
  LODWORD(v10) = 0;
  if ( !v9 )
    return 0LL;
  if ( *((_QWORD *)*a2 + 64) )
  {
    v11 = a4 & 0xD4;
    if ( !v11 || *(_QWORD *)(*(_QWORD *)a3 + 512LL) )
    {
      if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)a2, v4);
      v12 = *a2;
      v13 = 1;
      v14 = *((_DWORD *)*a2 + 10) & 1LL;
      *(_DWORD *)v4 += *((_DWORD *)*a2 + 2 * v14 + 358);
      *((_DWORD *)v4 + 2) += *((_DWORD *)v12 + 2 * v14 + 358);
      *((_DWORD *)v4 + 1) += *((_DWORD *)v12 + 2 * v14 + 359);
      *((_DWORD *)v4 + 3) += *((_DWORD *)v12 + 2 * v14 + 359);
      v15 = *(_QWORD *)(*((_QWORD *)this + 8) + 48LL);
      if ( !v11 )
      {
        v66 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
        v137 = v67;
        v138 = v67;
        v139 = 1;
        v140 = v67;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v135, v66, v4, 0);
        if ( ERECTL::bEmpty((ERECTL *)&v136) )
          return v13;
        if ( *((int *)this + 46) < 0 )
        {
          v78 = *((_DWORD *)this + 48);
          *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
          *((_DWORD *)this + 50) = v78;
        }
        if ( *((int *)this + 47) < 0 )
        {
          v79 = *((_DWORD *)this + 49);
          *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
          *((_DWORD *)this + 51) = v79;
        }
        if ( BLTRECORD::pSurfMskOut(this) )
        {
          v80 = *((_DWORD *)this + 48);
          if ( v80 < 0 )
            goto LABEL_74;
          v81 = *((_DWORD *)this + 49);
          if ( v81 < 0 )
            goto LABEL_74;
          if ( v68 < 0 )
            v68 = -v68;
          v82 = *((_QWORD *)this + 10);
          if ( *(_DWORD *)(v82 + 56) - v80 < v68 )
            goto LABEL_74;
          if ( v69 < 0 )
            v69 = -v69;
          if ( *(_DWORD *)(v82 + 60) - v81 < v69 )
          {
LABEL_74:
            EngSetLastError(0x57u);
            return 0;
          }
          v83 = v136 + v80 - *(_DWORD *)v4;
          *((_DWORD *)this + 49) = DWORD1(v136) + v81 - *((_DWORD *)this + 39);
          *((_DWORD *)this + 48) = v83;
        }
        if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
        {
          v70 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
          if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v70]) & 0xE8) == 0
            || (v71 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v71 + 128) & 0x100) == 0 )
          {
            v133 = (__m128i)v136;
            XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v70, (struct ERECTL *)&v133);
          }
        }
        ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
        v72 = *((_QWORD *)this + 12);
        BLTRECORD::pSurfMskOut(this);
        v73 = SURFACE::pfnBitBlt(*((SURFACE **)this + 8));
        return ((unsigned int (__fastcall *)(__int64, _QWORD, __int64, _BYTE *, _QWORD, struct ERECTL *, _QWORD, __int64, __int64, __int64, _DWORD))v73)(
                 v76,
                 0LL,
                 v74,
                 v135,
                 0LL,
                 v4,
                 0LL,
                 v77,
                 v72,
                 v75,
                 *((_DWORD *)this + 54));
      }
      v16 = *((_DWORD *)this + 44);
      v17 = (_DWORD *)((char *)this + 184);
      if ( *((_DWORD *)this + 46) < v16 )
        v16 = *((_DWORD *)this + 46);
      v18 = *((_DWORD *)this + 47);
      *v17 = v16;
      v19 = *((_DWORD *)this + 45);
      if ( v18 < v19 )
        v19 = v18;
      *((_DWORD *)this + 47) = v19;
      if ( *((_DWORD *)this + 44) > *v17 )
      {
        v84 = *((_DWORD *)this + 48);
        *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
        *((_DWORD *)this + 50) = v84;
      }
      if ( *((_DWORD *)this + 45) > *((_DWORD *)this + 47) )
      {
        v85 = *((_DWORD *)this + 49);
        *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
        *((_DWORD *)this + 51) = v85;
      }
      v20 = *a2;
      v21 = *(_QWORD *)a3;
      if ( *(_QWORD *)(*(_QWORD *)a3 + 512LL) != *((_QWORD *)*a2 + 64) )
      {
        v22 = *((_DWORD *)v20 + 9);
        v23 = 0x20000;
        if ( (v22 & 0x200) == 0 || !v15 || (v24 = 1, (*(_DWORD *)(v15 + 32) & 0x20000) == 0) )
          v24 = v10;
        if ( *((_QWORD *)v20 + 6) != *(_QWORD *)(v21 + 48)
          && (v22 & 0x4000) == 0
          && (*(_DWORD *)(v21 + 36) & 0x4000) == 0
          && !v24 )
        {
          v116 = XDCOBJ::pSurfaceEff((XDCOBJ *)a2);
          if ( *((_WORD *)v116 + 50) != v118 || (v119 = XDCOBJ::pSurfaceEff(v117), *((_QWORD *)v119 + 3) != v10) )
          {
            v120 = XDCOBJ::pSurfaceEff(a3);
            if ( *((_WORD *)v120 + 50) != v122 )
              goto LABEL_111;
            v123 = XDCOBJ::pSurfaceEff(v121);
            if ( *((_QWORD *)v123 + 3) != v10 )
              goto LABEL_111;
          }
        }
        v25 = *((_QWORD *)this + 9);
        v26 = v10;
        v27 = v10;
        v28 = *(_QWORD *)(v25 + 48);
        if ( v28 && v25 == *(_QWORD *)(v28 + 2568) && (v23 & *(_DWORD *)(v28 + 32)) != 0 )
        {
          v26 = *(_DWORD *)(v28 + 2600);
          v27 = *(_DWORD *)(v28 + 2604);
        }
        v29 = *(_DWORD *)v4 - *(_DWORD *)(v21 + 8 * (*(_DWORD *)(v21 + 40) & 1LL) + 1432) - *v17;
        *((_DWORD *)this + 44) = v29;
        v30 = *((_DWORD *)this + 39)
            - *(_DWORD *)(*(_QWORD *)a3 + 8 * (*(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1LL) + 1436)
            - *((_DWORD *)this + 47);
        LODWORD(v134) = v29 + v26;
        *((_DWORD *)this + 45) = v30;
        v31 = *((_QWORD *)this + 9);
        DWORD1(v134) = v27 + v30;
        DWORD2(v134) = v26 + v29 + *(_DWORD *)(v31 + 56);
        HIDWORD(v134) = v30 + v27 + *(_DWORD *)(v31 + 60);
        ERECTL::operator*=(&v134, v4);
        v32 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
        v143 = v33;
        v144 = v33;
        v145 = 1;
        v146 = v33;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v141, v32, (struct ERECTL *)&v134, 0);
        v34 = (__m128i)v142;
        v134 = v142;
        if ( ERECTL::bEmpty((ERECTL *)&v134) )
          return v13;
        if ( (*((_DWORD *)this + 55) & 0x10000) != 0 )
          v35 = *((_QWORD *)this + 10);
        else
          v35 = 0LL;
        v36 = DWORD1(v142);
        v37 = v142;
        if ( !v35 )
          goto LABEL_26;
        v62 = *((_DWORD *)this + 48);
        if ( v62 >= 0 )
        {
          v63 = *((_DWORD *)this + 49);
          if ( v63 >= 0 )
          {
            v64 = *((_QWORD *)this + 10);
            v132 = *(_DWORD *)v4;
            if ( *(_DWORD *)(v64 + 56) - v62 >= *((_DWORD *)this + 40) - *(_DWORD *)v4 )
            {
              v65 = *((_DWORD *)this + 39);
              if ( *(_DWORD *)(v64 + 60) - v63 >= *((_DWORD *)this + 41) - v65 )
              {
                *((_DWORD *)this + 48) = v142 + v62 - v132;
                *((_DWORD *)this + 49) = v36 + v63 - v65;
LABEL_26:
                *v17 = v37 - *((_DWORD *)this + 44);
                *((_DWORD *)this + 47) = v36 - *((_DWORD *)this + 45);
                if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
                {
                  v50 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
                  if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v50]) & 0xE8) == 0
                    || (v124 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v124 + 128) & 0x100) == 0 )
                  {
                    v133 = v34;
                    XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v50, (struct ERECTL *)&v133);
                  }
                }
                if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 1) != 0 )
                {
                  v48 = *((_DWORD *)this + 44);
                  LODWORD(v134) = v134 - v48;
                  DWORD2(v134) -= v48;
                  v49 = *((_DWORD *)this + 45);
                  DWORD1(v134) -= v49;
                  HIDWORD(v134) -= v49;
                }
                ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
                v38 = *((_DWORD *)this + 54);
                if ( v38 == 52428 )
                {
                  v39 = *((_QWORD *)this + 8);
                  if ( (*(_DWORD *)(v39 + 112) & 0x400) != 0 )
                    v40 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2856);
                  else
                    v40 = EngCopyBits;
                  v41 = *((_QWORD *)this + 11);
                  v42 = (*((_QWORD *)this + 9) + 24LL) & -(__int64)(*((_QWORD *)this + 9) != 0LL);
                  v43 = &v142;
                  v44 = (v39 + 24) & -(__int64)(v39 != 0);
                  v45 = v141;
                  return ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *, __int64, __int128 *, char *))v40)(
                           v44,
                           v42,
                           v45,
                           v41,
                           v43,
                           (char *)this + 184);
                }
                v51 = *((_QWORD *)this + 12);
                v52 = *((_QWORD *)this + 11);
                v53 = BLTRECORD::pSurfMskOut(this);
                v54 = (SURFACE *)*((_QWORD *)this + 8);
                v55 = (char *)this + 192;
                v56 = ((unsigned __int64)v53 + 24) & -(__int64)(v53 != 0LL);
                v57 = SURFACE::pfnBitBlt(v54);
                v131 = v38;
                v130 = v60;
                v61 = v141;
                v129 = v51;
                v128 = v55;
                v127 = v17;
                v126 = &v142;
                v125 = v52;
                return ((unsigned int (__fastcall *)(__int64, __int64, __int64, _BYTE *, __int64, __int128 *, _DWORD *, char *, __int64, __int64, int))v57)(
                         v58,
                         v59,
                         v56,
                         v61,
                         v125,
                         v126,
                         v127,
                         v128,
                         v129,
                         v130,
                         v131);
              }
            }
          }
        }
LABEL_111:
        EngSetLastError(0x57u);
        return 0;
      }
      v86 = *((_QWORD *)this + 9);
      v87 = v10;
      v88 = v10;
      v89 = *(_QWORD *)(v86 + 48);
      if ( v89 && v86 == *(_QWORD *)(v89 + 2568) && (*(_DWORD *)(v89 + 32) & 0x20000) != 0 )
      {
        v87 = *(_DWORD *)(v89 + 2600);
        v88 = *(_DWORD *)(v89 + 2604);
      }
      v90 = *(_DWORD *)v4 - *(_DWORD *)(v21 + 8 * (*(_DWORD *)(v21 + 40) & 1LL) + 1432) - *v17;
      *((_DWORD *)this + 44) = v90;
      v91 = *((_DWORD *)this + 39)
          - *(_DWORD *)(*(_QWORD *)a3 + 8 * (*(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1LL) + 1436)
          - *((_DWORD *)this + 47);
      LODWORD(v134) = v90 + v87;
      *((_DWORD *)this + 45) = v91;
      v92 = *((_QWORD *)this + 8);
      DWORD1(v134) = v91 + v88;
      DWORD2(v134) = v87 + v90 + *(_DWORD *)(v92 + 56);
      HIDWORD(v134) = v88 + v91 + *(_DWORD *)(v92 + 60);
      ERECTL::operator*=(&v134, v4);
      v93 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
      v137 = v94;
      v138 = v94;
      v139 = 1;
      v140 = v94;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v135, v93, (struct ERECTL *)&v134, 0);
      v95 = (__m128i)v136;
      v134 = v136;
      if ( ERECTL::bEmpty((ERECTL *)&v134) )
        return v13;
      if ( BLTRECORD::pSurfMskOut(this) )
      {
        v96 = *((_DWORD *)this + 48);
        if ( v96 < 0 )
          goto LABEL_111;
        v97 = *((_DWORD *)this + 49);
        if ( v97 < 0 )
          goto LABEL_111;
        v98 = *((_QWORD *)this + 10);
        if ( *(_DWORD *)(v98 + 56) - v96 < *((_DWORD *)this + 40) - *(_DWORD *)v4 )
          goto LABEL_111;
        v99 = *((_DWORD *)this + 39);
        if ( *(_DWORD *)(v98 + 60) - v97 < *((_DWORD *)this + 41) - v99 )
          goto LABEL_111;
        *((_DWORD *)this + 48) = _mm_cvtsi128_si32(v95) + v96 - *(_DWORD *)v4;
        *((_DWORD *)this + 49) = _mm_cvtsi128_si32(_mm_srli_si128(v95, 4)) + v97 - v99;
      }
      if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
      {
        v100 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
        if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v100]) & 0xE8) == 0
          || (v101 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v101 + 128) & 0x100) == 0 )
        {
          v133 = v95;
          XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v100, (struct ERECTL *)&v133);
        }
      }
      v102 = v134;
      v103 = v134 - *((_DWORD *)this + 44);
      v104 = DWORD1(v134);
      v105 = DWORD1(v134);
      *v17 = v103;
      v106 = v105 - *((_DWORD *)this + 45);
      *((_DWORD *)this + 47) = v106;
      if ( v103 >= v102 )
        DWORD2(v134) += v103 - v102;
      else
        LODWORD(v134) = v103;
      if ( v106 >= v104 )
        HIDWORD(v134) += v106 - v104;
      else
        DWORD1(v134) = v106;
      ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
      v107 = *((_DWORD *)this + 54);
      if ( v107 == 52428 )
      {
        v108 = *((_QWORD *)this + 8);
        if ( (*(_DWORD *)(v108 + 112) & 0x400) != 0 )
          v40 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2856);
        else
          v40 = EngCopyBits;
        v42 = (*((_QWORD *)this + 9) + 24LL) & -(__int64)(*((_QWORD *)this + 9) != 0LL);
        v109 = v108 + 24;
        v110 = v108 != 0;
        v45 = v135;
        v44 = v109 & -(__int64)v110;
        v43 = &v136;
        v41 = 0LL;
        return ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *, __int64, __int128 *, char *))v40)(
                 v44,
                 v42,
                 v45,
                 v41,
                 v43,
                 (char *)this + 184);
      }
      v111 = *((_QWORD *)this + 12);
      v112 = BLTRECORD::pSurfMskOut(this);
      v113 = (SURFACE *)*((_QWORD *)this + 8);
      v114 = (char *)this + 192;
      v56 = ((unsigned __int64)v112 + 24) & -(__int64)(v112 != 0LL);
      v57 = SURFACE::pfnBitBlt(v113);
      v131 = v107;
      v130 = v115;
      v61 = v135;
      v129 = v111;
      v128 = v114;
      v127 = v17;
      v126 = &v136;
      v125 = 0LL;
      return ((unsigned int (__fastcall *)(__int64, __int64, __int64, _BYTE *, __int64, __int128 *, _DWORD *, char *, __int64, __int64, int))v57)(
               v58,
               v59,
               v56,
               v61,
               v125,
               v126,
               v127,
               v128,
               v129,
               v130,
               v131);
    }
  }
  return 1LL;
}
