/*
 * XREFs of ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C007B478
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C000586C (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000596C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000690C (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1C0006D08 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00075C0 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00075FC (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000A34C (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C001635C (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     DxgkGetGlobalConnectionChangeId @ 0x1C002DF14 (DxgkGetGlobalConnectionChangeId.c)
 *     DxgkIncrementGlobalConnectionChangeId @ 0x1C002DF24 (DxgkIncrementGlobalConnectionChangeId.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00A4154 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00A4228 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00A45F0 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A4B78 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A56CC (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5730 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00A5868 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00A5FC0 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C00A790C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A7A6C (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00A7C5C (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8A58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00ADA40 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00ADCA0 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00ADE98 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00ADF10 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00AE140 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
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
        int *a11,
        struct DXGDEVICE *a12,
        struct COREDEVICEACCESS *a13,
        unsigned __int8 a14)
{
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  struct DXGADAPTER *v19; // r14
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  DMMVIDPNTOPOLOGY *v24; // r12
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rbx
  _QWORD *v29; // rax
  struct DMMVIDPN *v30; // rbx
  unsigned int v31; // edi
  int v32; // r15d
  DMMVIDPNTOPOLOGY *v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *Path; // r13
  __int64 v38; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v40; // ecx
  __int128 v41; // xmm1
  __int64 v42; // xmm0_8
  int updated; // eax
  __int64 v44; // rcx
  __int64 v45; // r12
  unsigned int i; // r12d
  __int64 v47; // rcx
  __int64 v48; // rax
  DMMVIDPNPRESENTPATH *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  _QWORD *v52; // rax
  ADAPTER_DISPLAY *v53; // rax
  __int64 v54; // r15
  int j; // r12d
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // r13
  _QWORD *v59; // rax
  DMMVIDPNTOPOLOGY *v60; // rbx
  unsigned int v61; // r13d
  unsigned int *v62; // rdi
  __int64 v63; // rcx
  __int64 v64; // rax
  DMMVIDPNTOPOLOGY *v65; // r13
  bool IsSourceInTopology; // al
  void *v67; // rdi
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  ADAPTER_DISPLAY *v71; // rcx
  unsigned __int8 v72; // zf
  int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // rdi
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // r8
  int v79; // eax
  __int64 v80; // rcx
  __int64 v81; // rax
  ADAPTER_DISPLAY *v82; // rcx
  unsigned __int8 v83; // zf
  VIDPN_MGR *v84; // r13
  int v85; // eax
  __int64 v86; // rcx
  __int64 v87; // rdi
  _QWORD *v88; // rax
  int v89; // eax
  __int64 v90; // rcx
  __int64 v91; // rdi
  _QWORD *v92; // rax
  unsigned int v93; // r12d
  int k; // r13d
  __int64 v95; // rax
  unsigned int v96; // ecx
  char v97; // di
  int v98; // eax
  __int64 v99; // rcx
  __int64 v100; // rax
  unsigned int m; // r15d
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // r13
  const struct _DXGK_DISPLAYMODE_INFO *v105; // rax
  __int128 v106; // xmm1
  __int64 v107; // xmm0_8
  DMMVIDPNPRESENTPATH *v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rcx
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v112; // r9d
  __int64 v113; // rax
  int v114; // eax
  __int64 v115; // rcx
  __int64 v116; // rdi
  unsigned int n; // r15d
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  int v122; // eax
  DMMVIDPNPRESENTPATH *PathFromTarget; // rdi
  struct DMMVIDPNPRESENTPATH *v124; // rax
  _QWORD *v125; // rax
  __int64 v126; // r15
  char *v127; // rcx
  int v128; // eax
  __int64 v129; // rcx
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  void *v131; // rdi
  int v132; // ecx
  ADAPTER_DISPLAY *v133; // rcx
  unsigned __int8 v134; // zf
  __int64 v135; // rcx
  _QWORD *v136; // rax
  _QWORD *v137; // rax
  VIDPN_MGR *v138; // r15
  int v139; // eax
  __int64 v140; // rcx
  _QWORD *v141; // rax
  int v142; // eax
  __int64 v143; // rcx
  __int64 v144; // rax
  DXGADAPTER *v145; // rax
  __int64 v146; // r12
  int v147; // r15d
  void *v148; // r13
  struct DXGADAPTERALLOCATION *v149; // rax
  unsigned int v150; // edi
  _QWORD *v151; // rax
  int v152; // eax
  __int64 v153; // rcx
  __int64 v154; // rax
  int v155; // edi
  __int64 v156; // rax
  int v157; // eax
  __int64 v158; // rcx
  __int64 v159; // r13
  _QWORD *v160; // rax
  int v161; // r11d
  signed __int64 v163; // rax
  unsigned int *v164; // rdx
  __int64 v165; // rdx
  int v166; // r8d
  __int64 v167; // r9
  __int64 v168; // r10
  __int64 v169; // rax
  unsigned __int8 v171; // [rsp+50h] [rbp-B0h] BYREF
  char v172; // [rsp+51h] [rbp-AFh]
  char v173; // [rsp+52h] [rbp-AEh]
  unsigned int v174; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v175; // [rsp+58h] [rbp-A8h] BYREF
  int v176; // [rsp+60h] [rbp-A0h]
  int v177; // [rsp+68h] [rbp-98h]
  unsigned int v178; // [rsp+6Ch] [rbp-94h]
  DMMVIDPNPRESENTPATH *v179; // [rsp+70h] [rbp-90h]
  unsigned int v180; // [rsp+78h] [rbp-88h]
  VIDPN_MGR *v181; // [rsp+80h] [rbp-80h]
  DMMVIDPNTOPOLOGY *v182; // [rsp+88h] [rbp-78h]
  DMMVIDPNTOPOLOGY *v183; // [rsp+90h] [rbp-70h]
  struct DMMVIDPN *v184; // [rsp+98h] [rbp-68h] BYREF
  struct DXGDEVICE *v185; // [rsp+A0h] [rbp-60h]
  _BYTE v186[24]; // [rsp+A8h] [rbp-58h] BYREF
  DMMVIDPN *v187; // [rsp+C0h] [rbp-40h]
  _DWORD *v188; // [rsp+C8h] [rbp-38h]
  __int64 v189; // [rsp+D0h] [rbp-30h]
  struct COREDEVICEACCESS *v190; // [rsp+D8h] [rbp-28h]
  __int64 v191; // [rsp+E0h] [rbp-20h]
  int *v192; // [rsp+E8h] [rbp-18h]
  struct _D3DKMT_DISPLAYMODE v193; // [rsp+F0h] [rbp-10h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v194; // [rsp+120h] [rbp+20h] BYREF

  v191 = a6;
  v188 = a9;
  v189 = a10;
  v192 = a11;
  v185 = a12;
  v190 = a13;
  v175 = 0LL;
  v176 = 0;
  v187 = (DMMVIDPN *)a4;
  v177 = a3;
  v178 = a2;
  v181 = a1;
  v171 = 0;
  v172 = 0;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(a1);
  v18 = a8[6];
  v19 = ContainingAdapter;
  v20 = a8[3] | a8[13];
  v180 = v18;
  if ( (v20 & v18) != 0 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v21);
  }
  v22 = v18 & a8[2];
  if ( (a8[5] & v18 & a8[2]) != (_DWORD)v22 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v22);
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = (DMMVIDPNTOPOLOGY *)(a4 + 96);
  v184 = 0LL;
  v183 = (DMMVIDPNTOPOLOGY *)(a4 + 96);
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(a1);
  v28 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    v29[3] = *((int *)v19 + 68);
    v29[4] = *((unsigned int *)v19 + 67);
    v29[5] = v28;
    WdLogEvent5_WdError(v29);
    goto LABEL_165;
  }
  v30 = v184;
  v31 = 0;
  v182 = (struct DMMVIDPN *)((char *)v184 + 96);
  v32 = 1;
  if ( *(_DWORD *)(*((_QWORD *)v19 + 288) + 80LL) )
  {
    v33 = v182;
    do
    {
      if ( (v32 & a8[10]) != 0 )
      {
        if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v24, v31, 0LL, &v174) < 0 || v174 == -1 )
        {
          v35 = WdLogNewEntry5_WdAssertion(v34);
          WdLogEvent5_WdAssertion(v35);
        }
        Path = (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)DMMVIDPNTOPOLOGY::FindPath(v24, v31, v174);
        if ( !Path )
        {
          v38 = WdLogNewEntry5_WdAssertion(v36);
          WdLogEvent5_WdAssertion(v38);
        }
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)v19 + 288), v31);
        v40 = *((_DWORD *)Path + 29);
        v41 = *((_OWORD *)DisplayModeInfo + 1);
        *(_OWORD *)&v193.Width = *(_OWORD *)DisplayModeInfo;
        v42 = *((_QWORD *)DisplayModeInfo + 4);
        LODWORD(DisplayModeInfo) = *((_DWORD *)DisplayModeInfo + 10);
        *(_QWORD *)&v193.DisplayFixedOutput = v42;
        *((_DWORD *)&v193.Flags + 1) = (_DWORD)DisplayModeInfo;
        *(_OWORD *)&v193.RefreshRate.Numerator = v41;
        v193.DisplayOrientation = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v40);
        updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath((DMMVIDPNPRESENTPATH *)Path);
        v45 = updated;
        if ( updated < 0 )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdError(v44);
          v52[3] = v31;
          v52[4] = v33;
          v52[5] = v45;
          WdLogEvent5_WdError(v52);
          a8[10] &= ~v32;
          a8[2] |= v32;
        }
        else
        {
          for ( i = 0; ; ++i )
          {
            if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v182, v31, i, &v174) < 0 )
            {
              v48 = WdLogNewEntry5_WdAssertion(v47);
              WdLogEvent5_WdAssertion(v48);
            }
            v27 = v174;
            if ( v174 == -1 )
              break;
            v49 = DMMVIDPNTOPOLOGY::FindPath(v182, v31, v174);
            v179 = v49;
            if ( !v49 )
            {
              v51 = WdLogNewEntry5_WdAssertion(v50);
              WdLogEvent5_WdAssertion(v51);
              v49 = v179;
            }
            DMMVIDPNPRESENTPATH::PinContentRotation(v49, Path[29]);
          }
          v33 = v182;
        }
        v24 = v183;
      }
      ++v31;
      v32 *= 2;
    }
    while ( v31 < *(_DWORD *)(*((_QWORD *)v19 + 288) + 80LL) );
    v30 = v184;
  }
LABEL_28:
  v53 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 288);
  v54 = 0LL;
  for ( j = 1; (unsigned int)v54 < *((_DWORD *)v53 + 20); j *= 2 )
  {
    if ( (j & a8[19]) == 0 )
    {
      if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(v53, v54)
        && ((j & a8[3]) != 0 || (j & a8[13]) != 0 || (j & a8[2]) != 0 || (j & a8[5]) == 0)
        && (v56 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*((ADAPTER_DISPLAY **)v19 + 288), v54, 0, 0x800u, a14),
            v58 = v56,
            v56 < 0) )
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdError(v57);
        v59[3] = (unsigned int)v54;
        v59[4] = *((int *)v19 + 68);
        v59[5] = *((unsigned int *)v19 + 67);
        v59[6] = v58;
        WdLogEvent5_WdError(v59);
        a8[19] |= j;
        a8[v54 + 20] = v58;
      }
      else
      {
        if ( (j & a8[3]) != 0 || v172 && (j & a8[2]) != 0 || *((_BYTE *)v181 + 464) )
        {
          LOBYTE(v27) = 2;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
            v186,
            ((unsigned __int64)v30 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v30 + 96) != 0LL),
            v27);
          v79 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v30 + 96), v54);
LABEL_59:
          v80 = v79 + 0x80000000;
          if ( (v80 & 0x80000000) == 0 && v79 != -1071774919 )
          {
            v81 = WdLogNewEntry5_WdAssertion(v80);
            WdLogEvent5_WdAssertion(v81);
          }
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v186);
LABEL_63:
          v72 = (j & a8[3]) == 0;
          LODWORD(v175) = v175 & 0xFFFFFF50 | v177 & 0xF | 0x50;
          v82 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 288);
          v176 = *((_DWORD *)v82 + 60);
          BYTE4(v175) = ((BYTE4(v175) & 0xFC | v72) ^ (v178 >> 14)) & 4 ^ (BYTE4(v175) & 0xFC | v72);
          if ( (j & a8[6]) != 0 )
            v83 = ADAPTER_DISPLAY::IsVidPnSourceActive(v82, v54) == 0;
          else
            v83 = (j & a8[5]) == 0;
          v84 = v181;
          v85 = VIDPN_MGR::CommitVidPn(
                  v181,
                  v30,
                  0LL,
                  v54,
                  D3DKMDT_MCC_IGNORE,
                  0,
                  v83,
                  (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v175,
                  &v171);
          v87 = v85;
          if ( v85 < 0 )
          {
            v88 = (_QWORD *)WdLogNewEntry5_WdError(v86);
            v88[3] = (unsigned int)v54;
            v88[4] = *((int *)v19 + 68);
            v88[5] = *((unsigned int *)v19 + 67);
            v88[6] = v87;
            WdLogEvent5_WdError(v88);
          }
          if ( v185 && ((j & a8[3]) != 0 || *((_BYTE *)v84 + 464)) )
          {
            v89 = ADAPTER_DISPLAY::DestroyCddAllocations(*((ADAPTER_DISPLAY **)v19 + 288), v185, v54);
            v91 = v89;
            if ( v89 < 0 )
            {
              v92 = (_QWORD *)WdLogNewEntry5_WdError(v90);
              v92[3] = (unsigned int)v54;
              v92[4] = *((int *)v19 + 68);
              v92[5] = *((unsigned int *)v19 + 67);
              v92[6] = v91;
              WdLogEvent5_WdError(v92);
            }
          }
          goto LABEL_73;
        }
        if ( (j & a8[13]) != 0 )
        {
          v60 = v182;
          v61 = 0;
          v62 = (unsigned int *)(v189 + 4LL * (unsigned int)(16 * v54));
          do
          {
            if ( *v62 == -1 )
              break;
            LOBYTE(v27) = 2;
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
              v186,
              ((unsigned __int64)v60 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)v60 >> 64),
              v27);
            if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v60, v54, *v62, 0LL) < 0 )
            {
              v64 = WdLogNewEntry5_WdAssertion(v63);
              WdLogEvent5_WdAssertion(v64);
            }
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v186);
            ++v61;
            ++v62;
          }
          while ( v61 < 0x10 );
          v65 = v60;
          IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology(v60, v54);
          v30 = v184;
          if ( !IsSourceInTopology )
            goto LABEL_63;
          v67 = 0LL;
          if ( *((_QWORD *)v19 + 289) )
          {
            DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                           *((ADAPTER_DISPLAY **)v19 + 288),
                                           v54);
            if ( !DisplayedPrimaryAllocation )
              goto LABEL_57;
            v70 = *((unsigned int *)DisplayedPrimaryAllocation + 1);
            if ( (v70 & 0x10) != 0 )
              goto LABEL_57;
            v67 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
          }
          LODWORD(v175) = v175 & 0xFFFFFF40 | v177 & 0xF | 0x40;
          v71 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 288);
          v176 = *((_DWORD *)v71 + 60);
          BYTE4(v175) = ((BYTE4(v175) & 0xFC | 1) ^ (v178 >> 14)) & 4 ^ (BYTE4(v175) & 0xFC | 1);
          v72 = (j & a8[6]) != 0 ? ADAPTER_DISPLAY::IsVidPnSourceActive(v71, v54) == 0 : (j & a8[5]) == 0;
          v73 = VIDPN_MGR::CommitVidPn(
                  v181,
                  v30,
                  v67,
                  v54,
                  D3DKMDT_MCC_ENFORCE,
                  0,
                  v72,
                  (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v175,
                  &v171);
          v75 = v73;
          if ( v73 < 0 )
          {
            v76 = (_QWORD *)WdLogNewEntry5_WdError(v74);
            v76[3] = (unsigned int)v54;
            v76[4] = *((int *)v19 + 68);
            v76[5] = *((unsigned int *)v19 + 67);
            v76[6] = v75;
            WdLogEvent5_WdError(v76);
LABEL_57:
            v77 = (_QWORD *)WdLogNewEntry5_WdTrace(v70, v69);
            LOBYTE(v78) = 2;
            v77[3] = (unsigned int)v54;
            v77[4] = *((int *)v19 + 68);
            v77[5] = *((unsigned int *)v19 + 67);
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
              v186,
              ((unsigned __int64)v65 + 56) & -(__int64)(v65 != 0LL),
              v78);
            v79 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v65, v54);
            goto LABEL_59;
          }
        }
      }
    }
LABEL_73:
    v53 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 288);
    v54 = (unsigned int)(v54 + 1);
  }
  v93 = 0;
  for ( k = 1; ; k *= 2 )
  {
    v95 = *((_QWORD *)v19 + 288);
    LODWORD(v179) = k;
    v96 = *(_DWORD *)(v95 + 80);
    if ( v93 >= v96 )
      break;
    v97 = 1;
    v173 = 1;
    if ( (k & a8[19]) == 0 )
    {
      if ( (k & a8[2]) == 0 )
        goto LABEL_132;
      LOBYTE(v27) = 2;
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        v186,
        ((unsigned __int64)v30 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v30 + 96) != 0LL),
        v27);
      v98 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v30 + 96), v93);
      v99 = v98 + 0x80000000;
      if ( (int)v99 >= 0 && v98 != -1071774919 )
      {
        v100 = WdLogNewEntry5_WdAssertion(v99);
        WdLogEvent5_WdAssertion(v100);
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v186);
      for ( m = 0; ; ++m )
      {
        if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v183, v93, m, &v174) < 0 )
        {
          v103 = WdLogNewEntry5_WdAssertion(v102);
          WdLogEvent5_WdAssertion(v103);
        }
        v104 = v174;
        if ( v174 == -1 )
          break;
        if ( v97 )
        {
          v105 = ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)v19 + 288), v93);
          v106 = *((_OWORD *)v105 + 1);
          *(_OWORD *)&v193.Width = *(_OWORD *)v105;
          v107 = *((_QWORD *)v105 + 4);
          LODWORD(v105) = *((_DWORD *)v105 + 10);
          *(_QWORD *)&v193.DisplayFixedOutput = v107;
          *((_DWORD *)&v193.Flags + 1) = (_DWORD)v105;
          *(_OWORD *)&v193.RefreshRate.Numerator = v106;
          v108 = DMMVIDPNTOPOLOGY::FindPath(v183, v93, v104);
          if ( (int)DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(v108, &v193) < 0 )
          {
            v110 = WdLogNewEntry5_WdAssertion(v109);
            WdLogEvent5_WdAssertion(v110);
          }
          v173 = 0;
        }
        if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
               v187,
               v104,
               (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)&v194) < 0 )
        {
          v113 = WdLogNewEntry5_WdAssertion(v111);
          WdLogEvent5_WdAssertion(v113);
        }
        v114 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(v181, (struct DMMVIDPN *)((char *)v30 + 96), &v194, v112);
        v116 = v114;
        if ( v114 < 0 )
        {
LABEL_101:
          v125 = (_QWORD *)WdLogNewEntry5_WdError(v115);
          v126 = v93;
          v127 = (char *)v30 + 96;
          v125[3] = v93;
          v125[4] = v104;
LABEL_102:
          v125[5] = v127;
          v125[6] = v116;
          WdLogEvent5_WdError(v125);
          k = (int)v179;
          goto LABEL_124;
        }
        v97 = v173;
      }
      for ( n = 0; ; ++n )
      {
        if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((struct DMMVIDPN *)((char *)v30 + 96), v93, n, &v174) < 0 )
        {
          v119 = WdLogNewEntry5_WdAssertion(v118);
          WdLogEvent5_WdAssertion(v119);
        }
        v104 = v174;
        if ( v174 == -1 )
          break;
        if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
               v187,
               v174,
               (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)&v194) < 0 )
        {
          v121 = WdLogNewEntry5_WdAssertion(v120);
          WdLogEvent5_WdAssertion(v121);
        }
        v122 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                 v181,
                 (struct DMMVIDPN *)((char *)v30 + 96),
                 (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)&v194);
        v116 = v122;
        if ( v122 < 0 )
          goto LABEL_101;
        PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget((struct DMMVIDPN *)((char *)v30 + 96), v104);
        v124 = DMMVIDPNTOPOLOGY::GetPathFromTarget(v183, v104);
        DMMVIDPNPRESENTPATH::SetGammaRamp(PathFromTarget, *((const struct DXGK_GAMMA_RAMP **)v124 + 23));
      }
      if ( v185 && v190 )
      {
        v128 = ADAPTER_DISPLAY::CreateCddAllocations(*((ADAPTER_DISPLAY **)v19 + 288), v185, v93, &v193, v190);
        v116 = v128;
        if ( v128 < 0 )
        {
          v125 = (_QWORD *)WdLogNewEntry5_WdError(v129);
          v126 = v93;
          v125[3] = v93;
          v125[4] = *((int *)v19 + 68);
          v127 = (char *)*((unsigned int *)v19 + 67);
          goto LABEL_102;
        }
        CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*((ADAPTER_DISPLAY **)v19 + 288), v93, 0);
        if ( !*((_QWORD *)v19 + 289) )
        {
LABEL_108:
          v131 = 0LL;
          goto LABEL_109;
        }
LABEL_116:
        v131 = (void *)*((_QWORD *)CddPrimaryAllocation + 2);
LABEL_109:
        v132 = 32;
        k = (int)v179;
        if ( n <= 1 )
          v132 = 48;
        LODWORD(v175) = v175 & 0xFFFFFF00 | v177 & 0xF | v132;
        v133 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 288);
        v176 = *((_DWORD *)v133 + 60);
        BYTE4(v175) = (BYTE4(v175) & 0xFC ^ (v178 >> 14)) & 4 ^ BYTE4(v175) & 0xFC;
        if ( ((unsigned int)v179 & a8[6]) != 0 )
          v134 = ADAPTER_DISPLAY::IsVidPnSourceActive(v133, v93) == 0;
        else
          v134 = ((unsigned int)v179 & a8[5]) == 0;
        v138 = v181;
        v139 = VIDPN_MGR::CommitVidPn(
                 v181,
                 v30,
                 v131,
                 v93,
                 D3DKMDT_MCC_ENFORCE,
                 0,
                 v134,
                 (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v175,
                 &v171);
        v116 = v139;
        if ( v139 >= 0 )
        {
          if ( (k & a8[5]) == 0 )
          {
            v145 = VIDPN_MGR::GetContainingAdapter(v138);
            if ( (int)DXGADAPTER::GetDriverVersion(v145) < 1200
              || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter(v138) + 24) + 64LL)
                                       + 40LL)
                           + 28LL) < 0x300Au )
            {
              v180 |= k;
            }
          }
          goto LABEL_132;
        }
        v141 = (_QWORD *)WdLogNewEntry5_WdError(v140);
        v126 = v93;
        v141[3] = v93;
        v141[4] = *((int *)v19 + 68);
        v141[5] = *((unsigned int *)v19 + 67);
        v141[6] = v116;
        WdLogEvent5_WdError(v141);
        if ( v185 )
          ADAPTER_DISPLAY::DestroyCddAllocations(*((ADAPTER_DISPLAY **)v19 + 288), v185, v93);
      }
      else
      {
        if ( !*((_QWORD *)v19 + 289) )
          goto LABEL_108;
        CddPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*((ADAPTER_DISPLAY **)v19 + 288), v93);
        if ( CddPrimaryAllocation )
        {
          v135 = *((unsigned int *)CddPrimaryAllocation + 1);
          if ( (v135 & 0x10) == 0 )
            goto LABEL_116;
        }
        k = (int)v179;
        if ( ((unsigned int)v179 & a8[8]) == 0 )
        {
          *v188 |= (unsigned int)v179;
          v137 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
          v137[3] = v93;
          v137[4] = *((int *)v19 + 68);
          v137[5] = *((unsigned int *)v19 + 67);
          WdLogEvent5_WdDmmEvent(v137);
          goto LABEL_132;
        }
        LODWORD(v116) = -1071775482;
        v136 = (_QWORD *)WdLogNewEntry5_WdError(v135);
        v126 = v93;
        v136[3] = v93;
        v136[4] = *((int *)v19 + 68);
        v136[5] = *((unsigned int *)v19 + 67);
        WdLogEvent5_WdError(v136);
      }
LABEL_124:
      if ( !v172 )
      {
        DxgkLogCodePointPacket(0x61u, v93, v116, 0, *(_QWORD *)((char *)v19 + 268));
        v172 = 1;
        goto LABEL_28;
      }
      a8[19] |= k;
      a8[v126 + 20] = v116;
      if ( (_DWORD)v116 == -1071774920 || (_DWORD)v116 == -1071774976 )
        v171 = 1;
    }
    LOBYTE(v27) = 2;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      v186,
      ((unsigned __int64)v30 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v30 + 96) != 0LL),
      v27);
    v142 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v30 + 96), v93);
    v143 = v142 + 0x80000000;
    if ( (int)v143 >= 0 && v142 != -1071774919 )
    {
      v144 = WdLogNewEntry5_WdAssertion(v143);
      WdLogEvent5_WdAssertion(v144);
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v186);
LABEL_132:
    ++v93;
  }
  v146 = 0LL;
  v147 = 1;
  if ( v96 )
  {
    do
    {
      if ( (v147 & a8[19]) == 0 )
      {
        if ( (v147 & v180) != 0 )
        {
          v148 = 0LL;
          if ( (v147 & a8[5]) == 0 )
          {
            LOBYTE(v27) = 2;
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
              v186,
              ((unsigned __int64)v30 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v30 + 96) != 0LL),
              v27);
            v152 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v30 + 96), v146);
            v153 = v152 + 0x80000000;
            if ( (int)v153 >= 0 && v152 != -1071774919 )
            {
              v154 = WdLogNewEntry5_WdAssertion(v153);
              WdLogEvent5_WdAssertion(v154);
            }
            v155 = v175;
            a8[17] |= v147;
            v150 = v155 & 0xFFFFFF0F | 0x40;
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v186);
            goto LABEL_153;
          }
          if ( !*((_QWORD *)v19 + 289) )
            goto LABEL_147;
          v149 = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*((ADAPTER_DISPLAY **)v19 + 288), v146);
          if ( v149 && (*((_DWORD *)v149 + 1) & 0x10) == 0 )
          {
            v148 = (void *)*((_QWORD *)v149 + 2);
LABEL_147:
            v150 = v175 & 0xFFFFFF0F | 0x20;
LABEL_153:
            v156 = *((_QWORD *)v19 + 288);
            LODWORD(v175) = ((unsigned __int8)v150 ^ (unsigned __int8)v177) & 0xF ^ v150;
            v176 = *(_DWORD *)(v156 + 240);
            BYTE4(v175) = (BYTE4(v175) & 0xFC ^ (v178 >> 14)) & 4 ^ BYTE4(v175) & 0xFC;
            v157 = VIDPN_MGR::CommitVidPn(
                     v181,
                     v30,
                     v148,
                     v146,
                     D3DKMDT_MCC_ENFORCE,
                     1,
                     0,
                     (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v175,
                     &v171);
            v159 = v157;
            if ( v157 < 0 )
            {
              a8[19] |= v147;
              a8[v146 + 20] = v157;
              v160 = (_QWORD *)WdLogNewEntry5_WdError(v158);
              v160[3] = (unsigned int)v146;
              v160[4] = *((int *)v19 + 68);
              v160[5] = *((unsigned int *)v19 + 67);
              v160[6] = v159;
              WdLogEvent5_WdError(v160);
            }
            goto LABEL_155;
          }
          *v188 |= v147;
          a8[17] |= v147;
          v151 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
          v151[3] = (unsigned int)v146;
          v151[4] = *((int *)v19 + 68);
          v151[5] = *((unsigned int *)v19 + 67);
          WdLogEvent5_WdDmmEvent(v151);
        }
        else
        {
          a8[17] |= v147 & ~a8[5];
        }
      }
LABEL_155:
      v146 = (unsigned int)(v146 + 1);
      v147 *= 2;
    }
    while ( (unsigned int)v146 < *(_DWORD *)(*((_QWORD *)v19 + 288) + 80LL) );
  }
  v161 = -2;
  if ( a5 )
  {
    do
    {
      if ( ((1 << *a7) & a8[19]) != 0 )
      {
        v163 = DxgkIncrementGlobalConnectionChangeId();
        *((_QWORD *)v164 - 1) = v163;
        *v164 = *v164 & 0xF0FFFFFF | 0xD000000;
        DxgkIncrementGlobalConnectionChangeId();
      }
      else
      {
        v169 = DxgkGetGlobalConnectionChangeId();
        *(_QWORD *)(v165 - 8) = v169;
        *(_DWORD *)v165 = *(_DWORD *)v165 & 0xF0FFFFFF | 0xE000000;
      }
      if ( (v166 & a8[2]) != 0 )
      {
        *(_DWORD *)(v165 - 16) &= v161;
        *(_WORD *)(v165 + 16) = 1;
        *(_BYTE *)(v165 + 18) = 1;
      }
      else
      {
        *(_DWORD *)(v165 - 16) &= v161;
        *(_WORD *)(v165 + 16) = -1;
        *(_BYTE *)(v165 + 18) = -1;
      }
      a7 = (_DWORD *)(v167 + 4);
    }
    while ( v168 != 1 );
  }
  *v192 = (v171 != 0) | v161 & *v192;
  LODWORD(v28) = 0;
LABEL_165:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v184, 0LL);
  return (unsigned int)v28;
}
