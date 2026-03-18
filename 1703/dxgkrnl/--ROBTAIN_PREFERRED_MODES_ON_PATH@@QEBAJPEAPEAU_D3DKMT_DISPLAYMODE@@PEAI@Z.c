/*
 * XREFs of ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C018CBB0
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00A74A4 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0003884 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C000C3D4 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00A2674 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     DxgkQueryDmmInterface @ 0x1C00A7230 (DxgkQueryDmmInterface.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AB07C (DmmGetVideoOutputTechnology.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C00F2A78 (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00F5E78 (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C00F5F70 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1C00F60F0 (-FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C00F6170 (_PopulateDisplayModeFromPresentPath.c)
 *     _UpgradeDispModeFlags @ 0x1C018EF30 (_UpgradeDispModeFlags.c)
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
  __int64 v11; // r9
  __int64 v12; // rbx
  _QWORD *v13; // rax
  DXGADAPTER *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  const struct _DXGDMM_INTERFACE *v21; // rbx
  DXGADAPTER *v22; // rcx
  __int64 v23; // r13
  __int64 (__fastcall *v24)(DXGADAPTER *, __int64 *, __int64 *); // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int VideoOutputTechnology; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 (__fastcall *v42)(__int64, __int64, const struct _DXGDMM_INTERFACE **, __int64 *); // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r14
  __int64 (__fastcall *v47)(__int64, const struct _DXGDMM_INTERFACE **); // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r8
  unsigned int *v53; // r15
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // edx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rbx
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 (__fastcall *v65)(__int64, __int64, __int64 *, const struct _DXGDMM_INTERFACE **); // rax
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r14
  __int64 (__fastcall *v70)(__int64, __int64 *); // rax
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // r8
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rbx
  _QWORD *v82; // rax
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  unsigned int *v87; // r12
  int v88; // eax
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  unsigned int v92; // eax
  SIZE_T v93; // rax
  unsigned __int64 v94; // kr00_8
  struct _D3DKMT_DISPLAYMODE *v95; // rax
  struct _D3DKMT_DISPLAYMODE **v96; // rbx
  __int64 v97; // rax
  __int64 v98; // r8
  __int64 v99; // rdx
  int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // rcx
  int v103; // ebx
  int v104; // eax
  __int64 v105; // r8
  __int64 v106; // rdx
  int v107; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT v108; // ebx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v109; // edi
  struct _D3DKMT_DISPLAYMODE *Mode; // rax
  __int64 v111; // r8
  __int64 v112; // r9
  int v113; // eax
  _QWORD *v114; // rax
  _QWORD *v115; // rax
  int UniqueModes; // eax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rbx
  __int64 v122; // rax
  int v123; // [rsp+20h] [rbp-E0h]
  char v124; // [rsp+50h] [rbp-B0h] BYREF
  char v125[7]; // [rsp+51h] [rbp-AFh] BYREF
  __int64 v126; // [rsp+58h] [rbp-A8h] BYREF
  const struct _DXGDMM_INTERFACE *v127; // [rsp+60h] [rbp-A0h] BYREF
  bool v128; // [rsp+68h] [rbp-98h]
  __int64 v129; // [rsp+70h] [rbp-90h] BYREF
  __int64 v130; // [rsp+78h] [rbp-88h] BYREF
  __int64 v131; // [rsp+80h] [rbp-80h] BYREF
  __int64 v132; // [rsp+88h] [rbp-78h] BYREF
  char v133[8]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v134; // [rsp+98h] [rbp-68h]
  void (__fastcall *v135)(__int64, unsigned int *); // [rsp+A0h] [rbp-60h]
  __int64 v136; // [rsp+A8h] [rbp-58h]
  int v137; // [rsp+B0h] [rbp-50h]
  char v138[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v139; // [rsp+C0h] [rbp-40h]
  void (__fastcall *v140)(__int64, __int64); // [rsp+C8h] [rbp-38h]
  __int64 v141; // [rsp+D0h] [rbp-30h]
  int v142; // [rsp+D8h] [rbp-28h]
  char v143[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v144; // [rsp+E8h] [rbp-18h]
  void (__fastcall *v145)(__int64, __int64); // [rsp+F0h] [rbp-10h]
  __int64 v146; // [rsp+F8h] [rbp-8h]
  int v147; // [rsp+100h] [rbp+0h]
  char v148[8]; // [rsp+108h] [rbp+8h] BYREF
  unsigned int *v149; // [rsp+110h] [rbp+10h]
  void (__fastcall *v150)(__int64, unsigned int *); // [rsp+118h] [rbp+18h]
  __int64 v151; // [rsp+120h] [rbp+20h]
  int v152; // [rsp+128h] [rbp+28h]
  unsigned int *v153; // [rsp+130h] [rbp+30h]
  struct _D3DKMT_DISPLAYMODE **v154; // [rsp+138h] [rbp+38h]
  char v155[8]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v156; // [rsp+148h] [rbp+48h]
  void (__fastcall *v157)(__int64, __int64); // [rsp+150h] [rbp+50h]
  __int64 v158; // [rsp+158h] [rbp+58h]
  int v159; // [rsp+160h] [rbp+60h]
  struct _D3DKMT_DISPLAYMODE v160; // [rsp+168h] [rbp+68h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v161; // [rsp+1A0h] [rbp+A0h] BYREF

  v154 = a2;
  v3 = a3;
  v4 = *(_DWORD *)(a1 + 12);
  v6 = *(DXGADAPTER **)a1;
  v153 = a3;
  PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(v6, v4, &v161);
  v12 = PreferredMonitorSourceModeOnTarget;
  if ( PreferredMonitorSourceModeOnTarget < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    v13[3] = *(_QWORD *)a1;
    v13[4] = *(unsigned int *)(a1 + 12);
    v13[5] = v12;
    WdLogEvent5_WdWarning(v13);
    return 0LL;
  }
  v15 = *(DXGADAPTER **)a1;
  v127 = 0LL;
  v16 = DxgkQueryDmmInterface(v15, v8, &v127, v11);
  v19 = v16;
  if ( v16 < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v20 + 24) = *(_QWORD *)a1;
    *(_QWORD *)(v20 + 32) = v19;
    WdLogEvent5_WdError(v20);
    return (unsigned int)v19;
  }
  v21 = v127;
  v22 = *(DXGADAPTER **)a1;
  v131 = 0LL;
  v23 = 0LL;
  v126 = 0LL;
  v24 = (__int64 (__fastcall *)(DXGADAPTER *, __int64 *, __int64 *))*((_QWORD *)v127 + 5);
  v156 = 0LL;
  v157 = 0LL;
  v158 = 0LL;
  v159 = 0;
  v155[0] = 0;
  v25 = v24(v22, &v126, &v131);
  v28 = v25;
  if ( v25 >= 0 )
  {
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v155,
      v126,
      *((_QWORD *)v21 + 8),
      *(_QWORD *)a1);
    v23 = v156;
    v130 = 0LL;
    v129 = 0LL;
    v30 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))v131)(v156, &v130, &v129);
    v28 = v30;
    if ( v30 < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
      v33[3] = v23;
      v34 = *(_QWORD *)a1;
LABEL_16:
      v33[4] = v34;
      v33[5] = v28;
      goto LABEL_13;
    }
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _WORD, int))(v129 + 40))(
            v130,
            *(unsigned int *)(a1 + 8),
            *(unsigned int *)(a1 + 12),
            1LL,
            0,
            2);
    v28 = v35;
    if ( v35 < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
      v33[3] = *(unsigned int *)(a1 + 8);
      v33[4] = *(unsigned int *)(a1 + 12);
      v33[5] = v23;
      v33[6] = v28;
LABEL_13:
      WdLogEvent5_WdError(v33);
      goto LABEL_86;
    }
    VideoOutputTechnology = DmmGetVideoOutputTechnology(*(DXGADAPTER **)a1, *(unsigned int *)(a1 + 12), 0LL, &v126);
    v28 = VideoOutputTechnology;
    if ( VideoOutputTechnology < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
      v33[3] = v28;
      goto LABEL_13;
    }
    v41 = *(unsigned int *)(a1 + 8);
    v132 = 0LL;
    v127 = 0LL;
    v128 = (unsigned int)(v126 - 15) <= 1;
    v139 = 0LL;
    v140 = 0LL;
    v141 = 0LL;
    v42 = *(__int64 (__fastcall **)(__int64, __int64, const struct _DXGDMM_INTERFACE **, __int64 *))(v131 + 8);
    v142 = 0;
    v138[0] = 0;
    v43 = v42(v23, v41, &v127, &v132);
    v28 = v43;
    if ( v43 < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44);
      v33[3] = v23;
      v34 = *(unsigned int *)(a1 + 8);
      goto LABEL_16;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v138,
      (__int64)v127,
      *(_QWORD *)(v131 + 16),
      v23);
    v46 = v139;
    v127 = 0LL;
    v149 = 0LL;
    v47 = *(__int64 (__fastcall **)(__int64, const struct _DXGDMM_INTERFACE **))(v132 + 8);
    v150 = 0LL;
    v151 = 0LL;
    v152 = 0;
    v148[0] = 0;
    v48 = v47(v139, &v127);
    v28 = v48;
    if ( v48 < 0 )
    {
      v51 = WdLogNewEntry5_WdError(v50, v49);
      *(_QWORD *)(v51 + 24) = v46;
      *(_QWORD *)(v51 + 32) = v28;
      WdLogEvent5_WdError(v51);
LABEL_84:
      if ( v138[0] )
        v140(v141, v46);
      goto LABEL_86;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v148,
      (__int64)v127,
      *(_QWORD *)(v132 + 32),
      v46);
    v53 = v149;
    if ( !v149 )
      goto LABEL_50;
    while ( 1 )
    {
      v54 = v53[1];
      if ( ((v54 - 1) & 0xFFFFFFFC) != 0 )
        goto LABEL_47;
      if ( v54 == 2 )
        goto LABEL_47;
      v55 = v53[2];
      if ( v55 != v53[4] )
        goto LABEL_47;
      v56 = v53[3];
      if ( v56 != v53[5]
        || v53[7] - 21 > 1
        || v55 != v161.VideoSignalInfo.ActiveSize.cx
        || v56 != v161.VideoSignalInfo.ActiveSize.cy )
      {
        goto LABEL_47;
      }
      LOBYTE(v52) = 1;
      v57 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v132 + 40))(v46, *v53, v52);
      v62 = v57;
      if ( v57 < 0 )
      {
        v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v58, v60, v61);
        v63[3] = *v53;
        v63[4] = v46;
        v63[5] = v62;
        WdLogEvent5_WdWarning(v63);
        goto LABEL_47;
      }
      v64 = *(unsigned int *)(a1 + 12);
      v127 = 0LL;
      v126 = 0LL;
      v65 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, const struct _DXGDMM_INTERFACE **))(v131 + 24);
      v144 = 0LL;
      v145 = 0LL;
      v146 = 0LL;
      v147 = 0;
      v143[0] = 0;
      v66 = v65(v23, v64, &v126, &v127);
      v28 = v66;
      if ( v66 < 0 )
      {
        v115 = (_QWORD *)WdLogNewEntry5_WdError(v68, v67);
        v115[3] = v23;
        v115[4] = *(unsigned int *)(a1 + 12);
        v115[5] = v28;
LABEL_77:
        WdLogEvent5_WdError(v115);
        goto LABEL_82;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)v143,
        v126,
        *(_QWORD *)(v131 + 32),
        v23);
      v69 = v144;
      v126 = 0LL;
      v134 = 0LL;
      v70 = (__int64 (__fastcall *)(__int64, __int64 *))*((_QWORD *)v127 + 1);
      v135 = 0LL;
      v136 = 0LL;
      v137 = 0;
      v133[0] = 0;
      v71 = v70(v144, &v126);
      v28 = v71;
      if ( v71 < 0 )
      {
        v74 = WdLogNewEntry5_WdError(v73, v72);
        *(_QWORD *)(v74 + 24) = v69;
        *(_QWORD *)(v74 + 32) = v28;
        WdLogEvent5_WdError(v74);
LABEL_32:
        if ( v143[0] )
          v145(v146, v69);
        v46 = v139;
        goto LABEL_82;
      }
      while ( 1 )
      {
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
          (__int64)v133,
          v126,
          *((_QWORD *)v127 + 4),
          v69);
        v87 = v134;
        if ( !v134 )
          break;
        LOBYTE(v86) = v128;
        v124 = 0;
        if ( (*((int (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))v127 + 10))(
               v134,
               &v161,
               v86,
               &v124) >= 0
          && v124 )
        {
          LOBYTE(v75) = 1;
          v76 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v127 + 6))(v69, *v87, v75);
          v81 = v76;
          if ( v76 < 0 )
          {
            v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v78, v77, v79, v80);
            v82[3] = *v87;
            v82[4] = v69;
            v82[5] = v81;
            WdLogEvent5_WdWarning(v82);
            goto LABEL_39;
          }
          v98 = *(unsigned int *)(a1 + 12);
          v99 = *(unsigned int *)(a1 + 8);
          v126 = 0LL;
          v100 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(v129 + 24))(v130, v99, v98, &v126);
          v28 = v100;
          if ( v100 < 0 )
            goto LABEL_71;
          v103 = *(_DWORD *)(v126 + 16);
          (*(void (__fastcall **)(__int64))(v129 + 32))(v130);
          if ( (v103 & 1) != 0 )
          {
            LOBYTE(v123) = 1;
            v104 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int))(v129 + 64))(
                     v130,
                     *(unsigned int *)(a1 + 8),
                     *(unsigned int *)(a1 + 12),
                     1LL,
                     v123);
            v28 = v104;
            if ( v104 < 0
              || (v105 = *(unsigned int *)(a1 + 12),
                  v106 = *(unsigned int *)(a1 + 8),
                  v126 = 0LL,
                  v107 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(v129 + 24))(
                           v130,
                           v106,
                           v105,
                           &v126),
                  v28 = v107,
                  v107 < 0) )
            {
LABEL_71:
              v114 = (_QWORD *)WdLogNewEntry5_WdError(v102, v101);
              v114[3] = *(unsigned int *)(a1 + 8);
              v114[4] = *(unsigned int *)(a1 + 12);
              v114[5] = v28;
              goto LABEL_73;
            }
            v108 = *(struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)(v126 + 24);
            (*(void (__fastcall **)(__int64))(v129 + 32))(v130);
            v109 = D3DKMDT_VPPR_IDENTITY;
            LODWORD(v126) = 1;
            while ( 2 )
            {
              if ( BmlIsSupportedPathRotation(v109, v108) )
              {
                PopulateDisplayModeFromPresentPath(
                  v53,
                  v87,
                  1uLL,
                  (unsigned int)v109,
                  1u,
                  1,
                  0,
                  2,
                  (__int64)&v160,
                  v125);
                Mode = MODE_UNION_LIST::FindMode((MODE_UNION_LIST *)(a1 + 16), &v160);
                if ( !Mode )
                {
                  LODWORD(v28) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 16), &v160);
                  if ( (int)v28 < 0 )
                    goto LABEL_74;
                  v109 = (int)v126;
                  goto LABEL_66;
                }
                UpgradeDispModeFlags(Mode, &v160, v111, v112);
                if ( v125[0] )
                {
LABEL_66:
                  if ( v125[0] )
                  {
                    ++v160.IntegerRefreshRate;
                    *(_DWORD *)&v160.Flags |= 2u;
                    LODWORD(v28) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 16), &v160);
                    if ( (int)v28 < 0 )
                      goto LABEL_74;
                    v109 = (int)v126;
                  }
                }
              }
              LODWORD(v126) = ++v109;
              if ( v109 > D3DKMDT_VPPR_ROTATE270 )
              {
                v113 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v129 + 72))(
                         v130,
                         *(unsigned int *)(a1 + 8),
                         *(unsigned int *)(a1 + 12),
                         0LL);
                v28 = v113;
                if ( v113 < 0 )
                  goto LABEL_71;
                break;
              }
              continue;
            }
          }
        }
LABEL_39:
        v126 = 0LL;
        v83 = (*((__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))v127 + 2))(v69, v87, &v126);
        v28 = v83;
        if ( v83 < 0 )
          goto LABEL_72;
      }
      v88 = (*((__int64 (__fastcall **)(__int64, _QWORD))v127 + 7))(v69, 0LL);
      v28 = v88;
      if ( v88 < 0 )
      {
LABEL_72:
        v114 = (_QWORD *)WdLogNewEntry5_WdError(v85, v84);
        v114[3] = v69;
        v114[4] = v28;
LABEL_73:
        WdLogEvent5_WdError(v114);
LABEL_74:
        if ( v133[0] )
          v135(v136, v87);
        goto LABEL_32;
      }
      if ( v133[0] )
        v135(v136, 0LL);
      if ( v143[0] )
        v145(v146, v69);
      v46 = v139;
LABEL_47:
      v127 = 0LL;
      v89 = (*(__int64 (__fastcall **)(__int64, unsigned int *, const struct _DXGDMM_INTERFACE **))(v132 + 16))(
              v46,
              v53,
              &v127);
      v28 = v89;
      if ( v89 < 0 )
      {
        v115 = (_QWORD *)WdLogNewEntry5_WdError(v91, v90);
        v115[3] = v46;
        v115[4] = v28;
        goto LABEL_77;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
        (__int64)v148,
        (__int64)v127,
        *(_QWORD *)(v132 + 32),
        v46);
      v53 = v149;
      if ( !v149 )
      {
        v3 = v153;
LABEL_50:
        v92 = *(_DWORD *)(a1 + 32);
        if ( v92 )
        {
          v94 = v92;
          v93 = 44LL * v92;
          if ( !is_mul_ok(v94, 0x2CuLL) )
            v93 = -1LL;
          v95 = (struct _D3DKMT_DISPLAYMODE *)operator new(v93, 0x4B677844u, PagedPool);
          v96 = v154;
          *v154 = v95;
          if ( !v95 )
          {
            v97 = WdLogNewEntry5_WdLowResource(0LL);
            *(_QWORD *)(v97 + 24) = 1637LL;
            WdLogEvent5_WdLowResource(v97);
            LODWORD(v28) = -1073741801;
            goto LABEL_82;
          }
          memset(v95, 0, 44LL * *(unsigned int *)(a1 + 32));
          UniqueModes = MODE_UNION_LIST::GetUniqueModes(
                          (MODE_UNION_LIST *)(a1 + 16),
                          *(unsigned int *)(a1 + 32),
                          *v96,
                          v3);
          v121 = UniqueModes;
          if ( UniqueModes < 0 )
          {
            v122 = WdLogNewEntry5_WdAssertion(v118, v117, v119, v120);
            *(_QWORD *)(v122 + 24) = v121;
            WdLogEvent5_WdAssertion(v122);
          }
        }
        else
        {
          *v3 = 0;
        }
        LODWORD(v28) = 0;
LABEL_82:
        if ( v148[0] )
          v150(v151, v53);
        goto LABEL_84;
      }
    }
  }
  v29 = WdLogNewEntry5_WdError(v27, v26);
  *(_QWORD *)(v29 + 24) = *(_QWORD *)a1;
  *(_QWORD *)(v29 + 32) = v28;
  WdLogEvent5_WdError(v29);
LABEL_86:
  if ( v155[0] )
    v157(v158, v23);
  return (unsigned int)v28;
}
