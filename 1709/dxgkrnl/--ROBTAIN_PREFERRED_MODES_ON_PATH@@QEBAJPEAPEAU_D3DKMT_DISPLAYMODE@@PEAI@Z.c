/*
 * XREFs of ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C01A1324
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00E6098 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C000A240 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000BC54 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00B3F80 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C00D33CC (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00D60EC (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C00D61F0 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1C00D6370 (-FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C00D63F0 (_PopulateDisplayModeFromPresentPath.c)
 *     DxgkQueryDmmInterface @ 0x1C00E1BAC (DxgkQueryDmmInterface.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00F58D8 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     _UpgradeDispModeFlags @ 0x1C01A3778 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall OBTAIN_PREFERRED_MODES_ON_PATH::operator()(
        __int64 a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3)
{
  unsigned int *v3; // r12
  unsigned int v4; // edx
  DXGADAPTER *v6; // rcx
  int PreferredMonitorSourceModeOnTarget; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  _QWORD *v12; // rax
  DXGADAPTER *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  const struct _DXGDMM_INTERFACE *v19; // rbx
  DXGADAPTER *v20; // rcx
  __int64 v21; // r13
  __int64 (__fastcall *v22)(DXGADAPTER *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *); // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  int VideoOutputTechnology; // eax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 (__fastcall *v36)(__int64, __int64, const struct _DXGDMM_INTERFACE **, __int64 *); // rax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r14
  __int64 (__fastcall *v40)(__int64, const struct _DXGDMM_INTERFACE **); // rax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r8
  unsigned int *v45; // r15
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // edx
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rbx
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 (__fastcall *v56)(__int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, const struct _DXGDMM_INTERFACE **); // rax
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // r14
  __int64 (__fastcall *v60)(__int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *); // rax
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // r8
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rbx
  _QWORD *v70; // rax
  int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // r8
  unsigned int *v74; // r12
  int v75; // eax
  int v76; // eax
  __int64 v77; // rcx
  unsigned int v78; // eax
  SIZE_T v79; // rax
  unsigned __int64 v80; // kr00_8
  struct _D3DKMT_DISPLAYMODE *v81; // rax
  struct _D3DKMT_DISPLAYMODE **v82; // rbx
  __int64 v83; // rax
  __int64 v84; // r8
  __int64 v85; // rdx
  int v86; // eax
  __int64 v87; // rcx
  int v88; // ebx
  int v89; // eax
  __int64 v90; // r8
  __int64 v91; // rdx
  int v92; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT v93; // ebx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v94; // edi
  struct _D3DKMT_DISPLAYMODE *Mode; // rax
  __int64 v96; // r8
  __int64 v97; // r9
  int v98; // eax
  _QWORD *v99; // rax
  _QWORD *v100; // rax
  int UniqueModes; // eax
  __int64 v102; // rcx
  __int64 v103; // rbx
  __int64 v104; // rax
  int v105; // [rsp+20h] [rbp-E0h]
  char v106; // [rsp+50h] [rbp-B0h] BYREF
  char v107[7]; // [rsp+51h] [rbp-AFh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v108[2]; // [rsp+58h] [rbp-A8h] BYREF
  const struct _DXGDMM_INTERFACE *v109; // [rsp+60h] [rbp-A0h] BYREF
  bool v110; // [rsp+68h] [rbp-98h]
  __int64 v111; // [rsp+70h] [rbp-90h] BYREF
  __int64 v112; // [rsp+78h] [rbp-88h] BYREF
  __int64 v113; // [rsp+80h] [rbp-80h] BYREF
  __int64 v114; // [rsp+88h] [rbp-78h] BYREF
  char v115[8]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v116; // [rsp+98h] [rbp-68h]
  void (__fastcall *v117)(__int64, unsigned int *); // [rsp+A0h] [rbp-60h]
  __int64 v118; // [rsp+A8h] [rbp-58h]
  int v119; // [rsp+B0h] [rbp-50h]
  char v120[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v121; // [rsp+C0h] [rbp-40h]
  void (__fastcall *v122)(__int64, __int64); // [rsp+C8h] [rbp-38h]
  __int64 v123; // [rsp+D0h] [rbp-30h]
  int v124; // [rsp+D8h] [rbp-28h]
  char v125[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v126; // [rsp+E8h] [rbp-18h]
  void (__fastcall *v127)(__int64, __int64); // [rsp+F0h] [rbp-10h]
  __int64 v128; // [rsp+F8h] [rbp-8h]
  int v129; // [rsp+100h] [rbp+0h]
  char v130[8]; // [rsp+108h] [rbp+8h] BYREF
  unsigned int *v131; // [rsp+110h] [rbp+10h]
  void (__fastcall *v132)(__int64, unsigned int *); // [rsp+118h] [rbp+18h]
  __int64 v133; // [rsp+120h] [rbp+20h]
  int v134; // [rsp+128h] [rbp+28h]
  unsigned int *v135; // [rsp+130h] [rbp+30h]
  struct _D3DKMT_DISPLAYMODE **v136; // [rsp+138h] [rbp+38h]
  char v137[8]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v138; // [rsp+148h] [rbp+48h]
  void (__fastcall *v139)(__int64, __int64); // [rsp+150h] [rbp+50h]
  __int64 v140; // [rsp+158h] [rbp+58h]
  int v141; // [rsp+160h] [rbp+60h]
  struct _D3DKMT_DISPLAYMODE v142; // [rsp+168h] [rbp+68h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v143; // [rsp+1A0h] [rbp+A0h] BYREF

  v136 = a2;
  v3 = a3;
  v4 = *(_DWORD *)(a1 + 12);
  v6 = *(DXGADAPTER **)a1;
  v135 = a3;
  PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(v6, v4, &v143);
  v11 = PreferredMonitorSourceModeOnTarget;
  if ( PreferredMonitorSourceModeOnTarget < 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10);
    v12[3] = *(_QWORD *)a1;
    v12[4] = *(unsigned int *)(a1 + 12);
    v12[5] = v11;
    WdLogEvent5_WdWarning(v12);
    return 0LL;
  }
  v14 = *(DXGADAPTER **)a1;
  v109 = 0LL;
  v15 = DxgkQueryDmmInterface(v14, v8, &v109);
  v17 = v15;
  if ( v15 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v18 + 24) = *(_QWORD *)a1;
    *(_QWORD *)(v18 + 32) = v17;
    WdLogEvent5_WdError(v18);
    return (unsigned int)v17;
  }
  v19 = v109;
  v20 = *(DXGADAPTER **)a1;
  v113 = 0LL;
  v21 = 0LL;
  *(_QWORD *)v108 = 0LL;
  v22 = (__int64 (__fastcall *)(DXGADAPTER *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *))*((_QWORD *)v109 + 5);
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  v141 = 0;
  v137[0] = 0;
  v23 = v22(v20, v108, &v113);
  v25 = v23;
  if ( v23 >= 0 )
  {
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v137,
      *(__int64 *)v108,
      *((_QWORD *)v19 + 8),
      *(_QWORD *)a1);
    v21 = v138;
    v112 = 0LL;
    v111 = 0LL;
    v27 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))v113)(v138, &v112, &v111);
    v25 = v27;
    if ( v27 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      v29[3] = v21;
      v30 = *(_QWORD *)a1;
LABEL_16:
      v29[4] = v30;
      v29[5] = v25;
      goto LABEL_13;
    }
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _WORD, int))(v111 + 40))(
            v112,
            *(unsigned int *)(a1 + 8),
            *(unsigned int *)(a1 + 12),
            1LL,
            0,
            2);
    v25 = v31;
    if ( v31 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v32);
      v29[3] = *(unsigned int *)(a1 + 8);
      v29[4] = *(unsigned int *)(a1 + 12);
      v29[5] = v21;
      v29[6] = v25;
LABEL_13:
      WdLogEvent5_WdError(v29);
      goto LABEL_86;
    }
    VideoOutputTechnology = DmmGetVideoOutputTechnology(*(DXGADAPTER **)a1, *(_DWORD *)(a1 + 12), 0LL, v108);
    v25 = VideoOutputTechnology;
    if ( VideoOutputTechnology < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v34);
      v29[3] = v25;
      goto LABEL_13;
    }
    v35 = *(unsigned int *)(a1 + 8);
    v114 = 0LL;
    v109 = 0LL;
    v110 = (unsigned int)(v108[0] - 15) <= 1;
    v121 = 0LL;
    v122 = 0LL;
    v123 = 0LL;
    v36 = *(__int64 (__fastcall **)(__int64, __int64, const struct _DXGDMM_INTERFACE **, __int64 *))(v113 + 8);
    v124 = 0;
    v120[0] = 0;
    v37 = v36(v21, v35, &v109, &v114);
    v25 = v37;
    if ( v37 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v38);
      v29[3] = v21;
      v30 = *(unsigned int *)(a1 + 8);
      goto LABEL_16;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v120,
      (__int64)v109,
      *(_QWORD *)(v113 + 16),
      v21);
    v39 = v121;
    v109 = 0LL;
    v131 = 0LL;
    v40 = *(__int64 (__fastcall **)(__int64, const struct _DXGDMM_INTERFACE **))(v114 + 8);
    v132 = 0LL;
    v133 = 0LL;
    v134 = 0;
    v130[0] = 0;
    v41 = v40(v121, &v109);
    v25 = v41;
    if ( v41 < 0 )
    {
      v43 = WdLogNewEntry5_WdError(v42);
      *(_QWORD *)(v43 + 24) = v39;
      *(_QWORD *)(v43 + 32) = v25;
      WdLogEvent5_WdError(v43);
LABEL_84:
      if ( v120[0] )
        v122(v123, v39);
      goto LABEL_86;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v130,
      (__int64)v109,
      *(_QWORD *)(v114 + 32),
      v39);
    v45 = v131;
    if ( !v131 )
      goto LABEL_50;
    while ( 1 )
    {
      v46 = v45[1];
      if ( ((v46 - 1) & 0xFFFFFFFC) != 0 )
        goto LABEL_47;
      if ( v46 == 2 )
        goto LABEL_47;
      v47 = v45[2];
      if ( v47 != v45[4] )
        goto LABEL_47;
      v48 = v45[3];
      if ( v48 != v45[5]
        || v45[7] - 21 > 1
        || v47 != v143.VideoSignalInfo.ActiveSize.cx
        || v48 != v143.VideoSignalInfo.ActiveSize.cy )
      {
        goto LABEL_47;
      }
      LOBYTE(v44) = 1;
      v49 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v114 + 40))(v39, *v45, v44);
      v53 = v49;
      if ( v49 < 0 )
      {
        v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v51, v50, v52);
        v54[3] = *v45;
        v54[4] = v39;
        v54[5] = v53;
        WdLogEvent5_WdWarning(v54);
        goto LABEL_47;
      }
      v55 = *(unsigned int *)(a1 + 12);
      v109 = 0LL;
      *(_QWORD *)v108 = 0LL;
      v56 = *(__int64 (__fastcall **)(__int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, const struct _DXGDMM_INTERFACE **))(v113 + 24);
      v126 = 0LL;
      v127 = 0LL;
      v128 = 0LL;
      v129 = 0;
      v125[0] = 0;
      v57 = v56(v21, v55, v108, &v109);
      v25 = v57;
      if ( v57 < 0 )
      {
        v100 = (_QWORD *)WdLogNewEntry5_WdError(v58);
        v100[3] = v21;
        v100[4] = *(unsigned int *)(a1 + 12);
        v100[5] = v25;
LABEL_77:
        WdLogEvent5_WdError(v100);
        goto LABEL_82;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)v125,
        *(__int64 *)v108,
        *(_QWORD *)(v113 + 32),
        v21);
      v59 = v126;
      *(_QWORD *)v108 = 0LL;
      v116 = 0LL;
      v60 = (__int64 (__fastcall *)(__int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))*((_QWORD *)v109 + 1);
      v117 = 0LL;
      v118 = 0LL;
      v119 = 0;
      v115[0] = 0;
      v61 = v60(v126, v108);
      v25 = v61;
      if ( v61 < 0 )
      {
        v63 = WdLogNewEntry5_WdError(v62);
        *(_QWORD *)(v63 + 24) = v59;
        *(_QWORD *)(v63 + 32) = v25;
        WdLogEvent5_WdError(v63);
LABEL_32:
        if ( v125[0] )
          v127(v128, v59);
        v39 = v121;
        goto LABEL_82;
      }
      while ( 1 )
      {
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
          (__int64)v115,
          *(__int64 *)v108,
          *((_QWORD *)v109 + 4),
          v59);
        v74 = v116;
        if ( !v116 )
          break;
        LOBYTE(v73) = v110;
        v106 = 0;
        if ( (*((int (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))v109 + 10))(
               v116,
               &v143,
               v73,
               &v106) >= 0
          && v106 )
        {
          LOBYTE(v64) = 1;
          v65 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v109 + 6))(v59, *v74, v64);
          v69 = v65;
          if ( v65 < 0 )
          {
            v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v67, v66, v68);
            v70[3] = *v74;
            v70[4] = v59;
            v70[5] = v69;
            WdLogEvent5_WdWarning(v70);
            goto LABEL_39;
          }
          v84 = *(unsigned int *)(a1 + 12);
          v85 = *(unsigned int *)(a1 + 8);
          *(_QWORD *)v108 = 0LL;
          v86 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v111 + 24))(
                  v112,
                  v85,
                  v84,
                  v108);
          v25 = v86;
          if ( v86 < 0 )
            goto LABEL_71;
          v88 = *(_DWORD *)(*(_QWORD *)v108 + 16LL);
          (*(void (__fastcall **)(__int64))(v111 + 32))(v112);
          if ( (v88 & 1) != 0 )
          {
            LOBYTE(v105) = 1;
            v89 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int))(v111 + 64))(
                    v112,
                    *(unsigned int *)(a1 + 8),
                    *(unsigned int *)(a1 + 12),
                    1LL,
                    v105);
            v25 = v89;
            if ( v89 < 0
              || (v90 = *(unsigned int *)(a1 + 12),
                  v91 = *(unsigned int *)(a1 + 8),
                  *(_QWORD *)v108 = 0LL,
                  v92 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v111 + 24))(
                          v112,
                          v91,
                          v90,
                          v108),
                  v25 = v92,
                  v92 < 0) )
            {
LABEL_71:
              v99 = (_QWORD *)WdLogNewEntry5_WdError(v87);
              v99[3] = *(unsigned int *)(a1 + 8);
              v99[4] = *(unsigned int *)(a1 + 12);
              v99[5] = v25;
              goto LABEL_73;
            }
            v93 = *(struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)(*(_QWORD *)v108 + 24LL);
            (*(void (__fastcall **)(__int64))(v111 + 32))(v112);
            v94 = D3DKMDT_VOT_SVIDEO;
            v108[0] = D3DKMDT_VOT_SVIDEO;
            while ( 2 )
            {
              if ( BmlIsSupportedPathRotation((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v94, v93) )
              {
                PopulateDisplayModeFromPresentPath(
                  v45,
                  v74,
                  1uLL,
                  (D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v94,
                  1,
                  1,
                  0,
                  2,
                  (__int64)&v142,
                  v107);
                Mode = MODE_UNION_LIST::FindMode((MODE_UNION_LIST *)(a1 + 16), &v142);
                if ( !Mode )
                {
                  LODWORD(v25) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 16), &v142);
                  if ( (int)v25 < 0 )
                    goto LABEL_74;
                  v94 = v108[0];
                  goto LABEL_66;
                }
                UpgradeDispModeFlags(Mode, &v142, v96, v97);
                if ( v107[0] )
                {
LABEL_66:
                  if ( v107[0] )
                  {
                    ++v142.IntegerRefreshRate;
                    *(_DWORD *)&v142.Flags |= 2u;
                    LODWORD(v25) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 16), &v142);
                    if ( (int)v25 < 0 )
                      goto LABEL_74;
                    v94 = v108[0];
                  }
                }
              }
              v108[0] = ++v94;
              if ( v94 > D3DKMDT_VOT_DVI )
              {
                v98 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v111 + 72))(
                        v112,
                        *(unsigned int *)(a1 + 8),
                        *(unsigned int *)(a1 + 12),
                        0LL);
                v25 = v98;
                if ( v98 < 0 )
                  goto LABEL_71;
                break;
              }
              continue;
            }
          }
        }
LABEL_39:
        *(_QWORD *)v108 = 0LL;
        v71 = (*((__int64 (__fastcall **)(__int64, unsigned int *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))v109 + 2))(
                v59,
                v74,
                v108);
        v25 = v71;
        if ( v71 < 0 )
          goto LABEL_72;
      }
      v75 = (*((__int64 (__fastcall **)(__int64, _QWORD))v109 + 7))(v59, 0LL);
      v25 = v75;
      if ( v75 < 0 )
      {
LABEL_72:
        v99 = (_QWORD *)WdLogNewEntry5_WdError(v72);
        v99[3] = v59;
        v99[4] = v25;
LABEL_73:
        WdLogEvent5_WdError(v99);
LABEL_74:
        if ( v115[0] )
          v117(v118, v74);
        goto LABEL_32;
      }
      if ( v115[0] )
        v117(v118, 0LL);
      if ( v125[0] )
        v127(v128, v59);
      v39 = v121;
LABEL_47:
      v109 = 0LL;
      v76 = (*(__int64 (__fastcall **)(__int64, unsigned int *, const struct _DXGDMM_INTERFACE **))(v114 + 16))(
              v39,
              v45,
              &v109);
      v25 = v76;
      if ( v76 < 0 )
      {
        v100 = (_QWORD *)WdLogNewEntry5_WdError(v77);
        v100[3] = v39;
        v100[4] = v25;
        goto LABEL_77;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
        (__int64)v130,
        (__int64)v109,
        *(_QWORD *)(v114 + 32),
        v39);
      v45 = v131;
      if ( !v131 )
      {
        v3 = v135;
LABEL_50:
        v78 = *(_DWORD *)(a1 + 32);
        if ( v78 )
        {
          v80 = v78;
          v79 = 44LL * v78;
          if ( !is_mul_ok(v80, 0x2CuLL) )
            v79 = -1LL;
          v81 = (struct _D3DKMT_DISPLAYMODE *)operator new(v79, 0x4B677844u, PagedPool);
          v82 = v136;
          *v136 = v81;
          if ( !v81 )
          {
            v83 = WdLogNewEntry5_WdLowResource(0LL);
            *(_QWORD *)(v83 + 24) = 1614LL;
            WdLogEvent5_WdLowResource(v83);
            LODWORD(v25) = -1073741801;
            goto LABEL_82;
          }
          memset(v81, 0, 44LL * *(unsigned int *)(a1 + 32));
          UniqueModes = MODE_UNION_LIST::GetUniqueModes(
                          (MODE_UNION_LIST *)(a1 + 16),
                          *(unsigned int *)(a1 + 32),
                          *v82,
                          v3);
          v103 = UniqueModes;
          if ( UniqueModes < 0 )
          {
            v104 = WdLogNewEntry5_WdAssertion(v102);
            *(_QWORD *)(v104 + 24) = v103;
            WdLogEvent5_WdAssertion(v104);
          }
        }
        else
        {
          *v3 = 0;
        }
        LODWORD(v25) = 0;
LABEL_82:
        if ( v130[0] )
          v132(v133, v45);
        goto LABEL_84;
      }
    }
  }
  v26 = WdLogNewEntry5_WdError(v24);
  *(_QWORD *)(v26 + 24) = *(_QWORD *)a1;
  *(_QWORD *)(v26 + 32) = v25;
  WdLogEvent5_WdError(v26);
LABEL_86:
  if ( v137[0] )
    v139(v140, v21);
  return (unsigned int)v25;
}
