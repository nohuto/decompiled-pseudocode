/*
 * XREFs of ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C00D5738
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00E6098 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00075FC (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0007BAC (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C000A240 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000A2F4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000A34C (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000BC54 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00B3F80 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00D60EC (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C00D61F0 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1C00D6370 (-FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C00D63F0 (_PopulateDisplayModeFromPresentPath.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00D6734 (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00F58D8 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     _UpgradeDispModeFlags @ 0x1C01A3778 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall OBTAIN_MODES_ON_SOURCE::operator()(
        __int64 a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3,
        bool *a4,
        PVOID *a5,
        unsigned int *a6)
{
  unsigned int v7; // r13d
  int v8; // r15d
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r8
  DXGADAPTER *v17; // rsi
  unsigned int v18; // edx
  int v19; // edi
  int VideoOutputTechnology; // eax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 (__fastcall *v26)(__int64, __int64, __int64 *, __int64 *); // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 (__fastcall *v31)(__int64, __int64 *); // rax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r8
  unsigned int *v36; // r15
  unsigned int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // ecx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 (__fastcall *v47)(__int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **, __int64 *); // rax
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rdi
  unsigned int *v51; // r12
  __int64 (__fastcall *v52)(__int64, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **); // rax
  int v53; // eax
  __int64 v54; // rcx
  __int64 i; // rdx
  __int64 v56; // rbx
  int *v57; // rcx
  char v58; // al
  int v59; // eax
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // r8
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rbx
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  int v75; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v76; // edi
  char v77; // al
  int v78; // eax
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  int v82; // eax
  unsigned int v83; // ebx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v84; // eax
  __int32 v85; // eax
  __int64 v86; // rcx
  __int32 v87; // eax
  __int32 v88; // eax
  unsigned int v89; // eax
  char v90; // al
  int v91; // edx
  int v92; // edx
  unsigned int v93; // eax
  char v94; // cl
  struct _D3DKMT_DISPLAYMODE *Mode; // rax
  __int64 v96; // r8
  struct _D3DKMT_DISPLAYMODE *v97; // rcx
  bool *v98; // rdx
  __int64 v99; // rdx
  int v100; // eax
  __int64 v101; // rcx
  int v102; // eax
  __int64 v103; // rcx
  int v104; // eax
  __int64 v105; // rcx
  __int64 v106; // rax
  char v107; // dl
  struct _D3DKMT_DISPLAYMODE **v108; // rbx
  unsigned int v109; // eax
  SIZE_T v110; // rax
  unsigned __int64 v111; // kr00_8
  struct _D3DKMT_DISPLAYMODE *v112; // rax
  int UniqueModes; // eax
  __int64 v114; // rcx
  __int64 v115; // rbx
  struct _D3DKMT_DISPLAYMODE **v116; // rbx
  int v118; // eax
  char v119; // cl
  __int64 v120; // rdx
  int v121; // eax
  __int64 v122; // rcx
  int DisplayOnlyDriverUseRawModes; // eax
  _QWORD *v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  int v130; // edx
  int v131; // edx
  int v132; // eax
  __int64 v133; // rcx
  int v134; // eax
  __int64 v135; // rcx
  _QWORD *v136; // rax
  __int64 v137; // rcx
  _QWORD *v138; // rax
  bool v139; // zf
  __int64 v140; // rcx
  _QWORD *v141; // rdx
  __int64 v142; // rax
  __int64 v143; // rcx
  _QWORD *v144; // rdx
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  unsigned __int64 v150; // rcx
  SIZE_T v151; // rax
  struct _D3DKMT_DISPLAYMODE *v152; // rax
  __int64 v153; // rax
  int v154; // eax
  __int64 v155; // rcx
  __int64 v156; // rbx
  __int64 v157; // rax
  _QWORD *v158; // rax
  int v159; // [rsp+20h] [rbp-E0h]
  char v160; // [rsp+50h] [rbp-B0h] BYREF
  char v161; // [rsp+51h] [rbp-AFh]
  char v162; // [rsp+52h] [rbp-AEh]
  char v163; // [rsp+53h] [rbp-ADh] BYREF
  char v164[4]; // [rsp+54h] [rbp-ACh] BYREF
  __int16 v165[2]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v166; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v167; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v168; // [rsp+68h] [rbp-98h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v169; // [rsp+70h] [rbp-90h] BYREF
  __int64 v170; // [rsp+78h] [rbp-88h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v171; // [rsp+80h] [rbp-80h] BYREF
  int v172; // [rsp+84h] [rbp-7Ch]
  int v173; // [rsp+88h] [rbp-78h] BYREF
  bool *v174; // [rsp+90h] [rbp-70h]
  PVOID *v175; // [rsp+98h] [rbp-68h]
  char v176[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v177; // [rsp+A8h] [rbp-58h]
  void (__fastcall *v178)(__int64, __int64); // [rsp+B0h] [rbp-50h]
  __int64 v179; // [rsp+B8h] [rbp-48h]
  int v180; // [rsp+C0h] [rbp-40h]
  char *v181; // [rsp+C8h] [rbp-38h]
  __int64 v182; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v183; // [rsp+D8h] [rbp-28h] BYREF
  char v184[8]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v185; // [rsp+E8h] [rbp-18h]
  void (__fastcall *v186)(__int64, unsigned int *); // [rsp+F0h] [rbp-10h]
  __int64 v187; // [rsp+F8h] [rbp-8h]
  int v188; // [rsp+100h] [rbp+0h]
  char v189[8]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v190; // [rsp+110h] [rbp+10h]
  void (__fastcall *v191)(__int64, __int64); // [rsp+118h] [rbp+18h]
  __int64 v192; // [rsp+120h] [rbp+20h]
  int v193; // [rsp+128h] [rbp+28h]
  char v194[8]; // [rsp+130h] [rbp+30h] BYREF
  unsigned int *v195; // [rsp+138h] [rbp+38h]
  void (__fastcall *v196)(__int64, unsigned int *); // [rsp+140h] [rbp+40h]
  __int64 v197; // [rsp+148h] [rbp+48h]
  int v198; // [rsp+150h] [rbp+50h]
  struct _D3DKMT_DISPLAYMODE v199; // [rsp+158h] [rbp+58h] BYREF
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // [rsp+188h] [rbp+88h]
  struct _D3DKMT_DISPLAYMODE *v201; // [rsp+190h] [rbp+90h]
  DXGADAPTER *v202; // [rsp+198h] [rbp+98h]
  struct _D3DKMT_DISPLAYMODE **v203; // [rsp+1A0h] [rbp+A0h]
  unsigned int *v204; // [rsp+1A8h] [rbp+A8h]
  unsigned int *v205; // [rsp+1B0h] [rbp+B0h]
  _D3DKMDT_MONITOR_SOURCE_MODE v206; // [rsp+1C0h] [rbp+C0h] BYREF

  v175 = a5;
  v7 = -1;
  v205 = a6;
  v8 = 255;
  v174 = a4;
  v9 = 0;
  v204 = a3;
  v203 = a2;
  while ( 1 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    v11 = *(unsigned int *)(a1 + 40);
    v12 = *(_QWORD *)(a1 + 24);
    v166 = -1;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(v10 + 8))(v12, v11, v9, &v166);
    v15 = v13;
    if ( v13 < 0 )
    {
      v158 = (_QWORD *)WdLogNewEntry5_WdAssertion(v14);
      v158[3] = v15;
      v158[4] = *(unsigned int *)(a1 + 40);
      v158[5] = v9;
      WdLogEvent5_WdAssertion(v158);
      return (unsigned int)v15;
    }
    v16 = v166;
    if ( v166 == -1 )
      break;
    ++*(_DWORD *)(a1 + 52);
    v120 = *(unsigned int *)(a1 + 40);
    LODWORD(v168) = 0;
    v165[0] = -1;
    v121 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *, __int16 *))(*(_QWORD *)(a1 + 32) + 112LL))(
             *(_QWORD *)(a1 + 24),
             v120,
             v16,
             &v168,
             v165);
    v15 = v121;
    if ( v121 < 0 )
    {
      v124 = (_QWORD *)WdLogNewEntry5_WdError(v122);
      v124[4] = v7;
      v124[3] = v15;
      v124[5] = *(unsigned int *)(a1 + 40);
      WdLogEvent5_WdError(v124);
      return (unsigned int)v15;
    }
    if ( v7 == -1 || (int)v168 < v8 )
    {
      v7 = v166;
      v8 = v168;
      *(_DWORD *)(a1 + 48) = v9;
    }
    ++v9;
  }
  if ( v7 == -1 && *(_DWORD *)(a1 + 52) )
  {
    v125 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v125 + 24) = 543LL;
    WdLogEvent5_WdAssertion(v125);
  }
  v17 = *(DXGADAPTER **)a1;
  v18 = *(_DWORD *)(a1 + 40);
  v202 = v17;
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)v17 + 288), v18);
  v19 = (v174 != 0LL) + 1;
  v166 = v19;
  while ( v7 != -1 )
  {
    VideoOutputTechnology = DmmGetVideoOutputTechnology(*(DXGADAPTER **)a1, v7, 0LL, &v171);
    v22 = VideoOutputTechnology;
    if ( VideoOutputTechnology < 0 )
    {
      v147 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v147 + 24) = v22;
      WdLogEvent5_WdError(v147);
      return (unsigned int)v22;
    }
    if ( v171 < D3DKMDT_VOT_MIRACAST || (v162 = 1, v171 > D3DKMDT_VOT_INDIRECT_WIRED) )
      v162 = 0;
    if ( *((_QWORD *)v17 + 289)
      || (DisplayOnlyDriverUseRawModes = ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(*((ADAPTER_DISPLAY **)v17 + 288)),
          v161 = 1,
          !DisplayOnlyDriverUseRawModes) )
    {
      v161 = 0;
    }
    if ( DmmGetPreferredMonitorSourceModeOnTarget(*(void **)a1, v7, &v206) < 0 )
      memset(&v206, 0, sizeof(v206));
    v23 = *(_QWORD *)(a1 + 16);
    v24 = *(unsigned int *)(a1 + 40);
    v25 = *(_QWORD *)(a1 + 8);
    v170 = 0LL;
    v167 = 0LL;
    v26 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v23 + 8);
    v177 = 0LL;
    v178 = 0LL;
    v179 = 0LL;
    v180 = 0;
    v176[0] = 0;
    v27 = v26(v25, v24, &v167, &v170);
    v29 = v27;
    if ( v27 < 0 )
    {
      v146 = WdLogNewEntry5_WdError(v28);
      *(_QWORD *)(v146 + 24) = v29;
      WdLogEvent5_WdError(v146);
      return (unsigned int)v29;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v176,
      v167,
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
      *(_QWORD *)(a1 + 8));
    v30 = v177;
    v167 = 0LL;
    v195 = 0LL;
    v31 = *(__int64 (__fastcall **)(__int64, __int64 *))(v170 + 8);
    v196 = 0LL;
    v197 = 0LL;
    v198 = 0;
    v194[0] = 0;
    v32 = v31(v177, &v167);
    v29 = v32;
    if ( v32 < 0 )
    {
      v145 = WdLogNewEntry5_WdError(v33);
      *(_QWORD *)(v145 + 24) = v29;
      WdLogEvent5_WdError(v145);
      goto LABEL_177;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v194,
      v167,
      *(_QWORD *)(v170 + 32),
      v30);
    v34 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(a1 + 8));
    v36 = v195;
    *(_BYTE *)(v34 + 296) = 1;
    if ( v36 )
    {
      do
      {
        v37 = v36[1];
        if ( v37 - 3 <= 1 || !v174 && v37 == 1 )
        {
          v38 = v36[2];
          if ( v38 == v36[4] )
          {
            v39 = v36[3];
            if ( v39 == v36[5]
              && (!v174
               || v19 != 2
               || *(_DWORD *)DisplayModeInfo == v38
               && *((_DWORD *)DisplayModeInfo + 1) == v39
               && *((_DWORD *)DisplayModeInfo + 2) == v36[7]) )
            {
              LOBYTE(v35) = 1;
              v40 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v170 + 40))(v30, *v36, v35);
              v44 = v40;
              if ( v40 < 0 )
              {
                v126 = WdLogNewEntry5_WdWarning(v42, v41, v43);
                *(_QWORD *)(v126 + 24) = v44;
                *(_QWORD *)(v126 + 32) = *v36;
                WdLogEvent5_WdWarning(v126);
              }
              else
              {
                v45 = *(_QWORD *)(a1 + 16);
                v46 = *(_QWORD *)(a1 + 8);
                v167 = 0LL;
                v169 = 0LL;
                v47 = *(__int64 (__fastcall **)(__int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **, __int64 *))(v45 + 24);
                v190 = 0LL;
                v191 = 0LL;
                v192 = 0LL;
                v193 = 0;
                v189[0] = 0;
                v48 = v47(v46, v7, &v169, &v167);
                v29 = v48;
                if ( v48 < 0 )
                {
                  v142 = WdLogNewEntry5_WdError(v49);
                  *(_QWORD *)(v142 + 24) = v29;
                  WdLogEvent5_WdError(v142);
                  goto LABEL_171;
                }
                DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
                  (__int64)v189,
                  (__int64)v169,
                  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL),
                  *(_QWORD *)(a1 + 8));
                v50 = v190;
                v51 = 0LL;
                v169 = 0LL;
                v185 = 0LL;
                v52 = *(__int64 (__fastcall **)(__int64, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **))(v167 + 8);
                v186 = 0LL;
                v187 = 0LL;
                v188 = 0;
                v184[0] = 0;
                v53 = v52(v190, &v169);
                v29 = v53;
                if ( v53 < 0 )
                  goto LABEL_162;
                for ( i = (__int64)v169; ; i = v182 )
                {
                  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
                    (__int64)v184,
                    i,
                    *(_QWORD *)(v167 + 32),
                    v50);
                  v51 = v185;
                  if ( !v185 )
                    break;
                  LOBYTE(v63) = 1;
                  v64 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v167 + 48))(v50, *v185, v63);
                  v68 = v64;
                  if ( v64 >= 0 )
                  {
                    if ( v36[1] - 3 <= 1 || v161 )
                    {
                      v163 = 1;
                      v173 = 0;
                      goto LABEL_40;
                    }
                    v69 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, int *))(v167 + 64))(
                            v50,
                            *v51,
                            &v163,
                            &v173);
                    v29 = v69;
                    if ( v69 == -1071774920 )
                    {
                      v128 = WdLogNewEntry5_WdTrace(v71, v70);
                      *(_QWORD *)(v128 + 24) = v7;
                      *(_QWORD *)(v128 + 32) = *(unsigned int *)(a1 + 40);
                      goto LABEL_40;
                    }
                    if ( v69 < 0 )
                    {
                      v138 = (_QWORD *)WdLogNewEntry5_WdError(v71);
                      v138[4] = v51;
                    }
                    else
                    {
LABEL_40:
                      v160 = 0;
                      if ( v206.VideoSignalInfo.ActiveSize.cx == v36[2] && v206.VideoSignalInfo.ActiveSize.cy == v36[3] )
                      {
                        LOBYTE(v67) = v162;
                        v118 = (*(__int64 (__fastcall **)(unsigned int *, _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))(v167 + 80))(
                                 v51,
                                 &v206,
                                 v67,
                                 &v160);
                        v119 = v160;
                        if ( v118 < 0 )
                          v119 = 0;
                        v160 = v119;
                      }
                      v72 = *(_QWORD *)(a1 + 32);
                      v73 = *(unsigned int *)(a1 + 40);
                      v74 = *(_QWORD *)(a1 + 24);
                      v169 = 0LL;
                      v75 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **))(v72 + 24))(
                              v74,
                              v73,
                              v7,
                              &v169);
                      v29 = v75;
                      if ( v75 >= 0 )
                      {
                        v76 = v169[4];
                        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 24));
                        if ( v36[2] == v51[5] && v36[3] == v51[6] )
                          v77 = (char)v76;
                        else
                          v77 = -((*(_BYTE *)&v76 & 0x1E) != 0);
                        v58 = v77 & 1;
                        LODWORD(v169) = 0;
                        v57 = (int *)&unk_1C003EE30;
                        LOBYTE(v165[0]) = v58;
                        v181 = (char *)&unk_1C003EE30;
                        while ( 1 )
                        {
                          if ( !v58 )
                            goto LABEL_30;
                          v56 = *v57;
                          v172 = v56;
                          if ( !BmlIsSupportedPathScaling((enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v56, v76) )
                            goto LABEL_29;
                          LOBYTE(v159) = 1;
                          v78 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(a1 + 32)
                                                                                               + 64LL))(
                                  *(_QWORD *)(a1 + 24),
                                  *(unsigned int *)(a1 + 40),
                                  v7,
                                  (unsigned int)v56,
                                  v159);
                          v29 = v78;
                          if ( v78 < 0 )
                          {
                            v138 = (_QWORD *)WdLogNewEntry5_WdError(v79);
                            v138[3] = v29;
                            v138[4] = *(unsigned int *)(a1 + 40);
                            v138[5] = v7;
                            v138[6] = *(_QWORD *)(a1 + 24);
                            v138[7] = v56;
LABEL_164:
                            WdLogEvent5_WdError(v138);
                            goto LABEL_165;
                          }
                          v80 = *(unsigned int *)(a1 + 40);
                          v81 = *(_QWORD *)(a1 + 24);
                          v168 = 0LL;
                          v82 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)(a1 + 32)
                                                                                               + 24LL))(
                                  v81,
                                  v80,
                                  v7,
                                  &v168);
                          v29 = v82;
                          if ( v82 < 0 )
                            break;
                          v83 = *(_DWORD *)(v168 + 24);
                          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 24));
                          v84 = D3DKMDT_VPPR_IDENTITY;
                          LODWORD(v168) = 1;
                          do
                          {
                            v85 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v84) - 1;
                            if ( v85 )
                            {
                              v87 = v85 - 1;
                              if ( v87 )
                              {
                                v88 = v87 - 1;
                                if ( v88 )
                                {
                                  if ( v88 != 1 )
                                    goto LABEL_135;
                                  v89 = v83 >> 3;
                                }
                                else
                                {
                                  v89 = v83 >> 2;
                                }
                              }
                              else
                              {
                                v89 = v83 >> 1;
                              }
                              v90 = v89 & 1;
                            }
                            else
                            {
                              if ( (v83 & 1) != 0 )
                                goto LABEL_54;
                              v90 = 0;
                            }
                            if ( !v90 )
                              goto LABEL_71;
LABEL_54:
                            v91 = v168;
                            if ( (unsigned int)(v168 - 1) <= 0xF )
                            {
                              v86 = 4LL;
                              v91 = ((int)v168 - 1) / 4 + 1;
                            }
                            v92 = v91 - 1;
                            if ( v92 )
                            {
                              v130 = v92 - 1;
                              if ( v130 )
                              {
                                v131 = v130 - 1;
                                if ( v131 )
                                {
                                  if ( v131 != 1 )
                                  {
LABEL_135:
                                    v129 = WdLogNewEntry5_WdAssertion(v86);
                                    *(_QWORD *)(v129 + 24) = (int)v168;
                                    WdLogEvent5_WdAssertion(v129);
                                    goto LABEL_71;
                                  }
                                  v93 = v83 >> 7;
                                }
                                else
                                {
                                  v93 = v83 >> 6;
                                }
                              }
                              else
                              {
                                v93 = v83 >> 5;
                              }
                            }
                            else
                            {
                              v93 = v83 >> 4;
                            }
                            if ( (v93 & 1) != 0 )
                            {
                              if ( !v160 || (v94 = 1, v172 != 1) )
                                v94 = 0;
                              PopulateDisplayModeFromPresentPath(
                                (_DWORD)v36,
                                (_DWORD)v51,
                                v172,
                                v168,
                                v163,
                                v94,
                                1,
                                v173,
                                (__int64)&v199,
                                (__int64)v164);
                              Mode = MODE_UNION_LIST::FindMode((MODE_UNION_LIST *)(a1 + 64), &v199);
                              v201 = Mode;
                              v97 = Mode;
                              if ( !Mode || (UpgradeDispModeFlags(Mode, &v199, v96, 0LL), v164[0]) )
                              {
                                if ( *(_DWORD *)(a1 + 52) > 1u )
                                {
                                  LOBYTE(v159) = 0;
                                  v132 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(a1 + 32) + 80LL))(
                                           *(_QWORD *)(a1 + 24),
                                           *(unsigned int *)(a1 + 40),
                                           v7,
                                           (unsigned int)v168,
                                           v159);
                                  v29 = v132;
                                  if ( v132 < 0 )
                                  {
                                    v138 = (_QWORD *)WdLogNewEntry5_WdError(v133);
                                    v138[3] = v29;
                                    v138[4] = *(unsigned int *)(a1 + 40);
                                    v138[5] = v7;
                                    v138[6] = *(_QWORD *)(a1 + 24);
                                    v138[7] = (int)v168;
                                    goto LABEL_164;
                                  }
                                  v97 = v201;
                                }
                                v98 = v174;
                                if ( v174 )
                                {
                                  v139 = v166 == 2;
                                  LODWORD(v29) = 0;
                                  v174[1] = 1;
                                  *v98 = v139;
                                  goto LABEL_165;
                                }
                                if ( v199.Format != D3DDDIFMT_A8R8G8B8 && *(_BYTE *)(a1 + 44)
                                  || v199.Format <= (unsigned int)D3DDDIFMT_P8
                                  && (v99 = 0x20003900000LL, _bittest64(&v99, v199.Format)) )
                                {
                                  if ( !v175 )
                                    goto LABEL_71;
                                  MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 96), &v199);
                                  goto LABEL_149;
                                }
                                if ( !v97 )
                                {
                                  LODWORD(v29) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 64), &v199);
                                  if ( (int)v29 < 0 )
                                    goto LABEL_165;
                                }
                                if ( v164[0] )
                                {
                                  ++v199.IntegerRefreshRate;
                                  *(_DWORD *)&v199.Flags |= 2u;
                                  LODWORD(v29) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 64), &v199);
LABEL_149:
                                  if ( (int)v29 < 0 )
                                    goto LABEL_165;
                                }
                              }
                            }
LABEL_71:
                            v84 = v168 + 1;
                            LODWORD(v168) = v84;
                          }
                          while ( v84 <= D3DKMDT_VPPR_ROTATE270 );
                          if ( *(_DWORD *)(a1 + 52) > 1u )
                          {
                            v134 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 32)
                                                                                             + 88LL))(
                                     *(_QWORD *)(a1 + 24),
                                     *(unsigned int *)(a1 + 40),
                                     v7,
                                     0LL);
                            v29 = v134;
                            if ( v134 < 0 )
                            {
                              v136 = (_QWORD *)WdLogNewEntry5_WdError(v135);
                              v136[3] = v29;
                              v136[4] = *(_QWORD *)(a1 + 24);
                              v137 = *(unsigned int *)(a1 + 40);
                              goto LABEL_159;
                            }
                          }
LABEL_29:
                          v57 = (int *)(v181 + 4);
                          LODWORD(v169) = (_DWORD)v169 + 1;
                          v58 = v165[0];
                          v181 += 4;
                          if ( (unsigned int)v169 >= 5 )
                          {
LABEL_30:
                            v59 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 32) + 72LL))(
                                    *(_QWORD *)(a1 + 24),
                                    *(unsigned int *)(a1 + 40),
                                    v7,
                                    0LL);
                            v29 = v59;
                            if ( v59 >= 0 )
                            {
                              v50 = v190;
                              goto LABEL_32;
                            }
                            v136 = (_QWORD *)WdLogNewEntry5_WdError(v60);
                            v136[3] = v29;
                            v136[4] = *(unsigned int *)(a1 + 40);
                            v137 = *(_QWORD *)(a1 + 24);
LABEL_159:
                            v136[5] = v137;
                            v136[6] = v7;
                            WdLogEvent5_WdError(v136);
LABEL_165:
                            v50 = v190;
LABEL_166:
                            if ( v184[0] )
                              v186(v187, v51);
                            if ( v189[0] )
                              v191(v192, v50);
LABEL_171:
                            v30 = v177;
LABEL_175:
                            if ( v194[0] )
                              v196(v197, v36);
LABEL_177:
                            if ( v176[0] )
                              v178(v179, v30);
                            return (unsigned int)v29;
                          }
                        }
                      }
LABEL_162:
                      v138 = (_QWORD *)WdLogNewEntry5_WdError(v54);
                    }
                    v138[3] = v29;
                    goto LABEL_164;
                  }
                  v127 = WdLogNewEntry5_WdWarning(v66, v65, v67);
                  *(_QWORD *)(v127 + 24) = v68;
                  *(_QWORD *)(v127 + 32) = *v51;
                  WdLogEvent5_WdWarning(v127);
LABEL_32:
                  v182 = 0LL;
                  v61 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v167 + 16))(v50, v51, &v182);
                  v29 = v61;
                  if ( v61 < 0 )
                  {
                    v140 = WdLogNewEntry5_WdError(v62);
                    *(_QWORD *)(v140 + 24) = v29;
LABEL_161:
                    WdLogEvent5_WdError(v140);
                    goto LABEL_166;
                  }
                }
                v100 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v167 + 56))(v50, 0LL);
                v29 = v100;
                if ( v100 < 0 )
                {
                  v141 = (_QWORD *)WdLogNewEntry5_WdError(v101);
                  v141[3] = v29;
                  v141[4] = v50;
                  v141[5] = 0xFFFFFFFFLL;
                  v140 = (__int64)v141;
                  goto LABEL_161;
                }
                if ( v184[0] )
                  v186(v187, 0LL);
                if ( v189[0] )
                  v191(v192, v50);
                v19 = v166;
              }
              v30 = v177;
            }
          }
        }
        v183 = 0LL;
        v102 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v170 + 16))(v30, v36, &v183);
        v29 = v102;
        if ( v102 < 0 )
        {
          v143 = WdLogNewEntry5_WdError(v103);
          *(_QWORD *)(v143 + 24) = v29;
LABEL_174:
          WdLogEvent5_WdError(v143);
          goto LABEL_175;
        }
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
          (__int64)v194,
          v183,
          *(_QWORD *)(v170 + 32),
          v30);
        v36 = v195;
      }
      while ( v195 );
    }
    v104 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v170 + 48))(v30, 0LL);
    v29 = v104;
    if ( v104 < 0 )
    {
      v144 = (_QWORD *)WdLogNewEntry5_WdError(v105);
      v144[3] = v29;
      v144[4] = v30;
      v143 = (__int64)v144;
      v144[5] = 0xFFFFFFFFLL;
      goto LABEL_174;
    }
    v106 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(a1 + 8));
    *(_BYTE *)(v106 + 296) = v107;
    if ( v194[0] != v107 )
      v196(v197, v36);
    if ( v176[0] )
      v178(v179, v30);
    v166 = --v19;
    if ( v19 <= 0 )
      break;
    v17 = v202;
  }
  v108 = v203;
  if ( !*v203 )
  {
    v109 = *(_DWORD *)(a1 + 80);
    if ( v109 )
    {
      v111 = v109;
      v110 = 44LL * v109;
      if ( !is_mul_ok(v111, 0x2CuLL) )
        v110 = -1LL;
      v112 = (struct _D3DKMT_DISPLAYMODE *)operator new(v110, 0x4B677844u, PagedPool);
      *v108 = v112;
      if ( !v112 )
      {
        v148 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v148 + 24) = 1082LL;
        WdLogEvent5_WdLowResource(v148);
        return 3221225495LL;
      }
      memset(v112, 0, 44LL * *(unsigned int *)(a1 + 80));
    }
  }
  UniqueModes = MODE_UNION_LIST::GetUniqueModes((MODE_UNION_LIST *)(a1 + 64), *(unsigned int *)(a1 + 80), *v108, v204);
  v115 = UniqueModes;
  if ( UniqueModes < 0 )
  {
    v149 = WdLogNewEntry5_WdAssertion(v114);
    *(_QWORD *)(v149 + 24) = v115;
    WdLogEvent5_WdAssertion(v149);
  }
  v116 = (struct _D3DKMT_DISPLAYMODE **)v175;
  if ( v175 )
  {
    if ( *v175 )
    {
      ExFreePoolWithTag(*v175, 0);
      *v116 = 0LL;
    }
    v150 = *(unsigned int *)(a1 + 112);
    if ( (_DWORD)v150 )
    {
      v151 = 44 * v150;
      if ( !is_mul_ok(v150, 0x2CuLL) )
        v151 = -1LL;
      v152 = (struct _D3DKMT_DISPLAYMODE *)operator new(v151, 0x4B677844u, PagedPool);
      *v116 = v152;
      if ( v152 )
      {
        memset(v152, 0, 44LL * *(unsigned int *)(a1 + 112));
        v154 = MODE_UNION_LIST::GetUniqueModes((MODE_UNION_LIST *)(a1 + 96), *(unsigned int *)(a1 + 112), *v116, v205);
        v156 = v154;
        if ( v154 < 0 )
        {
          v157 = WdLogNewEntry5_WdAssertion(v155);
          *(_QWORD *)(v157 + 24) = v156;
          WdLogEvent5_WdAssertion(v157);
        }
      }
      else
      {
        v153 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v153 + 24) = 1114LL;
        WdLogEvent5_WdLowResource(v153);
      }
    }
  }
  return 0LL;
}
