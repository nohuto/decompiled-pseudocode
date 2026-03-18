/*
 * XREFs of ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EAC10
 * Callers:
 *     DxgkApplyPathsModality @ 0x1C00A60E0 (DxgkApplyPathsModality.c)
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00A68C0 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0101280 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0001D90 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z @ 0x1C0002DC8 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     _CCD_TOPOLOGY::ApplyTopology_::_2_::_AUTO_USING_PM_PathChanged4360::_AUTO_USING_PM_PathChanged4360 @ 0x1C00896F0 (_CCD_TOPOLOGY--ApplyTopology_--_2_--_AUTO_USING_PM_PathChanged4360--_AUTO_USING_PM_PathChanged43.c)
 *     _CCD_TOPOLOGY::ApplyTopology_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex4358::_AUTO_USING_PM_PrimaryClonePathIndex4358 @ 0x1C0089738 (_CCD_TOPOLOGY--ApplyTopology_--_2_--_AUTO_USING_PM_PrimaryClonePathIndex4358--_AUTO_USING_PM_Pri.c)
 *     _CCD_TOPOLOGY::ApplyTopology_::_2_::_AUTO_USING_PM_PathChanged4360::__AUTO_USING_PM_PathChanged4360 @ 0x1C0089780 (_CCD_TOPOLOGY--ApplyTopology_--_2_--_AUTO_USING_PM_PathChanged4360--__AUTO_USING_PM_PathChanged4.c)
 *     DxgkStatusChangeNotify @ 0x1C0098C20 (DxgkStatusChangeNotify.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C00A5254 (DxgkCreateSessionViewForCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00A5784 (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     _CCD_TOPOLOGY::ApplyTopology_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex4358::__AUTO_USING_PM_PrimaryClonePathIndex4358 @ 0x1C00AB160 (_CCD_TOPOLOGY--ApplyTopology_--_2_--_AUTO_USING_PM_PrimaryClonePathIndex4358--__AUTO_USING_PM_Pr.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00D7990 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00EA5C0 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00EA684 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00EA924 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00EC998 (-CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00EC9D8 (-BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00ED624 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00EDE40 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C01DE52C (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C01DE768 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopology(CCD_TOPOLOGY *this, DWORD a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned __int16 v3; // r15
  unsigned __int16 v5; // bx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct DXGPROCESS *v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  struct _D3DKMT_GETPATHSMODALITY *v47; // rsi
  unsigned int v48; // ecx
  _DWORD *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  DXGGLOBAL *Global; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  SIZE_T v59; // rax
  unsigned __int64 MaximumAdapterCount; // kr00_8
  PVOID v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned int v68; // r14d
  DXGGLOBAL *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  DXGGLOBAL *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // r8
  unsigned __int16 j; // r10
  unsigned __int16 v84; // r9
  __int64 v85; // r11
  unsigned __int16 v86; // bx
  bool k; // cf
  __int64 v88; // rdx
  __int16 v89; // r9
  __int64 v90; // rbx
  __int64 v91; // rdx
  unsigned __int16 m; // r10
  unsigned __int16 v93; // r9
  bool n; // cf
  __int64 v95; // rdx
  unsigned __int16 v96; // r11
  __int64 v97; // rcx
  __int64 v98; // rbx
  __int64 v99; // r11
  unsigned __int16 v100; // r9
  __int64 v101; // rdx
  unsigned int v102; // ecx
  __int64 v103; // r11
  __int64 v104; // rbx
  __int64 v105; // r10
  __int64 v106; // r11
  __int64 v107; // r10
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // r9
  __int64 v112; // rbx
  __int64 v113; // rax
  unsigned int v114; // r14d
  __int64 v115; // rcx
  unsigned int v116; // edx
  __int64 v117; // r9
  __int64 v118; // r8
  __int64 v119; // rsi
  __int64 v120; // r8
  int v121; // edx
  __int64 v122; // rax
  unsigned int v123; // edx
  bool IsSameCloneGroup; // al
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rax
  unsigned int v128; // esi
  __int64 v129; // rcx
  bool v130; // r13
  DWORD LowPart; // r15d
  int v132; // eax
  __int64 v133; // rdx
  __int64 v134; // r14
  _QWORD *v135; // rax
  __int64 v136; // rbx
  __int64 v137; // rbx
  int v138; // eax
  __int64 v139; // r14
  _QWORD *v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rbx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rdx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // rdx
  __int64 v150; // r8
  __int64 v151; // r9
  _BYTE *v152; // rax
  __int64 v153; // rcx
  unsigned __int16 v154; // r14
  bool ii; // cf
  __int64 v156; // rbx
  __int64 v157; // rax
  unsigned int v158; // r12d
  __int64 v159; // rcx
  __int64 v160; // rax
  __int64 v161; // rdx
  LONG v162; // ecx
  NTSTATUS v163; // eax
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rbx
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  int v171; // eax
  __int64 v172; // rcx
  __int64 v173; // rsi
  _QWORD *v174; // rax
  __int64 v175; // rdx
  int v176; // r10d
  __int64 v177; // r8
  unsigned int v178; // r9d
  __int64 v179; // rdx
  __int64 v180; // rcx
  int v181; // eax
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // rbx
  __int64 v185; // rax
  __int64 v186; // rax
  _BYTE v188[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 i; // [rsp+34h] [rbp-CCh] BYREF
  struct tagRECT v190; // [rsp+38h] [rbp-C8h] BYREF
  struct _LUID Luid; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGPROCESS *v192; // [rsp+50h] [rbp-B0h]
  __int64 v193; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v194; // [rsp+60h] [rbp-A0h]
  __int64 v195[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v196[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v197[3]; // [rsp+88h] [rbp-78h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v198[10]; // [rsp+A0h] [rbp-60h] BYREF
  int v199; // [rsp+F4h] [rbp-Ch]
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp+0h] BYREF
  char v201; // [rsp+130h] [rbp+30h]

  v3 = 0;
  *(_QWORD *)&v190.left = a3;
  Luid.LowPart = a2;
  v201 = 0;
  v5 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v198, 8u, 0);
  v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v7, v6, v8, v9) + 73);
  if ( v12 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10, v13, v14);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       v12,
                                       CurrentProcessSessionId,
                                       v16,
                                       v17);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  LODWORD(v19) = -1073741811;
  if ( !SessionDataForSpecifiedSession )
  {
    v20 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v20 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v22, v21, v23, v24);
    v25 = v20;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
LABEL_8:
    WdLogEvent5_WdError(v25);
    goto LABEL_142;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2323));
  Current = DXGPROCESS::GetCurrent(v26);
  v192 = Current;
  v30 = Current;
  if ( !Current )
  {
    v25 = WdLogNewEntry5_WdError(v29, v28);
    goto LABEL_8;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 9) + 224LL))(0LL) )
  {
    v33 = WdLogNewEntry5_WdError(v32, v31);
    *(_QWORD *)(v33 + 24) = v30;
    WdLogEvent5_WdError(v33);
    LODWORD(v19) = -1073741790;
    goto LABEL_142;
  }
  v188[0] = 0;
  v34 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v188, 1);
  v19 = v34;
  if ( v34 < 0 )
  {
    v39 = WdLogNewEntry5_WdError(v36, v35);
    *(_QWORD *)(v39 + 24) = v19;
LABEL_19:
    WdLogEvent5_WdError(v39);
    goto LABEL_140;
  }
  for ( i = 8; ; v5 = i )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v198, v5, v37, v38) < v5 )
    {
      v186 = WdLogNewEntry5_WdLowResource(v40);
      *(_QWORD *)(v186 + 24) = *((_QWORD *)this + 8);
      *(_QWORD *)(v186 + 32) = v5;
      WdLogEvent5_WdLowResource(v186);
      LODWORD(v19) = -1073741801;
      goto LABEL_140;
    }
    v199 |= 3u;
    LOBYTE(v42) = 1;
    LOBYTE(v41) = 1;
    v43 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v198, 0LL, v41, v42, &i);
    v19 = v43;
    if ( v43 != -1073741789 )
      break;
  }
  if ( v43 < 0 )
  {
    v39 = WdLogNewEntry5_WdError(v45, v44);
    *(_QWORD *)(v39 + 24) = *((_QWORD *)this + 8);
    *(_QWORD *)(v39 + 32) = v19;
    goto LABEL_19;
  }
  v46 = *((_QWORD *)this + 8);
  v47 = v198[8];
  v48 = *(unsigned __int16 *)(v46 + 20);
  v193 = v46 + 48;
  v194 = v48;
  if ( v48 )
  {
    v49 = (_DWORD *)(v46 + 240);
    v50 = v48;
    do
    {
      *v49 |= 4u;
      v49[3] = 0;
      v49 += 66;
      --v50;
    }
    while ( v50 );
  }
  CCD_TOPOLOGY::ApplyTopology_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex4358::_AUTO_USING_PM_PrimaryClonePathIndex4358(
    (__int64)v197,
    (__int64)v47);
  CCD_TOPOLOGY::ApplyTopology_::_2_::_AUTO_USING_PM_PathChanged4360::_AUTO_USING_PM_PathChanged4360(
    (__int64)v196,
    *((_QWORD *)this + 8));
  CCD_TOPOLOGY::ApplyTopology_::_2_::_AUTO_USING_PM_PathChanged4360::_AUTO_USING_PM_PathChanged4360(
    (__int64)v195,
    (__int64)v47);
  CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(this);
  CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId((CCD_TOPOLOGY *)v198);
  Global = DXGGLOBAL::GetGlobal(v52, v51, v53, v54);
  MaximumAdapterCount = (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(Global, v56, v57, v58);
  v59 = 216 * MaximumAdapterCount;
  if ( !is_mul_ok(MaximumAdapterCount, 0xD8uLL) )
    v59 = -1LL;
  v61 = operator new[](v59, 0x63644356u, PagedPool);
  v65 = *((_QWORD *)this + 8);
  *(_QWORD *)(v65 + 40) = v61;
  v66 = *((_QWORD *)this + 8);
  if ( !*(_QWORD *)(v66 + 40) )
  {
    v67 = WdLogNewEntry5_WdLowResource(v65);
    *(_QWORD *)(v67 + 24) = this;
    *(_QWORD *)(v67 + 32) = *((_QWORD *)this + 8);
    WdLogEvent5_WdLowResource(v67);
    LODWORD(v19) = -1073741801;
    goto LABEL_138;
  }
  *(_WORD *)(v66 + 28) = 0;
  v68 = 0;
  v69 = DXGGLOBAL::GetGlobal(v65, v62, v63, v64);
  if ( (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(v69, v70, v71, v72) )
  {
    do
    {
      v73 = 216LL * v68;
      memset((void *)(v73 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)), 0, 0xD8uLL);
      memset((void *)(v73 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 8LL), 255, 0x40uLL);
      ++v68;
      v78 = DXGGLOBAL::GetGlobal(v75, v74, v76, v77);
    }
    while ( v68 < (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(v78, v79, v80, v81) );
  }
  DxgkRemoveAllSessionViewForCurrentSession();
  for ( j = 0; j < *((_WORD *)v47 + 10); ++j )
  {
    v84 = 0;
    v82 = (__int64)v47 + 264 * j;
    *(_DWORD *)(v82 + 256) = 0;
    v85 = *((_QWORD *)this + 8);
    v86 = *(_WORD *)(v85 + 20);
    for ( k = v86 != 0; k; k = v84 < v86 )
    {
      if ( CCD_TOPOLOGY::IsMatchingSource(
             (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v82 + 48),
             (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(264LL * v84 + v85 + 48))
        && *(_DWORD *)(v82 + 76) == *(_DWORD *)(v88 + 28) )
      {
        v90 = 264LL * *(unsigned int *)(v82 + 252);
        if ( !CCD_TOPOLOGY::IsMatchingSource(
                (struct _D3DKMT_GETPATHSMODALITY *)((char *)v47 + v90 + 48),
                (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(264LL * *(unsigned int *)(v88 + 204) + v85 + 48)) )
        {
          *(_DWORD *)((char *)v47 + v90 + 256) = 1;
          *(_QWORD *)((char *)v47 + 264 * *(unsigned int *)(v82 + 252) + 292) = 0LL;
        }
        break;
      }
      v84 = v89 + 1;
    }
    if ( v84 >= *(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    {
      *((_DWORD *)v47 + 66 * *(unsigned int *)(v82 + 252) + 64) = 1;
      *(_QWORD *)((char *)v47 + 264 * *(unsigned int *)(v82 + 252) + 292) = 0LL;
    }
  }
  v91 = *((_QWORD *)this + 8);
  for ( m = 0; m < *(_WORD *)(v91 + 20); ++m )
  {
    v93 = 0;
    v82 = v91 + 264LL * m;
    *(_DWORD *)(v82 + 256) = 0;
    for ( n = *((_WORD *)v47 + 10) != 0; n; n = v93 < v96 )
    {
      if ( CCD_TOPOLOGY::IsMatchingSource(
             (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v82 + 48),
             (struct _D3DKMT_GETPATHSMODALITY *)((char *)v47 + 264 * v93 + 48))
        && *(_DWORD *)(v95 + 28) == *(_DWORD *)(v82 + 76) )
      {
        v97 = *(unsigned int *)(v95 + 204);
        if ( (_DWORD)v97 == v93 && *(_DWORD *)(v82 + 252) == m )
        {
          *(_QWORD *)(v82 + 292) = *(_QWORD *)(v95 + 244);
        }
        else
        {
          v98 = *((_QWORD *)this + 8);
          if ( !CCD_TOPOLOGY::IsMatchingSource(
                  (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(264LL * *(unsigned int *)(v82 + 252) + v98 + 48),
                  (struct _D3DKMT_GETPATHSMODALITY *)((char *)v47 + 264 * v97 + 48)) )
          {
            *(_DWORD *)(v99 + v98 + 256) = 1;
            *(_QWORD *)(264LL * *(unsigned int *)(v82 + 252) + *((_QWORD *)this + 8) + 292) = 0LL;
          }
        }
        break;
      }
      ++v93;
    }
    if ( v93 >= *((_WORD *)v47 + 10) )
    {
      *(_DWORD *)(264LL * *(unsigned int *)(v82 + 252) + *((_QWORD *)this + 8) + 256) = 1;
      *(_QWORD *)(264LL * *(unsigned int *)(v82 + 252) + *((_QWORD *)this + 8) + 292) = 0LL;
    }
    v91 = *((_QWORD *)this + 8);
  }
  v100 = 0;
  if ( *((_WORD *)v47 + 10) )
  {
    do
    {
      v101 = *((_QWORD *)this + 8);
      v82 = 0LL;
      v102 = *(_DWORD *)(v101 + 36);
      if ( v102 )
      {
        v103 = *(_QWORD *)(v101 + 40);
        v104 = 264LL * v100;
        do
        {
          v105 = 216LL * (unsigned int)v82;
          if ( *(_DWORD *)((char *)v47 + v104 + 64) == *(_DWORD *)(v105 + v103)
            && *(_DWORD *)((char *)v47 + v104 + 68) == *(_DWORD *)(v105 + v103 + 4) )
          {
            break;
          }
          v82 = (unsigned int)(v82 + 1);
        }
        while ( (unsigned int)v82 < v102 );
      }
      v106 = 216LL * (unsigned int)v82;
      v107 = 264LL * v100;
      *(_DWORD *)(*(_QWORD *)(v101 + 40) + v106 + 76) |= 1 << *(_DWORD *)((char *)v47 + v107 + 72);
      if ( (*(_QWORD *)((_BYTE *)v47 + v107 + 48) & 0x1000000000LL) != 0 )
        v91 = (unsigned int)(1 << *(_DWORD *)((char *)v47 + v107 + 72));
      else
        v91 = 0LL;
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v106 + 212) |= v91;
      if ( *(_DWORD *)((char *)v47 + v107 + 256) == 1 )
      {
        v91 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
        *(_DWORD *)(v91 + v106 + 124) |= 1 << *(_DWORD *)((char *)v47 + v107 + 72);
      }
      v108 = *((_QWORD *)this + 8);
      v109 = *(unsigned int *)(v108 + 36);
      if ( (unsigned int)v82 >= (unsigned int)v109 )
      {
        v91 = 216 * v109;
        *(_QWORD *)(216 * v109 + *(_QWORD *)(v108 + 40)) = *(_QWORD *)((char *)v47 + v107 + 64);
        ++*(_DWORD *)(*((_QWORD *)this + 8) + 36LL);
      }
      ++v100;
    }
    while ( v100 < *((_WORD *)v47 + 10) );
    v30 = v192;
  }
  v110 = *((_QWORD *)this + 8);
  v111 = 0LL;
  if ( !*(_WORD *)(v110 + 20) )
    goto LABEL_91;
  do
  {
    v112 = 264LL * v3;
    v113 = *(_QWORD *)(v110 + v112 + 48);
    if ( (v113 & 0x187) != 0 )
    {
      *(_QWORD *)(v110 + v112 + 48) = v113 | 0x40000000000000LL;
      *(_QWORD *)(v112 + *((_QWORD *)this + 8) + 56) |= *(_DWORD *)(v112 + *((_QWORD *)this + 8) + 48) & 0x187;
    }
    v114 = 0;
    *(_DWORD *)(v112 + *((_QWORD *)this + 8) + 288) = 0;
    v115 = *((_QWORD *)this + 8);
    v116 = *(_DWORD *)(v115 + 36);
    if ( v116 )
    {
      v117 = *(_QWORD *)(v115 + 40);
      do
      {
        v118 = 216LL * v114;
        if ( *(_DWORD *)(v115 + v112 + 64) == *(_DWORD *)(v118 + v117)
          && *(_DWORD *)(v115 + v112 + 68) == *(_DWORD *)(v118 + v117 + 4) )
        {
          break;
        }
        ++v114;
      }
      while ( v114 < v116 );
      v111 = 0LL;
    }
    v119 = 216LL * v114;
    *(_DWORD *)(*(_QWORD *)(v115 + 40) + v119 + 80) |= 1 << *(_DWORD *)(v115 + v112 + 72);
    v120 = *((_QWORD *)this + 8);
    if ( (*(_QWORD *)(v120 + v112 + 48) & 0x1000000000LL) != 0 )
      v121 = 1 << *(_DWORD *)(v120 + v112 + 72);
    else
      v121 = 0;
    *(_DWORD *)(*(_QWORD *)(v120 + 40) + v119 + 212) |= v121;
    v122 = *((_QWORD *)this + 8);
    v123 = *(_DWORD *)(v122 + v112 + 252);
    if ( v123 == v3 )
    {
      *(_DWORD *)(*(_QWORD *)(v122 + 40) + v119 + 72) |= 1 << *(_DWORD *)(v122 + v112 + 72);
    }
    else
    {
      IsSameCloneGroup = CCD_TOPOLOGY::IsSameCloneGroup(this, v123, v3, 1);
      v111 = 0LL;
      if ( IsSameCloneGroup )
        goto LABEL_85;
    }
    v125 = *((_QWORD *)this + 8);
    v91 = 54LL * v114 + *(unsigned int *)(v125 + v112 + 72);
    *(_DWORD *)(*(_QWORD *)(v125 + 40) + 4 * v91 + 8) = v3;
LABEL_85:
    v126 = *((_QWORD *)this + 8);
    if ( *(_DWORD *)(v126 + v112 + 256) == 1 )
    {
      v91 = *(_QWORD *)(v126 + 40);
      *(_DWORD *)(v91 + v119 + 124) |= 1 << *(_DWORD *)(v126 + v112 + 72);
    }
    v82 = *((_QWORD *)this + 8);
    v127 = *(unsigned int *)(v82 + 36);
    if ( v114 >= (unsigned int)v127 )
    {
      v91 = 216 * v127;
      *(_QWORD *)(216 * v127 + *(_QWORD *)(v82 + 40)) = *(_QWORD *)(v82 + v112 + 64);
      ++*(_DWORD *)(*((_QWORD *)this + 8) + 36LL);
    }
    v110 = *((_QWORD *)this + 8);
    ++v3;
  }
  while ( v3 < *(_WORD *)(v110 + 20) );
  v30 = v192;
LABEL_91:
  v128 = 0;
  v129 = *(unsigned int *)(*((_QWORD *)this + 8) + 36LL);
  v130 = (_DWORD)v129 != 0;
  if ( (_DWORD)v129 )
  {
    LowPart = Luid.LowPart;
    do
    {
      v132 = CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(this, v128);
      v134 = v132;
      if ( v132 >= 0 )
      {
        v137 = 216LL * v128;
        v91 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
        if ( *(_QWORD *)(v91 + v137 + 76) )
        {
          v138 = CCD_TOPOLOGY::ApplyTopologyOnAdapter(
                   this,
                   v30,
                   LowPart,
                   v128,
                   *(struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)&v190.left);
          v139 = v138;
          if ( v138 >= 0 )
          {
            v130 = 0;
          }
          else
          {
            v140 = (_QWORD *)WdLogNewEntry5_WdError(v129, v91);
            v140[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v137 + 4);
            v140[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 216LL * v128);
            v140[5] = *((_QWORD *)this + 8);
            v140[6] = v139;
            WdLogEvent5_WdError(v140);
          }
        }
      }
      else
      {
        v135 = (_QWORD *)WdLogNewEntry5_WdError(v129, v133);
        v136 = 216LL * v128;
        v135[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v136 + 4);
        v135[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v136);
        v135[5] = *((_QWORD *)this + 8);
        v135[6] = v134;
        WdLogEvent5_WdError(v135);
        CCD_TOPOLOGY::MarkPathsApplyFailure(
          this,
          (const struct _LUID *)(v136 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
          0xFFFFFFFF,
          v134);
      }
      ++v128;
    }
    while ( v128 < *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) );
  }
  v143 = *((_QWORD *)DXGGLOBAL::GetGlobal(v129, v91, v82, v111) + 117);
  if ( *(_BYTE *)v143 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v142, v141, v144, v145) + 24) = 206LL;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v190, *(struct DXGFASTMUTEX *const *)(v143 + 8), v144, v145);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v190);
    v152 = (_BYTE *)(v143 + 16);
    v153 = 18LL;
    do
    {
      *v152 = 0;
      v152 += 48;
      --v153;
    }
    while ( v153 );
    ++*(_DWORD *)(v143 + 880);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v149, v150, v151) + 24) = 228LL;
    if ( LOBYTE(v190.right) )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v190, v146, v147, v148);
  }
  v154 = 0;
  for ( ii = *(_WORD *)(*((_QWORD *)this + 8) + 20LL) != 0; ii; ii = v154 < *(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
  {
    v156 = 264LL * v154;
    v157 = *((_QWORD *)this + 8);
    v158 = *(_DWORD *)(v156 + v157 + 252);
    if ( *(int *)(v156 + v157 + 288) >= 0 && (v158 == v154 || !CCD_TOPOLOGY::IsSameCloneGroup(this, v158, v154, 1)) )
    {
      v159 = *(_DWORD *)(v156 + *((_QWORD *)this + 8) + 48) & 0x20800;
      if ( v159 != 133120 )
      {
        v160 = WdLogNewEntry5_WdAssertion(v159, v146, v147, v148);
        WdLogEvent5_WdAssertion(v160);
      }
      v161 = *((_QWORD *)this + 8);
      v190.left = *(_DWORD *)(v156 + v161 + 192);
      v190.right = *(_DWORD *)(v156 + v161 + 200) + v190.left;
      v190.top = *(_DWORD *)(v156 + v161 + 196);
      v162 = *(_DWORD *)(v156 + v161 + 204) + v190.top;
      Luid = 0LL;
      v190.bottom = v162;
      if ( *(_DWORD *)(v156 + v161 + 292) || *(_DWORD *)(v156 + v161 + 296) )
      {
        Luid = *(struct _LUID *)(v156 + v161 + 292);
      }
      else
      {
        v163 = ZwAllocateLocallyUniqueId(&Luid);
        v19 = v163;
        if ( v163 < 0 )
        {
          v166 = WdLogNewEntry5_WdError(v165, v164);
          *(_QWORD *)(v166 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v168, v167, v169, v170);
          *(_QWORD *)(v166 + 32) = v19;
          WdLogEvent5_WdError(v166);
          goto LABEL_138;
        }
      }
      v171 = DxgkCreateSessionViewForCurrentSession(
               (struct _LUID *)(v156 + *((_QWORD *)this + 8) + 64LL),
               *(_DWORD *)(v156 + *((_QWORD *)this + 8) + 72),
               &v190,
               v158 == v154,
               &Luid);
      v173 = v171;
      if ( v171 >= 0 )
      {
        if ( v158 == v154 )
          ++*(_WORD *)(*((_QWORD *)this + 8) + 28LL);
      }
      else
      {
        v174 = (_QWORD *)WdLogNewEntry5_WdError(v172, v146);
        v174[3] = *(int *)(v156 + *((_QWORD *)this + 8) + 68);
        v174[4] = *(unsigned int *)(v156 + *((_QWORD *)this + 8) + 64);
        v174[5] = *(unsigned int *)(v156 + *((_QWORD *)this + 8) + 72);
        v174[6] = v173;
        WdLogEvent5_WdError(v174);
        *(_DWORD *)(v156 + *((_QWORD *)this + 8) + 288) = v173;
      }
    }
    ++v154;
  }
  CCD_TOPOLOGY::CleanupPrimaryPathIndex(this);
  CCD_TOPOLOGY::CleanupPrimaryPathIndex((CCD_TOPOLOGY *)v198);
  v175 = *((_QWORD *)this + 8);
  v176 = 0;
  v177 = 0LL;
  v178 = *(_DWORD *)(v175 + 36);
  if ( v178 )
  {
    v179 = *(_QWORD *)(v175 + 40);
    while ( 1 )
    {
      v180 = 216LL * (unsigned int)v177;
      if ( *(_DWORD *)(v180 + v179 + 80) || *(_DWORD *)(v180 + v179 + 84) )
        break;
      if ( *(_DWORD *)(v180 + v179 + 88) || *(_DWORD *)(v180 + v179 + 112) || *(_DWORD *)(v180 + v179 + 108) )
        v176 = 1;
      v177 = (unsigned int)(v177 + 1);
      if ( (unsigned int)v177 >= v178 )
        goto LABEL_134;
    }
    v176 = 0;
LABEL_134:
    if ( v176 )
    {
      v190.top = 0;
      v190.left = 11;
      *(_QWORD *)&v190.right = 0LL;
      v181 = DxgkStatusChangeNotify(&v190.left, v179, v177);
      v184 = v181;
      if ( v181 < 0 )
      {
        v185 = WdLogNewEntry5_WdError(v183, v182);
        *(_QWORD *)(v185 + 24) = v184;
        WdLogEvent5_WdError(v185);
      }
    }
  }
  LODWORD(v19) = v130 ? 0xC0000001 : 0;
LABEL_138:
  CCD_TOPOLOGY::ApplyTopology_::_2_::_AUTO_USING_PM_PathChanged4360::__AUTO_USING_PM_PathChanged4360(v195);
  CCD_TOPOLOGY::ApplyTopology_::_2_::_AUTO_USING_PM_PathChanged4360::__AUTO_USING_PM_PathChanged4360(v196);
  CCD_TOPOLOGY::ApplyTopology_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex4358::__AUTO_USING_PM_PrimaryClonePathIndex4358(v197);
  CCD_TOPOLOGY::ApplyTopology_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex4358::__AUTO_USING_PM_PrimaryClonePathIndex4358(&v193);
LABEL_140:
  if ( v188[0] )
    DxgkReleaseSessionModeChangeLock();
LABEL_142:
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v198);
  if ( v201 )
    KeUnstackDetachProcess(&ApcState);
  return (unsigned int)v19;
}
