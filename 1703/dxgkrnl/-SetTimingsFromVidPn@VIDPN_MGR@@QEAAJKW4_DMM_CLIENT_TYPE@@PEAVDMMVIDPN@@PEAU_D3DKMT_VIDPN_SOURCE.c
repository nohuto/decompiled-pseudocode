/*
 * XREFs of ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528
 * Callers:
 *     DmmEnablePathsFromVidPnSource @ 0x1C0099FDC (DmmEnablePathsFromVidPnSource.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A4324 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAU_D3DKMT_VIDPN_SOU.c)
 *     DmmPowerOnTargetsFromSourceIfNecessary @ 0x1C00A5B08 (DmmPowerOnTargetsFromSourceIfNecessary.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010388C (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DmmRemovePathsFromVidPnSource @ 0x1C01D66F0 (DmmRemovePathsFromVidPnSource.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C01D9484 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?FillFailedStatus@@YAXPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C0002AD8 (-FillFailedStatus@@YAXPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C0002FEC (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1C000A9A4 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C000AB08 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AC8C (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C000AF30 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C000AF88 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C000B06C (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C000B3F8 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000B47C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000B4C0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000B558 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CD1C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C0020F04 (--1-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     ??1?$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ @ 0x1C00213D0 (--1-$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ.c)
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C0021A50 (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00887D8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     DxgkStatusChangeNotify @ 0x1C0098C20 (DxgkStatusChangeNotify.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C00A44B0 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C00A4518 (-SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00A5300 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@CAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z @ 0x1C00A6790 (-CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@CAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00CFC9C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D3888 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C00DDD20 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00DF690 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E0178 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E01DC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00E0C78 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00E15B4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00E18C8 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C00E3910 (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E6378 (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00E6420 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C00E6C44 (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00E6CD4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E79E4 (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00E8438 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00E8674 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00E87E0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00E8858 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00E8F04 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01016C0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C0103BF4 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0170A54 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C01794F8 (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 *     ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C01B460C (-DisableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C01DCDF0 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::SetTimingsFromVidPn(
        VIDPN_MGR *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _D3DKMT_VIDPN_SOURCE_MASKS *a5,
        _BYTE *a6,
        struct DXGDEVICE *a7,
        struct COREDEVICEACCESS *a8)
{
  int v9; // ebx
  VIDPN_MGR *v10; // r14
  PERESOURCE *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r15d
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned int v26; // edi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  D3DKMDT_HVIDPN v31; // rsi
  SIZE_T v32; // rax
  PVOID v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdi
  unsigned int v38; // ebx
  int v39; // r14d
  __int64 v40; // rcx
  ADAPTER_DISPLAY *v41; // rcx
  struct DXGDEVICE *v42; // rdx
  unsigned __int8 v43; // al
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int *v47; // rbx
  char v48; // r14
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rbx
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r9
  _BYTE *v56; // rsi
  ADAPTER_DISPLAY *v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // r8
  DXGADAPTER *ContainingAdapter; // rax
  unsigned int *v63; // rdi
  char *v64; // rbx
  char *v65; // r13
  char *v66; // r14
  char v67; // al
  __int64 v68; // rax
  char *v69; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  DMMVIDEOPRESENTTARGET *v71; // rsi
  __int64 v72; // rdx
  PERESOURCE v73; // rsi
  unsigned int v74; // r14d
  _DWORD *v75; // rbx
  unsigned int *v76; // rdi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  DMMVIDPNTOPOLOGY *v78; // rsi
  DMMVIDPNPRESENTPATH *v79; // r8
  __int64 v80; // rdx
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  char *v83; // rcx
  char *v84; // r9
  int v85; // eax
  char *v86; // rax
  _QWORD *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rax
  __int64 v93; // rdx
  int MostImportantVidPnPathTargetsFromSource; // esi
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rcx
  __int64 v98; // rax
  unsigned __int8 v99; // dl
  unsigned int v100; // r8d
  unsigned int v101; // ecx
  __int64 v102; // rdx
  PERESOURCE v103; // rax
  PERESOURCE v104; // rax
  DXGADAPTER **v105; // rcx
  struct _LIST_ENTRY *Flink; // r14
  KSPIN_LOCK SpinLock; // rsi
  const struct _DXGK_DISPLAYMODE_INFO *v108; // rax
  __int64 v109; // r8
  __int64 v110; // rsi
  __int64 v111; // rbx
  BLTQUEUE *v112; // rcx
  __int64 v113; // rax
  struct DXGADAPTERALLOCATION *v114; // rsi
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  ADAPTER_RENDER *v116; // rcx
  __int64 v117; // r8
  int v118; // eax
  __int64 v119; // rax
  _QWORD *v120; // rax
  char v121; // al
  __int64 v122; // rdx
  D3DKMDT_HVIDPN v123; // rsi
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rsi
  _QWORD *v128; // rax
  int VidPnSourceOwnerType; // eax
  int v130; // eax
  __int64 v131; // rcx
  PERESOURCE v132; // rsi
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rax
  __int64 v138; // rax
  int SharedWaiters; // esi
  __int64 CurrentProcess; // rax
  __int128 *ProcessImageFileName; // rax
  unsigned int *v142; // r14
  char *v143; // rbx
  int v144; // eax
  DMMVIDEOPRESENTTARGET *v145; // rax
  DMMVIDEOPRESENTTARGET *v146; // rsi
  __int64 v147; // rdx
  int v148; // eax
  __int64 v149; // rcx
  __int64 v150; // r14
  _QWORD *v151; // rax
  PERESOURCE v152; // rcx
  __int64 v153; // rax
  bool v154; // zf
  ADAPTER_DISPLAY *v155; // r8
  unsigned int v156; // esi
  struct DXGDEVICE *v157; // rbx
  int v158; // r14d
  ADAPTER_DISPLAY *v159; // rcx
  DXGADAPTER **v160; // rbx
  const struct _D3DKMT_DISPLAYMODE *v161; // rax
  __int64 v162; // r8
  int v163; // eax
  __int64 v164; // r8
  __int64 v165; // r9
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // rbx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // rdx
  __int64 v175; // r8
  __int64 v176; // r9
  _BYTE *v177; // rax
  __int64 v178; // rcx
  __int64 v179; // rdx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rdx
  unsigned int *v183; // [rsp+28h] [rbp-E0h]
  char v184; // [rsp+78h] [rbp-90h]
  char v185; // [rsp+78h] [rbp-90h]
  char v186; // [rsp+79h] [rbp-8Fh]
  unsigned int v187; // [rsp+7Ch] [rbp-8Ch]
  unsigned int *v188; // [rsp+80h] [rbp-88h]
  int v189; // [rsp+80h] [rbp-88h]
  unsigned int v190; // [rsp+88h] [rbp-80h] BYREF
  D3DKMDT_HVIDPN v191; // [rsp+90h] [rbp-78h]
  unsigned int v192; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v193[2]; // [rsp+A0h] [rbp-68h]
  void *Src; // [rsp+A8h] [rbp-60h] BYREF
  int v195; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int *v196; // [rsp+B8h] [rbp-50h] BYREF
  void *v197; // [rsp+C0h] [rbp-48h] BYREF
  D3DKMDT_HVIDPN v198; // [rsp+C8h] [rbp-40h]
  __int64 v199; // [rsp+D0h] [rbp-38h]
  unsigned int v200; // [rsp+D8h] [rbp-30h] BYREF
  DMMVIDPNTOPOLOGY *v201; // [rsp+E0h] [rbp-28h]
  PVOID v202; // [rsp+E8h] [rbp-20h] BYREF
  PVOID P; // [rsp+F0h] [rbp-18h]
  _BYTE v204[56]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v205; // [rsp+130h] [rbp+28h] BYREF
  unsigned __int64 v206; // [rsp+138h] [rbp+30h] BYREF
  __int64 v207; // [rsp+140h] [rbp+38h]
  D3DKMDT_HVIDPN v208; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v209[16]; // [rsp+150h] [rbp+48h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v210; // [rsp+160h] [rbp+58h] BYREF
  int v211; // [rsp+190h] [rbp+88h] BYREF
  __int64 v212; // [rsp+198h] [rbp+90h]
  _DXGKARG_SETTIMINGSFROMVIDPN v213; // [rsp+1A0h] [rbp+98h] BYREF
  _BYTE v214[96]; // [rsp+1C8h] [rbp+C0h] BYREF
  unsigned int v216; // [rsp+240h] [rbp+138h]
  unsigned int v217; // [rsp+248h] [rbp+140h]

  v217 = a3;
  v216 = a2;
  v192 = 0;
  v9 = a2;
  v10 = a1;
  *(_QWORD *)v193 = VIDPN_MGR::GetContainingAdapter(a1, a2, a3, a4);
  v11 = *(PERESOURCE **)v193;
  v16 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)v193) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v17);
  }
  Src = 0LL;
  v196 = 0LL;
  *a6 = 0;
  v202 = 0LL;
  v18 = VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
          v10,
          v9,
          (VIDPN_MGR **)a4,
          &v205,
          &v190,
          (struct _DXGK_SET_TIMING_PATH_INFO **)&Src,
          &v196,
          a5,
          (unsigned int **)&v202);
  v23 = v18;
  if ( v18 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v24 + 24) = a4;
    *(_QWORD *)(v24 + 32) = v23;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v23;
  }
  v26 = v190;
  if ( !v190 )
  {
    v27 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    *(_QWORD *)(v27 + 24) = *((int *)v11 + 68);
    *(_QWORD *)(v27 + 32) = *((unsigned int *)v11 + 67);
    WdLogEvent5_WdWarning(v27);
    return (unsigned int)v23;
  }
  if ( *((_DWORD *)a5 + 2) || *((_DWORD *)a5 + 3) || *((_DWORD *)a5 + 5) )
  {
    v184 = 1;
  }
  else
  {
    v184 = 0;
    if ( !*((_DWORD *)a5 + 8) && !*((_DWORD *)a5 + 6) )
      return 0LL;
  }
  CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(
    &v197,
    v19);
  if ( v197 )
  {
    v30 = *((_QWORD *)v10 + 11);
    v195 = 0;
    if ( v30 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v30 + 32));
      v31 = (D3DKMDT_HVIDPN)*((_QWORD *)v10 + 11);
      v26 = v190;
    }
    else
    {
      v31 = 0LL;
    }
    v208 = v31;
    if ( a4 )
      v31 = (D3DKMDT_HVIDPN)a4;
    v198 = (D3DKMDT_HVIDPN)v26;
    v191 = v31;
    v32 = 56LL * v26;
    v201 = (DMMVIDPNTOPOLOGY *)(v31 + 24);
    if ( !is_mul_ok(v26, 0x38uLL) )
      v32 = -1LL;
    v33 = operator new(v32, 0x4E506456u, PagedPool);
    P = v33;
    if ( !v33 )
    {
      v35 = WdLogNewEntry5_WdLowResource(v34);
      *(_QWORD *)(v35 + 24) = v26;
      WdLogEvent5_WdLowResource(v35);
      v16 = -1073741801;
LABEL_258:
      auto_rc<DMMVIDPN const>::~auto_rc<DMMVIDPN const>((__int64 *)&v208);
      goto LABEL_259;
    }
    memmove(v33, Src, 56LL * v26);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v10 + 10) + 72LL));
    v36 = (__int64)v11[286];
    v37 = *((_QWORD *)v10 + 10);
    v199 = v37;
    if ( v36 )
      ADAPTER_RENDER::FlushScheduler(v36, 8, 0xFFFFFFFF, 0);
    v38 = 0;
    if ( LODWORD(v11[285]->Reserved2) )
    {
      do
      {
        v39 = 1 << v38;
        if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3)) & (1 << v38)) != 0 )
        {
          v40 = (__int64)v11[286];
          if ( v40 )
            ADAPTER_RENDER::FlushScheduler(v40, 8, v38, 0);
          if ( a7 )
          {
            if ( a8 )
            {
              v41 = (ADAPTER_DISPLAY *)v11[285];
              v42 = *(struct DXGDEVICE **)(3208LL * v38 + *((_QWORD *)v41 + 14) + 688);
              if ( v42 )
                ADAPTER_DISPLAY::DisablePrimaryOnDevice(v41, v42, v38);
            }
          }
        }
        if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 5)) & v39) != 0
          && v11[286]
          && *((_BYTE *)v11 + 2242) )
        {
          ADAPTER_DISPLAY::DisableMPOPlanes((ADAPTER_DISPLAY *)v11[285], v38);
          *((_DWORD *)a5 + 13) |= v39;
        }
        ++v38;
      }
      while ( v38 < LODWORD(v11[285]->Reserved2) );
      v37 = v199;
      v31 = v191;
      v10 = a1;
    }
    if ( *((_DWORD *)a5 + 4) )
      VIDPN_MGR::RequestPowerStateForTargets(v10, (const struct DMMVIDPN *)v31);
    v43 = DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v11);
    v47 = v196;
    v188 = v196;
    if ( v43 )
    {
      v48 = v184;
      v186 = 0;
      if ( v184 )
      {
        memset(&v213, 0, sizeof(v213));
        if ( v31 == (D3DKMDT_HVIDPN)-88LL )
          v213.hFunctionalVidPn = 0LL;
        else
          v213.hFunctionalVidPn = v31;
        v56 = Src;
        v57 = (ADAPTER_DISPLAY *)v11[285];
        v213.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v192;
        v213.PathCount = v190;
        v213.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
        v58 = (int)ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v57, &v213);
        DisplayScenarioJournalSetSetTimingPathInfo(56 * v190, v190, v56);
        if ( (int)v58 < 0 )
        {
          v60 = (_QWORD *)WdLogNewEntry5_WdError(v59, v44);
          v60[3] = *((int *)v11 + 68);
          v60[4] = *((unsigned int *)v11 + 67);
          v60[5] = v58;
          WdLogEvent5_WdError(v60);
          *((_DWORD *)a5 + 17) = -1;
          FillFailedStatus(a5, v58);
LABEL_220:
          v188 = v196;
          goto LABEL_221;
        }
        v47 = v188;
        goto LABEL_59;
      }
    }
    else
    {
      v186 = 1;
      if ( v184 || *((_DWORD *)a5 + 8) )
      {
        v48 = 1;
        v184 = 1;
        v49 = VIDPN_MGR::CommitVidPnOnAdapter(
                a1,
                v216,
                v217,
                (DMMVIDPN *)v31,
                v190,
                (__int64)Src,
                v196,
                a5,
                &v195,
                (__int64)v202,
                (int *)&v192,
                a7,
                a8);
        v51 = v49;
        if ( v49 < 0 )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdError(v50, v44);
          v52[3] = *((int *)v11 + 68);
          v52[4] = *((unsigned int *)v11 + 67);
          v52[5] = v51;
          WdLogEvent5_WdError(v52);
          *((_DWORD *)a5 + 17) = -1;
          FillFailedStatus(a5, v51);
          goto LABEL_221;
        }
        v47 = v188;
      }
      else
      {
        v48 = 0;
        v184 = 0;
      }
    }
    v56 = Src;
LABEL_59:
    if ( *((_DWORD *)VIDPN_MGR::GetContainingAdapter(a1, v44, v45, v46) + 69) != 4098
      || (ContainingAdapter = VIDPN_MGR::GetContainingAdapter(a1, v53, v61, v55),
          (int)DXGADAPTER::GetDriverVersion(ContainingAdapter) >= 1300) )
    {
      v195 = 0;
    }
    if ( v48 )
    {
      if ( v190 )
      {
        v63 = v47;
        v64 = v56 + 32;
        v65 = (char *)((_BYTE *)P - v56);
        v191 = v198;
        do
        {
          v66 = &v65[(_QWORD)v64 - 32];
          if ( VIDPN_MGR::CheckDdiSetTimingsViolationOnPathInfo(
                 (struct _DXGK_SET_TIMING_PATH_INFO *)v66,
                 (struct _DXGK_SET_TIMING_PATH_INFO *)(v64 - 32),
                 v61,
                 v55) )
          {
            if ( (*(_DWORD *)v64 & 0xF000000) == 0xD000000 )
            {
              v53 = (__int64)a6;
              LOBYTE(v54) = *a6 & 0xFD | (v217 != 1 ? 2 : 0);
              *a6 = v54;
            }
          }
          else
          {
            *((_OWORD *)v64 - 2) = *(_OWORD *)v66;
            *((_OWORD *)v64 - 1) = *((_OWORD *)v66 + 1);
            *(_OWORD *)v64 = *(_OWORD *)&v65[(_QWORD)v64];
            *((_QWORD *)v64 + 2) = *((_QWORD *)v66 + 6);
            *(_DWORD *)v64 = *(_DWORD *)v64 & 0xF0FFFFFF | 0xD000000;
            *((_DWORD *)a5 + *v63 + 18) = -1073741437;
            v54 = *v63;
            *((_DWORD *)a5 + 17) |= 1 << v54;
          }
          ++v63;
          v64 += 56;
          v191 = (D3DKMDT_HVIDPN)((char *)v191 - 1);
        }
        while ( v191 );
        v37 = v199;
        v11 = *(PERESOURCE **)v193;
        v48 = v184;
      }
      v67 = v192;
      if ( (v192 & 0xFFFFFFFE) != 0 )
      {
        v68 = WdLogNewEntry5_WdAssertion(v54, v53, v61, v55);
        *(_QWORD *)(v68 + 24) = (unsigned __int64)v192 >> 1;
        WdLogEvent5_WdAssertion(v68);
        v67 = v192;
      }
      if ( (v67 & 1) != 0 )
        *a6 |= 1u;
    }
    if ( v190 )
    {
      v69 = (char *)Src + 32;
      v191 = (D3DKMDT_HVIDPN)v188;
      *(_QWORD *)v193 = v198;
      do
      {
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                       (DMMVIDEOPRESENTTARGETSET *)v37,
                       *((unsigned int *)v69 - 8),
                       v61,
                       v55);
        v71 = TargetById;
        if ( TargetById )
        {
          if ( v48 )
          {
            if ( !v186 )
            {
              DxgkLogCodePointPacket(
                0x58u,
                *((_DWORD *)v69 - 8),
                v69[3] & 0xF | 0x80000000,
                *((_DWORD *)v69 - 2),
                *(__int64 *)((char *)v11 + 268));
              DxgkLogCodePointPacket(
                0x59u,
                *((_DWORD *)v69 - 8),
                *((_DWORD *)v69 + 4),
                0,
                *(__int64 *)((char *)v11 + 268));
            }
            if ( *(_DWORD *)(*((_QWORD *)v71 + 64) + 24LL) != (v69[3] & 0xF) )
              *((_DWORD *)a5 + 7) |= 1 << *(_DWORD *)v191;
            v72 = *((_QWORD *)v69 - 1);
            *(_DWORD *)(*((_QWORD *)v71 + 64) + 24LL) = v69[3] & 0xF;
            *(_QWORD *)(*((_QWORD *)v71 + 64) + 16LL) = v72;
            if ( (*(_DWORD *)v69 & 0xF000000) == 0xC000000 )
              DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v71, 1u);
            else
              DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v71, v72, v61, v55);
          }
          else
          {
            v54 = (*(_DWORD *)v69 ^ (*(_DWORD *)(*((_QWORD *)TargetById + 64) + 24LL) << 24)) & 0xF000000;
            *(_DWORD *)v69 ^= v54;
          }
        }
        ++v191;
        v69 += 56;
        --*(_QWORD *)v193;
      }
      while ( *(_QWORD *)v193 );
    }
    v73 = v11[285];
    v74 = 0;
    v193[0] = 0;
    if ( LODWORD(v73->Reserved2) )
    {
      v75 = v197;
      v76 = v188;
      while ( 1 )
      {
        v189 = 0;
        memset(v204, 0, sizeof(v204));
        v54 = v74;
        v61 = (unsigned int)(1 << v74);
        v187 = v61;
        if ( ((unsigned int)v61 & *((_DWORD *)a5 + 3)) != 0 )
        {
          v189 = 2;
        }
        else if ( ((unsigned int)v61 & *((_DWORD *)a5 + 8)) != 0 )
        {
          v189 = 4;
        }
        else if ( (*((_DWORD *)a5 + 2) & ~*((_DWORD *)a5 + 6) & (unsigned int)v61) != 0 )
        {
          v54 = ((unsigned int)v61 & *(_DWORD *)a5) != 0 ? 3 : 1;
          v189 = ((unsigned int)v61 & *(_DWORD *)a5) != 0 ? 3 : 1;
        }
        v53 = (unsigned int)(*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 8));
        if ( ((unsigned int)v53 & (unsigned int)v61) != 0 )
        {
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)v73, v74);
          v78 = v201;
          v79 = 0LL;
          v80 = 32LL;
          v81 = *((_OWORD *)DisplayModeInfo + 1);
          *(_OWORD *)v204 = *(_OWORD *)DisplayModeInfo;
          v82 = *((_OWORD *)DisplayModeInfo + 2);
          *(_OWORD *)&v204[16] = v81;
          v83 = (char *)*((_QWORD *)v201 + 3);
          *(_QWORD *)&v204[48] = *((_QWORD *)DisplayModeInfo + 6);
          *(_OWORD *)&v204[32] = v82;
          if ( v83 == (char *)v201 + 24 )
            goto LABEL_109;
          v83 -= 8;
          if ( !v83 )
            goto LABEL_109;
          v84 = (char *)v201 + 24;
          do
          {
            if ( *(_DWORD *)(*((_QWORD *)v83 + 11) + 24LL) == v74 )
            {
              v85 = *((_DWORD *)v83 + 26);
              if ( v85 < (int)v80 )
              {
                v79 = (DMMVIDPNPRESENTPATH *)v83;
                v80 = (unsigned int)v85;
              }
            }
            v86 = (char *)*((_QWORD *)v83 + 1);
            v83 = v86 - 8;
            if ( v86 == v84 )
              v83 = 0LL;
          }
          while ( v83 );
          if ( v79 )
          {
            DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(
              v79,
              (struct _D3DKMT_DISPLAYMODE *)v204,
              (__int64)v79,
              (__int64)v84);
          }
          else
          {
LABEL_109:
            v87 = (_QWORD *)WdLogNewEntry5_WdError(v83, v80);
            v87[3] = v74;
            v87[4] = v78;
            v87[5] = -1071774919LL;
            WdLogEvent5_WdError(v87);
          }
          v61 = v187;
        }
        else
        {
          v78 = v201;
        }
        if ( ((unsigned int)v61 & *((_DWORD *)a5 + 17)) != 0 )
          goto LABEL_191;
        if ( ((unsigned int)v61 & v195) == 0 )
          break;
LABEL_193:
        v73 = v11[285];
        v193[0] = ++v74;
        if ( v74 >= LODWORD(v73->Reserved2) )
        {
          v188 = v76;
          v37 = v199;
          goto LABEL_195;
        }
      }
      if ( ((unsigned int)v61 & *((_DWORD *)a5 + 8)) != 0 )
      {
        ADAPTER_DISPLAY::SetDisplayModeInfo(
          (PERESOURCE **)v11[285],
          v74,
          (const struct _DXGK_DISPLAYMODE_INFO *const)v204);
        OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
          (OUTPUTDUPL_CONTEXT **)v11[285][1].SystemResourcesList.Flink,
          v74,
          0LL,
          0LL,
          0,
          1);
        v211 = 11;
        v212 = 0LL;
        if ( (int)DxgkStatusChangeNotify(&v211, v88, v89) < 0 )
        {
          v92 = WdLogNewEntry5_WdAssertion(v90, v53, v91, v55);
          *(_QWORD *)(v92 + 24) = 2526LL;
          WdLogEvent5_WdAssertion(v92);
        }
        v61 = v187;
      }
      v54 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 5) | (unsigned int)(*((_DWORD *)a5 + 6) | *((_DWORD *)a5 + 7));
      if ( ((unsigned int)v54 & (unsigned int)v61) == 0 )
      {
LABEL_191:
        if ( v189 )
        {
          SharedWaiters = (int)v11[285][2].SharedWaiters;
          CurrentProcess = PsGetCurrentProcess(v54);
          ProcessImageFileName = (__int128 *)PsGetProcessImageFileName(CurrentProcess);
          VIDPN_MGR::CacheDisplayModeChangeRequest(
            (__int64)a1,
            v74,
            (__int64)v204,
            1,
            *((_DWORD *)a5 + v74 + 18),
            v189,
            SharedWaiters,
            ProcessImageFileName);
        }
        goto LABEL_193;
      }
      MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v78, v74, &v200);
      v97 = MostImportantVidPnPathTargetsFromSource + 0x80000000;
      if ( (int)v97 >= 0 && MostImportantVidPnPathTargetsFromSource != -1071774919 )
      {
        v98 = WdLogNewEntry5_WdAssertion(v97, v93, v95, v96);
        WdLogEvent5_WdAssertion(v98);
      }
      v99 = 0;
      v185 = 0;
      if ( MostImportantVidPnPathTargetsFromSource < 0 || (v100 = v200, v200 == -1) || (v101 = 0, !v190) )
      {
LABEL_131:
        v100 = -1;
      }
      else
      {
        while ( 1 )
        {
          if ( v74 == v76[v101] )
          {
            v102 = 56LL * v101;
            if ( v200 == *(_DWORD *)((char *)Src + v102)
              && (*(_DWORD *)((_BYTE *)Src + v102 + 32) & 0xF000000) == 0xE000000
              && (*(_DWORD *)((_BYTE *)Src + v102 + 12) & 4) != 0
              && (v187 & *((_DWORD *)a5 + 15)) == 0 )
            {
              break;
            }
          }
          if ( ++v101 >= v190 )
          {
            v99 = 0;
            goto LABEL_131;
          }
        }
        *((_DWORD *)a5 + 16) |= v187;
        v99 = 1;
        v185 = 1;
      }
      v103 = v11[285];
      v207 = 3208LL * v74;
      *(_DWORD *)((char *)&v103[1].SystemResourcesList.Blink[64].Flink + v207 + 4) = v100;
      ADAPTER_DISPLAY::SetVidPnSourceActive((ADAPTER_DISPLAY *)v11[285], v74, v99);
      ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)v11[285], v74, 0);
      v104 = v11[286];
      v191 = 0LL;
      if ( v104 )
      {
        v105 = (DXGADAPTER **)v11[285];
        Flink = v104[4].SystemResourcesList.Flink;
        SpinLock = v104[3].SpinLock;
        v191 = (D3DKMDT_HVIDPN)v104;
        v108 = ADAPTER_DISPLAY::GetDisplayModeInfo(v105, v193[0]);
        LOBYTE(v109) = v185;
        (*(void (__fastcall **)(struct _LIST_ENTRY *, _QWORD, __int64, const struct _DXGK_DISPLAYMODE_INFO *))(*(_QWORD *)(SpinLock + 8) + 432LL))(
          Flink,
          v193[0],
          v109,
          v108);
        v74 = v193[0];
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v191 + 51) + 8LL) + 776LL))(
          *((_QWORD *)v191 + 52),
          v193[0]);
      }
      else
      {
        v110 = *(_QWORD *)&v11[285][2].OwnerEntry.0;
        if ( v110 )
        {
          v111 = 2704LL * v74;
          v112 = (BLTQUEUE *)(v111 + *(_QWORD *)(v110 + 8));
          if ( v185 )
            BLTQUEUE::EnableVSync(v112);
          else
            BLTQUEUE::DisableVSync(v112);
          _InterlockedExchange((volatile __int32 *)(v111 + *(_QWORD *)(v110 + 8) + 856), 0);
          v76 = v196;
          v75 = v197;
        }
      }
      if ( (*((_DWORD *)a5 + 3) & v187) != 0 )
      {
        ADAPTER_DISPLAY::SetPartOfDesktop((ADAPTER_DISPLAY *)v11[285], v74, 0);
        ADAPTER_DISPLAY::SetContentRect((ADAPTER_DISPLAY *)v11[285], v74, &stru_1C00700C8);
        ADAPTER_DISPLAY::SetCddInterface((DXGADAPTER **)v11[285], v74, 0LL);
        goto LABEL_191;
      }
      if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v201, v74, &v206) < 0 || !v206 )
      {
        v113 = WdLogNewEntry5_WdAssertion(v54, v53, v61, v55);
        WdLogEvent5_WdAssertion(v113);
      }
      v114 = 0LL;
      if ( v11[286] )
      {
        if ( v186 )
        {
          DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((ADAPTER_DISPLAY *)v11[285], v74);
          v114 = DisplayedPrimaryAllocation;
          if ( DisplayedPrimaryAllocation )
          {
            v54 = *((unsigned int *)DisplayedPrimaryAllocation + 1);
            if ( (v54 & 0x10) != 0 )
              v114 = 0LL;
          }
        }
      }
      if ( (*((_DWORD *)a5 + 2) & v187) != 0 )
      {
        *(_DWORD *)&v204[44] = 1;
        *(_QWORD *)&v204[48] = 1LL;
        if ( v114 )
        {
          memset(&v210.Width, 0, 0x28uLL);
          v116 = (ADAPTER_RENDER *)v11[286];
          v210.hAllocation = (HANDLE)*((_QWORD *)v114 + 2);
          v193[0] = ADAPTER_RENDER::DdiDescribeAllocation(v116, &v210, v117);
          if ( (v193[0] & 0x80000000) != 0 )
          {
            v120 = (_QWORD *)WdLogNewEntry5_WdWarning(v54, v53, v61, v55);
            v120[4] = v74;
            v120[5] = (int)v193[0];
            v120[3] = v114;
            WdLogEvent5_WdWarning(v120);
          }
          else
          {
            if ( v210.Width != *(_DWORD *)v204
              || v210.Height != *(_DWORD *)&v204[4]
              || v210.Format != *(_DWORD *)&v204[8]
              || v210.RefreshRate.Numerator != *(_DWORD *)&v204[16]
              || v210.RefreshRate.Denominator != *(_DWORD *)&v204[20]
              || (v118 = ~(*(_DWORD *)&v204[40] >> 4),
                  v54 = v118 ^ (unsigned int)~(*((_DWORD *)v114 + 1) >> 12),
                  (((unsigned __int8)v118 ^ (unsigned __int8)~(*((_DWORD *)v114 + 1) >> 12)) & 1) != 0) )
            {
              v119 = WdLogNewEntry5_WdAssertion(v54, v53, v61, v55);
              WdLogEvent5_WdAssertion(v119);
            }
            *(D3DDDI_MULTISAMPLINGMETHOD *)&v204[44] = v210.MultisampleMethod;
            *(_DWORD *)&v204[52] = v210.PrivateDriverFormatAttribute;
          }
        }
      }
      if ( v185 )
      {
        v121 = 1;
        if ( v11[286] )
        {
          if ( v114 )
          {
            memset(v75, 0, 0x840uLL);
            *v75 = v74;
            *((_QWORD *)v75 + 2) = *((_QWORD *)v114 + 2);
            v122 = *((_QWORD *)v114 + 1);
            v123 = v191;
            (*(void (__fastcall **)(_QWORD, __int64, _DWORD *, _DWORD *))(*(_QWORD *)(*((_QWORD *)v191 + 54) + 8LL)
                                                                        + 216LL))(
              *((_QWORD *)v191 + 55),
              v122,
              v75 + 1,
              v75 + 2);
            v75[138] |= 1u;
            v124 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*((_QWORD *)v123 + 51) + 8LL) + 712LL))(
                     *((_QWORD *)v123 + 52),
                     v75);
            v127 = v124;
            if ( v124 < 0 )
            {
LABEL_166:
              v128 = (_QWORD *)WdLogNewEntry5_WdError(v126, v125);
              v128[3] = v11;
              v128[4] = v74;
              v128[5] = v127;
              WdLogEvent5_WdError(v128);
              *((_DWORD *)a5 + v74 + 18) = v127;
              *((_DWORD *)a5 + 17) |= v187;
              goto LABEL_191;
            }
            v121 = 1;
          }
          else
          {
            v121 = 0;
          }
        }
        if ( !v186
          || v121
          && ((VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v11[285], v74),
               ((__int64)v11[285][3].SystemResourcesList.Blink & 2) != 0)
           || v217 == 4 && VidPnSourceOwnerType == 1)
          && (*((_DWORD *)v11 + 69) != 1297040209 || (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)v11) > 1300) )
        {
          if ( v11[286] )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v191 + 51) + 8LL) + 784LL))(
              *((_QWORD *)v191 + 52),
              v74);
          }
          else
          {
            v131 = *(_QWORD *)&v11[285][2].OwnerEntry.0;
            if ( v131 )
            {
              _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v131 + 8) + 2704LL * v74 + 856), 1);
              v76 = v196;
              v75 = v197;
            }
          }
        }
        else
        {
          v130 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)v11[285], v74, 1u, 0x800u, 0);
          v127 = v130;
          if ( v130 < 0 )
            goto LABEL_166;
        }
        ADAPTER_DISPLAY::SetGammaRamp((ADAPTER_DISPLAY *)v11[285], v74, 0LL);
        if ( a7 && a8 )
          ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
            (ADAPTER_DISPLAY *)v11[285],
            v74,
            *(struct DXGADAPTER **)(*((_QWORD *)a7 + 2) + 16LL));
      }
      if ( (*((_DWORD *)a5 + 2) & v187) != 0 )
      {
        ADAPTER_DISPLAY::SetPartOfDesktop((ADAPTER_DISPLAY *)v11[285], v74, 1u);
        ADAPTER_DISPLAY::SetDisplayModeInfo(
          (PERESOURCE **)v11[285],
          v74,
          (const struct _DXGK_DISPLAYMODE_INFO *const)v204);
        v132 = v11[285];
        if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v132->OwnerTable) )
        {
          v137 = WdLogNewEntry5_WdAssertion(v134, v133, v135, v136);
          *(_QWORD *)(v137 + 24) = 5040LL;
          WdLogEvent5_WdAssertion(v137);
        }
        if ( v74 >= LODWORD(v132->Reserved2) )
        {
          v138 = WdLogNewEntry5_WdAssertion(v134, v133, v135, v136);
          *(_QWORD *)(v138 + 24) = 5041LL;
          WdLogEvent5_WdAssertion(v138);
        }
        *(_DWORD *)((char *)&v132[1].SystemResourcesList.Blink[64].Blink + v207) = *(_DWORD *)&v204[12];
        ADAPTER_DISPLAY::DetermineScalingCapabilities((ADAPTER_DISPLAY *)v11[285], v74);
      }
      goto LABEL_191;
    }
LABEL_195:
    if ( v190 )
    {
      v142 = v188;
      v143 = (char *)Src + 12;
      do
      {
        v54 = *v142;
        v144 = v195;
        if ( !_bittest(&v144, v54) )
        {
          v145 = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                   (DMMVIDEOPRESENTTARGETSET *)v37,
                   *((unsigned int *)v143 - 3),
                   v61,
                   v55);
          v146 = v145;
          if ( v145 )
          {
            if ( (*(_DWORD *)v143 & 4) == 0
              || (*((_DWORD *)v143 + 5) & 0xF000000) != 0xE000000
              || (v147 = (unsigned int)(1 << *v142), ((unsigned int)v147 & *((_DWORD *)a5 + 15)) != 0)
              || ((unsigned int)v147 & *((_DWORD *)a5 + 17)) != 0 )
            {
              v147 = 0LL;
            }
            else
            {
              LOBYTE(v147) = 1;
            }
            DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(v145, v147, v61, v55);
            if ( !v186 && *((_BYTE *)v146 + 408) && v143[36] != -1 )
            {
              v148 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)v11[285], *v142, 0, 0x800u, 0);
              v150 = v148;
              if ( v148 < 0 )
              {
                v151 = (_QWORD *)WdLogNewEntry5_WdError(v149, v53);
                v151[3] = v11;
                v151[4] = *v188;
                v151[5] = v150;
                WdLogEvent5_WdError(v151);
              }
              v152 = v11[286];
              v142 = v188;
              if ( v152 )
              {
                (*(void (__fastcall **)(struct _LIST_ENTRY *, _QWORD))(*(_QWORD *)(v152[3].SpinLock + 8) + 784LL))(
                  v152[4].SystemResourcesList.Flink,
                  *v188);
              }
              else
              {
                v54 = *(_QWORD *)&v11[285][2].OwnerEntry.0;
                if ( v54 )
                {
                  v54 = *(_QWORD *)(v54 + 8);
                  v53 = 2704LL * *v188;
                  _InterlockedExchange((volatile __int32 *)(v53 + v54 + 856), 1);
                }
              }
            }
            *((_BYTE *)v146 + 408) = 0;
          }
          else if ( (*(_DWORD *)v143 & 4) != 0 )
          {
            v153 = WdLogNewEntry5_WdAssertion(v54, v53, v61, v55);
            WdLogEvent5_WdAssertion(v153);
          }
          if ( (*((_DWORD *)v143 + 1) & 1) != 0 )
          {
            v54 = *v142;
            *((_DWORD *)a5 + 13) |= 1 << v54;
          }
        }
        ++v142;
        v143 += 56;
        v154 = v198 == (D3DKMDT_HVIDPN)1;
        v198 = (D3DKMDT_HVIDPN)((char *)v198 - 1);
        v188 = v142;
      }
      while ( !v154 );
      goto LABEL_220;
    }
LABEL_221:
    v155 = (ADAPTER_DISPLAY *)v11[285];
    v156 = 0;
    if ( *((_DWORD *)v155 + 20) )
    {
      v157 = a7;
      do
      {
        v54 = v156;
        v158 = 1 << v156;
        if ( ((1 << v156) & *((_DWORD *)a5 + 12)) != 0 )
          ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(v155, v156);
        if ( (v158 & *((_DWORD *)a5 + 13)) != 0 )
          DXGADAPTER::NotifyMultiPlaneOverlayDisable((DXGADAPTER *)v11, v156);
        if ( v157 && !v186 )
        {
          if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)v11[285], v156, 0)
            && ADAPTER_DISPLAY::IsCddPrimaryStale((ADAPTER_DISPLAY *)v11[285], v156) )
          {
            ADAPTER_DISPLAY::DestroyCddAllocations(v159, v157, v156);
          }
          v160 = (DXGADAPTER **)v11[285];
          v161 = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(v160, v156);
          ADAPTER_DISPLAY::SetCddDisplayMode((PERESOURCE **)v160, v156, v161);
          v157 = a7;
        }
        if ( (v158 & *((_DWORD *)a5 + 17)) != 0 )
        {
          if ( a4 )
          {
            v162 = a4 + 152;
            LOBYTE(v162) = 2;
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
              (__int64)v214,
              (a4 + 152) & -(__int64)(a4 != -96),
              v162,
              v55,
              (__int64)v183,
              *(_QWORD *)(a4 + 136));
            v163 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(a4 + 96), v156);
            v166 = 0x80000000LL;
            v167 = v163 + 0x80000000;
            if ( (int)v167 >= 0 && v163 != -1071774919 )
            {
              v168 = WdLogNewEntry5_WdAssertion(v167, 0x80000000LL, v164, v165);
              WdLogEvent5_WdAssertion(v168);
            }
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
              (ApplyPermissionWithinThisScope *)v214,
              v166,
              v164,
              v165);
            v157 = a7;
          }
          if ( v157 )
            ADAPTER_DISPLAY::DestroyCddAllocations((ADAPTER_DISPLAY *)v11[285], v157, v156);
          ADAPTER_DISPLAY::SetPartOfDesktop((ADAPTER_DISPLAY *)v11[285], v156, 0);
          ADAPTER_DISPLAY::SetContentRect((ADAPTER_DISPLAY *)v11[285], v156, &stru_1C00700C8);
          ADAPTER_DISPLAY::SetCddInterface((DXGADAPTER **)v11[285], v156, 0LL);
        }
        v155 = (ADAPTER_DISPLAY *)v11[285];
        ++v156;
      }
      while ( v156 < *((_DWORD *)v155 + 20) );
      v37 = v199;
    }
    v171 = *((_QWORD *)DXGGLOBAL::GetGlobal(v54, v53, (__int64)v155, v55) + 117);
    if ( *(_BYTE *)v171 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v170, v169, v172, v173) + 24) = 206LL;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v209, *(struct DXGFASTMUTEX *const *)(v171 + 8), v172, v173);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v209);
      v177 = (_BYTE *)(v171 + 16);
      v178 = 18LL;
      do
      {
        *v177 = 0;
        v177 += 48;
        --v178;
      }
      while ( v178 );
      ++*(_DWORD *)(v171 + 880);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v174, v175, v176) + 24) = 228LL;
      if ( v209[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v209, v179, v180, v181);
    }
    if ( Src )
      ExFreePoolWithTag(Src, 0);
    ExFreePoolWithTag(P, 0);
    if ( v188 )
      ExFreePoolWithTag(v188, 0);
    if ( v202 )
      ExFreePoolWithTag(v202, 0);
    if ( v37 )
      ReferenceCounted::Release((ReferenceCounted *)(v37 + 64), v182);
    goto LABEL_258;
  }
  v29 = WdLogNewEntry5_WdLowResource(v28);
  WdLogEvent5_WdLowResource(v29);
  v16 = -1073741801;
LABEL_259:
  CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::~CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(&v197);
  return v16;
}
