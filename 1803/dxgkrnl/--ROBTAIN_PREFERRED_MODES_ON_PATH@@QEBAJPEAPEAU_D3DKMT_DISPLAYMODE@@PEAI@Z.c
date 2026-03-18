/*
 * XREFs of ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C018FFB8
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C01916F8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C00087DC (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C0030290 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00AB1D4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C00C2A88 (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00C731C (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     DxgkQueryDmmInterface @ 0x1C00C79F4 (DxgkQueryDmmInterface.c)
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01908FC (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1C0191600 (-FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0191E2C (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C0194070 (_PopulateDisplayModeFromPresentPath.c)
 *     _UpgradeDispModeFlags @ 0x1C01941C4 (_UpgradeDispModeFlags.c)
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
  int v96; // eax
  _QWORD *v97; // rax
  _QWORD *v98; // rax
  int UniqueModes; // eax
  __int64 v100; // rcx
  __int64 v101; // rbx
  __int64 v102; // rax
  int v103; // [rsp+20h] [rbp-E0h]
  char v104; // [rsp+50h] [rbp-B0h] BYREF
  char v105[7]; // [rsp+51h] [rbp-AFh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v106[2]; // [rsp+58h] [rbp-A8h] BYREF
  const struct _DXGDMM_INTERFACE *v107; // [rsp+60h] [rbp-A0h] BYREF
  bool v108; // [rsp+68h] [rbp-98h]
  __int64 v109; // [rsp+70h] [rbp-90h] BYREF
  __int64 v110; // [rsp+78h] [rbp-88h] BYREF
  __int64 v111; // [rsp+80h] [rbp-80h] BYREF
  __int64 v112; // [rsp+88h] [rbp-78h] BYREF
  char v113[8]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v114; // [rsp+98h] [rbp-68h]
  void (__fastcall *v115)(__int64, unsigned int *); // [rsp+A0h] [rbp-60h]
  __int64 v116; // [rsp+A8h] [rbp-58h]
  int v117; // [rsp+B0h] [rbp-50h]
  char v118[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v119; // [rsp+C0h] [rbp-40h]
  void (__fastcall *v120)(__int64, __int64); // [rsp+C8h] [rbp-38h]
  __int64 v121; // [rsp+D0h] [rbp-30h]
  int v122; // [rsp+D8h] [rbp-28h]
  char v123[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v124; // [rsp+E8h] [rbp-18h]
  void (__fastcall *v125)(__int64, __int64); // [rsp+F0h] [rbp-10h]
  __int64 v126; // [rsp+F8h] [rbp-8h]
  int v127; // [rsp+100h] [rbp+0h]
  char v128[8]; // [rsp+108h] [rbp+8h] BYREF
  unsigned int *v129; // [rsp+110h] [rbp+10h]
  void (__fastcall *v130)(__int64, unsigned int *); // [rsp+118h] [rbp+18h]
  __int64 v131; // [rsp+120h] [rbp+20h]
  int v132; // [rsp+128h] [rbp+28h]
  unsigned int *v133; // [rsp+130h] [rbp+30h]
  struct _D3DKMT_DISPLAYMODE **v134; // [rsp+138h] [rbp+38h]
  char v135[8]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v136; // [rsp+148h] [rbp+48h]
  void (__fastcall *v137)(__int64, __int64); // [rsp+150h] [rbp+50h]
  __int64 v138; // [rsp+158h] [rbp+58h]
  int v139; // [rsp+160h] [rbp+60h]
  struct _D3DKMT_DISPLAYMODE v140; // [rsp+168h] [rbp+68h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v141; // [rsp+1A0h] [rbp+A0h] BYREF

  v134 = a2;
  v3 = a3;
  v4 = *(_DWORD *)(a1 + 12);
  v6 = *(DXGADAPTER **)a1;
  v133 = a3;
  PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(v6, v4, &v141);
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
  v107 = 0LL;
  v15 = DxgkQueryDmmInterface(v14, v8, &v107);
  v17 = v15;
  if ( v15 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v18 + 24) = *(_QWORD *)a1;
    *(_QWORD *)(v18 + 32) = v17;
    WdLogEvent5_WdError(v18);
    return (unsigned int)v17;
  }
  v19 = v107;
  v20 = *(DXGADAPTER **)a1;
  v111 = 0LL;
  v21 = 0LL;
  *(_QWORD *)v106 = 0LL;
  v22 = (__int64 (__fastcall *)(DXGADAPTER *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *))*((_QWORD *)v107 + 5);
  v136 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  v139 = 0;
  v135[0] = 0;
  v23 = v22(v20, v106, &v111);
  v25 = v23;
  if ( v23 >= 0 )
  {
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v135,
      *(__int64 *)v106,
      *((_QWORD *)v19 + 8),
      *(_QWORD *)a1);
    v21 = v136;
    v110 = 0LL;
    v109 = 0LL;
    v27 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))v111)(v136, &v110, &v109);
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
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _WORD, int))(v109 + 40))(
            v110,
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
    VideoOutputTechnology = DmmGetVideoOutputTechnology(*(DXGADAPTER **)a1, *(_DWORD *)(a1 + 12), 0LL, v106);
    v25 = VideoOutputTechnology;
    if ( VideoOutputTechnology < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v34);
      v29[3] = v25;
      goto LABEL_13;
    }
    v35 = *(unsigned int *)(a1 + 8);
    v112 = 0LL;
    v107 = 0LL;
    v108 = (unsigned int)(v106[0] - 15) <= 1;
    v119 = 0LL;
    v120 = 0LL;
    v121 = 0LL;
    v36 = *(__int64 (__fastcall **)(__int64, __int64, const struct _DXGDMM_INTERFACE **, __int64 *))(v111 + 8);
    v122 = 0;
    v118[0] = 0;
    v37 = v36(v21, v35, &v107, &v112);
    v25 = v37;
    if ( v37 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v38);
      v29[3] = v21;
      v30 = *(unsigned int *)(a1 + 8);
      goto LABEL_16;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v118,
      (__int64)v107,
      *(_QWORD *)(v111 + 16),
      v21);
    v39 = v119;
    v107 = 0LL;
    v129 = 0LL;
    v40 = *(__int64 (__fastcall **)(__int64, const struct _DXGDMM_INTERFACE **))(v112 + 8);
    v130 = 0LL;
    v131 = 0LL;
    v132 = 0;
    v128[0] = 0;
    v41 = v40(v119, &v107);
    v25 = v41;
    if ( v41 < 0 )
    {
      v43 = WdLogNewEntry5_WdError(v42);
      *(_QWORD *)(v43 + 24) = v39;
      *(_QWORD *)(v43 + 32) = v25;
      WdLogEvent5_WdError(v43);
LABEL_84:
      if ( v118[0] )
        v120(v121, v39);
      goto LABEL_86;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v128,
      (__int64)v107,
      *(_QWORD *)(v112 + 32),
      v39);
    v45 = v129;
    if ( !v129 )
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
        || v47 != v141.VideoSignalInfo.ActiveSize.cx
        || v48 != v141.VideoSignalInfo.ActiveSize.cy )
      {
        goto LABEL_47;
      }
      LOBYTE(v44) = 1;
      v49 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v112 + 40))(v39, *v45, v44);
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
      v107 = 0LL;
      *(_QWORD *)v106 = 0LL;
      v56 = *(__int64 (__fastcall **)(__int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, const struct _DXGDMM_INTERFACE **))(v111 + 24);
      v124 = 0LL;
      v125 = 0LL;
      v126 = 0LL;
      v127 = 0;
      v123[0] = 0;
      v57 = v56(v21, v55, v106, &v107);
      v25 = v57;
      if ( v57 < 0 )
      {
        v98 = (_QWORD *)WdLogNewEntry5_WdError(v58);
        v98[3] = v21;
        v98[4] = *(unsigned int *)(a1 + 12);
        v98[5] = v25;
LABEL_77:
        WdLogEvent5_WdError(v98);
        goto LABEL_82;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)v123,
        *(__int64 *)v106,
        *(_QWORD *)(v111 + 32),
        v21);
      v59 = v124;
      *(_QWORD *)v106 = 0LL;
      v114 = 0LL;
      v60 = (__int64 (__fastcall *)(__int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))*((_QWORD *)v107 + 1);
      v115 = 0LL;
      v116 = 0LL;
      v117 = 0;
      v113[0] = 0;
      v61 = v60(v124, v106);
      v25 = v61;
      if ( v61 < 0 )
      {
        v63 = WdLogNewEntry5_WdError(v62);
        *(_QWORD *)(v63 + 24) = v59;
        *(_QWORD *)(v63 + 32) = v25;
        WdLogEvent5_WdError(v63);
LABEL_32:
        if ( v123[0] )
          v125(v126, v59);
        v39 = v119;
        goto LABEL_82;
      }
      while ( 1 )
      {
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
          (__int64)v113,
          *(__int64 *)v106,
          *((_QWORD *)v107 + 4),
          v59);
        v74 = v114;
        if ( !v114 )
          break;
        LOBYTE(v73) = v108;
        v104 = 0;
        if ( (*((int (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))v107 + 10))(
               v114,
               &v141,
               v73,
               &v104) >= 0
          && v104 )
        {
          LOBYTE(v64) = 1;
          v65 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v107 + 6))(v59, *v74, v64);
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
          *(_QWORD *)v106 = 0LL;
          v86 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v109 + 24))(
                  v110,
                  v85,
                  v84,
                  v106);
          v25 = v86;
          if ( v86 < 0 )
            goto LABEL_71;
          v88 = *(_DWORD *)(*(_QWORD *)v106 + 16LL);
          (*(void (__fastcall **)(__int64))(v109 + 32))(v110);
          if ( (v88 & 1) != 0 )
          {
            LOBYTE(v103) = 1;
            v89 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int))(v109 + 64))(
                    v110,
                    *(unsigned int *)(a1 + 8),
                    *(unsigned int *)(a1 + 12),
                    1LL,
                    v103);
            v25 = v89;
            if ( v89 < 0
              || (v90 = *(unsigned int *)(a1 + 12),
                  v91 = *(unsigned int *)(a1 + 8),
                  *(_QWORD *)v106 = 0LL,
                  v92 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v109 + 24))(
                          v110,
                          v91,
                          v90,
                          v106),
                  v25 = v92,
                  v92 < 0) )
            {
LABEL_71:
              v97 = (_QWORD *)WdLogNewEntry5_WdError(v87);
              v97[3] = *(unsigned int *)(a1 + 8);
              v97[4] = *(unsigned int *)(a1 + 12);
              v97[5] = v25;
              goto LABEL_73;
            }
            v93 = *(struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)(*(_QWORD *)v106 + 24LL);
            (*(void (__fastcall **)(__int64))(v109 + 32))(v110);
            v94 = D3DKMDT_VOT_SVIDEO;
            v106[0] = D3DKMDT_VOT_SVIDEO;
            while ( 2 )
            {
              if ( BmlIsSupportedPathRotation((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v94, v93) )
              {
                PopulateDisplayModeFromPresentPath(
                  (_DWORD)v45,
                  (_DWORD)v74,
                  1,
                  v94,
                  1,
                  1,
                  0,
                  2,
                  (__int64)&v140,
                  (__int64)v105);
                Mode = MODE_UNION_LIST::FindMode((MODE_UNION_LIST *)(a1 + 16), &v140);
                if ( !Mode )
                {
                  LODWORD(v25) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 16), &v140);
                  if ( (int)v25 < 0 )
                    goto LABEL_74;
                  v94 = v106[0];
                  goto LABEL_66;
                }
                UpgradeDispModeFlags(Mode, &v140);
                if ( v105[0] )
                {
LABEL_66:
                  if ( v105[0] )
                  {
                    ++v140.IntegerRefreshRate;
                    *(_DWORD *)&v140.Flags |= 2u;
                    LODWORD(v25) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 16), &v140);
                    if ( (int)v25 < 0 )
                      goto LABEL_74;
                    v94 = v106[0];
                  }
                }
              }
              v106[0] = ++v94;
              if ( v94 > D3DKMDT_VOT_DVI )
              {
                v96 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v109 + 72))(
                        v110,
                        *(unsigned int *)(a1 + 8),
                        *(unsigned int *)(a1 + 12),
                        0LL);
                v25 = v96;
                if ( v96 < 0 )
                  goto LABEL_71;
                break;
              }
              continue;
            }
          }
        }
LABEL_39:
        *(_QWORD *)v106 = 0LL;
        v71 = (*((__int64 (__fastcall **)(__int64, unsigned int *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))v107 + 2))(
                v59,
                v74,
                v106);
        v25 = v71;
        if ( v71 < 0 )
          goto LABEL_72;
      }
      v75 = (*((__int64 (__fastcall **)(__int64, _QWORD))v107 + 7))(v59, 0LL);
      v25 = v75;
      if ( v75 < 0 )
      {
LABEL_72:
        v97 = (_QWORD *)WdLogNewEntry5_WdError(v72);
        v97[3] = v59;
        v97[4] = v25;
LABEL_73:
        WdLogEvent5_WdError(v97);
LABEL_74:
        if ( v113[0] )
          v115(v116, v74);
        goto LABEL_32;
      }
      if ( v113[0] )
        v115(v116, 0LL);
      if ( v123[0] )
        v125(v126, v59);
      v39 = v119;
LABEL_47:
      v107 = 0LL;
      v76 = (*(__int64 (__fastcall **)(__int64, unsigned int *, const struct _DXGDMM_INTERFACE **))(v112 + 16))(
              v39,
              v45,
              &v107);
      v25 = v76;
      if ( v76 < 0 )
      {
        v98 = (_QWORD *)WdLogNewEntry5_WdError(v77);
        v98[3] = v39;
        v98[4] = v25;
        goto LABEL_77;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
        (__int64)v128,
        (__int64)v107,
        *(_QWORD *)(v112 + 32),
        v39);
      v45 = v129;
      if ( !v129 )
      {
        v3 = v133;
LABEL_50:
        v78 = *(_DWORD *)(a1 + 32);
        if ( v78 )
        {
          v80 = v78;
          v79 = 44LL * v78;
          if ( !is_mul_ok(v80, 0x2CuLL) )
            v79 = -1LL;
          v81 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v79, 0x4B677844u, PagedPool);
          v82 = v134;
          *v134 = v81;
          if ( !v81 )
          {
            v83 = WdLogNewEntry5_WdLowResource(0LL);
            *(_QWORD *)(v83 + 24) = 1593LL;
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
          v101 = UniqueModes;
          if ( UniqueModes < 0 )
          {
            v102 = WdLogNewEntry5_WdAssertion(v100);
            *(_QWORD *)(v102 + 24) = v101;
            WdLogEvent5_WdAssertion(v102);
          }
        }
        else
        {
          *v3 = 0;
        }
        LODWORD(v25) = 0;
LABEL_82:
        if ( v128[0] )
          v130(v131, v45);
        goto LABEL_84;
      }
    }
  }
  v26 = WdLogNewEntry5_WdError(v24);
  *(_QWORD *)(v26 + 24) = *(_QWORD *)a1;
  *(_QWORD *)(v26 + 32) = v25;
  WdLogEvent5_WdError(v26);
LABEL_86:
  if ( v135[0] )
    v137(v138, v21);
  return (unsigned int)v25;
}
