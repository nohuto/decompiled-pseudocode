/*
 * XREFs of ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C00F54D0
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00A74A4 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0003884 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000B4C0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C000C3D4 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000C45C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000CB98 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0035588 (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00A2674 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AB07C (DmmGetVideoOutputTechnology.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00F5E78 (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C00F5F70 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1C00F60F0 (-FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C00F6170 (_PopulateDisplayModeFromPresentPath.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00F65C4 (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 *     _UpgradeDispModeFlags @ 0x1C018EF30 (_UpgradeDispModeFlags.c)
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
  unsigned int v8; // ebx
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // r8
  DXGADAPTER *v20; // rsi
  unsigned int v21; // edx
  int v22; // edi
  int VideoOutputTechnology; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 (__fastcall *v32)(__int64, __int64, __int64 *, __int64 *); // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rbx
  __int64 (__fastcall *v38)(__int64, __int64 *); // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned int *v43; // r15
  __int64 v44; // r8
  unsigned int v45; // ecx
  unsigned int v46; // eax
  unsigned int v47; // ecx
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 (__fastcall *v56)(__int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **, __int64 *); // rax
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdi
  unsigned int *v61; // r12
  __int64 (__fastcall *v62)(__int64, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **); // rax
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 i; // rdx
  __int64 v67; // rbx
  int *v68; // rcx
  char v69; // al
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rbx
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  int v90; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v91; // edi
  char v92; // al
  int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  int v98; // eax
  unsigned int v99; // ebx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v100; // eax
  __int32 v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int32 v106; // eax
  __int32 v107; // eax
  unsigned int v108; // eax
  char v109; // al
  int v110; // edx
  int v111; // edx
  unsigned int v112; // eax
  char v113; // cl
  struct _D3DKMT_DISPLAYMODE *Mode; // rax
  __int64 v115; // r8
  struct _D3DKMT_DISPLAYMODE *v116; // rcx
  bool *v117; // rdx
  __int64 v118; // rdx
  int v119; // eax
  __int64 v120; // rdx
  __int64 v121; // rcx
  int v122; // eax
  __int64 v123; // rdx
  __int64 v124; // rcx
  int v125; // eax
  __int64 v126; // rcx
  __int64 v127; // rax
  char v128; // dl
  struct _D3DKMT_DISPLAYMODE **v129; // rbx
  unsigned int v130; // eax
  SIZE_T v131; // rax
  unsigned __int64 v132; // kr00_8
  struct _D3DKMT_DISPLAYMODE *v133; // rax
  int UniqueModes; // eax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rbx
  struct _D3DKMT_DISPLAYMODE **v140; // r15
  int v142; // eax
  char v143; // cl
  __int64 v144; // rdx
  int v145; // eax
  __int64 v146; // rdx
  __int64 v147; // rcx
  _QWORD *v148; // rax
  __int64 v149; // rax
  int DisplayOnlyDriverUseRawModes; // eax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  int v155; // edx
  int v156; // eax
  __int64 v157; // rdx
  __int64 v158; // rcx
  bool v159; // sf
  int v160; // eax
  __int64 v161; // rdx
  __int64 v162; // rcx
  _QWORD *v163; // rax
  __int64 v164; // rcx
  _QWORD *v165; // rax
  bool v166; // zf
  __int64 v167; // rcx
  _QWORD *v168; // rdx
  __int64 v169; // rax
  __int64 v170; // rcx
  _QWORD *v171; // rdx
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  unsigned __int64 v177; // rcx
  SIZE_T v178; // rax
  struct _D3DKMT_DISPLAYMODE *v179; // rax
  __int64 v180; // rax
  int v181; // eax
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // rbx
  __int64 v187; // rax
  _QWORD *v188; // rax
  int v189; // [rsp+20h] [rbp-E0h]
  char v190; // [rsp+50h] [rbp-B0h] BYREF
  char v191; // [rsp+51h] [rbp-AFh]
  char v192; // [rsp+52h] [rbp-AEh]
  char v193; // [rsp+53h] [rbp-ADh] BYREF
  char v194[4]; // [rsp+54h] [rbp-ACh] BYREF
  __int16 v195[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v196; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v197; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v198; // [rsp+68h] [rbp-98h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v199; // [rsp+70h] [rbp-90h] BYREF
  __int64 v200; // [rsp+78h] [rbp-88h] BYREF
  int v201; // [rsp+80h] [rbp-80h] BYREF
  int v202; // [rsp+84h] [rbp-7Ch]
  int v203; // [rsp+88h] [rbp-78h] BYREF
  bool *v204; // [rsp+90h] [rbp-70h]
  PVOID *v205; // [rsp+98h] [rbp-68h]
  char v206[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v207; // [rsp+A8h] [rbp-58h]
  void (__fastcall *v208)(__int64, __int64); // [rsp+B0h] [rbp-50h]
  __int64 v209; // [rsp+B8h] [rbp-48h]
  int v210; // [rsp+C0h] [rbp-40h]
  char *v211; // [rsp+C8h] [rbp-38h]
  __int64 v212; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v213; // [rsp+D8h] [rbp-28h] BYREF
  char v214[8]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v215; // [rsp+E8h] [rbp-18h]
  void (__fastcall *v216)(__int64, unsigned int *); // [rsp+F0h] [rbp-10h]
  __int64 v217; // [rsp+F8h] [rbp-8h]
  int v218; // [rsp+100h] [rbp+0h]
  char v219[8]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v220; // [rsp+110h] [rbp+10h]
  void (__fastcall *v221)(__int64, __int64); // [rsp+118h] [rbp+18h]
  __int64 v222; // [rsp+120h] [rbp+20h]
  int v223; // [rsp+128h] [rbp+28h]
  char v224[8]; // [rsp+130h] [rbp+30h] BYREF
  unsigned int *v225; // [rsp+138h] [rbp+38h]
  void (__fastcall *v226)(__int64, unsigned int *); // [rsp+140h] [rbp+40h]
  __int64 v227; // [rsp+148h] [rbp+48h]
  int v228; // [rsp+150h] [rbp+50h]
  struct _D3DKMT_DISPLAYMODE v229; // [rsp+158h] [rbp+58h] BYREF
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // [rsp+188h] [rbp+88h]
  struct _D3DKMT_DISPLAYMODE *v231; // [rsp+190h] [rbp+90h]
  __int64 v232; // [rsp+198h] [rbp+98h]
  DXGADAPTER *v233; // [rsp+1A0h] [rbp+A0h]
  struct _D3DKMT_DISPLAYMODE **v234; // [rsp+1A8h] [rbp+A8h]
  unsigned int *v235; // [rsp+1B0h] [rbp+B0h]
  unsigned int *v236; // [rsp+1B8h] [rbp+B8h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE v237; // [rsp+1C0h] [rbp+C0h] BYREF

  v205 = a5;
  v7 = -1;
  v204 = a4;
  v8 = 0;
  v235 = a3;
  v234 = a2;
  v9 = 255;
  v236 = a6;
  while ( 1 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    v11 = *(unsigned int *)(a1 + 40);
    v12 = *(_QWORD *)(a1 + 24);
    LODWORD(v198) = -1;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(v10 + 8))(v12, v11, v8, &v198);
    v18 = v13;
    if ( v13 < 0 )
    {
      v188 = (_QWORD *)WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
      v188[3] = v18;
      v188[4] = *(unsigned int *)(a1 + 40);
      v188[5] = v8;
      WdLogEvent5_WdAssertion(v188);
      return (unsigned int)v18;
    }
    v19 = (unsigned int)v198;
    if ( (_DWORD)v198 == -1 )
      break;
    ++*(_DWORD *)(a1 + 52);
    v144 = *(unsigned int *)(a1 + 40);
    v196 = 0;
    v195[0] = -1;
    v145 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *, __int16 *))(*(_QWORD *)(a1 + 32) + 112LL))(
             *(_QWORD *)(a1 + 24),
             v144,
             v19,
             &v196,
             v195);
    v18 = v145;
    if ( v145 < 0 )
    {
      v148 = (_QWORD *)WdLogNewEntry5_WdError(v147, v146);
      v148[4] = v7;
      v148[3] = v18;
      v148[5] = *(unsigned int *)(a1 + 40);
      WdLogEvent5_WdError(v148);
      return (unsigned int)v18;
    }
    if ( v7 == -1 || v196 < v9 )
    {
      v7 = v198;
      v9 = v196;
      *(_DWORD *)(a1 + 48) = v8;
    }
    ++v8;
  }
  if ( v7 == -1 && *(_DWORD *)(a1 + 52) )
  {
    v149 = WdLogNewEntry5_WdAssertion(v15, v14, (unsigned int)v198, v17);
    *(_QWORD *)(v149 + 24) = 566LL;
    WdLogEvent5_WdAssertion(v149);
  }
  v20 = *(DXGADAPTER **)a1;
  v21 = *(_DWORD *)(a1 + 40);
  v233 = v20;
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)v20 + 285), v21);
  v22 = (v204 != 0LL) + 1;
  v196 = v22;
  while ( v7 != -1 )
  {
    VideoOutputTechnology = DmmGetVideoOutputTechnology(*(DXGADAPTER **)a1, v7, 0LL, &v201);
    v28 = VideoOutputTechnology;
    if ( VideoOutputTechnology < 0 )
    {
      v174 = WdLogNewEntry5_WdError(v25, v24);
      *(_QWORD *)(v174 + 24) = v28;
      WdLogEvent5_WdError(v174);
      return (unsigned int)v28;
    }
    if ( v201 < 15 || (v192 = 1, v201 > 16) )
      v192 = 0;
    if ( *((_QWORD *)v20 + 286)
      || (DisplayOnlyDriverUseRawModes = ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(
                                           *((ADAPTER_DISPLAY **)v20 + 285),
                                           v24,
                                           v26,
                                           v27),
          v191 = 1,
          !DisplayOnlyDriverUseRawModes) )
    {
      v191 = 0;
    }
    if ( (int)DmmGetPreferredMonitorSourceModeOnTarget(*(DXGADAPTER **)a1, v7, &v237) < 0 )
      memset(&v237, 0, sizeof(v237));
    v29 = *(_QWORD *)(a1 + 16);
    v30 = *(unsigned int *)(a1 + 40);
    v31 = *(_QWORD *)(a1 + 8);
    v200 = 0LL;
    v197 = 0LL;
    v32 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v29 + 8);
    v207 = 0LL;
    v208 = 0LL;
    v209 = 0LL;
    v210 = 0;
    v206[0] = 0;
    v33 = v32(v31, v30, &v197, &v200);
    v36 = v33;
    if ( v33 < 0 )
    {
      v173 = WdLogNewEntry5_WdError(v35, v34);
      *(_QWORD *)(v173 + 24) = v36;
      WdLogEvent5_WdError(v173);
      return (unsigned int)v36;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v206,
      v197,
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
      *(_QWORD *)(a1 + 8));
    v37 = v207;
    v197 = 0LL;
    v225 = 0LL;
    v38 = *(__int64 (__fastcall **)(__int64, __int64 *))(v200 + 8);
    v226 = 0LL;
    v227 = 0LL;
    v228 = 0;
    v224[0] = 0;
    v39 = v38(v207, &v197);
    v36 = v39;
    if ( v39 < 0 )
    {
      v172 = WdLogNewEntry5_WdError(v41, v40);
      *(_QWORD *)(v172 + 24) = v36;
      WdLogEvent5_WdError(v172);
      goto LABEL_178;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v224,
      v197,
      *(_QWORD *)(v200 + 32),
      v37);
    v42 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(a1 + 8));
    v43 = v225;
    *(_BYTE *)(v42 + 296) = 1;
    if ( v43 )
    {
      v44 = v22;
      v232 = v22;
      while ( 1 )
      {
        v45 = v43[1];
        if ( v45 - 3 <= 1 || !v204 && v45 == 1 )
        {
          v46 = v43[2];
          if ( v46 == v43[4] )
          {
            v47 = v43[3];
            if ( v47 == v43[5]
              && (!v204
               || v44 != 2
               || *(_DWORD *)DisplayModeInfo == v46
               && *((_DWORD *)DisplayModeInfo + 1) == v47
               && *((_DWORD *)DisplayModeInfo + 2) == v43[7]) )
            {
              LOBYTE(v44) = 1;
              v48 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v200 + 40))(v37, *v43, v44);
              v53 = v48;
              if ( v48 < 0 )
              {
                v151 = WdLogNewEntry5_WdWarning(v50, v49, v51, v52);
                *(_QWORD *)(v151 + 24) = v53;
                *(_QWORD *)(v151 + 32) = *v43;
                WdLogEvent5_WdWarning(v151);
              }
              else
              {
                v54 = *(_QWORD *)(a1 + 16);
                v55 = *(_QWORD *)(a1 + 8);
                v197 = 0LL;
                v199 = 0LL;
                v56 = *(__int64 (__fastcall **)(__int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **, __int64 *))(v54 + 24);
                v220 = 0LL;
                v221 = 0LL;
                v222 = 0LL;
                v223 = 0;
                v219[0] = 0;
                v57 = v56(v55, v7, &v199, &v197);
                v36 = v57;
                if ( v57 < 0 )
                {
                  v169 = WdLogNewEntry5_WdError(v59, v58);
                  *(_QWORD *)(v169 + 24) = v36;
                  WdLogEvent5_WdError(v169);
                  goto LABEL_172;
                }
                DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
                  (__int64)v219,
                  (__int64)v199,
                  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL),
                  *(_QWORD *)(a1 + 8));
                v60 = v220;
                v61 = 0LL;
                v199 = 0LL;
                v215 = 0LL;
                v62 = *(__int64 (__fastcall **)(__int64, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **))(v197 + 8);
                v216 = 0LL;
                v217 = 0LL;
                v218 = 0;
                v214[0] = 0;
                v63 = v62(v220, &v199);
                v36 = v63;
                if ( v63 < 0 )
                  goto LABEL_163;
                for ( i = (__int64)v199; ; i = v212 )
                {
                  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
                    (__int64)v214,
                    i,
                    *(_QWORD *)(v197 + 32),
                    v60);
                  v61 = v215;
                  if ( !v215 )
                    break;
                  LOBYTE(v76) = 1;
                  v77 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v197 + 48))(v60, *v215, v76);
                  v82 = v77;
                  if ( v77 >= 0 )
                  {
                    if ( v43[1] - 3 <= 1 || v191 )
                    {
                      v193 = 1;
                      v203 = 0;
                      goto LABEL_41;
                    }
                    v83 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, int *))(v197 + 64))(
                            v60,
                            *v61,
                            &v193,
                            &v203);
                    v36 = v83;
                    if ( v83 == -1071774920 )
                    {
                      v153 = WdLogNewEntry5_WdTrace(v85, v84, v80, v86);
                      *(_QWORD *)(v153 + 24) = v7;
                      *(_QWORD *)(v153 + 32) = *(unsigned int *)(a1 + 40);
                      goto LABEL_41;
                    }
                    if ( v83 < 0 )
                    {
                      v165 = (_QWORD *)WdLogNewEntry5_WdError(v85, v84);
                      v165[4] = v61;
                    }
                    else
                    {
LABEL_41:
                      v190 = 0;
                      if ( v237.VideoSignalInfo.ActiveSize.cx == v43[2] && v237.VideoSignalInfo.ActiveSize.cy == v43[3] )
                      {
                        LOBYTE(v80) = v192;
                        v142 = (*(__int64 (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))(v197 + 80))(
                                 v61,
                                 &v237,
                                 v80,
                                 &v190);
                        v143 = v190;
                        if ( v142 < 0 )
                          v143 = 0;
                        v190 = v143;
                      }
                      v87 = *(_QWORD *)(a1 + 32);
                      v88 = *(unsigned int *)(a1 + 40);
                      v89 = *(_QWORD *)(a1 + 24);
                      v199 = 0LL;
                      v90 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **))(v87 + 24))(
                              v89,
                              v88,
                              v7,
                              &v199);
                      v36 = v90;
                      if ( v90 >= 0 )
                      {
                        v91 = v199[4];
                        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 24));
                        if ( v43[2] == v61[5] && v43[3] == v61[6] )
                          v92 = (char)v91;
                        else
                          v92 = -((*(_BYTE *)&v91 & 0x1E) != 0);
                        v69 = v92 & 1;
                        LODWORD(v199) = 0;
                        v68 = (int *)&unk_1C004C180;
                        LOBYTE(v195[0]) = v69;
                        v211 = (char *)&unk_1C004C180;
                        while ( 1 )
                        {
                          if ( !v69 )
                            goto LABEL_31;
                          v67 = *v68;
                          v202 = v67;
                          if ( !BmlIsSupportedPathScaling((enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v67, v91) )
                            goto LABEL_30;
                          LOBYTE(v189) = 1;
                          v93 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(a1 + 32)
                                                                                               + 64LL))(
                                  *(_QWORD *)(a1 + 24),
                                  *(unsigned int *)(a1 + 40),
                                  v7,
                                  (unsigned int)v67,
                                  v189);
                          v36 = v93;
                          if ( v93 < 0 )
                          {
                            v165 = (_QWORD *)WdLogNewEntry5_WdError(v95, v94);
                            v165[3] = v36;
                            v165[4] = *(unsigned int *)(a1 + 40);
                            v165[5] = v7;
                            v165[6] = *(_QWORD *)(a1 + 24);
                            v165[7] = v67;
LABEL_165:
                            WdLogEvent5_WdError(v165);
                            goto LABEL_166;
                          }
                          v96 = *(unsigned int *)(a1 + 40);
                          v97 = *(_QWORD *)(a1 + 24);
                          v198 = 0LL;
                          v98 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)(a1 + 32)
                                                                                               + 24LL))(
                                  v97,
                                  v96,
                                  v7,
                                  &v198);
                          v36 = v98;
                          if ( v98 < 0 )
                            break;
                          v99 = *(_DWORD *)(v198 + 24);
                          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 24));
                          v100 = D3DKMDT_VPPR_IDENTITY;
                          LODWORD(v198) = 1;
                          do
                          {
                            v101 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v100) - 1;
                            if ( v101 )
                            {
                              v106 = v101 - 1;
                              if ( v106 )
                              {
                                v107 = v106 - 1;
                                if ( v107 )
                                {
                                  if ( v107 != 1 )
                                    goto LABEL_136;
                                  v108 = v99 >> 3;
                                }
                                else
                                {
                                  v108 = v99 >> 2;
                                }
                              }
                              else
                              {
                                v108 = v99 >> 1;
                              }
                              v109 = v108 & 1;
                              v105 = 0LL;
                            }
                            else
                            {
                              v105 = 0LL;
                              if ( (v99 & 1) != 0 )
                                goto LABEL_55;
                              v109 = 0;
                            }
                            if ( !v109 )
                              goto LABEL_72;
LABEL_55:
                            v104 = (unsigned int)v198;
                            v110 = v198;
                            if ( (unsigned int)(v198 - 1) <= 0xF )
                            {
                              v103 = 4LL;
                              v110 = ((int)v198 - 1) / 4 + 1;
                            }
                            v111 = v110 - 1;
                            if ( v111 )
                            {
                              v155 = v111 - 1;
                              if ( v155 )
                              {
                                v102 = (unsigned int)(v155 - 1);
                                if ( (_DWORD)v102 )
                                {
                                  if ( (_DWORD)v102 != 1 )
                                  {
LABEL_136:
                                    v154 = WdLogNewEntry5_WdAssertion(v103, v102, v104, v105);
                                    *(_QWORD *)(v154 + 24) = (int)v198;
                                    WdLogEvent5_WdAssertion(v154);
                                    goto LABEL_72;
                                  }
                                  v112 = v99 >> 7;
                                }
                                else
                                {
                                  v112 = v99 >> 6;
                                }
                              }
                              else
                              {
                                v112 = v99 >> 5;
                              }
                            }
                            else
                            {
                              v112 = v99 >> 4;
                            }
                            if ( (v112 & 1) != 0 )
                            {
                              if ( !v190 || (v113 = 1, v202 != 1) )
                                v113 = 0;
                              PopulateDisplayModeFromPresentPath(
                                (_DWORD)v43,
                                (_DWORD)v61,
                                v202,
                                v198,
                                v193,
                                v113,
                                1,
                                v203,
                                (__int64)&v229,
                                (__int64)v194);
                              Mode = MODE_UNION_LIST::FindMode((MODE_UNION_LIST *)(a1 + 64), &v229);
                              v231 = Mode;
                              v116 = Mode;
                              if ( !Mode || (UpgradeDispModeFlags(Mode, &v229, v115, 0LL), v194[0]) )
                              {
                                if ( *(_DWORD *)(a1 + 52) > 1u )
                                {
                                  LOBYTE(v189) = 0;
                                  v156 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(a1 + 32) + 80LL))(
                                           *(_QWORD *)(a1 + 24),
                                           *(unsigned int *)(a1 + 40),
                                           v7,
                                           (unsigned int)v198,
                                           v189);
                                  v36 = v156;
                                  if ( v156 < 0 )
                                  {
                                    v165 = (_QWORD *)WdLogNewEntry5_WdError(v158, v157);
                                    v165[3] = v36;
                                    v165[4] = *(unsigned int *)(a1 + 40);
                                    v165[5] = v7;
                                    v165[6] = *(_QWORD *)(a1 + 24);
                                    v165[7] = (int)v198;
                                    goto LABEL_165;
                                  }
                                  v116 = v231;
                                }
                                v117 = v204;
                                if ( v204 )
                                {
                                  v166 = v196 == 2;
                                  LODWORD(v36) = 0;
                                  v204[1] = 1;
                                  *v117 = v166;
                                  goto LABEL_166;
                                }
                                if ( v229.Format != D3DDDIFMT_A8R8G8B8 && *(_BYTE *)(a1 + 44)
                                  || v229.Format <= (unsigned int)D3DDDIFMT_P8
                                  && (v118 = 0x20003900000LL, _bittest64(&v118, v229.Format)) )
                                {
                                  if ( !v205 )
                                    goto LABEL_72;
                                  MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 96), &v229);
                                  v159 = (int)v36 < 0;
                                  goto LABEL_150;
                                }
                                if ( !v116 )
                                {
                                  LODWORD(v36) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 64), &v229);
                                  if ( (int)v36 < 0 )
                                    goto LABEL_166;
                                }
                                if ( v194[0] )
                                {
                                  ++v229.IntegerRefreshRate;
                                  *(_DWORD *)&v229.Flags |= 2u;
                                  LODWORD(v36) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 64), &v229);
                                  v159 = (int)v36 < 0;
LABEL_150:
                                  if ( v159 )
                                    goto LABEL_166;
                                }
                              }
                            }
LABEL_72:
                            v100 = v198 + 1;
                            LODWORD(v198) = v100;
                          }
                          while ( v100 <= D3DKMDT_VPPR_ROTATE270 );
                          if ( *(_DWORD *)(a1 + 52) > 1u )
                          {
                            v160 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 32)
                                                                                             + 88LL))(
                                     *(_QWORD *)(a1 + 24),
                                     *(unsigned int *)(a1 + 40),
                                     v7,
                                     0LL);
                            v36 = v160;
                            if ( v160 < 0 )
                            {
                              v163 = (_QWORD *)WdLogNewEntry5_WdError(v162, v161);
                              v163[3] = v36;
                              v163[4] = *(_QWORD *)(a1 + 24);
                              v164 = *(unsigned int *)(a1 + 40);
                              goto LABEL_160;
                            }
                          }
LABEL_30:
                          v68 = (int *)(v211 + 4);
                          LODWORD(v199) = (_DWORD)v199 + 1;
                          v69 = v195[0];
                          v211 += 4;
                          if ( (unsigned int)v199 >= 5 )
                          {
LABEL_31:
                            v70 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 32) + 72LL))(
                                    *(_QWORD *)(a1 + 24),
                                    *(unsigned int *)(a1 + 40),
                                    v7,
                                    0LL);
                            v36 = v70;
                            if ( v70 >= 0 )
                            {
                              v60 = v220;
                              goto LABEL_33;
                            }
                            v163 = (_QWORD *)WdLogNewEntry5_WdError(v72, v71);
                            v163[3] = v36;
                            v163[4] = *(unsigned int *)(a1 + 40);
                            v164 = *(_QWORD *)(a1 + 24);
LABEL_160:
                            v163[5] = v164;
                            v163[6] = v7;
                            WdLogEvent5_WdError(v163);
LABEL_166:
                            v60 = v220;
LABEL_167:
                            if ( v214[0] )
                              v216(v217, v61);
                            if ( v219[0] )
                              v221(v222, v60);
LABEL_172:
                            v37 = v207;
LABEL_176:
                            if ( v224[0] )
                              v226(v227, v43);
LABEL_178:
                            if ( v206[0] )
                              v208(v209, v37);
                            return (unsigned int)v36;
                          }
                        }
                      }
LABEL_163:
                      v165 = (_QWORD *)WdLogNewEntry5_WdError(v65, v64);
                    }
                    v165[3] = v36;
                    goto LABEL_165;
                  }
                  v152 = WdLogNewEntry5_WdWarning(v79, v78, v80, v81);
                  *(_QWORD *)(v152 + 24) = v82;
                  *(_QWORD *)(v152 + 32) = *v61;
                  WdLogEvent5_WdWarning(v152);
LABEL_33:
                  v212 = 0LL;
                  v73 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v197 + 16))(v60, v61, &v212);
                  v36 = v73;
                  if ( v73 < 0 )
                  {
                    v167 = WdLogNewEntry5_WdError(v75, v74);
                    *(_QWORD *)(v167 + 24) = v36;
LABEL_162:
                    WdLogEvent5_WdError(v167);
                    goto LABEL_167;
                  }
                }
                v119 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v197 + 56))(v60, 0LL);
                v36 = v119;
                if ( v119 < 0 )
                {
                  v168 = (_QWORD *)WdLogNewEntry5_WdError(v121, v120);
                  v168[3] = v36;
                  v168[4] = v60;
                  v168[5] = 0xFFFFFFFFLL;
                  v167 = (__int64)v168;
                  goto LABEL_162;
                }
                if ( v214[0] )
                  v216(v217, 0LL);
                if ( v219[0] )
                  v221(v222, v60);
              }
              v37 = v207;
            }
          }
        }
        v213 = 0LL;
        v122 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v200 + 16))(v37, v43, &v213);
        v36 = v122;
        if ( v122 < 0 )
        {
          v170 = WdLogNewEntry5_WdError(v124, v123);
          *(_QWORD *)(v170 + 24) = v36;
LABEL_175:
          WdLogEvent5_WdError(v170);
          goto LABEL_176;
        }
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
          (__int64)v224,
          v213,
          *(_QWORD *)(v200 + 32),
          v37);
        v43 = v225;
        v44 = v232;
        if ( !v225 )
        {
          v22 = v196;
          break;
        }
      }
    }
    v125 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v200 + 48))(v37, 0LL);
    v36 = v125;
    if ( v125 < 0 )
    {
      v171 = (_QWORD *)WdLogNewEntry5_WdError(v126, 0LL);
      v171[3] = v36;
      v171[4] = v37;
      v170 = (__int64)v171;
      v171[5] = 0xFFFFFFFFLL;
      goto LABEL_175;
    }
    v127 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(a1 + 8));
    *(_BYTE *)(v127 + 296) = v128;
    if ( v224[0] != v128 )
      v226(v227, v43);
    if ( v206[0] )
      v208(v209, v37);
    v196 = --v22;
    if ( v22 <= 0 )
      break;
    v20 = v233;
  }
  v129 = v234;
  if ( !*v234 )
  {
    v130 = *(_DWORD *)(a1 + 80);
    if ( v130 )
    {
      v132 = v130;
      v131 = 44LL * v130;
      if ( !is_mul_ok(v132, 0x2CuLL) )
        v131 = -1LL;
      v133 = (struct _D3DKMT_DISPLAYMODE *)operator new(v131, 0x4B677844u, PagedPool);
      *v129 = v133;
      if ( !v133 )
      {
        v175 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v175 + 24) = 1105LL;
        WdLogEvent5_WdLowResource(v175);
        return 3221225495LL;
      }
      memset(v133, 0, 44LL * *(unsigned int *)(a1 + 80));
    }
  }
  UniqueModes = MODE_UNION_LIST::GetUniqueModes((MODE_UNION_LIST *)(a1 + 64), *(unsigned int *)(a1 + 80), *v129, v235);
  v139 = UniqueModes;
  if ( UniqueModes < 0 )
  {
    v176 = WdLogNewEntry5_WdAssertion(v136, v135, v137, v138);
    *(_QWORD *)(v176 + 24) = v139;
    WdLogEvent5_WdAssertion(v176);
  }
  v140 = (struct _D3DKMT_DISPLAYMODE **)v205;
  if ( v205 )
  {
    if ( *v205 )
    {
      ExFreePoolWithTag(*v205, 0);
      *v140 = 0LL;
    }
    v177 = *(unsigned int *)(a1 + 112);
    if ( (_DWORD)v177 )
    {
      v178 = 44 * v177;
      if ( !is_mul_ok(v177, 0x2CuLL) )
        v178 = -1LL;
      v179 = (struct _D3DKMT_DISPLAYMODE *)operator new(v178, 0x4B677844u, PagedPool);
      *v140 = v179;
      if ( v179 )
      {
        memset(v179, 0, 44LL * *(unsigned int *)(a1 + 112));
        v181 = MODE_UNION_LIST::GetUniqueModes((MODE_UNION_LIST *)(a1 + 96), *(unsigned int *)(a1 + 112), *v140, v236);
        v186 = v181;
        if ( v181 < 0 )
        {
          v187 = WdLogNewEntry5_WdAssertion(v183, v182, v184, v185);
          *(_QWORD *)(v187 + 24) = v186;
          WdLogEvent5_WdAssertion(v187);
        }
      }
      else
      {
        v180 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v180 + 24) = 1137LL;
        WdLogEvent5_WdLowResource(v180);
      }
    }
  }
  return 0LL;
}
