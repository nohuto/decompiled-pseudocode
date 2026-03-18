/*
 * XREFs of ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C
 * Callers:
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DDA24 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010F42C (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DmmPowerOnTargetsFromSourceIfNecessary@@YAJQEAXI@Z @ 0x1C021494C (-DmmPowerOnTargetsFromSourceIfNecessary@@YAJQEAXI@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C0214AB0 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0216514 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C021E0B4 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002E6C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0004454 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000459C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C000B6AC (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C001444C (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00144A4 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0014A18 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0019C48 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0019D28 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C001A1C0 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C0025730 (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0027EC4 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0028090 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C0028138 (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C002C6C8 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0044230 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     McTemplateK0pqqqqqqqqqqqqqqq @ 0x1C00453FC (McTemplateK0pqqqqqqqqqqqqqqq.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00AA594 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00B838C (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00BB648 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00BB6AC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00BC348 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00BF2FC (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAXXZ @ 0x1C00C3DF8 (-InvalidateCache@QDC_CACHE@@QEAAXXZ.c)
 *     DxgkStatusChangeNotify @ 0x1C00D7140 (DxgkStatusChangeNotify.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00E1694 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C00E2D74 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00F48DC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C010D5A4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C010D80C (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C010D8B4 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C010D918 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C010DA38 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C010EEAC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C01110E8 (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C0111174 (-SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0152CCC (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0153150 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0153734 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0155BCC (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C0158008 (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C0159E20 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C0162E58 (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 *     ?CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@AEAAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z @ 0x1C021CD60 (-CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@AEAAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C021CE80 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJIAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C021EED4 (-GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJIAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C021EFE8 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C022168C (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02225E4 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     LogMonitorHandleOnOffState @ 0x1C022D380 (LogMonitorHandleOnOffState.c)
 */

