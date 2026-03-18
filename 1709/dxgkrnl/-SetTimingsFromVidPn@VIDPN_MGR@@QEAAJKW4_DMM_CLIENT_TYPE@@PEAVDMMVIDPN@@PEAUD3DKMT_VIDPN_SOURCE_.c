/*
 * XREFs of ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C
 * Callers:
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BB5F0 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E1A60 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmPowerOnTargetsFromSourceIfNecessary@@YAJQEAXI@Z @ 0x1C00F8C98 (-DmmPowerOnTargetsFromSourceIfNecessary@@YAJQEAXI@Z.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0103AAC (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C01EDC70 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C01F2644 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0002030 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C000586C (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0006B90 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1C0006D08 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0006D44 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0006E34 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0006E8C (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C0006FEC (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00075FC (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0007644 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0007718 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C000EBC4 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C000EF94 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??1?$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ @ 0x1C001E168 (--1-$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ.c)
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C001E860 (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C0020D88 (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     McTemplateK0pqqqqqqqqqqqqqqq @ 0x1C0035BC8 (McTemplateK0pqqqqqqqqqqqqqqq.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00791B8 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C007B478 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C007C440 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00833BC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00844BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0090640 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00A38D4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00A4228 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A56CC (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5730 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00A5FC0 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C00A7880 (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00A8B60 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00AB964 (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00ABA0C (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C00AC3EC (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00AD12C (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00ADA40 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00ADCA0 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00ADE98 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00ADF10 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C00AE718 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C00B0810 (-SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C00B0874 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     DxgkStatusChangeNotify @ 0x1C00E85B0 (DxgkStatusChangeNotify.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00F8784 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0174158 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01774BC (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C017CE74 (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C01F57F0 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::SetTimingsFromVidPn(
        __int64 *a1,
        unsigned int a2,
        int a3,
        __int64 *a4,
        struct D3DKMT_VIDPN_SOURCE_MASKS *a5,
        _BYTE *a6,
        unsigned __int8 a7,
        struct DXGDEVICE *a8,
        struct COREDEVICEACCESS *a9)
{
  PERESOURCE *v12; // r13
  __int64 v13; // rcx
  unsigned int v14; // esi
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  D3DKMDT_HVIDPN v26; // r12
  SIZE_T v27; // rax
  PVOID v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rbx
  ADAPTER_RENDER *v32; // r8
  __int64 v33; // rcx
  bool v34; // di
  __int64 v35; // r8
  __int64 v36; // rax
  unsigned int v37; // r10d
  unsigned int v38; // r11d
  unsigned int v39; // r15d
  unsigned int v40; // edi
  unsigned int v41; // ecx
  unsigned int Reserved2; // r9d
  int v43; // edx
  unsigned int v44; // edi
  int v45; // ebx
  bool v46; // r12
  int v47; // r15d
  __int64 v48; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int8 v50; // r9
  unsigned __int8 v51; // al
  char v52; // di
  __int64 v53; // r15
  _BYTE *v54; // r12
  char *v55; // rcx
  DXGADAPTER *v56; // rax
  _BYTE *v57; // r9
  PERESOURCE *v58; // r8
  char *v59; // rdx
  unsigned __int8 v60; // al
  int v61; // eax
  __int64 v62; // rcx
  _QWORD *v63; // rax
  ADAPTER_DISPLAY *v64; // rcx
  unsigned int v65; // eax
  __int64 v66; // rcx
  _QWORD *v67; // rax
  unsigned int *v68; // rdx
  char *v69; // rdi
  signed __int64 v70; // r12
  DXGADAPTER *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  bool v75; // zf
  __int64 v76; // rax
  int *v77; // rax
  char *v78; // rdi
  int v79; // eax
  int v80; // edx
  int v81; // r12d
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  DMMVIDEOPRESENTTARGET *v83; // r15
  __int64 v84; // rdx
  int v85; // eax
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  PERESOURCE v87; // rdi
  unsigned int v88; // r12d
  int v89; // ebx
  __int64 v90; // rcx
  int v91; // r15d
  __int64 v92; // rdx
  const struct _DXGK_DISPLAYMODE_INFO *v93; // rax
  DMMVIDPNTOPOLOGY *v94; // rdi
  DMMVIDPNPRESENTPATH *v95; // r8
  int v96; // edx
  __int128 v97; // xmm1
  __int128 v98; // xmm0
  char *v99; // rcx
  DMMVIDPNTOPOLOGY *v100; // rax
  _QWORD *v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rax
  int MostImportantVidPnPathTargetsFromSource; // edi
  __int64 v105; // rcx
  __int64 v106; // rax
  unsigned __int8 v107; // r10
  unsigned int v108; // edx
  _DWORD *v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // rcx
  _QWORD *v112; // rax
  unsigned int v113; // edx
  PERESOURCE v114; // rax
  __int64 v115; // rax
  struct DXGADAPTERALLOCATION *v116; // rdi
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  ADAPTER_RENDER *v118; // rcx
  __int64 v119; // r8
  int v120; // eax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r15
  int v125; // eax
  __int64 v126; // rax
  _QWORD *v127; // rax
  PERESOURCE v128; // rdi
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rax
  int v132; // r15d
  int SharedWaiters; // edi
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  unsigned int *v136; // r12
  char *v137; // rdi
  DMMVIDEOPRESENTTARGET *v138; // rax
  __int64 v139; // rcx
  DMMVIDEOPRESENTTARGET *v140; // r15
  int v141; // edx
  int v142; // eax
  __int64 v143; // rcx
  __int64 v144; // r12
  _QWORD *v145; // rax
  unsigned int *v146; // rcx
  PERESOURCE v147; // rcx
  __int64 v148; // rcx
  __int64 v149; // rax
  char *v150; // r12
  __int64 v151; // rcx
  ADAPTER_DISPLAY *v152; // r8
  unsigned int v153; // r15d
  struct DXGDEVICE *v154; // rdi
  int v155; // r12d
  ADAPTER_DISPLAY *v156; // rcx
  DXGADAPTER **v157; // rdi
  const struct _D3DKMT_DISPLAYMODE *DisplayModeInfo; // rax
  int v159; // eax
  __int64 v160; // rcx
  __int64 v161; // r9
  __int64 v162; // rdi
  _QWORD *v163; // rax
  int v164; // eax
  __int64 v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // rdi
  __int64 v170; // rdx
  _BYTE *v171; // rax
  __int64 v172; // rcx
  unsigned int *v173; // [rsp+28h] [rbp-100h]
  unsigned int *v174; // [rsp+28h] [rbp-100h]
  struct _DXGK_SET_TIMING_PATH_INFO **v175; // [rsp+30h] [rbp-F8h]
  unsigned int **v176; // [rsp+38h] [rbp-F0h]
  struct D3DKMT_VIDPN_SOURCE_MASKS *v177; // [rsp+40h] [rbp-E8h]
  unsigned int **v178; // [rsp+48h] [rbp-E0h]
  char v179; // [rsp+A8h] [rbp-80h]
  char v180; // [rsp+A8h] [rbp-80h]
  unsigned __int8 IsLegacyDisplayStateSynchronization; // [rsp+A9h] [rbp-7Fh]
  char v182; // [rsp+A9h] [rbp-7Fh]
  unsigned int v183; // [rsp+ACh] [rbp-7Ch] BYREF
  PVOID v184; // [rsp+B0h] [rbp-78h]
  bool v185; // [rsp+B8h] [rbp-70h]
  unsigned int v186; // [rsp+BCh] [rbp-6Ch] BYREF
  int v187[2]; // [rsp+C0h] [rbp-68h]
  void *Src; // [rsp+C8h] [rbp-60h] BYREF
  unsigned int *v189; // [rsp+D0h] [rbp-58h]
  int v190; // [rsp+D8h] [rbp-50h] BYREF
  PERESOURCE *ContainingAdapter; // [rsp+E0h] [rbp-48h]
  unsigned int v192; // [rsp+E8h] [rbp-40h] BYREF
  PERESOURCE *v193; // [rsp+F0h] [rbp-38h]
  __int64 v194; // [rsp+F8h] [rbp-30h]
  DMMVIDPNTOPOLOGY *v195; // [rsp+100h] [rbp-28h]
  PVOID P; // [rsp+108h] [rbp-20h]
  unsigned int *v197; // [rsp+110h] [rbp-18h] BYREF
  PVOID v198; // [rsp+118h] [rbp-10h] BYREF
  ADAPTER_RENDER *v199[2]; // [rsp+120h] [rbp-8h] BYREF
  _BYTE v200[56]; // [rsp+130h] [rbp+8h] BYREF
  unsigned int v201; // [rsp+168h] [rbp+40h] BYREF
  unsigned __int64 v202; // [rsp+170h] [rbp+48h] BYREF
  D3DKMDT_HVIDPN v203; // [rsp+178h] [rbp+50h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v204; // [rsp+180h] [rbp+58h] BYREF
  int v205; // [rsp+1B0h] [rbp+88h] BYREF
  __int64 v206; // [rsp+1B8h] [rbp+90h]
  _BYTE v207[16]; // [rsp+1C0h] [rbp+98h] BYREF
  _DXGKARG_SETTIMINGSFROMVIDPN v208; // [rsp+1D0h] [rbp+A8h] BYREF
  _BYTE v209[96]; // [rsp+1F8h] [rbp+D0h] BYREF

  v186 = 0;
  ContainingAdapter = (PERESOURCE *)VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
  v12 = ContainingAdapter;
  v14 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(ContainingAdapter) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v15);
  }
  Src = 0LL;
  v197 = 0LL;
  *a6 = 0;
  v198 = 0LL;
  v16 = VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
          (VIDPN_MGR *)a1,
          a2,
          (struct DMMVIDPN *const)a4,
          &v201,
          &v183,
          (struct _DXGK_SET_TIMING_PATH_INFO **)&Src,
          &v197,
          a5,
          (unsigned int **)&v198);
  v20 = v16;
  v187[0] = v16;
  if ( v16 < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v21 + 24) = a4;
    *(_QWORD *)(v21 + 32) = v20;
    WdLogEvent5_WdError(v21);
    return (unsigned int)v20;
  }
  v23 = v183;
  if ( !v183 )
  {
    v24 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v24 + 24) = *((int *)v12 + 68);
    *(_QWORD *)(v24 + 32) = *((unsigned int *)v12 + 67);
    WdLogEvent5_WdWarning(v24);
    return (unsigned int)v20;
  }
  if ( *((_QWORD *)a5 + 1) || *((_DWORD *)a5 + 6) )
  {
    v179 = 1;
  }
  else
  {
    v179 = 0;
    if ( !*((_DWORD *)a5 + 10) && !*((_DWORD *)a5 + 8) )
      return 0LL;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v178) = *((_DWORD *)a5 + 5);
    LODWORD(v177) = *((_DWORD *)a5 + 3);
    LODWORD(v176) = *((_DWORD *)a5 + 2);
    LODWORD(v175) = *((_DWORD *)a5 + 1);
    LODWORD(v173) = *(_DWORD *)a5;
    McTemplateK0pqqqqqqqqqqqqqqq(
      (unsigned int)v176,
      v17,
      v19,
      v12,
      v173,
      v175,
      v176,
      v177,
      v178,
      *((_DWORD *)a5 + 6),
      *((_DWORD *)a5 + 7),
      *((_DWORD *)a5 + 8),
      *((_DWORD *)a5 + 10),
      *((_DWORD *)a5 + 12),
      *((_DWORD *)a5 + 13),
      *((_DWORD *)a5 + 14),
      *((_DWORD *)a5 + 16),
      *((_DWORD *)a5 + 17),
      *((_DWORD *)a5 + 36));
  }
  v25 = a1[11];
  v190 = 0;
  if ( v25 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v25 + 32));
    v26 = (D3DKMDT_HVIDPN)a1[11];
    v23 = v183;
  }
  else
  {
    v26 = 0LL;
  }
  v203 = v26;
  v193 = (PERESOURCE *)v23;
  if ( a4 )
    v26 = (D3DKMDT_HVIDPN)a4;
  v184 = v26;
  v195 = (DMMVIDPNTOPOLOGY *)(v26 + 24);
  v27 = 56 * v23;
  if ( !is_mul_ok(v23, 0x38uLL) )
    v27 = -1LL;
  v28 = operator new(v27, 0x4E506456u, PagedPool);
  P = v28;
  if ( v28 )
  {
    memmove(v28, Src, 56 * v23);
    _InterlockedIncrement((volatile signed __int32 *)(a1[10] + 72));
    v31 = a1[10];
    v32 = (ADAPTER_RENDER *)v12[289];
    v194 = v31;
    v199[1] = v32;
    LODWORD(v199[0]) = 0;
    IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v12);
    v34 = (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)v12) < 2200;
    v185 = v34;
    if ( !v35 )
      goto LABEL_44;
    if ( a7 )
    {
      if ( *(_DWORD *)(v35 + 524) )
        goto LABEL_31;
    }
    else if ( !*(_DWORD *)(v35 + 524) )
    {
      goto LABEL_31;
    }
    v36 = WdLogNewEntry5_WdAssertion(v33);
    *(_QWORD *)(v36 + 24) = 2388LL;
    WdLogEvent5_WdAssertion(v36);
LABEL_31:
    if ( v34 )
    {
      ADAPTER_RENDER::FlushScheduler((__int64)v12[289], 8, 0xFFFFFFFF, 0);
    }
    else
    {
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v41 = 0;
      Reserved2 = (unsigned int)v12[288]->Reserved2;
      if ( Reserved2 )
      {
        do
        {
          v43 = 1 << v41;
          if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & (1 << v41)) != 0 )
          {
            v37 |= v43;
            if ( !IsLegacyDisplayStateSynchronization )
              v39 |= v43;
          }
          else if ( (v43 & *(_DWORD *)a5) != 0 )
          {
            v38 |= v43;
            if ( !a7 )
              v40 |= v43;
          }
          ++v41;
        }
        while ( v41 < Reserved2 );
        v31 = v194;
        v26 = (D3DKMDT_HVIDPN)v184;
      }
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays((ADAPTER_RENDER *)v12[289], v37, v38, v39, v40);
      *((_DWORD *)a5 + 15) |= v39;
      if ( v40 )
        CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)v199, v40);
    }
LABEL_44:
    v44 = 0;
    if ( LODWORD(v12[288]->Reserved2) )
    {
      v45 = (int)v199[0];
      v46 = v185;
      do
      {
        v47 = 1 << v44;
        if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3)) & (1 << v44)) != 0 )
        {
          v48 = (__int64)v12[289];
          if ( v48 && v46 )
            ADAPTER_RENDER::FlushScheduler(v48, 8, v44, 0);
          if ( a8 )
          {
            if ( a9 )
            {
              Flink = v12[288][1].SystemResourcesList.Blink[235 * v44 + 43].Flink;
              if ( Flink )
              {
                if ( Flink[104].Blink == Flink[1].Flink[1].Flink )
                {
                  if ( v45 || (v50 = 0, a7) )
                    v50 = 1;
                  ADAPTER_DISPLAY::DisablePrimaryOnDevice(
                    (ADAPTER_DISPLAY *)v12[288],
                    (struct DXGDEVICE *)Flink,
                    v44,
                    v50);
                }
              }
            }
          }
        }
        if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & v47) != 0
          && v12[289]
          && *((_BYTE *)v12 + 2266)
          && IsLegacyDisplayStateSynchronization )
        {
          ADAPTER_DISPLAY::DisableMPOPlanes((ADAPTER_DISPLAY *)v12[288], v44, 0);
          *((_DWORD *)a5 + 15) |= v47;
        }
        ++v44;
      }
      while ( v44 < LODWORD(v12[288]->Reserved2) );
      v31 = v194;
      v26 = (D3DKMDT_HVIDPN)v184;
    }
    if ( *((_DWORD *)a5 + 5) )
      VIDPN_MGR::RequestPowerStateForTargets((VIDPN_MGR *)a1, (const struct DMMVIDPN *)v26);
    v51 = DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v12);
    v184 = v197;
    if ( v51 )
    {
      v52 = v179;
      v182 = 0;
      if ( v179 )
      {
        memset(&v208, 0, sizeof(v208));
        if ( v26 == (D3DKMDT_HVIDPN)-88LL )
          v208.hFunctionalVidPn = 0LL;
        else
          v208.hFunctionalVidPn = v26;
        v54 = Src;
        v64 = (ADAPTER_DISPLAY *)v12[288];
        v208.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v186;
        v208.PathCount = v183;
        v208.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
        v65 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v64, &v208);
        v53 = (int)v65;
        DisplayScenarioJournalSetSetTimingPathInfo(v65, 56 * v183, v183, v54);
        if ( (int)v53 < 0 )
        {
          v67 = (_QWORD *)WdLogNewEntry5_WdError(v66);
          v67[3] = *((int *)v12 + 68);
          v67[4] = *((unsigned int *)v12 + 67);
          v67[5] = v53;
          WdLogEvent5_WdError(v67);
        }
        goto LABEL_73;
      }
    }
    else
    {
      v182 = 1;
      if ( v179 || *((_DWORD *)a5 + 10) )
      {
        v52 = 1;
        v179 = 1;
        if ( a7 || (v60 = 0, LODWORD(v199[0])) )
          v60 = 1;
        v61 = VIDPN_MGR::CommitVidPnOnAdapter(
                (VIDPN_MGR *)a1,
                a2,
                a3,
                (__int64)v26,
                v183,
                (__int64)Src,
                v197,
                a5,
                &v190,
                (__int64)v198,
                (int *)&v186,
                a8,
                a9,
                v60);
        v53 = v61;
        if ( v61 < 0 )
        {
          v63 = (_QWORD *)WdLogNewEntry5_WdError(v62);
          v63[3] = *((int *)v12 + 68);
          v63[4] = *((unsigned int *)v12 + 67);
          v63[5] = v53;
          WdLogEvent5_WdError(v63);
        }
        goto LABEL_72;
      }
      v52 = 0;
      v179 = 0;
    }
    LODWORD(v53) = v187[0];
LABEL_72:
    v54 = Src;
LABEL_73:
    if ( *((_DWORD *)VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1) + 69) != 4098
      || (v56 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1), (int)DXGADAPTER::GetDriverVersion(v56) >= 1300) )
    {
      v190 = 0;
    }
    if ( v52 )
    {
      if ( (int)v53 >= 0 )
      {
        v57 = P;
      }
      else
      {
        *((_DWORD *)a5 + 19) = -1;
        FillFailedStatus(a5, v53);
        v57 = P;
        if ( v183 )
        {
          v58 = v193;
          v55 = v54 + 16;
          v59 = (char *)((_BYTE *)P - v54);
          do
          {
            *((_OWORD *)v55 - 1) = *(_OWORD *)&v55[(_QWORD)v59 - 16];
            *(_OWORD *)v55 = *(_OWORD *)&v55[(_QWORD)v59];
            *((_OWORD *)v55 + 1) = *(_OWORD *)&v55[(_QWORD)v59 + 16];
            *((_QWORD *)v55 + 4) = *(_QWORD *)&v55[(_QWORD)v59 + 32];
            *((_DWORD *)v55 + 4) = *((_DWORD *)v55 + 4) & 0xF0FFFFFF | 0xD000000;
            *(_DWORD *)v55 |= 1u;
            v55 += 56;
            v58 = (PERESOURCE *)((char *)v58 - 1);
          }
          while ( v58 );
        }
        v186 = 1;
      }
      if ( v183 )
      {
        v68 = (unsigned int *)v184;
        v69 = v54 + 4;
        v70 = v57 - (_BYTE *)Src;
        v189 = (unsigned int *)v184;
        *(_QWORD *)v187 = v193;
        while ( 1 )
        {
          if ( (int)v53 < 0 )
            goto LABEL_113;
          v71 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
          if ( !DXGADAPTER::UsingSetTimingsFromVidPn(v71) )
            goto LABEL_112;
          if ( *(_DWORD *)&v69[v70 - 4] != *((_DWORD *)v69 - 1)
            || *(_DWORD *)&v69[v70] != *(_DWORD *)v69
            || *(_DWORD *)&v69[v70 + 4] != *((_DWORD *)v69 + 1)
            || *(_DWORD *)&v69[v70 + 8] != *((_DWORD *)v69 + 2) )
          {
            break;
          }
          if ( *((_DWORD *)v69 + 3) >= 2u || *((_DWORD *)v69 + 7) >= 0x10000000u || v69[47] )
          {
            v72 = WdLogNewEntry5_WdAssertion(v55);
            *(_QWORD *)(v72 + 24) = *((unsigned int *)v69 - 1);
            WdLogEvent5_WdAssertion(v72);
          }
          if ( !*(_QWORD *)(v69 + 20) )
          {
            v73 = WdLogNewEntry5_WdAssertion(v55);
            v74 = *((unsigned int *)v69 - 1);
LABEL_132:
            *(_QWORD *)(v73 + 24) = v74;
            goto LABEL_133;
          }
          v55 = (char *)(v69[31] & 0xF);
          if ( (unsigned int)((_DWORD)v55 - 12) <= 2 && ((v69[v70 + 8] & 3) != 3 || (_DWORD)v55 == 14) )
          {
LABEL_112:
            v68 = v189;
LABEL_113:
            if ( (*((_DWORD *)v69 + 7) & 0xF000000) == 0xD000000 )
            {
              LOBYTE(v55) = *a6 & 0xFD | (a3 != 1 ? 2 : 0);
              *a6 = (_BYTE)v55;
            }
            goto LABEL_115;
          }
          v73 = WdLogNewEntry5_WdAssertion(v55);
          *(_QWORD *)(v73 + 24) = HIBYTE(*((_DWORD *)v69 + 7)) & 0xF;
          *(_QWORD *)(v73 + 32) = *((unsigned int *)v69 - 1);
LABEL_133:
          WdLogEvent5_WdAssertion(v73);
          v68 = v189;
          *(_OWORD *)(v69 - 4) = *(_OWORD *)&v69[v70 - 4];
          *(_OWORD *)(v69 + 12) = *(_OWORD *)&v69[v70 + 12];
          *(_OWORD *)(v69 + 28) = *(_OWORD *)&v69[v70 + 28];
          *(_QWORD *)(v69 + 44) = *(_QWORD *)&v69[v70 + 44];
          *((_DWORD *)v69 + 7) = *((_DWORD *)v69 + 7) & 0xF0FFFFFF | 0xD000000;
          *((_DWORD *)a5 + *v68 + 20) = -1073741437;
          v55 = (char *)*v68;
          *((_DWORD *)a5 + 19) |= 1 << (char)v55;
LABEL_115:
          ++v68;
          v69 += 56;
          v75 = (*(_QWORD *)v187)-- == 1LL;
          v189 = v68;
          if ( v75 )
          {
            v31 = v194;
            v12 = ContainingAdapter;
            goto LABEL_117;
          }
        }
        v73 = WdLogNewEntry5_WdAssertion(v55);
        v74 = *(unsigned int *)&v69[v70 - 4];
        goto LABEL_132;
      }
LABEL_117:
      if ( (v186 & 0xFFFFFFFE) != 0 )
      {
        v76 = WdLogNewEntry5_WdAssertion(v55);
        *(_QWORD *)(v76 + 24) = (unsigned __int64)v186 >> 1;
        WdLogEvent5_WdAssertion(v76);
      }
      if ( (v186 & 1) != 0 )
        *a6 |= 1u;
    }
    if ( v183 )
    {
      v77 = (int *)v184;
      v78 = (char *)Src + 32;
      *(_QWORD *)v187 = v184;
      ContainingAdapter = v193;
      do
      {
        v79 = *v77;
        v80 = *((_DWORD *)v78 - 8);
        v81 = 1 << v79;
        LODWORD(v189) = v79;
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v31, v80);
        v83 = TargetById;
        if ( TargetById )
        {
          if ( v179 )
          {
            if ( !v182 )
            {
              DxgkLogCodePointPacket(
                0x58u,
                *((_DWORD *)v78 - 8),
                v78[3] & 0xF | 0x80000000,
                *((_DWORD *)v78 - 2),
                *(__int64 *)((char *)v12 + 268));
              DxgkLogCodePointPacket(
                0x59u,
                *((_DWORD *)v78 - 8),
                *((_DWORD *)v78 + 4),
                0,
                *(__int64 *)((char *)v12 + 268));
            }
            if ( *(_DWORD *)(*((_QWORD *)v83 + 64) + 24LL) != (v78[3] & 0xF) )
              *((_DWORD *)a5 + 9) |= v81;
            v84 = *((_QWORD *)v78 - 1);
            *(_DWORD *)(*((_QWORD *)v83 + 64) + 24LL) = v78[3] & 0xF;
            *(_QWORD *)(*((_QWORD *)v83 + 64) + 16LL) = v84;
            if ( (*(_DWORD *)v78 & 0xF000000) == 0xC000000 )
              DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v83, 1u);
            else
              DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v83);
          }
          else
          {
            *(_DWORD *)v78 ^= (*(_DWORD *)v78 ^ (*(_DWORD *)(*((_QWORD *)TargetById + 64) + 24LL) << 24)) & 0xF000000;
          }
          if ( (*((_DWORD *)v78 - 5) & 4) != 0
            && (*(_DWORD *)v78 & 0xF000000) == 0xE000000
            && (v81 & *((_DWORD *)a5 + 17)) == 0 )
          {
            v85 = v190 | *((_DWORD *)a5 + 19);
            if ( !_bittest(&v85, (unsigned int)v189) )
            {
              DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(v83, 1u);
              if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 6) | *((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9)) & v81) != 0 )
              {
                PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v195, *((_DWORD *)v78 - 8));
                DMMVIDPNPRESENTPATH::SetDriverGammaRamp(PathFromTarget);
              }
            }
          }
        }
        v78 += 56;
        v77 = (int *)(*(_QWORD *)v187 + 4LL);
        v75 = ContainingAdapter == (PERESOURCE *)1;
        ContainingAdapter = (PERESOURCE *)((char *)ContainingAdapter - 1);
        *(_QWORD *)v187 += 4LL;
      }
      while ( !v75 );
    }
    CVidSchSuspendResume::Resume(v199);
    v87 = v12[288];
    v88 = 0;
    if ( !LODWORD(v87->Reserved2) )
    {
LABEL_224:
      if ( v183 )
      {
        v136 = (unsigned int *)v184;
        v137 = (char *)Src + 32;
        do
        {
          v138 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v31, *((_DWORD *)v137 - 8));
          v140 = v138;
          if ( v138 )
          {
            if ( (*((_DWORD *)v137 - 5) & 4) == 0
              || (*(_DWORD *)v137 & 0xF000000) != 0xE000000
              || (v141 = 1 << *v136, (v141 & *((_DWORD *)a5 + 17)) != 0)
              || (v141 & *((_DWORD *)a5 + 19)) != 0 )
            {
              DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(v138, 0);
            }
            if ( !v182 && *((_BYTE *)v140 + 408) && ((*(_DWORD *)v137 & 0xF000000) != 0xE000000 || v137[16] != -1) )
            {
              v142 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)v12[288], *v136, 0, 0x800u, a7);
              v144 = v142;
              if ( v142 < 0 )
              {
                v145 = (_QWORD *)WdLogNewEntry5_WdError(v143);
                v146 = (unsigned int *)v184;
                v145[3] = v12;
                v145[4] = *v146;
                v145[5] = v144;
                WdLogEvent5_WdError(v145);
              }
              if ( (*(_DWORD *)v137 & 0xF000000) == 0xE000000 )
              {
                v147 = v12[289];
                if ( v147 )
                {
                  (*(void (__fastcall **)(KSPIN_LOCK, _QWORD))(*(_QWORD *)(v147[4].CreatorBackTraceIndex + 8) + 784LL))(
                    v147[4].SpinLock,
                    *(unsigned int *)v184);
                }
                else
                {
                  v148 = *(_QWORD *)&v12[288][2].OwnerEntry.0;
                  if ( v148 )
                    _InterlockedExchange(
                      (volatile __int32 *)(2704LL * *(unsigned int *)v184 + *(_QWORD *)(v148 + 8) + 856),
                      1);
                }
              }
            }
            *((_BYTE *)v140 + 408) = 0;
          }
          else if ( (*((_DWORD *)v137 - 5) & 4) != 0 )
          {
            v149 = WdLogNewEntry5_WdAssertion(v139);
            WdLogEvent5_WdAssertion(v149);
          }
          v150 = (char *)v184;
          if ( (*((_DWORD *)v137 - 4) & 1) != 0 )
            *((_DWORD *)a5 + 15) |= 1 << *(_DWORD *)v184;
          v136 = (unsigned int *)(v150 + 4);
          v137 += 56;
          v75 = v193 == (PERESOURCE *)1;
          v193 = (PERESOURCE *)((char *)v193 - 1);
          v184 = v136;
        }
        while ( !v75 );
        v184 = v197;
      }
      auto_rc<DMMVIDPN>::reset(a1 + 35, 0LL);
      CVidSchSuspendResume::Resume(v199);
      v152 = (ADAPTER_DISPLAY *)v12[288];
      v153 = 0;
      if ( *((_DWORD *)v152 + 20) )
      {
        v154 = a8;
        do
        {
          v151 = v153;
          v155 = 1 << v153;
          if ( ((1 << v153) & *((_DWORD *)a5 + 14)) != 0 )
            ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(v152, v153);
          if ( (v155 & *((_DWORD *)a5 + 15)) != 0 )
            DXGADAPTER::NotifyMultiPlaneOverlayDisable((DXGADAPTER *)v12, v153);
          if ( v154 && !v182 )
          {
            if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)v12[288], v153, 0)
              && ADAPTER_DISPLAY::IsCddPrimaryStale((ADAPTER_DISPLAY *)v12[288], v153) )
            {
              ADAPTER_DISPLAY::DestroyCddAllocations(v156, v154, v153);
            }
            v157 = (DXGADAPTER **)v12[288];
            DisplayModeInfo = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(v157, v153);
            ADAPTER_DISPLAY::SetCddDisplayMode((PERESOURCE **)v157, v153, DisplayModeInfo);
            v154 = a8;
          }
          if ( (v155 & *((_DWORD *)a5 + 19)) != 0 )
          {
            v159 = ADAPTER_DISPLAY::SetVidPnSourceActive((ADAPTER_DISPLAY *)v12[288], v153, 0, a3 == 4, a7);
            v162 = v159;
            if ( v159 < 0 )
            {
              v163 = (_QWORD *)WdLogNewEntry5_WdError(v160);
              v163[4] = v153;
              v163[3] = v12;
              v163[5] = v162;
              WdLogEvent5_WdError(v163);
            }
            if ( a4 )
            {
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                (__int64)v209,
                (__int64)(a4 + 19),
                2u,
                v161,
                (__int64)v174,
                a4[17]);
              v164 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(a4 + 12), v153);
              v165 = v164 + 0x80000000;
              if ( (int)v165 >= 0 && v164 != -1071774919 )
              {
                v166 = WdLogNewEntry5_WdAssertion(v165);
                WdLogEvent5_WdAssertion(v166);
              }
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v209);
            }
            v154 = a8;
            if ( a8 )
              ADAPTER_DISPLAY::DestroyCddAllocations((ADAPTER_DISPLAY *)v12[288], a8, v153);
            ADAPTER_DISPLAY::SetPartOfDesktop((ADAPTER_DISPLAY *)v12[288], v153, 0);
            ADAPTER_DISPLAY::SetContentRect((ADAPTER_DISPLAY *)v12[288], v153, &stru_1C0060F58);
            ADAPTER_DISPLAY::SetCddInterface((DXGADAPTER **)v12[288], v153, 0LL);
            HIDWORD(v12[288][1].SystemResourcesList.Blink[235 * v153 + 66].Blink) = -1;
            ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)v12[288], v153, 1);
          }
          v152 = (ADAPTER_DISPLAY *)v12[288];
          ++v153;
        }
        while ( v153 < *((_DWORD *)v152 + 20) );
        v31 = v194;
      }
      v169 = *((_QWORD *)DXGGLOBAL::GetGlobal(v151) + 117);
      if ( *(_BYTE *)v169 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v168, v167) + 24) = 201LL;
      }
      else
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v207, *(struct DXGFASTMUTEX *const *)(v169 + 8));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v207);
        v171 = (_BYTE *)(v169 + 16);
        v172 = 18LL;
        do
        {
          *v171 = 0;
          v171 += 32;
          --v172;
        }
        while ( v172 );
        ++*(_DWORD *)(v169 + 592);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v170) + 24) = 223LL;
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v207);
      }
      if ( Src )
        ExFreePoolWithTag(Src, 0);
      ExFreePoolWithTag(P, 0);
      if ( v184 )
        ExFreePoolWithTag(v184, 0);
      if ( v198 )
        ExFreePoolWithTag(v198, 0);
      CVidSchSuspendResume::Resume(v199);
      if ( v31 )
        ReferenceCounted::Release((ReferenceCounted *)(v31 + 64));
      goto LABEL_288;
    }
    v89 = v190;
    while ( 1 )
    {
      v187[0] = 0;
      memset(v200, 0, sizeof(v200));
      v90 = v88;
      v91 = 1 << v88;
      if ( ((1 << v88) & *((_DWORD *)a5 + 3)) != 0 )
      {
        v187[0] = 2;
      }
      else if ( (v91 & *((_DWORD *)a5 + 10)) != 0 )
      {
        v187[0] = 4;
      }
      else if ( (*((_DWORD *)a5 + 2) & ~*((_DWORD *)a5 + 8) & v91) != 0 )
      {
        v90 = (v91 & *(_DWORD *)a5) != 0 ? 3 : 1;
        v187[0] = (v91 & *(_DWORD *)a5) != 0 ? 3 : 1;
      }
      v92 = (unsigned int)(*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 10));
      if ( ((unsigned int)v92 & v91) != 0 )
      {
        v93 = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)v87, v88);
        v94 = v195;
        v95 = 0LL;
        v96 = 32;
        v97 = *((_OWORD *)v93 + 1);
        *(_OWORD *)v200 = *(_OWORD *)v93;
        v98 = *((_OWORD *)v93 + 2);
        *(_OWORD *)&v200[16] = v97;
        v99 = (char *)*((_QWORD *)v195 + 3);
        *(_QWORD *)&v200[48] = *((_QWORD *)v93 + 6);
        *(_OWORD *)&v200[32] = v98;
        if ( v99 == (char *)v195 + 24 )
          goto LABEL_162;
        v99 -= 8;
        if ( !v99 )
          goto LABEL_162;
        do
        {
          if ( *(_DWORD *)(*((_QWORD *)v99 + 11) + 24LL) == v88 && *((_DWORD *)v99 + 26) < v96 )
          {
            v95 = (DMMVIDPNPRESENTPATH *)v99;
            v96 = *((_DWORD *)v99 + 26);
          }
          v100 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v99 + 1);
          v99 = (char *)v100 - 8;
          if ( v100 == (DMMVIDPNTOPOLOGY *)((char *)v195 + 24) )
            v99 = 0LL;
        }
        while ( v99 );
        if ( v95 )
        {
          DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(v95, (struct _D3DKMT_DISPLAYMODE *)v200);
        }
        else
        {
LABEL_162:
          v101 = (_QWORD *)WdLogNewEntry5_WdError(v99);
          v101[3] = v88;
          v101[4] = v94;
          v101[5] = -1071774919LL;
          WdLogEvent5_WdError(v101);
        }
      }
      else
      {
        v94 = v195;
      }
      if ( (v91 & *((_DWORD *)a5 + 19)) != 0 )
        goto LABEL_220;
      if ( (v91 & v89) == 0 )
        break;
LABEL_222:
      v87 = v12[288];
      if ( ++v88 >= LODWORD(v87->Reserved2) )
      {
        v31 = v194;
        goto LABEL_224;
      }
    }
    if ( (v91 & *((_DWORD *)a5 + 10)) != 0 )
    {
      ADAPTER_DISPLAY::SetDisplayModeInfo(
        (PERESOURCE **)v12[288],
        v88,
        (const struct _DXGK_DISPLAYMODE_INFO *const)v200);
      OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
        (OUTPUTDUPL_CONTEXT **)v12[288][1].SystemResourcesList.Flink,
        v88,
        0LL,
        0,
        0,
        1);
      v205 = 11;
      v206 = 0LL;
      if ( (int)DxgkStatusChangeNotify(&v205) < 0 )
      {
        v103 = WdLogNewEntry5_WdAssertion(v102);
        *(_QWORD *)(v103 + 24) = 2895LL;
        WdLogEvent5_WdAssertion(v103);
      }
    }
    v90 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6) | (unsigned int)(*((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9));
    if ( ((unsigned int)v90 & v91) != 0 )
    {
      MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v94, v88, &v192);
      v105 = MostImportantVidPnPathTargetsFromSource + 0x80000000;
      if ( (int)v105 >= 0 && MostImportantVidPnPathTargetsFromSource != -1071774919 )
      {
        v106 = WdLogNewEntry5_WdAssertion(v105);
        WdLogEvent5_WdAssertion(v106);
      }
      v180 = 0;
      v107 = 0;
      if ( MostImportantVidPnPathTargetsFromSource >= 0 && v192 != -1 )
      {
        v108 = 0;
        if ( v183 )
        {
          v109 = v184;
          do
          {
            if ( v88 == v109[v108] )
            {
              v110 = 56LL * v108;
              if ( v192 == *(_DWORD *)((char *)Src + v110)
                && (*(_DWORD *)((_BYTE *)Src + v110 + 32) & 0xF000000) == 0xE000000
                && (*(_DWORD *)((_BYTE *)Src + v110 + 12) & 4) != 0
                && (v91 & *((_DWORD *)a5 + 17)) == 0 )
              {
                *((_DWORD *)a5 + 18) |= v91;
                v107 = 1;
                v180 = 1;
                break;
              }
              v109 = v184;
            }
            ++v108;
          }
          while ( v108 < v183 );
        }
      }
      LODWORD(v189) = ADAPTER_DISPLAY::SetVidPnSourceActive((ADAPTER_DISPLAY *)v12[288], v88, v107, a3 == 4, a7);
      if ( (int)v189 >= 0 )
      {
        v113 = -1;
        if ( v180 )
          v113 = v192;
        v114 = v12[288];
        ContainingAdapter = (PERESOURCE *)(3760LL * v88);
        *(_DWORD *)((char *)&v114[1].SystemResourcesList.Blink[66].Blink + (unsigned __int64)ContainingAdapter + 4) = v113;
        ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)v12[288], v88, 0);
        if ( (v91 & *((_DWORD *)a5 + 3)) != 0 )
        {
          ADAPTER_DISPLAY::SetPartOfDesktop((ADAPTER_DISPLAY *)v12[288], v88, 0);
          ADAPTER_DISPLAY::SetContentRect((ADAPTER_DISPLAY *)v12[288], v88, &stru_1C0060F58);
          ADAPTER_DISPLAY::SetCddInterface((DXGADAPTER **)v12[288], v88, 0LL);
        }
        else
        {
          if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v195, v88, &v202) < 0 || !v202 )
          {
            v115 = WdLogNewEntry5_WdAssertion(v90);
            WdLogEvent5_WdAssertion(v115);
          }
          if ( (v91 & *((_DWORD *)a5 + 2)) != 0 )
          {
            v116 = 0LL;
            *(_DWORD *)&v200[44] = 1;
            *(_QWORD *)&v200[48] = 1LL;
            if ( v12[289] )
            {
              DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                             (ADAPTER_DISPLAY *)v12[288],
                                             v88);
              v116 = DisplayedPrimaryAllocation;
              if ( DisplayedPrimaryAllocation )
              {
                if ( (*((_BYTE *)DisplayedPrimaryAllocation + 4) & 0x10) != 0 )
                  v116 = 0LL;
              }
            }
            if ( v116 )
            {
              memset(&v204.Width, 0, 0x28uLL);
              v118 = (ADAPTER_RENDER *)v12[289];
              v204.hAllocation = (HANDLE)*((_QWORD *)v116 + 2);
              v120 = ADAPTER_RENDER::DdiDescribeAllocation(v118, &v204, v119);
              v124 = v120;
              if ( v120 < 0 )
              {
                v127 = (_QWORD *)WdLogNewEntry5_WdWarning(v122, v121, v123);
                v127[4] = v88;
                v127[3] = v116;
                v127[5] = v124;
                WdLogEvent5_WdWarning(v127);
              }
              else if ( v204.Width == *(_DWORD *)v200
                     && v204.Height == *(_DWORD *)&v200[4]
                     && v204.Format == *(_DWORD *)&v200[8]
                     && v204.RefreshRate.Numerator == *(_DWORD *)&v200[16]
                     && v204.RefreshRate.Denominator == *(_DWORD *)&v200[20]
                     && (v125 = ~(*(_DWORD *)&v200[40] >> 4),
                         v122 = v125 ^ (unsigned int)~(*((_DWORD *)v116 + 1) >> 12),
                         (((unsigned __int8)v125 ^ (unsigned __int8)~(*((_DWORD *)v116 + 1) >> 12)) & 1) == 0) )
              {
                *(D3DDDI_MULTISAMPLINGMETHOD *)&v200[44] = v204.MultisampleMethod;
                *(_DWORD *)&v200[52] = v204.PrivateDriverFormatAttribute;
              }
              else if ( v182 || (*((_DWORD *)v116 + 1) & 2) == 0 )
              {
                v126 = WdLogNewEntry5_WdAssertion(v122);
                WdLogEvent5_WdAssertion(v126);
              }
            }
            ADAPTER_DISPLAY::SetPartOfDesktop((ADAPTER_DISPLAY *)v12[288], v88, 1u);
            ADAPTER_DISPLAY::SetDisplayModeInfo(
              (PERESOURCE **)v12[288],
              v88,
              (const struct _DXGK_DISPLAYMODE_INFO *const)v200);
            v128 = v12[288];
            if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v128->OwnerTable) )
            {
              v130 = WdLogNewEntry5_WdAssertion(v129);
              *(_QWORD *)(v130 + 24) = 5231LL;
              WdLogEvent5_WdAssertion(v130);
            }
            if ( v88 >= LODWORD(v128->Reserved2) )
            {
              v131 = WdLogNewEntry5_WdAssertion(v129);
              *(_QWORD *)(v131 + 24) = 5232LL;
              WdLogEvent5_WdAssertion(v131);
            }
            *(_DWORD *)((char *)&v128[1].SystemResourcesList.Blink[67].Flink + (unsigned __int64)ContainingAdapter) = *(_DWORD *)&v200[12];
            ADAPTER_DISPLAY::DetermineScalingCapabilities((ADAPTER_DISPLAY *)v12[288], v88);
            if ( a8 && a9 )
              ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
                (ADAPTER_DISPLAY *)v12[288],
                v88,
                *(struct DXGADAPTER **)(*((_QWORD *)a8 + 2) + 16LL));
          }
        }
      }
      else
      {
        v112 = (_QWORD *)WdLogNewEntry5_WdError(v111);
        v112[5] = (int)v189;
        v112[3] = v12;
        v112[4] = v88;
        WdLogEvent5_WdError(v112);
        *((_DWORD *)a5 + v88 + 20) = (_DWORD)v189;
        *((_DWORD *)a5 + 19) |= v91;
      }
    }
LABEL_220:
    v132 = v187[0];
    if ( v187[0] )
    {
      SharedWaiters = (int)v12[288][2].SharedWaiters;
      CurrentProcess = PsGetCurrentProcess(v90, v92);
      ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
      VIDPN_MGR::CacheDisplayModeChangeRequest(
        (__int64)a1,
        v88,
        (__int64)v200,
        1u,
        *((_DWORD *)a5 + v88 + 20),
        v132,
        SharedWaiters,
        ProcessImageFileName);
    }
    goto LABEL_222;
  }
  v30 = WdLogNewEntry5_WdLowResource(v29);
  *(_QWORD *)(v30 + 24) = v23;
  WdLogEvent5_WdLowResource(v30);
  v14 = -1073741801;
LABEL_288:
  auto_rc<DMMVIDPN const>::~auto_rc<DMMVIDPN const>((__int64 *)&v203);
  return v14;
}
