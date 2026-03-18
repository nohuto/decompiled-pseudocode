/*
 * XREFs of ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C018F320
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C01916F8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0005EC8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C00087DC (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0030158 (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C0030290 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00AB1D4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C00C2A88 (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00C2EB0 (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00C731C (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01908FC (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1C0191600 (-FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0191E2C (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C0194070 (_PopulateDisplayModeFromPresentPath.c)
 *     _UpgradeDispModeFlags @ 0x1C01941C4 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall OBTAIN_MODES_ON_SOURCE::operator()(
        __int64 a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // r12d
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rax
  DXGADAPTER *v21; // rdi
  int VideoOutputTechnology; // eax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  int DisplayOnlyDriverUseRawModes; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 (__fastcall *v31)(__int64, __int64, __int64 *, __int64 *); // rax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 (__fastcall *v37)(__int64, __int64 *); // rax
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r8
  unsigned int *v43; // r15
  unsigned int v44; // ecx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 (__fastcall *v53)(__int64, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *); // rax
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 (__fastcall *v57)(__int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *); // rax
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rbx
  __int64 v66; // rax
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r9
  __int64 v71; // rax
  _QWORD *v72; // rax
  int v73; // eax
  char v74; // cl
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // rcx
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v80; // ebx
  char v81; // al
  char v82; // al
  int *v83; // rdx
  __int64 v84; // rdi
  int v85; // eax
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  int v89; // eax
  __int64 v90; // rcx
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT v91; // edi
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v92; // eax
  char v93; // r8
  char v94; // dl
  struct _D3DKMT_DISPLAYMODE *Mode; // rax
  void **v96; // r11
  struct _D3DKMT_DISPLAYMODE *v97; // r10
  int v98; // eax
  __int64 v99; // rcx
  bool v100; // sf
  __int64 v101; // rcx
  int v102; // eax
  int v103; // eax
  __int64 v104; // rcx
  int v105; // eax
  __int64 v106; // rcx
  int v107; // eax
  __int64 v108; // r8
  unsigned int *v109; // r13
  int v110; // eax
  __int64 v111; // rcx
  int v112; // eax
  int v113; // eax
  __int64 v114; // rcx
  _QWORD *v115; // rdx
  __int64 v116; // rcx
  _QWORD *v117; // rax
  _QWORD *v118; // rcx
  _QWORD *v119; // rdx
  __int64 v120; // rax
  struct _D3DKMT_DISPLAYMODE **v121; // rbx
  struct _D3DKMT_DISPLAYMODE *v122; // r8
  unsigned int v123; // eax
  SIZE_T v124; // rax
  unsigned __int64 v125; // kr00_8
  struct _D3DKMT_DISPLAYMODE *v126; // rax
  __int64 v127; // rax
  int UniqueModes; // eax
  __int64 v129; // rcx
  __int64 v130; // rbx
  __int64 v131; // rax
  struct _D3DKMT_DISPLAYMODE **v132; // rbx
  __int64 v133; // rcx
  SIZE_T v134; // rax
  struct _D3DKMT_DISPLAYMODE *v135; // rax
  __int64 v136; // rax
  int v137; // eax
  __int64 v138; // rcx
  __int64 v139; // rbx
  __int64 v140; // rax
  _QWORD *v141; // rax
  __int64 v142; // [rsp+20h] [rbp-E0h]
  char v143; // [rsp+50h] [rbp-B0h] BYREF
  char v144; // [rsp+51h] [rbp-AFh]
  char v145; // [rsp+52h] [rbp-AEh] BYREF
  char v146; // [rsp+53h] [rbp-ADh] BYREF
  char v147; // [rsp+54h] [rbp-ACh]
  __int16 v148; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v149; // [rsp+60h] [rbp-A0h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *v150; // [rsp+68h] [rbp-98h] BYREF
  int v151; // [rsp+70h] [rbp-90h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v152[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v153; // [rsp+80h] [rbp-80h] BYREF
  int v154; // [rsp+88h] [rbp-78h] BYREF
  void **v155; // [rsp+90h] [rbp-70h]
  char v156[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v157; // [rsp+A0h] [rbp-60h]
  void (__fastcall *v158)(__int64, __int64); // [rsp+A8h] [rbp-58h]
  __int64 v159; // [rsp+B0h] [rbp-50h]
  int v160; // [rsp+B8h] [rbp-48h]
  char *v161; // [rsp+C0h] [rbp-40h]
  __int64 v162; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v163; // [rsp+D0h] [rbp-30h] BYREF
  char v164[8]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int *v165; // [rsp+E0h] [rbp-20h]
  void (__fastcall *v166)(__int64, unsigned int *); // [rsp+E8h] [rbp-18h]
  __int64 v167; // [rsp+F0h] [rbp-10h]
  int v168; // [rsp+F8h] [rbp-8h]
  char v169[8]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v170; // [rsp+108h] [rbp+8h]
  void (__fastcall *v171)(__int64, __int64); // [rsp+110h] [rbp+10h]
  __int64 v172; // [rsp+118h] [rbp+18h]
  int v173; // [rsp+120h] [rbp+20h]
  char v174[8]; // [rsp+128h] [rbp+28h] BYREF
  unsigned int *v175; // [rsp+130h] [rbp+30h]
  void (__fastcall *v176)(__int64, unsigned int *); // [rsp+138h] [rbp+38h]
  __int64 v177; // [rsp+140h] [rbp+40h]
  int v178; // [rsp+148h] [rbp+48h]
  struct _D3DKMT_DISPLAYMODE v179; // [rsp+150h] [rbp+50h] BYREF
  DXGADAPTER *v180; // [rsp+180h] [rbp+80h]
  struct _D3DKMT_DISPLAYMODE *v181; // [rsp+188h] [rbp+88h]
  struct _D3DKMT_DISPLAYMODE **v182; // [rsp+190h] [rbp+90h]
  unsigned int *v183; // [rsp+198h] [rbp+98h]
  unsigned int *v184; // [rsp+1A0h] [rbp+A0h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE v185; // [rsp+1B0h] [rbp+B0h] BYREF

  v184 = a5;
  v155 = a4;
  v6 = 0;
  v183 = a3;
  v182 = a2;
  v7 = -1;
  v8 = 255;
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    v10 = *(unsigned int *)(a1 + 40);
    v11 = *(_QWORD *)(a1 + 24);
    LODWORD(v150) = -1;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT **))(v9 + 8))(
            v11,
            v10,
            v6,
            &v150);
    v14 = v12;
    if ( v12 < 0 )
    {
      v141 = (_QWORD *)WdLogNewEntry5_WdAssertion(v13);
      v141[3] = v14;
      v141[4] = *(unsigned int *)(a1 + 40);
      v141[5] = v6;
      WdLogEvent5_WdAssertion(v141);
      return (unsigned int)v14;
    }
    v15 = (unsigned int)v150;
    if ( (_DWORD)v150 == -1 )
      break;
    ++*(_DWORD *)(a1 + 52);
    v16 = *(unsigned int *)(a1 + 40);
    v151 = 0;
    v148 = -1;
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *, __int16 *))(*(_QWORD *)(a1 + 32) + 112LL))(
            *(_QWORD *)(a1 + 24),
            v16,
            v15,
            &v151,
            &v148);
    v14 = v17;
    if ( v17 < 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v18);
      v19[4] = v7;
      v19[3] = v14;
      v19[5] = *(unsigned int *)(a1 + 40);
      WdLogEvent5_WdError(v19);
      return (unsigned int)v14;
    }
    if ( v7 == -1 || v151 < v8 )
    {
      v7 = (unsigned int)v150;
      v8 = v151;
      *(_DWORD *)(a1 + 48) = v6;
    }
    ++v6;
  }
  if ( v7 == -1 && *(_DWORD *)(a1 + 52) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v20 + 24) = 541LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = *(DXGADAPTER **)a1;
  v180 = *(DXGADAPTER **)a1;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(v180, v7, 0LL, v152);
  v24 = VideoOutputTechnology;
  if ( VideoOutputTechnology < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v23);
    *(_QWORD *)(v25 + 24) = v24;
    WdLogEvent5_WdError(v25);
    return (unsigned int)v24;
  }
  LOBYTE(v148) = (unsigned int)(v152[0] - 15) <= 1;
  if ( *((_QWORD *)v21 + 308)
    || (DisplayOnlyDriverUseRawModes = ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(*((ADAPTER_DISPLAY **)v21 + 307)),
        v144 = 1,
        !DisplayOnlyDriverUseRawModes) )
  {
    v144 = 0;
  }
  if ( (int)DmmGetPreferredMonitorSourceModeOnTarget(*(DXGADAPTER **)a1, v7, &v185) < 0 )
    memset(&v185, 0, sizeof(v185));
  v28 = *(_QWORD *)(a1 + 16);
  v29 = *(unsigned int *)(a1 + 40);
  v30 = *(_QWORD *)(a1 + 8);
  v153 = 0LL;
  v149 = 0LL;
  v31 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v28 + 8);
  v170 = 0LL;
  v171 = 0LL;
  v172 = 0LL;
  v173 = 0;
  v169[0] = 0;
  v32 = v31(v30, v29, &v149, &v153);
  v34 = v32;
  if ( v32 < 0 )
  {
    v35 = WdLogNewEntry5_WdError(v33);
    *(_QWORD *)(v35 + 24) = v34;
    WdLogEvent5_WdError(v35);
    return (unsigned int)v34;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v169,
    v149,
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
    *(_QWORD *)(a1 + 8));
  v36 = v170;
  v149 = 0LL;
  v175 = 0LL;
  v37 = *(__int64 (__fastcall **)(__int64, __int64 *))(v153 + 8);
  v176 = 0LL;
  v177 = 0LL;
  v178 = 0;
  v174[0] = 0;
  v38 = v37(v170, &v149);
  v34 = v38;
  if ( v38 >= 0 )
  {
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v174,
      v149,
      *(_QWORD *)(v153 + 32),
      v36);
    v41 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(a1 + 8));
    v43 = v175;
    *(_BYTE *)(v41 + 296) = 1;
    if ( !v43 )
    {
LABEL_100:
      v113 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v153 + 48))(v36, 0LL);
      v34 = v113;
      if ( v113 >= 0 )
      {
        LODWORD(v34) = 0;
        *(_BYTE *)(ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(a1 + 8)) + 296) = 0;
        v121 = v182;
        v122 = *v182;
        if ( !*v182 )
        {
          v123 = *(_DWORD *)(a1 + 80);
          v122 = 0LL;
          if ( v123 )
          {
            v125 = v123;
            v124 = 44LL * v123;
            if ( !is_mul_ok(v125, 0x2CuLL) )
              v124 = -1LL;
            v126 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v124, 0x4B677844u, PagedPool);
            *v121 = v126;
            if ( !v126 )
            {
              v127 = WdLogNewEntry5_WdLowResource(0LL);
              *(_QWORD *)(v127 + 24) = 1061LL;
              WdLogEvent5_WdLowResource(v127);
              LODWORD(v34) = -1073741801;
              goto LABEL_141;
            }
            memset(v126, 0, 44LL * *(unsigned int *)(a1 + 80));
            v122 = *v121;
          }
        }
        UniqueModes = MODE_UNION_LIST::GetUniqueModes(
                        (MODE_UNION_LIST *)(a1 + 64),
                        *(unsigned int *)(a1 + 80),
                        v122,
                        v183);
        v130 = UniqueModes;
        if ( UniqueModes < 0 )
        {
          v131 = WdLogNewEntry5_WdAssertion(v129);
          *(_QWORD *)(v131 + 24) = v130;
          WdLogEvent5_WdAssertion(v131);
        }
        v132 = (struct _D3DKMT_DISPLAYMODE **)v155;
        if ( v155 )
        {
          if ( *v155 )
          {
            operator delete[](*v155);
            *v132 = 0LL;
          }
          v133 = *(unsigned int *)(a1 + 112);
          if ( (_DWORD)v133 )
          {
            v134 = 44 * v133;
            if ( !is_mul_ok(*(unsigned int *)(a1 + 112), 0x2CuLL) )
              v134 = -1LL;
            v135 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v134, 0x4B677844u, PagedPool);
            *v132 = v135;
            if ( v135 )
            {
              memset(v135, 0, 44LL * *(unsigned int *)(a1 + 112));
              v137 = MODE_UNION_LIST::GetUniqueModes(
                       (MODE_UNION_LIST *)(a1 + 96),
                       *(unsigned int *)(a1 + 112),
                       *v132,
                       v184);
              v139 = v137;
              if ( v137 < 0 )
              {
                v140 = WdLogNewEntry5_WdAssertion(v138);
                *(_QWORD *)(v140 + 24) = v139;
                WdLogEvent5_WdAssertion(v140);
              }
            }
            else
            {
              v136 = WdLogNewEntry5_WdLowResource(0LL);
              *(_QWORD *)(v136 + 24) = 1093LL;
              WdLogEvent5_WdLowResource(v136);
            }
          }
        }
LABEL_141:
        if ( v174[0] )
          v176(v177, v43);
        goto LABEL_143;
      }
      v115 = (_QWORD *)WdLogNewEntry5_WdError(v114);
      v115[3] = v34;
      v115[4] = v36;
      v116 = (__int64)v115;
      v115[5] = 0xFFFFFFFFLL;
LABEL_121:
      WdLogEvent5_WdError(v116);
      goto LABEL_141;
    }
    while ( 1 )
    {
      v44 = v43[1];
      if ( ((v44 - 1) & 0xFFFFFFFC) != 0 || v44 == 2 || v43[2] != v43[4] || v43[3] != v43[5] )
        goto LABEL_98;
      LOBYTE(v42) = 1;
      v45 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v153 + 40))(v36, *v43, v42);
      v49 = v45;
      if ( v45 < 0 )
      {
        v50 = WdLogNewEntry5_WdWarning(v47, v46, v48);
        *(_QWORD *)(v50 + 24) = v49;
        *(_QWORD *)(v50 + 32) = *v43;
        WdLogEvent5_WdWarning(v50);
        goto LABEL_98;
      }
      v51 = *(_QWORD *)(a1 + 16);
      v52 = *(_QWORD *)(a1 + 8);
      v149 = 0LL;
      *(_QWORD *)v152 = 0LL;
      v53 = *(__int64 (__fastcall **)(__int64, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *))(v51 + 24);
      v157 = 0LL;
      v158 = 0LL;
      v159 = 0LL;
      v160 = 0;
      v156[0] = 0;
      v54 = v53(v52, v7, v152, &v149);
      v34 = v54;
      if ( v54 < 0 )
        goto LABEL_120;
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)v156,
        *(__int64 *)v152,
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL),
        *(_QWORD *)(a1 + 8));
      v56 = v157;
      *(_QWORD *)v152 = 0LL;
      v165 = 0LL;
      v57 = *(__int64 (__fastcall **)(__int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v149 + 8);
      v166 = 0LL;
      v167 = 0LL;
      v168 = 0;
      v164[0] = 0;
      v58 = v57(v157, v152);
      v34 = v58;
      if ( v58 < 0 )
      {
        v120 = WdLogNewEntry5_WdError(v59);
        *(_QWORD *)(v120 + 24) = v34;
        WdLogEvent5_WdError(v120);
        goto LABEL_107;
      }
      v60 = *(_QWORD *)v152;
LABEL_91:
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
        (__int64)v164,
        v60,
        *(_QWORD *)(v149 + 32),
        v56);
      v109 = v165;
      if ( v165 )
        break;
      v110 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v149 + 56))(v56, 0LL);
      v34 = v110;
      if ( v110 < 0 )
      {
        v119 = (_QWORD *)WdLogNewEntry5_WdError(v111);
        v119[3] = v34;
        v119[4] = v56;
        v119[5] = 0xFFFFFFFFLL;
        v118 = v119;
        goto LABEL_116;
      }
      if ( v164[0] )
        v166(v167, 0LL);
      if ( v156[0] )
        v158(v159, v56);
      v36 = v170;
LABEL_98:
      v163 = 0LL;
      v112 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v153 + 16))(v36, v43, &v163);
      v34 = v112;
      if ( v112 < 0 )
      {
LABEL_120:
        v116 = WdLogNewEntry5_WdError(v55);
        *(_QWORD *)(v116 + 24) = v34;
        goto LABEL_121;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
        (__int64)v174,
        v163,
        *(_QWORD *)(v153 + 32),
        v36);
      v43 = v175;
      if ( !v175 )
        goto LABEL_100;
    }
    LOBYTE(v108) = 1;
    v61 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v149 + 48))(v56, *v165, v108);
    v65 = v61;
    if ( v61 < 0 )
    {
      v66 = WdLogNewEntry5_WdWarning(v63, v62, v64);
      *(_QWORD *)(v66 + 24) = v65;
      *(_QWORD *)(v66 + 32) = *v109;
      WdLogEvent5_WdWarning(v66);
      goto LABEL_89;
    }
    if ( v43[1] - 3 <= 1 || v144 )
    {
      v145 = 1;
      v154 = 0;
    }
    else
    {
      v67 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, int *))(v149 + 64))(v56, *v109, &v145, &v154);
      v34 = v67;
      if ( v67 == -1071774920 )
      {
        v71 = WdLogNewEntry5_WdTrace(v69, v68, v64, v70);
        *(_QWORD *)(v71 + 24) = v7;
        *(_QWORD *)(v71 + 32) = *(unsigned int *)(a1 + 40);
      }
      else if ( v67 < 0 )
      {
        v72 = (_QWORD *)WdLogNewEntry5_WdError(v69);
        v72[4] = v109;
        goto LABEL_114;
      }
    }
    v143 = 0;
    if ( v185.VideoSignalInfo.ActiveSize.cx == v43[2] && v185.VideoSignalInfo.ActiveSize.cy == v43[3] )
    {
      LOBYTE(v64) = v148;
      v73 = (*(__int64 (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))(v149 + 80))(
              v109,
              &v185,
              v64,
              &v143);
      v74 = v143;
      if ( v73 < 0 )
        v74 = 0;
      v143 = v74;
    }
    v75 = *(_QWORD *)(a1 + 32);
    v76 = *(unsigned int *)(a1 + 40);
    v77 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)v152 = 0LL;
    v78 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v75 + 24))(
            v77,
            v76,
            v7,
            v152);
    v34 = v78;
    if ( v78 < 0 )
      goto LABEL_113;
    v80 = *(struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)(*(_QWORD *)v152 + 16LL);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( v43[2] == v109[5] && v43[3] == v109[6] )
      v81 = (char)v80;
    else
      v81 = -((*(_BYTE *)&v80 & 0x1E) != 0);
    v82 = v81 & 1;
    v83 = (int *)&unk_1C005D6F0;
    v147 = v82;
    v152[0] = D3DKMDT_VOT_HD15;
    v161 = (char *)&unk_1C005D6F0;
LABEL_54:
    if ( !v82 )
      goto LABEL_87;
    v84 = *v83;
    v151 = v84;
    if ( !BmlIsSupportedPathScaling((unsigned int)v84, v80) )
      goto LABEL_86;
    LOBYTE(v142) = 1;
    v85 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(a1 + 32) + 64LL))(
            *(_QWORD *)(a1 + 24),
            *(unsigned int *)(a1 + 40),
            v7,
            (unsigned int)v84,
            v142);
    v34 = v85;
    if ( v85 < 0 )
    {
      v117 = (_QWORD *)WdLogNewEntry5_WdError(v86);
      v117[3] = v34;
      v117[4] = *(unsigned int *)(a1 + 40);
      v117[5] = v7;
      v117[6] = *(_QWORD *)(a1 + 24);
      v117[7] = v84;
      goto LABEL_103;
    }
    v87 = *(unsigned int *)(a1 + 40);
    v88 = *(_QWORD *)(a1 + 24);
    v150 = 0LL;
    v89 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT **))(*(_QWORD *)(a1 + 32) + 24LL))(
            v88,
            v87,
            v7,
            &v150);
    v34 = v89;
    if ( v89 < 0 )
    {
      v117 = (_QWORD *)WdLogNewEntry5_WdError(v90);
      v117[3] = v34;
      goto LABEL_103;
    }
    v91 = v150[6];
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 24));
    v92 = D3DKMDT_VPPR_IDENTITY;
    LODWORD(v150) = 1;
    while ( 1 )
    {
      if ( BmlIsSupportedPathRotation(v92, v91) )
      {
        if ( *((_QWORD *)v180 + 308) || !*(_BYTE *)(*((_QWORD *)v180 + 307) + 132LL) || (v93 = 0, (_DWORD)v150 == 1) )
          v93 = 1;
        if ( !v143 || (v94 = 1, v151 != 1) )
          v94 = 0;
        PopulateDisplayModeFromPresentPath(
          (_DWORD)v43,
          (_DWORD)v109,
          v151,
          (_DWORD)v150,
          v145,
          v94,
          v93,
          v154,
          (__int64)&v179,
          (__int64)&v146);
        Mode = MODE_UNION_LIST::FindMode((MODE_UNION_LIST *)(a1 + 64), &v179);
        v96 = 0LL;
        v181 = Mode;
        v97 = Mode;
        if ( !Mode || (UpgradeDispModeFlags(Mode, &v179), v146 != (_BYTE)v96) )
        {
          if ( *(_DWORD *)(a1 + 52) > 1u )
          {
            LOBYTE(v142) = (_BYTE)v96;
            v98 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)(a1 + 32) + 80LL))(
                    *(_QWORD *)(a1 + 24),
                    *(unsigned int *)(a1 + 40),
                    v7,
                    (unsigned int)v150,
                    v142);
            v96 = 0LL;
            v34 = v98;
            if ( v98 < 0 )
            {
              v117 = (_QWORD *)WdLogNewEntry5_WdError(v99);
              v117[3] = v34;
              v117[4] = *(unsigned int *)(a1 + 40);
              v117[5] = v7;
              v117[6] = *(_QWORD *)(a1 + 24);
              v117[7] = (int)v150;
              goto LABEL_103;
            }
            v97 = v181;
          }
          if ( v179.Format == D3DDDIFMT_A8R8G8B8 || *(_BYTE *)(a1 + 44) == (_BYTE)v96 )
          {
            if ( v179.Format > (unsigned int)D3DDDIFMT_P8 || (v101 = 0x20003900000LL, !_bittest64(&v101, v179.Format)) )
            {
              if ( !v97 )
              {
                v102 = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 64), &v179);
                LOBYTE(v96) = 0;
                LODWORD(v34) = v102;
                if ( v102 < 0 )
                  goto LABEL_104;
              }
              if ( v146 == (_BYTE)v96 )
                goto LABEL_83;
              ++v179.IntegerRefreshRate;
              *(_DWORD *)&v179.Flags |= 2u;
              LODWORD(v34) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 64), &v179);
              v100 = (int)v34 < 0;
              goto LABEL_82;
            }
          }
          if ( v155 != v96 )
          {
            MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 96), &v179);
            v100 = (int)v34 < 0;
LABEL_82:
            if ( v100 )
              goto LABEL_104;
          }
        }
      }
LABEL_83:
      v92 = (_DWORD)v150 + 1;
      LODWORD(v150) = v92;
      if ( v92 > D3DKMDT_VPPR_ROTATE270 )
      {
        if ( *(_DWORD *)(a1 + 52) > 1u )
        {
          v103 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 32) + 88LL))(
                   *(_QWORD *)(a1 + 24),
                   *(unsigned int *)(a1 + 40),
                   v7,
                   0LL);
          v34 = v103;
          if ( v103 < 0 )
          {
            v117 = (_QWORD *)WdLogNewEntry5_WdError(v104);
            v117[3] = v34;
            v117[4] = *(_QWORD *)(a1 + 24);
            v117[5] = *(unsigned int *)(a1 + 40);
            v117[6] = v7;
LABEL_103:
            WdLogEvent5_WdError(v117);
            goto LABEL_104;
          }
        }
LABEL_86:
        v82 = v147;
        v83 = (int *)(v161 + 4);
        ++v152[0];
        v161 += 4;
        if ( v152[0] >= (unsigned int)D3DKMDT_VOT_HDMI )
        {
LABEL_87:
          v105 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 32) + 72LL))(
                   *(_QWORD *)(a1 + 24),
                   *(unsigned int *)(a1 + 40),
                   v7,
                   0LL);
          v34 = v105;
          if ( v105 < 0 )
          {
            v72 = (_QWORD *)WdLogNewEntry5_WdError(v106);
            v72[3] = v34;
            v72[4] = *(unsigned int *)(a1 + 40);
            v72[5] = *(_QWORD *)(a1 + 24);
            v72[6] = v7;
          }
          else
          {
            v56 = v157;
LABEL_89:
            v162 = 0LL;
            v107 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v149 + 16))(v56, v109, &v162);
            v34 = v107;
            if ( v107 >= 0 )
            {
              v60 = v162;
              goto LABEL_91;
            }
LABEL_113:
            v72 = (_QWORD *)WdLogNewEntry5_WdError(v79);
LABEL_114:
            v72[3] = v34;
          }
          v118 = v72;
LABEL_116:
          WdLogEvent5_WdError(v118);
LABEL_104:
          if ( v164[0] )
            v166(v167, v109);
          v56 = v157;
LABEL_107:
          if ( v156[0] )
            v158(v159, v56);
          v36 = v170;
          goto LABEL_141;
        }
        goto LABEL_54;
      }
    }
  }
  v40 = WdLogNewEntry5_WdError(v39);
  *(_QWORD *)(v40 + 24) = v34;
  WdLogEvent5_WdError(v40);
LABEL_143:
  if ( v169[0] )
    v171(v172, v36);
  return (unsigned int)v34;
}