__int64 __fastcall VIDPN_MGR::SetTimingsFromVidPn(
        VIDPN_MGR *a1,
        int a2,
        unsigned int a3,
        VIDPN_MGR **a4,
        struct D3DKMT_VIDPN_SOURCE_MASKS *a5,
        _BYTE *a6,
        unsigned __int8 a7,
        struct DXGDEVICE *a8,
        __int64 a9)
{
  unsigned int v9; // esi
  __int64 v10; // r15
  __int64 v14; // r15
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  unsigned __int64 v21; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  SIZE_T v26; // rax
  struct _DXGK_SET_TIMING_PATH_INFO *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  ADAPTER_RENDER *v30; // r8
  __int64 v31; // r8
  int v32; // r12d
  __int64 v33; // rcx
  ADAPTER_DISPLAY *v34; // r10
  unsigned int v35; // r12d
  int v36; // ebx
  ADAPTER_DISPLAY *v37; // r9
  int v38; // edi
  int v39; // r13d
  struct DMMVIDPN *v40; // r13
  unsigned __int8 v41; // al
  unsigned int *v42; // rcx
  signed int v43; // r12d
  _BYTE *v44; // r13
  VIDPN_MGR *v45; // r9
  __int64 v46; // rax
  char *v47; // rcx
  signed int *v48; // rax
  char *v49; // rdi
  signed int v50; // eax
  unsigned int v51; // edx
  int v52; // r12d
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  DMMVIDEOPRESENTTARGET *v54; // r13
  char *v55; // rdx
  int v56; // eax
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  bool v58; // zf
  __int64 v59; // rdi
  unsigned int v60; // r12d
  int v61; // ebx
  int v62; // r13d
  int v63; // ecx
  int v64; // r13d
  unsigned int *v65; // r12
  char *v66; // rdi
  struct DMMVIDEOPRESENTTARGET *v67; // r13
  __int64 v68; // rcx
  int v69; // edx
  char *v70; // r12
  __int64 v71; // rcx
  ADAPTER_DISPLAY *v72; // r8
  unsigned int v73; // r12d
  struct DMMVIDPN *v74; // rbx
  struct DXGDEVICE *v75; // rdi
  int v76; // r13d
  struct DXGGLOBAL *Global; // rax
  int MostImportantVidPnPathTargetsFromSource; // edi
  __int64 v79; // rcx
  unsigned __int8 v80; // r10
  unsigned int v81; // edx
  _DWORD *v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  unsigned int v85; // edx
  __int64 v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  unsigned int v95; // r11d
  unsigned int v96; // r10d
  unsigned int v97; // r12d
  unsigned int v98; // r13d
  unsigned int v99; // ecx
  unsigned int v100; // r9d
  unsigned int v101; // eax
  int v102; // edx
  __int64 v103; // rcx
  struct DXGDEVICE *v104; // r11
  unsigned __int8 v105; // r9
  ADAPTER_DISPLAY *v106; // rcx
  unsigned int v107; // eax
  _QWORD *v108; // rax
  char v109; // al
  int v110; // eax
  _QWORD *v111; // rax
  __int64 v112; // rax
  struct _DXGK_SET_TIMING_PATH_INFO *v113; // rdi
  unsigned int *v114; // r12
  signed __int64 v115; // rbx
  unsigned __int64 v116; // r15
  char *v117; // r13
  _BYTE *v118; // rdx
  unsigned __int64 v119; // r8
  char *v120; // rdx
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v125; // xmm1
  __int128 v126; // xmm0
  __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rax
  _QWORD *v130; // rax
  __int64 v131; // rax
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  struct DXGADAPTERALLOCATION *v133; // rdi
  ADAPTER_RENDER *v134; // rcx
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  int v138; // eax
  __int64 v139; // rax
  _QWORD *v140; // rax
  __int64 v141; // rdi
  __int64 v142; // rcx
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rcx
  __int64 v146; // rdi
  struct DXGDEVICE *v147; // rax
  int v148; // edi
  __int64 CurrentProcess; // rax
  __int128 *ProcessImageFileName; // rax
  int v151; // eax
  __int64 v152; // rcx
  __int64 v153; // r12
  _QWORD *v154; // rax
  unsigned int *v155; // rcx
  __int64 v156; // rcx
  __int64 v157; // rcx
  __int64 v158; // rax
  ADAPTER_DISPLAY *v159; // rcx
  DXGADAPTER **v160; // rdi
  const struct _D3DKMT_DISPLAYMODE *v161; // rax
  int v162; // eax
  int v163; // eax
  __int64 v164; // rcx
  __int64 v165; // rdi
  _QWORD *v166; // rax
  DMMVIDPNTOPOLOGY *v167; // rdi
  VIDPN_MGR **v168; // r8
  int v169; // eax
  __int64 v170; // rcx
  __int64 v171; // rax
  __int64 v172; // rdx
  int v173; // edx
  unsigned int v174; // r10d
  __int64 v175; // r11
  __int64 v176; // r9
  unsigned int v177; // r8d
  unsigned int *v178; // [rsp+20h] [rbp-100h]
  struct _DXGK_SET_TIMING_PATH_INFO **v179; // [rsp+28h] [rbp-F8h]
  unsigned int **v180; // [rsp+30h] [rbp-F0h]
  struct D3DKMT_VIDPN_SOURCE_MASKS *v181; // [rsp+38h] [rbp-E8h]
  unsigned int **v182; // [rsp+40h] [rbp-E0h]
  int v183; // [rsp+68h] [rbp-B8h]
  char v184; // [rsp+A0h] [rbp-80h]
  char v185; // [rsp+A0h] [rbp-80h]
  unsigned __int8 IsLegacyDisplayStateSynchronization; // [rsp+A1h] [rbp-7Fh]
  unsigned __int8 v187; // [rsp+A1h] [rbp-7Fh]
  unsigned int v188; // [rsp+A4h] [rbp-7Ch] BYREF
  unsigned int v189; // [rsp+A8h] [rbp-78h]
  void *v190; // [rsp+B0h] [rbp-70h]
  void *Src; // [rsp+B8h] [rbp-68h] BYREF
  unsigned int v192; // [rsp+C0h] [rbp-60h] BYREF
  signed int v193; // [rsp+C4h] [rbp-5Ch]
  int v194; // [rsp+C8h] [rbp-58h] BYREF
  unsigned __int64 v195; // [rsp+D0h] [rbp-50h]
  VIDPN_MGR *v196; // [rsp+D8h] [rbp-48h]
  struct DMMVIDPN *v197; // [rsp+E0h] [rbp-40h]
  struct DXGDEVICE *v198; // [rsp+E8h] [rbp-38h]
  unsigned int v199; // [rsp+F0h] [rbp-30h] BYREF
  unsigned __int64 v200; // [rsp+F8h] [rbp-28h]
  __int64 v201; // [rsp+100h] [rbp-20h]
  _BYTE *v202; // [rsp+108h] [rbp-18h]
  __int64 v203; // [rsp+110h] [rbp-10h]
  DMMVIDPNTOPOLOGY *v204; // [rsp+118h] [rbp-8h]
  struct _DXGK_SET_TIMING_PATH_INFO *v205; // [rsp+120h] [rbp+0h]
  unsigned int *v206; // [rsp+128h] [rbp+8h] BYREF
  __int64 v207; // [rsp+130h] [rbp+10h]
  unsigned int *v208; // [rsp+138h] [rbp+18h] BYREF
  ADAPTER_RENDER *v209[2]; // [rsp+140h] [rbp+20h] BYREF
  VIDPN_MGR **v210; // [rsp+150h] [rbp+30h]
  _BYTE v211[56]; // [rsp+158h] [rbp+38h] BYREF
  unsigned int v212; // [rsp+190h] [rbp+70h] BYREF
  unsigned __int64 v213; // [rsp+198h] [rbp+78h] BYREF
  __int64 v214; // [rsp+1A0h] [rbp+80h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v215; // [rsp+1A8h] [rbp+88h] BYREF
  int v216; // [rsp+1D8h] [rbp+B8h] BYREF
  __int64 v217; // [rsp+1E0h] [rbp+C0h]
  _DXGKARG_SETTIMINGSFROMVIDPN v218; // [rsp+1E8h] [rbp+C8h] BYREF
  _BYTE v219[24]; // [rsp+210h] [rbp+F0h] BYREF
  GUID ActivityId; // [rsp+228h] [rbp+108h] BYREF

  v9 = 0;
  v10 = *((_QWORD *)a1 + 1);
  v198 = a8;
  v207 = a9;
  v210 = a4;
  v189 = a3;
  v193 = a2;
  v196 = a1;
  v202 = a6;
  v192 = 0;
  if ( !v10 )
  {
    v89 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v89);
    v10 = *((_QWORD *)a1 + 1);
  }
  v14 = *(_QWORD *)(v10 + 16);
  v203 = v14;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v14) )
  {
    v90 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v90);
  }
  Src = 0LL;
  *a6 = 0;
  v208 = 0LL;
  v206 = 0LL;
  v16 = VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
          a1,
          a2,
          a4,
          &v212,
          &v188,
          (struct _DXGK_SET_TIMING_PATH_INFO **)&Src,
          &v208,
          a5,
          &v206);
  v20 = v16;
  LODWORD(v195) = v16;
  if ( v16 < 0 )
  {
    v91 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v91 + 24) = a4;
    *(_QWORD *)(v91 + 32) = v20;
    WdLogEvent5_WdError(v91);
  }
  else
  {
    v21 = v188;
    if ( v188 )
    {
      if ( *((_QWORD *)a5 + 1) || *((_DWORD *)a5 + 6) )
      {
        v184 = 1;
      }
      else
      {
        v184 = 0;
        if ( !*((_DWORD *)a5 + 10) && !*((_DWORD *)a5 + 8) )
          return 0LL;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v182) = *((_DWORD *)a5 + 5);
        LODWORD(v181) = *((_DWORD *)a5 + 3);
        LODWORD(v180) = *((_DWORD *)a5 + 2);
        LODWORD(v179) = *((_DWORD *)a5 + 1);
        LODWORD(v178) = *(_DWORD *)a5;
        McTemplateK0pqqqqqqqqqqqqqqq(
          (unsigned int)v180,
          v17,
          v19,
          v14,
          v178,
          v179,
          v180,
          v181,
          v182,
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
      v23 = *((_QWORD *)a1 + 11);
      v194 = 0;
      if ( v23 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v23 + 32));
        v24 = *((_QWORD *)a1 + 11);
        v21 = v188;
      }
      else
      {
        v24 = 0LL;
      }
      v214 = v24;
      v25 = (__int64)a4;
      v200 = v21;
      if ( !a4 )
        v25 = v24;
      v197 = (struct DMMVIDPN *)v25;
      v204 = (DMMVIDPNTOPOLOGY *)(v25 + 96);
      v26 = 56 * v21;
      if ( !is_mul_ok(v21, 0x38uLL) )
        v26 = -1LL;
      v27 = (struct _DXGK_SET_TIMING_PATH_INFO *)operator new[](v26, 0x4E506456u, PagedPool);
      v205 = v27;
      if ( !v27 )
      {
        v93 = WdLogNewEntry5_WdLowResource(v28);
        *(_QWORD *)(v93 + 24) = v21;
        WdLogEvent5_WdLowResource(v93);
        v9 = -1073741801;
LABEL_105:
        auto_rc<DMMVIDPN const>::reset(&v214, 0LL);
        return v9;
      }
      memmove(v27, Src, 56 * v21);
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 10) + 72LL));
      v29 = *((_QWORD *)a1 + 10);
      v30 = *(ADAPTER_RENDER **)(v14 + 2464);
      v201 = v29;
      v209[1] = v30;
      LODWORD(v209[0]) = 0;
      IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v14);
      LODWORD(v190) = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v14);
      v32 = (int)v190;
      if ( !v31 )
      {
LABEL_26:
        v34 = *(ADAPTER_DISPLAY **)(v14 + 2456);
        v35 = 0;
        if ( *((_DWORD *)v34 + 20) )
        {
          v36 = (int)v209[0];
          v37 = *(ADAPTER_DISPLAY **)(v14 + 2456);
          v38 = (int)v190;
          do
          {
            v39 = 1 << v35;
            if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3)) & (1 << v35)) != 0 )
            {
              v103 = *(_QWORD *)(v14 + 2464);
              if ( v103 && v38 < 2200 )
              {
                ADAPTER_RENDER::FlushScheduler(v103, 8, v35, 0);
                v34 = *(ADAPTER_DISPLAY **)(v14 + 2456);
                v37 = v34;
              }
              if ( v198 )
              {
                if ( v207 )
                {
                  v104 = *(struct DXGDEVICE **)(3760LL * v35 + *((_QWORD *)v34 + 14) + 688);
                  if ( v104 )
                  {
                    if ( *((_QWORD *)v104 + 211) == *(_QWORD *)(*((_QWORD *)v104 + 2) + 16LL) )
                    {
                      if ( v36 || (v105 = 0, a7) )
                        v105 = 1;
                      ADAPTER_DISPLAY::DisablePrimaryOnDevice(v34, v104, v35, v105);
                      v37 = *(ADAPTER_DISPLAY **)(v14 + 2456);
                    }
                  }
                }
              }
            }
            v34 = v37;
            if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & v39) != 0
              && *(_QWORD *)(v14 + 2464)
              && *(_BYTE *)(v14 + 2410)
              && IsLegacyDisplayStateSynchronization )
            {
              ADAPTER_DISPLAY::DisableMPOPlanes(v37, v35, 0);
              *((_DWORD *)a5 + 15) |= v39;
              v34 = *(ADAPTER_DISPLAY **)(v14 + 2456);
            }
            ++v35;
            v37 = v34;
          }
          while ( v35 < *((_DWORD *)v34 + 20) );
          v29 = v201;
          LODWORD(v20) = v195;
        }
        v40 = v197;
        if ( *((_DWORD *)a5 + 5) )
          VIDPN_MGR::RequestPowerStateForTargets(v196, v197);
        v41 = DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v14);
        v42 = v208;
        v190 = v208;
        v187 = v41;
        if ( v41 )
        {
          if ( v184 )
          {
            memset(&v218, 0, sizeof(v218));
            v43 = v189;
            if ( v189 == 4 )
              DisplayLogSetMonitorPowerStage(16LL);
            if ( v40 == (struct DMMVIDPN *)-88LL )
              v218.hFunctionalVidPn = 0LL;
            else
              v218.hFunctionalVidPn = (D3DKMDT_HVIDPN)v40;
            v44 = Src;
            v106 = *(ADAPTER_DISPLAY **)(v14 + 2456);
            v218.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v192;
            v218.PathCount = v188;
            v218.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
            v107 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v106, &v218);
            v20 = (int)v107;
            DisplayScenarioJournalSetSetTimingPathInfo(v107, 56 * v188, v188, v44);
            if ( (int)v20 < 0 )
            {
              v108 = (_QWORD *)WdLogNewEntry5_WdError(v42);
              v108[3] = *(int *)(v14 + 272);
              v108[4] = *(unsigned int *)(v14 + 268);
              v108[5] = v20;
              WdLogEvent5_WdError(v108);
            }
            if ( v43 == 4 )
              DisplayLogSetMonitorPowerStage(2147483664LL);
            goto LABEL_40;
          }
        }
        else
        {
          if ( v184 || *((_DWORD *)a5 + 10) )
          {
            v184 = 1;
            if ( a7 || (v109 = 0, LODWORD(v209[0])) )
              v109 = 1;
            v43 = v189;
            LOBYTE(v183) = v109;
            v110 = VIDPN_MGR::CommitVidPnOnAdapter(
                     v196,
                     (unsigned int)v193,
                     v189,
                     v40,
                     v188,
                     Src,
                     v208,
                     a5,
                     &v194,
                     v206,
                     &v192,
                     v198,
                     v207,
                     v183);
            v20 = v110;
            if ( v110 < 0 )
            {
              v111 = (_QWORD *)WdLogNewEntry5_WdError(v42);
              v111[3] = *(int *)(v14 + 272);
              v111[4] = *(unsigned int *)(v14 + 268);
              v111[5] = v20;
              WdLogEvent5_WdError(v111);
            }
            goto LABEL_39;
          }
          v184 = 0;
        }
        v43 = v189;
