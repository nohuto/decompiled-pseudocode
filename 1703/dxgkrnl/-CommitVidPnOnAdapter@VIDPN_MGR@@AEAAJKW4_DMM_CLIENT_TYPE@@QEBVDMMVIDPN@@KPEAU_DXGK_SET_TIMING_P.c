/*
 * XREFs of ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00887D8
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000969C (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000A87C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1C000A9A4 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000B4C0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000B644 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000CB98 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     DxgkGetGlobalConnectionChangeId @ 0x1C003D454 (DxgkGetGlobalConnectionChangeId.c)
 *     DxgkIncrementGlobalConnectionChangeId @ 0x1C003D464 (DxgkIncrementGlobalConnectionChangeId.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00DE754 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00DF690 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00DFA90 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E0178 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E01DC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E05D4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00E0C78 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E1044 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C00E399C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00E3C94 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E3E84 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4DBC (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00E8438 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00E8674 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00E87E0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00E8858 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E8A44 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnOnAdapter(
        VIDPN_MGR *a1,
        __int64 a2,
        __int64 a3,
        DMMVIDPN *a4,
        int a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        __int64 a10,
        int *a11,
        struct DXGDEVICE *a12,
        struct COREDEVICEACCESS *a13)
{
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // edi
  struct DXGADAPTER *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rsi
  _QWORD *v30; // rax
  struct DMMVIDPN *v31; // rbx
  unsigned int v32; // edi
  __int64 v33; // rax
  char *v34; // r13
  int v35; // r12d
  DMMVIDPN *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  DMMVIDPNPRESENTPATH *v46; // rsi
  __int64 v47; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v49; // ecx
  __int128 v50; // xmm1
  __int64 v51; // xmm0_8
  int updated; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned int i; // r13d
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  DMMVIDPNPRESENTPATH *v61; // rsi
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  _QWORD *v65; // rax
  ADAPTER_DISPLAY *v66; // rcx
  __int64 v67; // r12
  int j; // r13d
  int v69; // eax
  __int64 v70; // rcx
  _QWORD *v71; // rax
  DMMVIDPNTOPOLOGY *v72; // rbx
  unsigned int v73; // esi
  unsigned int *v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rax
  DMMVIDPNTOPOLOGY *v80; // rdi
  unsigned __int8 IsSourceInTopology; // al
  unsigned int v82; // edx
  void *v83; // r8
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rax
  int v90; // eax
  __int64 v91; // rcx
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // r8
  DMMVIDPNTOPOLOGY *v95; // rcx
  int v96; // eax
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rcx
  __int64 v100; // rax
  VIDPN_MGR *v101; // rdi
  unsigned __int8 v102; // zf
  char v103; // dl
  int v104; // eax
  __int64 v105; // rcx
  _QWORD *v106; // rax
  int v107; // eax
  __int64 v108; // rcx
  _QWORD *v109; // rax
  __int64 v110; // rax
  __int64 v111; // rdi
  int v112; // r12d
  struct DMMVIDPNTOPOLOGY *v113; // rsi
  int v114; // eax
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rcx
  __int64 v118; // rax
  unsigned int k; // r13d
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rax
  __int64 v125; // r12
  const struct _DXGK_DISPLAYMODE_INFO *v126; // rax
  __int128 v127; // xmm1
  __int64 v128; // xmm0_8
  DMMVIDPNPRESENTPATH *v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rax
  int v140; // eax
  __int64 v141; // rdx
  __int64 v142; // rcx
  unsigned int m; // r13d
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // rax
  int v154; // eax
  _QWORD *v155; // rax
  DMMVIDPNTOPOLOGY *v156; // r13
  int v157; // eax
  __int64 v158; // rdx
  __int64 v159; // rcx
  _QWORD *v160; // rax
  __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 v164; // rax
  __int64 v165; // rax
  ADAPTER_DISPLAY *v166; // rcx
  __int64 v167; // r12
  int n; // esi
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  void *v170; // r8
  int v171; // ecx
  bool v172; // cc
  VIDPN_MGR *v173; // r13
  __int64 v174; // rax
  int v175; // eax
  __int64 v176; // rcx
  _QWORD *v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rcx
  _QWORD *v180; // rax
  _QWORD *v181; // rax
  DXGADAPTER *v182; // rax
  void *v183; // r13
  struct DXGADAPTERALLOCATION *v184; // rax
  unsigned int v185; // edi
  _QWORD *v186; // rax
  int v187; // eax
  __int64 v188; // r8
  __int64 v189; // r9
  __int64 v190; // rcx
  __int64 v191; // rax
  int v192; // edi
  __int64 v193; // rax
  int v194; // eax
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r13
  _QWORD *v198; // rax
  int v199; // r11d
  signed __int64 v201; // rax
  unsigned int *v202; // rdx
  __int64 v203; // rdx
  int v204; // r8d
  __int64 v205; // r9
  __int64 v206; // r10
  __int64 v207; // rax
  bool v209; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v210; // [rsp+50h] [rbp-B0h] BYREF
  char v211; // [rsp+51h] [rbp-AFh]
  unsigned int v212; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v213; // [rsp+58h] [rbp-A8h] BYREF
  int v214; // [rsp+60h] [rbp-A0h]
  DMMVIDPNTOPOLOGY *v215; // [rsp+68h] [rbp-98h]
  int v216; // [rsp+70h] [rbp-90h]
  unsigned int v217; // [rsp+74h] [rbp-8Ch]
  VIDPN_MGR *v218; // [rsp+78h] [rbp-88h]
  unsigned int v219; // [rsp+80h] [rbp-80h]
  DMMVIDPN *v220; // [rsp+88h] [rbp-78h]
  struct DMMVIDPN *v221; // [rsp+90h] [rbp-70h] BYREF
  struct DXGDEVICE *v222; // [rsp+98h] [rbp-68h]
  _BYTE v223[24]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v224; // [rsp+B8h] [rbp-48h]
  struct DMMVIDPNPRESENTPATH *Path; // [rsp+C0h] [rbp-40h]
  struct COREDEVICEACCESS *v226; // [rsp+C8h] [rbp-38h]
  __int64 v227; // [rsp+D0h] [rbp-30h]
  int *v228; // [rsp+D8h] [rbp-28h]
  struct _D3DKMT_DISPLAYMODE v229; // [rsp+E0h] [rbp-20h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v230; // [rsp+110h] [rbp+10h] BYREF

  v227 = a6;
  v224 = a9;
  v228 = a11;
  v222 = a12;
  v226 = a13;
  v213 = 0LL;
  v214 = 0;
  v210 = 0;
  v220 = a4;
  v216 = a3;
  v217 = a2;
  v218 = a1;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(a1, a2, a3, (__int64)a4);
  v18 = a8[5];
  v19 = ContainingAdapter;
  v20 = (unsigned int)(a8[3] | a8[11]);
  v219 = v18;
  if ( ((unsigned int)v20 & v18) != 0 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v15, v20, v16, v17);
    WdLogEvent5_WdAssertion(v21);
  }
  v22 = v18 & a8[2];
  if ( (a8[4] & v18 & a8[2]) != (_DWORD)v22 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v22, v20, v16, v17);
    WdLogEvent5_WdAssertion(v23);
  }
  v221 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(a1);
  v29 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
    v30[3] = *((int *)v19 + 68);
    v30[4] = *((unsigned int *)v19 + 67);
    v30[5] = v29;
    WdLogEvent5_WdError(v30);
    goto LABEL_149;
  }
  v31 = v221;
  v32 = 0;
  v33 = *((_QWORD *)v19 + 285);
  v34 = (char *)v221 + 96;
  v35 = 1;
  v215 = (struct DMMVIDPN *)((char *)v221 + 96);
  if ( *(_DWORD *)(v33 + 80) )
  {
    do
    {
      if ( (v35 & a8[8]) != 0 )
      {
        v36 = v220;
        if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPN *)((char *)v220 + 96), v32, 0LL, &v212) < 0
          || v212 == -1 )
        {
          v41 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
          WdLogEvent5_WdAssertion(v41);
        }
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)v36 + 96), v32, v212);
        v46 = Path;
        if ( !Path )
        {
          v47 = WdLogNewEntry5_WdAssertion(v43, v42, v44, v45);
          WdLogEvent5_WdAssertion(v47);
        }
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)v19 + 285), v32);
        v49 = *((_DWORD *)v46 + 29);
        v50 = *((_OWORD *)DisplayModeInfo + 1);
        *(_OWORD *)&v229.Width = *(_OWORD *)DisplayModeInfo;
        v51 = *((_QWORD *)DisplayModeInfo + 4);
        LODWORD(DisplayModeInfo) = *((_DWORD *)DisplayModeInfo + 10);
        *(_QWORD *)&v229.DisplayFixedOutput = v51;
        *((_DWORD *)&v229.Flags + 1) = (_DWORD)DisplayModeInfo;
        *(_OWORD *)&v229.RefreshRate.Numerator = v50;
        v229.DisplayOrientation = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v49);
        updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(v46);
        v29 = updated;
        if ( updated < 0 )
        {
          v65 = (_QWORD *)WdLogNewEntry5_WdError(v54, v53);
          v65[3] = v32;
          v65[4] = v34;
          v65[5] = v29;
          WdLogEvent5_WdError(v65);
          a8[8] &= ~v35;
          a8[2] |= v35;
        }
        else
        {
          for ( i = 0; ; ++i )
          {
            LODWORD(v29) = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
                             (struct DMMVIDPN *)((char *)v31 + 96),
                             v32,
                             i,
                             &v212);
            if ( (int)v29 < 0 )
            {
              v58 = WdLogNewEntry5_WdAssertion(v56, v25, v57, v28);
              WdLogEvent5_WdAssertion(v58);
            }
            v27 = v212;
            if ( v212 == -1 )
              break;
            v61 = DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)v31 + 96), v32, v212);
            if ( !v61 )
            {
              v64 = WdLogNewEntry5_WdAssertion(v60, v59, v62, v63);
              WdLogEvent5_WdAssertion(v64);
            }
            DMMVIDPNPRESENTPATH::PinContentRotation(v61, *((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)Path + 29));
          }
          v34 = (char *)v31 + 96;
        }
      }
      ++v32;
      v35 *= 2;
    }
    while ( v32 < *(_DWORD *)(*((_QWORD *)v19 + 285) + 80LL) );
  }
  v66 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 285);
  v67 = 0LL;
  for ( j = 1; (unsigned int)v67 < *((_DWORD *)v66 + 20); j *= 2 )
  {
    if ( (j & a8[17]) == 0 )
    {
      if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(v66, (unsigned int)v67, v27, v28)
        && ((j & a8[3]) != 0 || (j & a8[11]) != 0 || (j & a8[2]) != 0 || (j & a8[4]) == 0)
        && (v69 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*((ADAPTER_DISPLAY **)v19 + 285), v67, 0, 0x800u, 0),
            v29 = v69,
            v69 < 0) )
      {
        v71 = (_QWORD *)WdLogNewEntry5_WdError(v70, v25);
        v71[3] = (unsigned int)v67;
        v71[4] = *((int *)v19 + 68);
        v71[5] = *((unsigned int *)v19 + 67);
        v71[6] = v29;
        WdLogEvent5_WdError(v71);
        a8[17] |= j;
        a8[v67 + 18] = v29;
      }
      else
      {
        if ( (j & a8[3]) != 0 || *((_BYTE *)v218 + 456) )
        {
          LOBYTE(v27) = 2;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
            v223,
            ((unsigned __int64)v31 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v31 + 96) != 0LL),
            v27);
          v95 = (struct DMMVIDPN *)((char *)v31 + 96);
LABEL_51:
          v96 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v95, v67);
          v99 = v96 + 0x80000000;
          if ( (int)v99 >= 0 && v96 != -1071774919 )
          {
            v100 = WdLogNewEntry5_WdAssertion(v99, 0x80000000LL, v97, v98);
            WdLogEvent5_WdAssertion(v100);
          }
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v223);
LABEL_55:
          v101 = v218;
          v102 = (j & a8[3]) == 0;
          LODWORD(v213) = v216 & 0xF | v213 & 0xFFFFFF50 | 0x50;
          v214 = *(_DWORD *)(*((_QWORD *)v19 + 285) + 240LL);
          v103 = ((BYTE4(v213) & 0xFC | v102) ^ (v217 >> 14)) & 4 ^ (BYTE4(v213) & 0xFC | v102);
          v102 = (j & a8[4]) == 0;
          BYTE4(v213) = v103;
          v104 = VIDPN_MGR::CommitVidPn(
                   v218,
                   v31,
                   0LL,
                   v67,
                   D3DKMDT_MCC_IGNORE,
                   0,
                   v102,
                   (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v213,
                   &v210);
          v29 = v104;
          if ( v104 < 0 )
          {
            v106 = (_QWORD *)WdLogNewEntry5_WdError(v105, v25);
            v106[3] = (unsigned int)v67;
            v106[4] = *((int *)v19 + 68);
            v106[5] = *((unsigned int *)v19 + 67);
            v106[6] = v29;
            WdLogEvent5_WdError(v106);
          }
          if ( v222 && ((j & a8[3]) != 0 || *((_BYTE *)v101 + 456)) )
          {
            v107 = ADAPTER_DISPLAY::DestroyCddAllocations(*((ADAPTER_DISPLAY **)v19 + 285), v222, v67);
            v29 = v107;
            if ( v107 < 0 )
            {
              v109 = (_QWORD *)WdLogNewEntry5_WdError(v108, v25);
              v109[3] = (unsigned int)v67;
              v109[4] = *((int *)v19 + 68);
              v109[5] = *((unsigned int *)v19 + 67);
              v109[6] = v29;
              WdLogEvent5_WdError(v109);
            }
          }
          goto LABEL_62;
        }
        if ( (j & a8[11]) != 0 )
        {
          v72 = v215;
          v73 = 0;
          v74 = (unsigned int *)(a10 + 4LL * (unsigned int)(16 * v67));
          do
          {
            if ( *v74 == -1 )
              break;
            LOBYTE(v27) = 2;
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
              v223,
              ((unsigned __int64)v72 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)v72 >> 64),
              v27);
            if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v72, v67, *v74, 0LL) < 0 )
            {
              v79 = WdLogNewEntry5_WdAssertion(v76, v75, v77, v78);
              WdLogEvent5_WdAssertion(v79);
            }
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v223);
            ++v73;
            ++v74;
          }
          while ( v73 < 0x10 );
          v80 = v72;
          IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology(v72, v67);
          v31 = v221;
          if ( !IsSourceInTopology )
            goto LABEL_55;
          v83 = 0LL;
          if ( *((_QWORD *)v19 + 286) )
          {
            DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                           *((ADAPTER_DISPLAY **)v19 + 285),
                                           v82);
            if ( !DisplayedPrimaryAllocation )
              goto LABEL_49;
            v86 = *((unsigned int *)DisplayedPrimaryAllocation + 1);
            if ( (v86 & 0x10) != 0 )
              goto LABEL_49;
            v83 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
          }
          v89 = *((_QWORD *)v19 + 285);
          LODWORD(v213) = v216 & 0xF | v213 & 0xFFFFFF40 | 0x40;
          v214 = *(_DWORD *)(v89 + 240);
          v209 = (j & a8[4]) == 0;
          BYTE4(v213) = ((BYTE4(v213) & 0xFC | 1) ^ (v217 >> 14)) & 4 ^ (BYTE4(v213) & 0xFC | 1);
          v90 = VIDPN_MGR::CommitVidPn(
                  v218,
                  v31,
                  v83,
                  v67,
                  D3DKMDT_MCC_ENFORCE,
                  0,
                  v209,
                  (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v213,
                  &v210);
          v29 = v90;
          if ( v90 < 0 )
          {
            v92 = (_QWORD *)WdLogNewEntry5_WdError(v91, v25);
            v92[3] = (unsigned int)v67;
            v92[4] = *((int *)v19 + 68);
            v92[5] = *((unsigned int *)v19 + 67);
            v92[6] = v29;
            WdLogEvent5_WdError(v92);
LABEL_49:
            v93 = (_QWORD *)WdLogNewEntry5_WdTrace(v86, v85, v87, v88);
            LOBYTE(v94) = 2;
            v93[3] = (unsigned int)v67;
            v93[4] = *((int *)v19 + 68);
            v93[5] = *((unsigned int *)v19 + 67);
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
              v223,
              ((unsigned __int64)v80 + 56) & -(__int64)(v80 != 0LL),
              v94);
            v95 = v80;
            goto LABEL_51;
          }
        }
      }
    }
LABEL_62:
    v66 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 285);
    v67 = (unsigned int)(v67 + 1);
  }
  v110 = *((_QWORD *)v19 + 285);
  v111 = 0LL;
  v112 = 1;
  LODWORD(v215) = 1;
  if ( *(_DWORD *)(v110 + 80) )
  {
    while ( 1 )
    {
      v211 = 1;
      if ( (v112 & a8[17]) != 0 )
        goto LABEL_94;
      if ( (v112 & a8[2]) == 0 )
        goto LABEL_103;
      v113 = (struct DMMVIDPN *)((char *)v31 + 96);
      LOBYTE(v27) = 2;
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        v223,
        ((unsigned __int64)v31 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v31 + 96) != 0LL),
        v27);
      v114 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v31 + 96), v111);
      v117 = v114 + 0x80000000;
      if ( (int)v117 >= 0 && v114 != -1071774919 )
      {
        v118 = WdLogNewEntry5_WdAssertion(v117, 0x80000000LL, v115, v116);
        WdLogEvent5_WdAssertion(v118);
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v223);
      for ( k = 0; ; ++k )
      {
        if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPN *)((char *)v220 + 96), v111, k, &v212) < 0 )
        {
          v124 = WdLogNewEntry5_WdAssertion(v121, v120, v122, v123);
          WdLogEvent5_WdAssertion(v124);
        }
        v125 = v212;
        if ( v212 == -1 )
          break;
        if ( v211 )
        {
          v126 = ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)v19 + 285), v111);
          v127 = *((_OWORD *)v126 + 1);
          *(_OWORD *)&v229.Width = *(_OWORD *)v126;
          v128 = *((_QWORD *)v126 + 4);
          LODWORD(v126) = *((_DWORD *)v126 + 10);
          *(_QWORD *)&v229.DisplayFixedOutput = v128;
          *((_DWORD *)&v229.Flags + 1) = (_DWORD)v126;
          *(_OWORD *)&v229.RefreshRate.Numerator = v127;
          v129 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)v220 + 96), v111, v125);
          if ( (int)DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(v129, &v229) < 0 )
          {
            v134 = WdLogNewEntry5_WdAssertion(v131, v130, v132, v133);
            WdLogEvent5_WdAssertion(v134);
          }
          v211 = 0;
        }
        if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
               v220,
               v125,
               (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)&v230) < 0 )
        {
          v139 = WdLogNewEntry5_WdAssertion(v136, v135, v137, v138);
          WdLogEvent5_WdAssertion(v139);
        }
        v140 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
                 v218,
                 v113,
                 &v230,
                 (enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS)v138);
        v29 = v140;
        if ( v140 < 0 )
        {
LABEL_89:
          v155 = (_QWORD *)WdLogNewEntry5_WdError(v142, v141);
          v156 = (struct DMMVIDPN *)((char *)v31 + 96);
          v155[3] = (unsigned int)v111;
          v155[4] = v125;
          v155[5] = (char *)v31 + 96;
          v155[6] = v29;
          WdLogEvent5_WdError(v155);
          v112 = (int)v215;
          goto LABEL_95;
        }
        v113 = (struct DMMVIDPN *)((char *)v31 + 96);
      }
      for ( m = 0; ; ++m )
      {
        if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v113, v111, m, &v212) < 0 )
        {
          v148 = WdLogNewEntry5_WdAssertion(v145, v144, v146, v147);
          WdLogEvent5_WdAssertion(v148);
        }
        v125 = v212;
        if ( v212 == -1 )
          break;
        if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
               v220,
               v212,
               (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)&v230) < 0 )
        {
          v153 = WdLogNewEntry5_WdAssertion(v150, v149, v151, v152);
          WdLogEvent5_WdAssertion(v153);
        }
        v154 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                 v218,
                 v113,
                 (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)&v230);
        v29 = v154;
        if ( v154 < 0 )
          goto LABEL_89;
        v113 = (struct DMMVIDPN *)((char *)v31 + 96);
      }
      LODWORD(v29) = 0;
      if ( v222 )
      {
        if ( v226 )
          break;
      }
      if ( !*((_QWORD *)v19 + 286) )
        goto LABEL_109;
      CddPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*((ADAPTER_DISPLAY **)v19 + 285), v111);
      if ( CddPrimaryAllocation )
      {
        v179 = *((unsigned int *)CddPrimaryAllocation + 1);
        if ( (v179 & 0x10) == 0 )
          goto LABEL_118;
      }
      v112 = (int)v215;
      if ( ((unsigned int)v215 & a8[6]) != 0 )
      {
        LODWORD(v29) = -1071775482;
        v180 = (_QWORD *)WdLogNewEntry5_WdError(v179, v178);
        v180[3] = (unsigned int)v111;
        v180[4] = *((int *)v19 + 68);
        v180[5] = *((unsigned int *)v19 + 67);
        WdLogEvent5_WdError(v180);
        goto LABEL_94;
      }
      *v224 |= (unsigned int)v215;
      v181 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v181[3] = (unsigned int)v111;
      v181[4] = *((int *)v19 + 68);
      v181[5] = *((unsigned int *)v19 + 67);
      WdLogEvent5_WdDmmEvent(v181);
LABEL_103:
      v165 = *((_QWORD *)v19 + 285);
      v112 *= 2;
      v111 = (unsigned int)(v111 + 1);
      LODWORD(v215) = v112;
      if ( (unsigned int)v111 >= *(_DWORD *)(v165 + 80) )
        goto LABEL_104;
    }
    v157 = ADAPTER_DISPLAY::CreateCddAllocations(*((ADAPTER_DISPLAY **)v19 + 285), v222, v111, &v229, v226);
    v29 = v157;
    if ( v157 < 0 )
    {
      v160 = (_QWORD *)WdLogNewEntry5_WdError(v159, v158);
      v160[3] = (unsigned int)v111;
      v160[4] = *((int *)v19 + 68);
      v160[5] = *((unsigned int *)v19 + 67);
      v160[6] = v29;
      WdLogEvent5_WdError(v160);
      v112 = (int)v215;
      goto LABEL_94;
    }
    CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*((ADAPTER_DISPLAY **)v19 + 285), v111, 0);
    if ( *((_QWORD *)v19 + 286) )
LABEL_118:
      v170 = (void *)*((_QWORD *)CddPrimaryAllocation + 2);
    else
LABEL_109:
      v170 = 0LL;
    v171 = 32;
    v112 = (int)v215;
    v172 = m <= 1;
    v173 = v218;
    if ( v172 )
      v171 = 48;
    v174 = *((_QWORD *)v19 + 285);
    LODWORD(v213) = v216 & 0xF | v213 & 0xFFFFFF00 | v171;
    v214 = *(_DWORD *)(v174 + 240);
    v102 = ((unsigned int)v215 & a8[4]) == 0;
    BYTE4(v213) = (BYTE4(v213) & 0xFC ^ (v217 >> 14)) & 4 ^ BYTE4(v213) & 0xFC;
    v175 = VIDPN_MGR::CommitVidPn(
             v218,
             v31,
             v170,
             v111,
             D3DKMDT_MCC_ENFORCE,
             0,
             v102,
             (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v213,
             &v210);
    v29 = v175;
    if ( v175 < 0 )
    {
      v177 = (_QWORD *)WdLogNewEntry5_WdError(v176, v25);
      v177[3] = (unsigned int)v111;
      v177[4] = *((int *)v19 + 68);
      v177[5] = *((unsigned int *)v19 + 67);
      v177[6] = v29;
      WdLogEvent5_WdError(v177);
      if ( v222 )
        ADAPTER_DISPLAY::DestroyCddAllocations(*((ADAPTER_DISPLAY **)v19 + 285), v222, v111);
LABEL_94:
      v156 = (struct DMMVIDPN *)((char *)v31 + 96);
LABEL_95:
      a8[17] |= v112;
      a8[v111 + 18] = v29;
      if ( (_DWORD)v29 == -1071774920
        || *((_DWORD *)VIDPN_MGR::GetContainingAdapter(v218, v25, v27, v28) + 69) == 1297040209
        && (_DWORD)v29 == -1071774976 )
      {
        v210 = 1;
      }
      LOBYTE(v27) = 2;
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        v223,
        ((unsigned __int64)v156 + 56) & -(__int64)(v156 != 0LL),
        v27);
      LODWORD(v29) = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v156, v111);
      if ( (int)(v29 + 0x80000000) >= 0 && (_DWORD)v29 != -1071774919 )
      {
        v164 = WdLogNewEntry5_WdAssertion(0x80000000LL, v161, v162, v163);
        WdLogEvent5_WdAssertion(v164);
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v223);
      goto LABEL_103;
    }
    if ( (v112 & a8[4]) == 0 )
    {
      v182 = VIDPN_MGR::GetContainingAdapter(v173, v25, v27, v28);
      if ( (int)DXGADAPTER::GetDriverVersion(v182) < 1200
        || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter(v173, v25, v27, v28) + 24)
                                             + 64LL)
                                 + 40LL)
                     + 28LL) < 0x300Au )
      {
        v219 |= v112;
      }
    }
    goto LABEL_103;
  }
LABEL_104:
  v166 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 285);
  v167 = 0LL;
  for ( n = 1; (unsigned int)v167 < *((_DWORD *)v166 + 20); n *= 2 )
  {
    if ( (n & a8[17]) == 0 )
    {
      if ( (n & v219) != 0 )
      {
        v183 = 0LL;
        if ( (n & a8[4]) == 0 )
        {
          LOBYTE(v27) = 2;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
            v223,
            ((unsigned __int64)v31 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v31 + 96) != 0LL),
            v27);
          v187 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v31 + 96), v167);
          v190 = v187 + 0x80000000;
          if ( (int)v190 >= 0 && v187 != -1071774919 )
          {
            v191 = WdLogNewEntry5_WdAssertion(v190, 0x80000000LL, v188, v189);
            WdLogEvent5_WdAssertion(v191);
          }
          v192 = v213;
          a8[15] |= n;
          v185 = v192 & 0xFFFFFF0F | 0x40;
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v223);
          goto LABEL_137;
        }
        if ( !*((_QWORD *)v19 + 286) )
          goto LABEL_131;
        v184 = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(v166, v167);
        if ( v184 && (*((_DWORD *)v184 + 1) & 0x10) == 0 )
        {
          v183 = (void *)*((_QWORD *)v184 + 2);
LABEL_131:
          v185 = v213 & 0xFFFFFF0F | 0x20;
LABEL_137:
          v193 = *((_QWORD *)v19 + 285);
          LODWORD(v213) = ((unsigned __int8)v216 ^ (unsigned __int8)v185) & 0xF ^ v185;
          v214 = *(_DWORD *)(v193 + 240);
          BYTE4(v213) = (BYTE4(v213) & 0xFC ^ (v217 >> 14)) & 4 ^ BYTE4(v213) & 0xFC;
          v194 = VIDPN_MGR::CommitVidPn(
                   v218,
                   v31,
                   v183,
                   v167,
                   D3DKMDT_MCC_ENFORCE,
                   1,
                   0,
                   (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v213,
                   &v210);
          v197 = v194;
          if ( v194 < 0 )
          {
            a8[17] |= n;
            a8[v167 + 18] = v194;
            v198 = (_QWORD *)WdLogNewEntry5_WdError(v196, v195);
            v198[3] = (unsigned int)v167;
            v198[4] = *((int *)v19 + 68);
            v198[5] = *((unsigned int *)v19 + 67);
            v198[6] = v197;
            WdLogEvent5_WdError(v198);
          }
          goto LABEL_139;
        }
        *v224 |= n;
        a8[15] |= n;
        v186 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v186[3] = (unsigned int)v167;
        v186[4] = *((int *)v19 + 68);
        v186[5] = *((unsigned int *)v19 + 67);
        WdLogEvent5_WdDmmEvent(v186);
      }
      else
      {
        a8[15] |= n & ~a8[4];
      }
    }
LABEL_139:
    v166 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 285);
    v167 = (unsigned int)(v167 + 1);
  }
  v199 = -2;
  if ( a5 )
  {
    do
    {
      if ( ((1 << *a7) & a8[17]) != 0 )
      {
        v201 = DxgkIncrementGlobalConnectionChangeId();
        *((_QWORD *)v202 - 1) = v201;
        *v202 = *v202 & 0xF0FFFFFF | 0xD000000;
        DxgkIncrementGlobalConnectionChangeId();
      }
      else
      {
        v207 = DxgkGetGlobalConnectionChangeId();
        *(_QWORD *)(v203 - 8) = v207;
        *(_DWORD *)v203 = *(_DWORD *)v203 & 0xF0FFFFFF | 0xE000000;
      }
      if ( (v204 & a8[2]) != 0 )
      {
        *(_DWORD *)(v203 - 16) &= v199;
        *(_WORD *)(v203 + 16) = 1;
        *(_BYTE *)(v203 + 18) = 1;
      }
      else
      {
        *(_DWORD *)(v203 - 16) &= v199;
        *(_WORD *)(v203 + 16) = -1;
        *(_BYTE *)(v203 + 18) = -1;
      }
      a7 = (_DWORD *)(v205 + 4);
    }
    while ( v206 != 1 );
  }
  *v228 = (v210 != 0) | v199 & *v228;
  LODWORD(v29) = 0;
LABEL_149:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v221, 0LL);
  return (unsigned int)v29;
}
