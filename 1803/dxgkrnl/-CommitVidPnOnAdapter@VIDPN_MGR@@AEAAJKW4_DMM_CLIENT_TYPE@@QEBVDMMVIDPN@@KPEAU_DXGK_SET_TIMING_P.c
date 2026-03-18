/*
 * XREFs of ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C021CE80
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0004454 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000452C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00064C4 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000695C (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0007D04 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014394 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0014A18 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0019C0C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     DxgkGetGlobalConnectionChangeId @ 0x1C003A2B4 (DxgkGetGlobalConnectionChangeId.c)
 *     DxgkIncrementGlobalConnectionChangeId @ 0x1C003A2C4 (DxgkIncrementGlobalConnectionChangeId.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA2C4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00BB648 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00BB6AC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BBE98 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00BC204 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00BF45C (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C010D5A4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C010D80C (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C010D8B4 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C010D918 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0151310 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0211124 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C0211648 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0215F2C (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C021EFE8 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0222AE0 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0222EF0 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnOnAdapter(
        VIDPN_MGR *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        __int64 a10,
        unsigned int *a11,
        struct DXGDEVICE *a12,
        struct COREDEVICEACCESS *a13,
        unsigned __int8 a14)
{
  __int64 v14; // r15
  __int64 v17; // rax
  int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned int v22; // ecx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  DMMVIDPNTOPOLOGY *v26; // r12
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v28; // rcx
  unsigned __int8 v29; // r9
  __int64 v30; // rbx
  _QWORD *v31; // rax
  unsigned __int64 *v32; // rbx
  unsigned int v33; // edi
  int v34; // r14d
  DMMVIDPNTOPOLOGY *v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *Path; // r13
  __int64 v40; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  unsigned int v42; // ecx
  __int128 v43; // xmm1
  __int64 v44; // xmm0_8
  int updated; // eax
  __int64 v46; // rcx
  __int64 v47; // r12
  unsigned int i; // r12d
  __int64 v49; // rcx
  __int64 v50; // rax
  DMMVIDPNPRESENTPATH *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // rax
  ADAPTER_DISPLAY *v55; // rcx
  __int64 v56; // r14
  int j; // r12d
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // r13
  _QWORD *v61; // rax
  DMMVIDPNTOPOLOGY *v62; // rbx
  unsigned int v63; // r13d
  unsigned int *v64; // rdi
  __int64 v65; // rcx
  __int64 v66; // rax
  bool IsSourceInTopology; // al
  unsigned int v68; // edx
  void *v69; // rdi
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  ADAPTER_DISPLAY *v75; // rcx
  bool v76; // zf
  __int64 v77; // rdi
  int v78; // eax
  __int64 v79; // rcx
  __int64 v80; // r13
  _QWORD *v81; // rax
  _QWORD *v82; // rax
  unsigned __int8 v83; // r9
  int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // rax
  ADAPTER_DISPLAY *v87; // rcx
  bool v88; // zf
  int v89; // eax
  __int64 v90; // rcx
  __int64 v91; // rdi
  _QWORD *v92; // rax
  int v93; // eax
  __int64 v94; // rcx
  __int64 v95; // rdi
  _QWORD *v96; // rax
  unsigned int v97; // r13d
  int k; // r12d
  __int64 v99; // rcx
  unsigned int v100; // eax
  char v101; // di
  int v102; // eax
  __int64 v103; // rcx
  __int64 v104; // rax
  unsigned int m; // r14d
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // r12
  const struct _DXGK_DISPLAYMODE_INFO *v109; // rax
  __int128 v110; // xmm1
  __int64 v111; // xmm0_8
  DMMVIDPNPRESENTPATH *v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rcx
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v116; // r9d
  __int64 v117; // rax
  int v118; // eax
  __int64 v119; // rcx
  __int64 v120; // rdi
  unsigned int v121; // r14d
  DMMVIDPNTOPOLOGY *v122; // rdi
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rax
  int v127; // eax
  int v128; // edx
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  DMMVIDPNPRESENTPATH *v130; // r11
  _QWORD *v131; // rax
  __int64 v132; // r14
  unsigned __int64 *v133; // rcx
  int v134; // eax
  __int64 v135; // rcx
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  void *v137; // rdi
  int v138; // ecx
  ADAPTER_DISPLAY *v139; // rcx
  bool v140; // zf
  __int64 v141; // rcx
  _QWORD *v142; // rax
  _QWORD *v143; // rax
  VIDPN_MGR *v144; // r14
  int v145; // eax
  __int64 v146; // rcx
  _QWORD *v147; // rax
  int v148; // eax
  __int64 v149; // rcx
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rcx
  __int64 v154; // r12
  int v155; // r14d
  int v156; // eax
  void *v157; // r13
  struct DXGADAPTERALLOCATION *v158; // rax
  __int64 v159; // rcx
  int v160; // edi
  _QWORD *v161; // rax
  int v162; // eax
  __int64 v163; // rcx
  __int64 v164; // rax
  unsigned __int8 v165; // al
  __int64 v166; // rcx
  __int64 v167; // r13
  _QWORD *v168; // rax
  __int64 v170; // rbx
  signed __int64 v171; // rax
  __int64 v172; // r8
  __int64 v173; // r8
  int v174; // r9d
  __int64 v175; // r10
  __int64 v176; // r11
  __int64 v177; // rax
  char v178; // cl
  char v179; // al
  __int64 v181; // [rsp+20h] [rbp-E0h]
  int v182; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v183; // [rsp+50h] [rbp-B0h] BYREF
  char v184; // [rsp+51h] [rbp-AFh]
  char v185; // [rsp+52h] [rbp-AEh]
  unsigned int v186; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v187; // [rsp+58h] [rbp-A8h] BYREF
  int v188; // [rsp+60h] [rbp-A0h]
  int v189; // [rsp+68h] [rbp-98h]
  unsigned int v190; // [rsp+6Ch] [rbp-94h]
  DMMVIDPNPRESENTPATH *v191; // [rsp+70h] [rbp-90h]
  VIDPN_MGR *v192; // [rsp+78h] [rbp-88h]
  int v193; // [rsp+80h] [rbp-80h]
  DMMVIDPNTOPOLOGY *v194; // [rsp+88h] [rbp-78h]
  DMMVIDPNTOPOLOGY *v195; // [rsp+90h] [rbp-70h]
  struct DMMVIDPN *v196; // [rsp+98h] [rbp-68h] BYREF
  struct DXGDEVICE *v197; // [rsp+A0h] [rbp-60h]
  _BYTE v198[24]; // [rsp+A8h] [rbp-58h] BYREF
  DMMVIDPN *v199; // [rsp+C0h] [rbp-40h]
  _DWORD *v200; // [rsp+C8h] [rbp-38h]
  __int64 v201; // [rsp+D0h] [rbp-30h]
  struct COREDEVICEACCESS *v202; // [rsp+D8h] [rbp-28h]
  __int64 v203; // [rsp+E0h] [rbp-20h]
  unsigned int *v204; // [rsp+E8h] [rbp-18h]
  struct _D3DKMT_DISPLAYMODE v205; // [rsp+F0h] [rbp-10h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v206; // [rsp+120h] [rbp+20h] BYREF

  v14 = *((_QWORD *)a1 + 1);
  v203 = a6;
  v200 = a9;
  v201 = a10;
  v204 = a11;
  v197 = a12;
  v202 = a13;
  v199 = (DMMVIDPN *)a4;
  v189 = a3;
  v190 = a2;
  v192 = a1;
  v187 = 0LL;
  v188 = 0;
  v183 = 0;
  v184 = 0;
  if ( !v14 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v17);
    v14 = *((_QWORD *)a1 + 1);
  }
  v18 = a8[6];
  v19 = (unsigned int)(a8[13] | a8[3]);
  v20 = *(_QWORD *)(v14 + 16);
  v193 = v18;
  if ( ((unsigned int)v19 & v18) != 0 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v21);
  }
  v22 = a8[2];
  v23 = v22 & a8[5];
  v24 = v18 & v22;
  if ( (v18 & v23) != (_DWORD)v24 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v24);
    WdLogEvent5_WdAssertion(v25);
  }
  v26 = (DMMVIDPNTOPOLOGY *)(a4 + 96);
  v196 = 0LL;
  v195 = (DMMVIDPNTOPOLOGY *)(a4 + 96);
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                             (const struct DMMVIDPN **)a1,
                                             (__int64 *)&v196);
  v30 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v28);
    v31[3] = *(int *)(v20 + 272);
    v31[4] = *(unsigned int *)(v20 + 268);
    v31[5] = v30;
    WdLogEvent5_WdError(v31);
    goto LABEL_170;
  }
  v32 = (unsigned __int64 *)v196;
  v33 = 0;
  v194 = (struct DMMVIDPN *)((char *)v196 + 96);
  v34 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(v20 + 2456) + 80LL) )
  {
    v35 = v194;
    do
    {
      if ( (v34 & a8[10]) != 0 )
      {
        if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v26, v33, 0LL, &v186) < 0 || v186 == -1 )
        {
          v37 = WdLogNewEntry5_WdAssertion(v36);
          WdLogEvent5_WdAssertion(v37);
        }
        Path = (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)DMMVIDPNTOPOLOGY::FindPath(v26, v33, v186);
        if ( !Path )
        {
          v40 = WdLogNewEntry5_WdAssertion(v38);
          WdLogEvent5_WdAssertion(v40);
        }
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v20 + 2456), v33);
        v42 = *((_DWORD *)Path + 29);
        v43 = *((_OWORD *)DisplayModeInfo + 1);
        *(_OWORD *)&v205.Width = *(_OWORD *)DisplayModeInfo;
        v44 = *((_QWORD *)DisplayModeInfo + 4);
        LODWORD(DisplayModeInfo) = *((_DWORD *)DisplayModeInfo + 10);
        *(_QWORD *)&v205.DisplayFixedOutput = v44;
        *((_DWORD *)&v205.Flags + 1) = (_DWORD)DisplayModeInfo;
        *(_OWORD *)&v205.RefreshRate.Numerator = v43;
        v205.DisplayOrientation = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v42);
        updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath((DMMVIDPNPRESENTPATH *)Path);
        v47 = updated;
        if ( updated < 0 )
        {
          v54 = (_QWORD *)WdLogNewEntry5_WdError(v46);
          v54[3] = v33;
          v54[4] = v35;
          v54[5] = v47;
          WdLogEvent5_WdError(v54);
          a8[10] &= ~v34;
          a8[2] |= v34;
        }
        else
        {
          for ( i = 0; ; ++i )
          {
            if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v194, v33, i, &v186) < 0 )
            {
              v50 = WdLogNewEntry5_WdAssertion(v49);
              WdLogEvent5_WdAssertion(v50);
            }
            if ( v186 == -1 )
              break;
            v51 = DMMVIDPNTOPOLOGY::FindPath(v194, v33, v186);
            v191 = v51;
            if ( !v51 )
            {
              v53 = WdLogNewEntry5_WdAssertion(v52);
              WdLogEvent5_WdAssertion(v53);
              v51 = v191;
            }
            DMMVIDPNPRESENTPATH::PinContentRotation(v51, Path[29]);
          }
          v35 = v194;
        }
        v26 = v195;
      }
      ++v33;
      v34 *= 2;
    }
    while ( v33 < *(_DWORD *)(*(_QWORD *)(v20 + 2456) + 80LL) );
    v32 = (unsigned __int64 *)v196;
  }
LABEL_30:
  v55 = *(ADAPTER_DISPLAY **)(v20 + 2456);
  v56 = 0LL;
  for ( j = 1; (unsigned int)v56 < *((_DWORD *)v55 + 20); j *= 2 )
  {
    if ( (j & a8[19]) == 0 )
    {
      if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(v55, v56)
        && (((a8[13] | a8[3] | a8[2]) & j) != 0 || (j & a8[5]) == 0)
        && (v58 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v20 + 2456), v56, 0, 0x800u, a14),
            v60 = v58,
            v58 < 0) )
      {
        v61 = (_QWORD *)WdLogNewEntry5_WdError(v59);
        v61[3] = (unsigned int)v56;
        v61[4] = *(int *)(v20 + 272);
        v61[5] = *(unsigned int *)(v20 + 268);
        v61[6] = v60;
        WdLogEvent5_WdError(v61);
        a8[19] |= j;
        a8[v56 + 20] = v60;
      }
      else
      {
        if ( (j & a8[3]) != 0 || v184 && (j & a8[2]) != 0 || *((_BYTE *)v192 + 464) )
        {
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
            (__int64)v198,
            (unsigned __int64)(v32 + 19) & -(__int64)(v32 + 12 != 0LL),
            2u,
            v29,
            v181,
            v32[17]);
          v84 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v32 + 12), v56);
LABEL_60:
          v85 = v84 + 0x80000000;
          if ( (v85 & 0x80000000) == 0 && v84 != -1071774919 )
          {
            v86 = WdLogNewEntry5_WdAssertion(v85);
            WdLogEvent5_WdAssertion(v86);
          }
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v198);
LABEL_64:
          v76 = (j & a8[3]) == 0;
          LODWORD(v187) = v187 & 0xFFFFFF50 | v189 & 0xF | 0x50;
          v87 = *(ADAPTER_DISPLAY **)(v20 + 2456);
          v188 = *((_DWORD *)v87 + 60);
          BYTE4(v187) = (BYTE4(v187) & 0xFC | ((j & a8[3]) == 0)) ^ ((v190 >> 14) ^ (BYTE4(v187) | v76)) & 4;
          if ( (j & a8[6]) != 0 )
            v88 = ADAPTER_DISPLAY::IsVidPnSourceActive(v87, v56) == 0;
          else
            v88 = (j & a8[5]) == 0;
          LOBYTE(v182) = v88;
          v89 = VIDPN_MGR::CommitVidPn(
                  (ADAPTER_DISPLAY **)v192,
                  (const struct DMMVIDPN *)v32,
                  0LL,
                  v56,
                  D3DKMDT_MCC_IGNORE,
                  0,
                  v182,
                  (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v187,
                  &v183);
          v91 = v89;
          if ( v89 < 0 )
          {
            v92 = (_QWORD *)WdLogNewEntry5_WdError(v90);
            v92[3] = (unsigned int)v56;
            v92[4] = *(int *)(v20 + 272);
            v92[5] = *(unsigned int *)(v20 + 268);
            v92[6] = v91;
            WdLogEvent5_WdError(v92);
          }
          if ( v197 && ((j & a8[3]) != 0 || *((_BYTE *)v192 + 464)) )
          {
            v93 = ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v20 + 2456), v197, v56);
            v95 = v93;
            if ( v93 < 0 )
            {
              v96 = (_QWORD *)WdLogNewEntry5_WdError(v94);
              v96[3] = (unsigned int)v56;
              v96[4] = *(int *)(v20 + 272);
              v96[5] = *(unsigned int *)(v20 + 268);
              v96[6] = v95;
              WdLogEvent5_WdError(v96);
            }
          }
          goto LABEL_74;
        }
        if ( (j & a8[13]) != 0 )
        {
          v62 = v194;
          v63 = 0;
          v64 = (unsigned int *)(v201 + 4LL * (unsigned int)(16 * v56));
          do
          {
            if ( *v64 == -1 )
              break;
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
              (__int64)v198,
              ((unsigned __int64)v62 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)v62 >> 64),
              2u,
              v29,
              v181,
              1uLL);
            if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v62, v56, *v64, 0LL) < 0 )
            {
              v66 = WdLogNewEntry5_WdAssertion(v65);
              WdLogEvent5_WdAssertion(v66);
            }
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v198);
            ++v63;
            ++v64;
          }
          while ( v63 < 0x10 );
          IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology(v62, v56);
          v32 = (unsigned __int64 *)v196;
          if ( !IsSourceInTopology )
            goto LABEL_64;
          v69 = 0LL;
          if ( *(_QWORD *)(v20 + 2464) )
          {
            DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                           *(DXGADAPTER ***)(v20 + 2456),
                                           v68);
            if ( !DisplayedPrimaryAllocation
              || (v72 = *((unsigned int *)DisplayedPrimaryAllocation + 1), (v72 & 0x10) != 0) )
            {
              v77 = (unsigned int)v56;
LABEL_58:
              v82 = (_QWORD *)WdLogNewEntry5_WdTrace(v72, v71, v73, v74);
              v82[3] = v77;
              v82[4] = *(int *)(v20 + 272);
              v82[5] = *(unsigned int *)(v20 + 268);
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                (__int64)v198,
                (unsigned __int64)(v32 + 19) & -(__int64)(v32 + 12 != 0LL),
                2u,
                v83,
                v181,
                v32[17]);
              v84 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v32 + 12), v56);
              goto LABEL_60;
            }
            v69 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
          }
          LODWORD(v187) = v187 & 0xFFFFFF40 | v189 & 0xF | 0x40;
          v75 = *(ADAPTER_DISPLAY **)(v20 + 2456);
          v188 = *((_DWORD *)v75 + 60);
          BYTE4(v187) = BYTE4(v187) & 0xF9 | (v190 >> 14) & 4 | 1;
          if ( (j & a8[6]) != 0 )
            v76 = ADAPTER_DISPLAY::IsVidPnSourceActive(v75, v56) == 0;
          else
            v76 = (j & a8[5]) == 0;
          LOBYTE(v182) = v76;
          v78 = VIDPN_MGR::CommitVidPn(
                  (ADAPTER_DISPLAY **)v192,
                  (const struct DMMVIDPN *)v32,
                  v69,
                  v56,
                  D3DKMDT_MCC_ENFORCE,
                  0,
                  v182,
                  (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v187,
                  &v183);
          v80 = v78;
          if ( v78 < 0 )
          {
            v81 = (_QWORD *)WdLogNewEntry5_WdError(v79);
            v77 = (unsigned int)v56;
            v81[3] = (unsigned int)v56;
            v81[4] = *(int *)(v20 + 272);
            v81[5] = *(unsigned int *)(v20 + 268);
            v81[6] = v80;
            WdLogEvent5_WdError(v81);
            goto LABEL_58;
          }
        }
      }
    }
LABEL_74:
    v55 = *(ADAPTER_DISPLAY **)(v20 + 2456);
    v56 = (unsigned int)(v56 + 1);
  }
  v97 = 0;
  for ( k = 1; ; k *= 2 )
  {
    v99 = *(_QWORD *)(v20 + 2456);
    LODWORD(v191) = k;
    v100 = *(_DWORD *)(v99 + 80);
    if ( v97 >= v100 )
      break;
    v101 = 1;
    v185 = 1;
    if ( (k & a8[19]) == 0 )
    {
      if ( (k & a8[2]) == 0 )
        goto LABEL_133;
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v198,
        (unsigned __int64)(v32 + 19) & -(__int64)(v32 + 12 != 0LL),
        2u,
        v29,
        v181,
        v32[17]);
      v102 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v32 + 12), v97);
      v103 = v102 + 0x80000000;
      if ( (int)v103 >= 0 && v102 != -1071774919 )
      {
        v104 = WdLogNewEntry5_WdAssertion(v103);
        WdLogEvent5_WdAssertion(v104);
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v198);
      for ( m = 0; ; ++m )
      {
        if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v195, v97, m, &v186) < 0 )
        {
          v107 = WdLogNewEntry5_WdAssertion(v106);
          WdLogEvent5_WdAssertion(v107);
        }
        v108 = v186;
        if ( v186 == -1 )
          break;
        if ( v101 )
        {
          v109 = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v20 + 2456), v97);
          v110 = *((_OWORD *)v109 + 1);
          *(_OWORD *)&v205.Width = *(_OWORD *)v109;
          v111 = *((_QWORD *)v109 + 4);
          LODWORD(v109) = *((_DWORD *)v109 + 10);
          *(_QWORD *)&v205.DisplayFixedOutput = v111;
          *((_DWORD *)&v205.Flags + 1) = (_DWORD)v109;
          *(_OWORD *)&v205.RefreshRate.Numerator = v110;
          v112 = DMMVIDPNTOPOLOGY::FindPath(v195, v97, v108);
          if ( (int)DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(v112, &v205) < 0 )
          {
            v114 = WdLogNewEntry5_WdAssertion(v113);
            WdLogEvent5_WdAssertion(v114);
          }
          v185 = 0;
        }
        if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
               v199,
               v108,
               (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)&v206) < 0 )
        {
          v117 = WdLogNewEntry5_WdAssertion(v115);
          WdLogEvent5_WdAssertion(v117);
        }
        v118 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(v192, (struct DMMVIDPNTOPOLOGY *const)(v32 + 12), &v206, v116);
        v120 = v118;
        if ( v118 < 0 )
        {
LABEL_102:
          v131 = (_QWORD *)WdLogNewEntry5_WdError(v119);
          v132 = v97;
          v133 = v32 + 12;
          v131[3] = v97;
          v131[4] = v108;
LABEL_103:
          v131[5] = v133;
          v131[6] = v120;
          WdLogEvent5_WdError(v131);
          k = (int)v191;
          goto LABEL_125;
        }
        v101 = v185;
      }
      v121 = 0;
      v122 = (DMMVIDPNTOPOLOGY *)(v32 + 12);
      while ( 1 )
      {
        if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v122, v97, v121, &v186) < 0 )
        {
          v124 = WdLogNewEntry5_WdAssertion(v123);
          WdLogEvent5_WdAssertion(v124);
        }
        v108 = v186;
        if ( v186 == -1 )
          break;
        if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
               v199,
               v186,
               (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)&v206) < 0 )
        {
          v126 = WdLogNewEntry5_WdAssertion(v125);
          WdLogEvent5_WdAssertion(v126);
        }
        v127 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                 v192,
                 v122,
                 (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)&v206);
        v120 = v127;
        if ( v127 < 0 )
          goto LABEL_102;
        v122 = (DMMVIDPNTOPOLOGY *)(v32 + 12);
        DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPNTOPOLOGY *)(v32 + 12), v108);
        PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v195, v128);
        DMMVIDPNPRESENTPATH::SetGammaRamp(v130, *((const struct DXGK_GAMMA_RAMP **)PathFromTarget + 23));
        ++v121;
      }
      if ( v197 && v202 )
      {
        v134 = ADAPTER_DISPLAY::CreateCddAllocations(
                 *(PERESOURCE ***)(v20 + 2456),
                 v197,
                 v97,
                 &v205,
                 (PERESOURCE **)v202);
        v120 = v134;
        if ( v134 < 0 )
        {
          v131 = (_QWORD *)WdLogNewEntry5_WdError(v135);
          v132 = v97;
          v131[3] = v97;
          v131[4] = *(int *)(v20 + 272);
          v133 = (unsigned __int64 *)*(unsigned int *)(v20 + 268);
          goto LABEL_103;
        }
        CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(DXGADAPTER ***)(v20 + 2456), v97, 0);
        if ( !*(_QWORD *)(v20 + 2464) )
        {
LABEL_109:
          v137 = 0LL;
          goto LABEL_110;
        }
LABEL_117:
        v137 = (void *)*((_QWORD *)CddPrimaryAllocation + 2);
LABEL_110:
        v138 = 32;
        k = (int)v191;
        if ( v121 <= 1 )
          v138 = 48;
        LODWORD(v187) = v187 & 0xFFFFFF00 | v189 & 0xF | v138;
        v139 = *(ADAPTER_DISPLAY **)(v20 + 2456);
        v188 = *((_DWORD *)v139 + 60);
        BYTE4(v187) = BYTE4(v187) & 0xF8 | (v190 >> 14) & 4;
        if ( ((unsigned int)v191 & a8[6]) != 0 )
          v140 = ADAPTER_DISPLAY::IsVidPnSourceActive(v139, v97) == 0;
        else
          v140 = ((unsigned int)v191 & a8[5]) == 0;
        v144 = v192;
        LOBYTE(v182) = v140;
        v145 = VIDPN_MGR::CommitVidPn(
                 (ADAPTER_DISPLAY **)v192,
                 (const struct DMMVIDPN *)v32,
                 v137,
                 v97,
                 D3DKMDT_MCC_ENFORCE,
                 0,
                 v182,
                 (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v187,
                 &v183);
        v120 = v145;
        if ( v145 >= 0 )
        {
          if ( (k & a8[5]) == 0 )
          {
            v151 = *((_QWORD *)v144 + 1);
            if ( !v151 )
            {
              v152 = WdLogNewEntry5_WdAssertion(v146);
              WdLogEvent5_WdAssertion(v152);
              v151 = *((_QWORD *)v144 + 1);
            }
            if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v151 + 16)) < 1200
              || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v153 + 192) + 64LL) + 40LL) + 28LL) < 0x300Au )
            {
              v193 |= k;
            }
          }
          goto LABEL_133;
        }
        v147 = (_QWORD *)WdLogNewEntry5_WdError(v146);
        v132 = v97;
        v147[3] = v97;
        v147[4] = *(int *)(v20 + 272);
        v147[5] = *(unsigned int *)(v20 + 268);
        v147[6] = v120;
        WdLogEvent5_WdError(v147);
        if ( v197 )
          ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v20 + 2456), v197, v97);
      }
      else
      {
        if ( !*(_QWORD *)(v20 + 2464) )
          goto LABEL_109;
        CddPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(DXGADAPTER ***)(v20 + 2456), v97);
        if ( CddPrimaryAllocation )
        {
          v141 = *((unsigned int *)CddPrimaryAllocation + 1);
          if ( (v141 & 0x10) == 0 )
            goto LABEL_117;
        }
        k = (int)v191;
        v132 = v97;
        if ( ((unsigned int)v191 & a8[8]) == 0 )
        {
          *v200 |= (unsigned int)v191;
          v143 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v141);
          v143[3] = v97;
          v143[4] = *(int *)(v20 + 272);
          v143[5] = *(unsigned int *)(v20 + 268);
          WdLogEvent5_WdDmmEvent(v143);
          goto LABEL_133;
        }
        LODWORD(v120) = -1071775482;
        v142 = (_QWORD *)WdLogNewEntry5_WdError(v141);
        v142[3] = v97;
        v142[4] = *(int *)(v20 + 272);
        v142[5] = *(unsigned int *)(v20 + 268);
        WdLogEvent5_WdError(v142);
      }
LABEL_125:
      if ( !v184 )
      {
        DxgkLogCodePointPacket(0x61u, v97, v120, 0, *(_QWORD *)(v20 + 268));
        v184 = 1;
        goto LABEL_30;
      }
      a8[19] |= k;
      a8[v132 + 20] = v120;
      if ( (_DWORD)v120 == -1071774920 || (_DWORD)v120 == -1071774976 )
        v183 = 1;
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v198,
      (unsigned __int64)(v32 + 19) & -(__int64)(v32 + 12 != 0LL),
      2u,
      v29,
      v181,
      v32[17]);
    v148 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v32 + 12), v97);
    v149 = v148 + 0x80000000;
    if ( (int)v149 >= 0 && v148 != -1071774919 )
    {
      v150 = WdLogNewEntry5_WdAssertion(v149);
      WdLogEvent5_WdAssertion(v150);
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v198);
LABEL_133:
    ++v97;
  }
  v154 = 0LL;
  v155 = 1;
  if ( v100 )
  {
    do
    {
      if ( (v155 & a8[19]) == 0 )
      {
        v156 = a8[5];
        if ( (v155 & v193) != 0 )
        {
          v157 = 0LL;
          if ( (v156 & v155) == 0 )
          {
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
              (__int64)v198,
              (unsigned __int64)(v32 + 19) & -(__int64)(v32 + 12 != 0LL),
              2u,
              v29,
              v181,
              v32[17]);
            v162 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v32 + 12), v154);
            v163 = v162 + 0x80000000;
            if ( (int)v163 >= 0 && v162 != -1071774919 )
            {
              v164 = WdLogNewEntry5_WdAssertion(v163);
              WdLogEvent5_WdAssertion(v164);
            }
            a8[17] |= v155;
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v198);
            v160 = v187 & 0xFFFFFF0F | 0x40;
            goto LABEL_156;
          }
          if ( !*(_QWORD *)(v20 + 2464) )
            goto LABEL_150;
          v158 = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((DXGADAPTER **)v99, v154);
          if ( v158 )
          {
            v159 = *((unsigned int *)v158 + 1);
            if ( (v159 & 0x10) == 0 )
            {
              v157 = (void *)*((_QWORD *)v158 + 2);
LABEL_150:
              v160 = v187 & 0xFFFFFF0F | 0x20;
LABEL_156:
              v165 = v189;
              if ( v189 == 4 )
              {
                DisplayLogSetMonitorPowerStage(16LL);
                v165 = v189;
              }
              LODWORD(v187) = v160 ^ ((unsigned __int8)v160 ^ v165) & 0xF;
              v188 = *(_DWORD *)(*(_QWORD *)(v20 + 2456) + 240LL);
              LOBYTE(v182) = 0;
              BYTE4(v187) = BYTE4(v187) & 0xF8 | (v190 >> 14) & 4;
              v167 = (int)VIDPN_MGR::CommitVidPn(
                            (ADAPTER_DISPLAY **)v192,
                            (const struct DMMVIDPN *)v32,
                            v157,
                            v154,
                            D3DKMDT_MCC_ENFORCE,
                            1,
                            v182,
                            (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v187,
                            &v183);
              if ( v189 == 4 )
                DisplayLogSetMonitorPowerStage(2147483664LL);
              if ( (int)v167 < 0 )
              {
                a8[19] |= v155;
                a8[v154 + 20] = v167;
                v168 = (_QWORD *)WdLogNewEntry5_WdError(v166);
                v168[3] = (unsigned int)v154;
                v168[4] = *(int *)(v20 + 272);
                v168[5] = *(unsigned int *)(v20 + 268);
                v168[6] = v167;
                WdLogEvent5_WdError(v168);
              }
              goto LABEL_162;
            }
          }
          *v200 |= v155;
          a8[17] |= v155;
          v161 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v159);
          v161[3] = (unsigned int)v154;
          v161[4] = *(int *)(v20 + 272);
          v161[5] = *(unsigned int *)(v20 + 268);
          WdLogEvent5_WdDmmEvent(v161);
        }
        else
        {
          a8[17] |= v155 & ~v156;
        }
      }
LABEL_162:
      v99 = *(_QWORD *)(v20 + 2456);
      v154 = (unsigned int)(v154 + 1);
      v155 *= 2;
    }
    while ( (unsigned int)v154 < *(_DWORD *)(v99 + 80) );
  }
  if ( a5 )
  {
    v170 = v203;
    do
    {
      if ( ((1 << *a7) & a8[19]) != 0 )
      {
        v171 = DxgkIncrementGlobalConnectionChangeId();
        *(_QWORD *)(v172 + v170 + 24) = v171;
        *(_DWORD *)(v172 + v170 + 32) = *(_DWORD *)(v172 + v170 + 32) & 0xF0FFFFFF | 0xD000000;
        DxgkIncrementGlobalConnectionChangeId();
      }
      else
      {
        v177 = DxgkGetGlobalConnectionChangeId();
        *(_QWORD *)(v173 + v170 + 24) = v177;
        *(_DWORD *)(v173 + v170 + 32) = *(_DWORD *)(v173 + v170 + 32) & 0xF0FFFFFF | 0xE000000;
      }
      v178 = (v174 & a8[2]) != 0 ? 1 : -1;
      v179 = -((v174 & a8[2]) != 0);
      *(_DWORD *)(v173 + v170 + 16) &= ~1u;
      *(_BYTE *)(v173 + v170 + 48) = v178;
      *(_BYTE *)(v173 + v170 + 49) = ~v179;
      a7 = (_DWORD *)(v175 + 4);
      *(_BYTE *)(v173 + v170 + 50) = v178;
    }
    while ( v176 != 1 );
  }
  *v204 = (v183 != 0) | *v204 & 0xFFFFFFFE;
  LODWORD(v30) = 0;
LABEL_170:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v196, 0LL);
  return (unsigned int)v30;
}