LABEL_39:
        v44 = Src;
LABEL_40:
        v45 = v196;
        v46 = *((_QWORD *)v196 + 1);
        if ( !v46 )
        {
          v112 = WdLogNewEntry5_WdAssertion(v42);
          WdLogEvent5_WdAssertion(v112);
          v45 = v196;
          v46 = *((_QWORD *)v196 + 1);
        }
        v47 = *(char **)(v46 + 16);
        if ( *((_DWORD *)v47 + 69) != 4098 || (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)v47) >= 1300 )
          v194 = 0;
        v197 = (struct DMMVIDPN *)v43;
        if ( v184 )
        {
          if ( (int)v20 < 0 )
          {
            *((_DWORD *)a5 + 19) = -1;
            FillFailedStatus(a5, v20);
            if ( v188 )
            {
              v47 = v44 + 16;
              v119 = v200;
              v120 = (char *)((char *)v205 - v44);
              do
              {
                *((_OWORD *)v47 - 1) = *(_OWORD *)&v47[(_QWORD)v120 - 16];
                *(_OWORD *)v47 = *(_OWORD *)&v47[(_QWORD)v120];
                *((_OWORD *)v47 + 1) = *(_OWORD *)&v47[(_QWORD)v120 + 16];
                *((_QWORD *)v47 + 4) = *(_QWORD *)&v47[(_QWORD)v120 + 32];
                *((_DWORD *)v47 + 4) = *((_DWORD *)v47 + 4) & 0xF0FFFFFF | 0xD000000;
                *(_DWORD *)v47 |= 1u;
                v47 += 56;
                --v119;
              }
              while ( v119 );
            }
            v192 = 1;
          }
          else if ( v188 )
          {
            v113 = v205;
            v114 = (unsigned int *)v190;
            v115 = v44 - (_BYTE *)v205;
            v116 = v200;
            do
            {
              v117 = (char *)v113 + v115;
              if ( VIDPN_MGR::CheckDdiSetTimingsViolationOnPathInfo(
                     v45,
                     v113,
                     (struct _DXGK_SET_TIMING_PATH_INFO *)((char *)v113 + v115)) )
              {
                v47 = (char *)(*(_DWORD *)((_BYTE *)Src + (char *)v113 - (char *)v205 + 32) & 0xF000000);
                if ( (_DWORD)v47 == 218103808 )
                {
                  if ( v187 )
                    *((_DWORD *)a5 + *v114 + 20) = -1073741506;
                  v47 = (char *)*v114;
                  v118 = v202;
                  *((_DWORD *)a5 + 19) |= 1 << (char)v47;
                  LOBYTE(v47) = *v118 & 0xFD | (v197 != (struct DMMVIDPN *)1 ? 2 : 0);
                  *v118 = (_BYTE)v47;
                }
              }
              else
              {
                *(_OWORD *)v117 = *(_OWORD *)&v113->VidPnTargetId;
                *((_OWORD *)v117 + 1) = *(_OWORD *)&v113->Output;
                *((_OWORD *)v117 + 2) = *(_OWORD *)((char *)&v113->TargetState + 8);
                *((_QWORD *)v117 + 6) = *(_QWORD *)&v113->GlitchCause;
                *(_DWORD *)((char *)&v113->TargetState + v115 + 8) = *(_DWORD *)((char *)&v113->TargetState + v115 + 8) & 0xF0FFFFFF | 0xD000000;
                *((_DWORD *)a5 + *v114 + 20) = -1073741437;
                v47 = (char *)*v114;
                *((_DWORD *)a5 + 19) |= 1 << (char)v47;
              }
              v45 = v196;
              ++v113;
              ++v114;
              --v116;
            }
            while ( v116 );
            v29 = v201;
            v14 = v203;
          }
          if ( (v192 & 0xFFFFFFFE) != 0 )
          {
            v121 = WdLogNewEntry5_WdAssertion(v47);
            *(_QWORD *)(v121 + 24) = (unsigned __int64)v192 >> 1;
            WdLogEvent5_WdAssertion(v121);
          }
          if ( (v192 & 1) != 0 )
            *v202 |= 1u;
        }
        EtwActivityIdControl(3u, &ActivityId);
        if ( v188 )
        {
          v48 = (signed int *)v190;
          v203 = -32LL - (_QWORD)Src;
          v195 = v200;
          v49 = (char *)Src + 32;
          v202 = v190;
          do
          {
            v50 = *v48;
            v51 = *((_DWORD *)v49 - 8);
            v52 = 1 << v50;
            v193 = v50;
            TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v29, v51);
            v54 = TargetById;
            if ( TargetById )
            {
              v55 = &v49[v203];
              if ( v184 )
              {
                LogMonitorHandleOnOffState(
                  *((_QWORD *)TargetById + 13),
                  &ActivityId,
                  (*(_DWORD *)((char *)Src + (_QWORD)v55 + 12) >> 2) & 1);
                if ( v187 )
                {
                  DxgkLogCodePointPacket(
                    0x58u,
                    *((_DWORD *)v49 - 8),
                    v49[3] & 0xF | 0x80000000,
                    *((_DWORD *)v49 - 2),
                    *(_QWORD *)(v14 + 268));
                  DxgkLogCodePointPacket(0x59u, *((_DWORD *)v49 - 8), *((_DWORD *)v49 + 4), 0, *(_QWORD *)(v14 + 268));
                }
                v122 = *((_QWORD *)v54 + 64);
                if ( *(_DWORD *)(v122 + 24) != (v49[3] & 0xF) )
                {
                  *((_DWORD *)a5 + 9) |= v52;
                  v122 = *((_QWORD *)v54 + 64);
                }
                v123 = *((_QWORD *)v49 - 1);
                *(_DWORD *)(v122 + 24) = v49[3] & 0xF;
                *(_QWORD *)(*((_QWORD *)v54 + 64) + 16LL) = v123;
                if ( (*(_DWORD *)v49 & 0xF000000) == 0xC000000 )
                  DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v54, 1u);
                else
                  DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v54);
              }
              else
              {
                *(_DWORD *)v49 = *(_DWORD *)((char *)Src + (_QWORD)v55 + 32) ^ (*(_DWORD *)((char *)Src
                                                                                          + (_QWORD)v55
                                                                                          + 32) ^ (*(_DWORD *)(*((_QWORD *)TargetById + 64) + 24LL) << 24)) & 0xF000000;
              }
              if ( (*((_DWORD *)v49 - 5) & 4) != 0
                && (*(_DWORD *)v49 & 0xF000000) == 0xE000000
                && (v52 & *((_DWORD *)a5 + 17)) == 0 )
              {
                v56 = v194 | *((_DWORD *)a5 + 19);
                if ( !_bittest(&v56, v193) )
                {
                  DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(v54, 1u);
                  if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 6) | *((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9)) & v52) != 0 )
                  {
                    PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v204, *((_DWORD *)v49 - 8));
                    DMMVIDPNPRESENTPATH::SetDriverGammaRamp(PathFromTarget);
                  }
                }
              }
            }
            v49 += 56;
            v48 = (signed int *)(v202 + 4);
            v58 = v195-- == 1;
            v202 += 4;
          }
          while ( !v58 );
        }
        CVidSchSuspendResume::Resume(v209);
        v59 = *(_QWORD *)(v14 + 2456);
        v60 = 0;
        if ( *(_DWORD *)(v59 + 80) )
        {
          v61 = v194;
          while ( 1 )
          {
            v189 = 0;
            memset(v211, 0, sizeof(v211));
            v62 = 1 << v60;
            v63 = *((_DWORD *)a5 + 10);
            if ( ((1 << v60) & *((_DWORD *)a5 + 3)) != 0 )
            {
              v189 = 2;
            }
            else if ( (v63 & v62) != 0 )
            {
              v189 = 4;
            }
            else if ( (*((_DWORD *)a5 + 2) & ~*((_DWORD *)a5 + 8) & v62) != 0 )
            {
              v189 = (*(_DWORD *)a5 & v62) != 0 ? 3 : 1;
            }
            if ( ((*((_DWORD *)a5 + 2) | v63) & v62) != 0 )
            {
              DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)v59, v60);
              v125 = *((_OWORD *)DisplayModeInfo + 1);
              *(_OWORD *)v211 = *(_OWORD *)DisplayModeInfo;
              v126 = *((_OWORD *)DisplayModeInfo + 2);
              *(_OWORD *)&v211[16] = v125;
              *(_QWORD *)&v125 = *((_QWORD *)DisplayModeInfo + 6);
              *(_OWORD *)&v211[32] = v126;
              *(_QWORD *)&v211[48] = v125;
              DMMVIDPNTOPOLOGY::GetDisplayModeFromVidPnSource(v204, v60, (struct _D3DKMT_DISPLAYMODE *)v211);
              v59 = *(_QWORD *)(v14 + 2456);
            }
            if ( (v62 & *((_DWORD *)a5 + 19)) != 0 )
              goto LABEL_69;
            if ( (v62 & v61) == 0 )
              break;
LABEL_71:
            v59 = *(_QWORD *)(v14 + 2456);
            if ( ++v60 >= *(_DWORD *)(v59 + 80) )
            {
              v29 = v201;
              goto LABEL_73;
            }
          }
          if ( (v62 & *((_DWORD *)a5 + 10)) != 0 )
          {
            ADAPTER_DISPLAY::SetDisplayModeInfo(
              (PERESOURCE **)v59,
              v60,
              (const struct _DXGK_DISPLAYMODE_INFO *const)v211);
            OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
              *(_QWORD *)(*(_QWORD *)(v14 + 2456) + 104LL),
              v60,
              0LL,
              0LL,
              0,
              1);
            v216 = 11;
            v217 = 0LL;
            if ( (int)DxgkStatusChangeNotify(&v216) < 0 )
            {
              v128 = WdLogNewEntry5_WdAssertion(v127);
              *(_QWORD *)(v128 + 24) = 3111LL;
              WdLogEvent5_WdAssertion(v128);
            }
          }
          if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6) | *((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9)) & v62) != 0 )
          {
            MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v204, v60, &v199);
            v79 = MostImportantVidPnPathTargetsFromSource + 0x80000000;
            if ( (int)v79 >= 0 && MostImportantVidPnPathTargetsFromSource != -1071774919 )
            {
              v129 = WdLogNewEntry5_WdAssertion(v79);
              WdLogEvent5_WdAssertion(v129);
            }
            v185 = 0;
            v80 = 0;
            if ( MostImportantVidPnPathTargetsFromSource >= 0 && v199 != -1 )
            {
              v81 = 0;
              if ( v188 )
              {
                v82 = v190;
                do
                {
                  if ( v60 == v82[v81] )
                  {
                    v83 = 56LL * v81;
                    if ( v199 == *(_DWORD *)((char *)Src + v83)
                      && (*(_DWORD *)((_BYTE *)Src + v83 + 32) & 0xF000000) == 0xE000000
                      && (*(_DWORD *)((_BYTE *)Src + v83 + 12) & 4) != 0
                      && (v62 & *((_DWORD *)a5 + 17)) == 0 )
                    {
                      *((_DWORD *)a5 + 18) |= v62;
                      v80 = 1;
                      v185 = 1;
                      break;
                    }
                    v82 = v190;
                  }
                  ++v81;
                }
                while ( v81 < v188 );
              }
            }
            LODWORD(v195) = ADAPTER_DISPLAY::SetVidPnSourceActive(
                              *(ADAPTER_DISPLAY **)(v14 + 2456),
                              v60,
                              v80,
                              v197 == (struct DMMVIDPN *)4,
                              a7);
            if ( (v195 & 0x80000000) != 0LL )
            {
              v130 = (_QWORD *)WdLogNewEntry5_WdError(v84);
              v130[5] = (int)v195;
              v130[3] = v14;
              v130[4] = v60;
              WdLogEvent5_WdError(v130);
              *((_DWORD *)a5 + v60 + 20) = v195;
              *((_DWORD *)a5 + 19) |= v62;
            }
            else
            {
              v85 = -1;
              if ( v185 )
                v85 = v199;
              v86 = 3760LL * v60;
              v87 = *(_QWORD *)(v14 + 2456);
              v203 = v86;
              *(_DWORD *)(*(_QWORD *)(v87 + 112) + v86 + 1068) = v85;
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v14 + 2456), v60, 0);
              if ( (v62 & *((_DWORD *)a5 + 3)) != 0 )
              {
                ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v14 + 2456), v60, 0);
                *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 2456) + 112LL) + v86 + 724) = 0;
                ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v14 + 2456), v60, &stru_1C007BDF8);
                ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v14 + 2456), v60, 0LL);
              }
              else
              {
                if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v204, v60, &v213) < 0 || !v213 )
                {
                  v131 = WdLogNewEntry5_WdAssertion(v88);
                  WdLogEvent5_WdAssertion(v131);
                }
                if ( (v62 & *((_DWORD *)a5 + 2)) != 0 )
                {
                  *(_DWORD *)&v211[44] = 1;
                  *(_QWORD *)&v211[48] = 1LL;
                  if ( *(_QWORD *)(v14 + 2464) )
                  {
                    DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                                   *(ADAPTER_DISPLAY **)(v14 + 2456),
                                                   v60);
                    v133 = DisplayedPrimaryAllocation;
                    if ( DisplayedPrimaryAllocation )
                    {
                      if ( (*((_BYTE *)DisplayedPrimaryAllocation + 4) & 0x10) != 0 )
                        v133 = 0LL;
                      if ( v133 )
                      {
                        memset(&v215, 0, sizeof(v215));
                        v134 = *(ADAPTER_RENDER **)(v14 + 2464);
                        v215.hAllocation = (HANDLE)*((_QWORD *)v133 + 2);
                        v193 = ADAPTER_RENDER::DdiDescribeAllocation(v134, &v215);
                        if ( v193 < 0 )
                        {
                          v140 = (_QWORD *)WdLogNewEntry5_WdWarning(v136, v135, v137);
                          v140[4] = v60;
                          v140[5] = v193;
                          v140[3] = v133;
                          WdLogEvent5_WdWarning(v140);
                        }
                        else if ( v215.Width == *(_DWORD *)v211
                               && v215.Height == *(_DWORD *)&v211[4]
                               && v215.Format == *(_DWORD *)&v211[8]
                               && v215.RefreshRate.Numerator == *(_DWORD *)&v211[16]
                               && v215.RefreshRate.Denominator == *(_DWORD *)&v211[20]
                               && (v138 = ~(*(_DWORD *)&v211[40] >> 4),
                                   v136 = v138 ^ (unsigned int)~(*((_DWORD *)v133 + 1) >> 12),
                                   (((unsigned __int8)v138 ^ (unsigned __int8)~(*((_DWORD *)v133 + 1) >> 12)) & 1) == 0) )
                        {
                          *(D3DDDI_MULTISAMPLINGMETHOD *)&v211[44] = v215.MultisampleMethod;
                          *(_DWORD *)&v211[52] = v215.PrivateDriverFormatAttribute;
                        }
                        else if ( !v187 || (*((_DWORD *)v133 + 1) & 2) == 0 )
                        {
                          v139 = WdLogNewEntry5_WdAssertion(v136);
                          WdLogEvent5_WdAssertion(v139);
                        }
                      }
                    }
                  }
                  ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v14 + 2456), v60, 1u);
                  ADAPTER_DISPLAY::SetDisplayModeInfo(
                    *(PERESOURCE ***)(v14 + 2456),
                    v60,
                    (const struct _DXGK_DISPLAYMODE_INFO *const)v211);
                  v141 = *(_QWORD *)(v14 + 2456);
                  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v141 + 16)) )
                  {
                    v143 = WdLogNewEntry5_WdAssertion(v142);
                    *(_QWORD *)(v143 + 24) = 5576LL;
                    WdLogEvent5_WdAssertion(v143);
                  }
                  if ( v60 >= *(_DWORD *)(v141 + 80) )
                  {
                    v144 = WdLogNewEntry5_WdAssertion(v142);
                    *(_QWORD *)(v144 + 24) = 5577LL;
                    WdLogEvent5_WdAssertion(v144);
                  }
                  v145 = *(_QWORD *)(v141 + 112);
                  v146 = v203;
                  *(_DWORD *)(v145 + v203 + 1072) = *(_DWORD *)&v211[12];
                  ADAPTER_DISPLAY::DetermineScalingCapabilities(*(ADAPTER_DISPLAY **)(v14 + 2456), v60);
                  v147 = v198;
                  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 2456) + 112LL) + v146 + 724) = (v62 & *((_DWORD *)a5 + 37)) != 0;
                  if ( v147 && v207 )
                    ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
                      *(ADAPTER_DISPLAY **)(v14 + 2456),
                      v60,
                      *(struct DXGADAPTER **)(*((_QWORD *)v147 + 2) + 16LL));
                }
              }
            }
          }
LABEL_69:
          v64 = v189;
          if ( v189 )
          {
            v148 = *(_DWORD *)(*(_QWORD *)(v14 + 2456) + 240LL);
            CurrentProcess = PsGetCurrentProcess();
            ProcessImageFileName = (__int128 *)PsGetProcessImageFileName(CurrentProcess);
            VIDPN_MGR::CacheDisplayModeChangeRequest(
              (__int64)v196,
              v60,
              (__int64)v211,
              1,
              *((_DWORD *)a5 + v60 + 20),
              v64,
              v148,
              ProcessImageFileName);
          }
          goto LABEL_71;
        }
LABEL_73:
        if ( v188 )
        {
          v65 = (unsigned int *)v190;
          v66 = (char *)Src + 32;
          do
          {
            v67 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v29, *((_DWORD *)v66 - 8));
            v68 = *((_DWORD *)v66 - 5) & 4;
            if ( v67 )
            {
              if ( !(_DWORD)v68
                || (*(_DWORD *)v66 & 0xF000000) != 0xE000000
                || (v69 = 1 << *v65, (v69 & *((_DWORD *)a5 + 17)) != 0)
                || (v69 & *((_DWORD *)a5 + 19)) != 0 )
              {
                DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(v67, 0);
              }
              if ( v187 && *((_BYTE *)v67 + 407) && ((*(_DWORD *)v66 & 0xF000000) != 0xE000000 || v66[16] != -1) )
              {
                v151 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v14 + 2456), *v65, 0, 0x800u, a7);
                v153 = v151;
                if ( v151 < 0 )
                {
                  v154 = (_QWORD *)WdLogNewEntry5_WdError(v152);
                  v155 = (unsigned int *)v190;
                  v154[3] = v14;
                  v154[4] = *v155;
                  v154[5] = v153;
                  WdLogEvent5_WdError(v154);
                }
                if ( (*(_DWORD *)v66 & 0xF000000) == 0xE000000 )
                {
                  v156 = *(_QWORD *)(v14 + 2464);
                  if ( v156 )
                  {
                    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v156 + 520) + 8LL) + 896LL))(
                      *(_QWORD *)(v156 + 528),
                      *(unsigned int *)v190);
                  }
                  else
                  {
                    v157 = *(_QWORD *)(*(_QWORD *)(v14 + 2456) + 264LL);
                    if ( v157 )
                      _InterlockedExchange(
                        (volatile __int32 *)(2704LL * *(unsigned int *)v190 + *(_QWORD *)(v157 + 8) + 856),
                        1);
                  }
                }
              }
              *((_BYTE *)v67 + 407) = 0;
            }
            else if ( (_DWORD)v68 )
            {
              v158 = WdLogNewEntry5_WdAssertion(v68);
              WdLogEvent5_WdAssertion(v158);
            }
            v70 = (char *)v190;
            if ( (*((_DWORD *)v66 - 4) & 1) != 0 )
              *((_DWORD *)a5 + 15) |= 1 << *(_DWORD *)v190;
            v65 = (unsigned int *)(v70 + 4);
            v66 += 56;
            v58 = v200-- == 1;
            v190 = v65;
          }
          while ( !v58 );
          v190 = v208;
        }
        auto_rc<DMMVIDPN>::reset((__int64 *)v196 + 35, 0LL);
        CVidSchSuspendResume::Resume(v209);
        v72 = *(ADAPTER_DISPLAY **)(v14 + 2456);
        v73 = 0;
        if ( *((_DWORD *)v72 + 20) )
        {
          v74 = v197;
          v75 = v198;
          do
          {
            v71 = v73;
            v76 = 1 << v73;
            if ( ((1 << v73) & *((_DWORD *)a5 + 14)) != 0 )
              ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(v72, v73);
            if ( (v76 & *((_DWORD *)a5 + 15)) != 0 )
              DXGADAPTER::NotifyMultiPlaneOverlayDisable((DXGADAPTER *)v14, v73);
            if ( v75 && v187 )
            {
              if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v14 + 2456), v73, 0)
                && ADAPTER_DISPLAY::IsCddPrimaryStale(*(ADAPTER_DISPLAY **)(v14 + 2456), v73) )
              {
                ADAPTER_DISPLAY::DestroyCddAllocations(v159, v75, v73);
              }
              v160 = *(DXGADAPTER ***)(v14 + 2456);
              v161 = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(v160, v73);
              ADAPTER_DISPLAY::SetCddDisplayMode((PERESOURCE **)v160, v73, v161);
              v75 = v198;
            }
            if ( (v76 & *((_DWORD *)a5 + 19)) != 0 )
            {
              v162 = *((_DWORD *)a5 + v73 + 38);
              if ( (v162 & 7) != 0 )
              {
                *((_DWORD *)a5 + 3 * (v162 & 7) + 54) = 0;
                DxgkLogCodePointPacket(0x65u, v73, *((_DWORD *)a5 + v73 + 38) & 7, 2u, *(_QWORD *)(v14 + 268));
              }
              v163 = ADAPTER_DISPLAY::SetVidPnSourceActive(
                       *(ADAPTER_DISPLAY **)(v14 + 2456),
                       v73,
                       0,
                       v74 == (struct DMMVIDPN *)4,
                       a7);
              v165 = v163;
              if ( v163 < 0 )
              {
                v166 = (_QWORD *)WdLogNewEntry5_WdError(v164);
                v166[3] = v14;
                v166[4] = v73;
                v166[5] = v165;
                WdLogEvent5_WdError(v166);
              }
              if ( v210 )
              {
                v167 = (DMMVIDPNTOPOLOGY *)(v210 + 12);
                v168 = v210 + 19;
                LOBYTE(v168) = 2;
                ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                  v219,
                  (unsigned __int64)(v210 + 19) & -(__int64)(v210 + 12 != 0LL),
                  v168);
                v169 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v167, v73);
                v170 = v169 + 0x80000000;
                if ( (int)v170 >= 0 && v169 != -1071774919 )
                {
                  v171 = WdLogNewEntry5_WdAssertion(v170);
                  WdLogEvent5_WdAssertion(v171);
                }
                ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v219);
              }
              v75 = v198;
              if ( v198 )
                ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v14 + 2456), v198, v73);
              ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v14 + 2456), v73, 0);
              ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v14 + 2456), v73, &stru_1C007BDF8);
              ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v14 + 2456), v73, 0LL);
              v172 = 3760LL * v73;
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 2456) + 112LL) + v172 + 1068) = -1;
              *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 2456) + 112LL) + v172 + 724) = 0;
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v14 + 2456), v73, 1);
            }
            v72 = *(ADAPTER_DISPLAY **)(v14 + 2456);
            ++v73;
          }
          while ( v73 < *((_DWORD *)v72 + 20) );
          v29 = v201;
        }
        if ( v210 )
        {
          v173 = *((_DWORD *)a5 + 59);
          v174 = 0;
          v71 = *((unsigned int *)a5 + 58);
          *((_DWORD *)v72 + 127) = *((_DWORD *)a5 + 57);
          *((_DWORD *)v72 + 128) = v71;
          *((_DWORD *)v72 + 129) = v173;
          v175 = *(_QWORD *)(v14 + 2456);
          if ( *(_DWORD *)(v175 + 80) )
          {
            do
            {
              v176 = v174;
              v177 = *((_DWORD *)a5 + v174++ + 38) & 7;
              v71 = 3760 * v176;
              *(_DWORD *)(3760 * v176 + *(_QWORD *)(v175 + 112) + 3756) = *((_DWORD *)a5 + 3 * v177 + 54) != 0
                                                                        ? v177
                                                                        : 0;
              v175 = *(_QWORD *)(v14 + 2456);
            }
            while ( v174 < *(_DWORD *)(v175 + 80) );
          }
        }
        Global = DXGGLOBAL::GetGlobal(v71);
        QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 127));
        if ( Src )
          operator delete[](Src);
        operator delete[](v205);
        if ( v190 )
          operator delete[](v190);
        if ( v206 )
          operator delete[](v206);
        CVidSchSuspendResume::Resume(v209);
        if ( v29 )
          ReferenceCounted::Release((ReferenceCounted *)(v29 + 64));
        goto LABEL_105;
      }
      v33 = *(unsigned int *)(v31 + 540);
      if ( a7 )
      {
        if ( (_DWORD)v33 )
          goto LABEL_24;
      }
      else if ( !(_DWORD)v33 )
      {
        goto LABEL_24;
      }
      v94 = WdLogNewEntry5_WdAssertion(v33);
      *(_QWORD *)(v94 + 24) = 2563LL;
      WdLogEvent5_WdAssertion(v94);
LABEL_24:
      if ( v32 >= 2200 )
      {
        v95 = 0;
        v96 = 0;
        v97 = 0;
        v98 = 0;
        v99 = 0;
        v100 = *(_DWORD *)(*(_QWORD *)(v14 + 2456) + 80LL);
        if ( v100 )
        {
          do
          {
            v101 = v97;
            v102 = 1 << v99;
            if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & (1 << v99)) != 0 )
            {
              v95 |= v102;
              v97 |= v102;
              if ( IsLegacyDisplayStateSynchronization )
                v97 = v101;
            }
            else if ( (v102 & *(_DWORD *)a5) != 0 )
            {
              v96 |= v102;
              if ( !a7 )
                v98 |= v102;
            }
            ++v99;
          }
          while ( v99 < v100 );
          v29 = v201;
          LODWORD(v20) = v195;
        }
        ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*(ADAPTER_RENDER **)(v14 + 2464), v95, v96, v97, v98);
        *((_DWORD *)a5 + 15) |= v97;
        if ( v98 )
          CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)v209, v98);
      }
      else
      {
        ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v14 + 2464), 8, 0xFFFFFFFF, 0);
      }
      goto LABEL_26;
    }
    v92 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v92 + 24) = *(int *)(v14 + 272);
    *(_QWORD *)(v92 + 32) = *(unsigned int *)(v14 + 268);
    WdLogEvent5_WdWarning(v92);
  }
  return (unsigned int)v20;
}
