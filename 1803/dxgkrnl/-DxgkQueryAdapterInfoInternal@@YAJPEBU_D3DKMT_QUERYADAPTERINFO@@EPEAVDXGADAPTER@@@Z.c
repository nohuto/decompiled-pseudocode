/*
 * XREFs of ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00FAB60
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C00FAB40 (DxgkQueryAdapterInfo.c)
 *     ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0181080 (-VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0002600 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0014A18 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x1C0015938 (-QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z @ 0x1C001ABBC (-VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?VidMmSetWorkingSetInformation@VIDMM_EXPORT@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_WORKINGSETINFO@@@Z @ 0x1C002BD30 (-VidMmSetWorkingSetInformation@VIDMM_EXPORT@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_WORKINGSETINFO@@@Z.c)
 *     DxgkInvalidateDeviceState @ 0x1C003C868 (DxgkInvalidateDeviceState.c)
 *     ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1C00A57F8 (-QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C00A587C (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMTUMDVERSION@@@Z @ 0x1C00A5918 (-GetUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMTUMDVERSION@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00A6160 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C00A8B78 (-IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     DpiIsDriverUpdateInProgress @ 0x1C00D6D4C (DpiIsDriverUpdateInProgress.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00DCF54 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00F4918 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?ReadBlockListInfo@DXGADAPTER@@QEAAJPEAU_D3DKMT_BLOCKLIST_INFO@@IE@Z @ 0x1C00F4C0C (-ReadBlockListInfo@DXGADAPTER@@QEAAJPEAU_D3DKMT_BLOCKLIST_INFO@@IE@Z.c)
 *     ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C00F4CB4 (-QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00F51FC (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C0149194 (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1C014931C (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 *     ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x1C0149434 (-GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C01494B4 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C014DE50 (-QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C0158CF4 (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C015A224 (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x1C0165AF4 (-DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C0165CE8 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C01666CC (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C0166AD0 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 *     ?TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z @ 0x1C0166BB4 (-TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x1C0183EBC (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C01CBFD4 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C01EFDDC (DpiQueryAdapterRegistryInfo.c)
 *     DpiFdoGetAdapterUniqueGUID @ 0x1C01F4CBC (DpiFdoGetAdapterUniqueGUID.c)
 */

__int64 __fastcall DxgkQueryAdapterInfoInternal(
        const struct _D3DKMT_QUERYADAPTERINFO *a1,
        char a2,
        struct DXGADAPTER *a3)
{
  DXGADAPTER *v3; // r15
  char v4; // di
  const struct _D3DKMT_QUERYADAPTERINFO *v5; // rbx
  DXGADAPTER *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  struct DXGPROCESS *v14; // r12
  __int128 v15; // xmm0
  size_t v16; // xmm1_8
  size_t v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int *v22; // r13
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  bool v38; // al
  struct DXGADAPTER **v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // r12d
  __int64 v44; // rcx
  int PairingAdapters; // edi
  struct DXGADAPTER *v46; // rbx
  struct DXGADAPTER *v47; // rdi
  int v48; // eax
  bool v49; // cl
  struct DXGADAPTER *v50; // rsi
  signed __int64 v51; // rax
  struct DXGADAPTER *v52; // rsi
  char *v53; // r15
  unsigned __int64 v54; // rdx
  __int64 v55; // rcx
  struct DXGADAPTER *v56; // r8
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rsi
  __int64 v64; // rdx
  int AdapterRegistryInfo; // eax
  __int64 v66; // r15
  size_t v67; // rdi
  void *v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // r8
  struct DXGADAPTER *v71; // rdi
  DXGADAPTER *v72; // rcx
  int *AdapterType; // rax
  int v74; // ecx
  struct DXGADAPTER *v75; // rdi
  DXGADAPTER *v76; // rcx
  DXGADAPTER *v77; // rcx
  struct DXGADAPTER *v78; // rdi
  ADAPTER_RENDER *v79; // rcx
  __int64 v80; // rdx
  const struct _UNICODE_STRING *UMDFileName; // rax
  __int64 v82; // r8
  struct DXGPROCESS *v83; // r15
  unsigned int *v84; // rdi
  __int64 v85; // rsi
  __int64 v86; // rax
  __int64 v87; // r8
  int v88; // eax
  DXGADAPTER *v89; // rdi
  char v90; // si
  int v91; // eax
  unsigned __int8 IsDriverUpdateInProgress; // al
  __int64 v93; // rdi
  unsigned int v94; // eax
  _DWORD *v95; // rcx
  struct DXGADAPTER *v96; // r8
  BOOL v97; // edx
  int v98; // ecx
  int v99; // ecx
  int v100; // edx
  int v101; // edx
  unsigned int v102; // r14d
  __int64 v103; // r8
  __int64 v104; // rdx
  DXGADAPTER *v105; // rcx
  struct DXGADAPTER *v106; // rdi
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // rcx
  __int64 v111; // rdx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // rax
  struct DXGADAPTER *v123; // rdi
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v125; // rdi
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // rax
  DXGADAPTER *v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rcx
  unsigned int v136; // ebx
  int v137; // eax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  _QWORD *v141; // rax
  unsigned __int64 v142; // rax
  int v143; // eax
  unsigned __int16 *v144; // rcx
  _QWORD *v145; // rax
  struct DXGADAPTER *v146; // rdi
  int v147; // eax
  __int64 v148; // rdx
  __int64 v149; // rcx
  _QWORD *v150; // rax
  __int64 v151; // r8
  unsigned __int64 v152; // r9
  char *v153; // r8
  __int64 v154; // rcx
  __int64 v155; // rax
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // rax
  struct DXGADAPTER *v159; // rax
  DXGADAPTER *v160; // rdi
  __int64 v161; // rcx
  __int64 v162; // rax
  const void **AdapterUniqueGUID; // rdi
  size_t v164; // r8
  struct DXGADAPTER *v165; // rax
  __int64 v166; // rcx
  struct DXGADAPTER *v167; // rcx
  __int64 v168; // r8
  unsigned __int64 v169; // r9
  char *v170; // r8
  __int64 v171; // r8
  _QWORD *v172; // rax
  size_t v173; // rcx
  int MiracastSupportInternal; // eax
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // rdi
  struct DXGADAPTER *v179; // rdi
  __int64 v180; // rcx
  __int64 v181; // rax
  ADAPTER_RENDER *v182; // rsi
  __int64 v183; // rdi
  char v184; // cl
  __int64 v185; // rcx
  __int64 v186; // rax
  __int64 *v187; // rax
  __int64 *v188; // r12
  __int64 v189; // rax
  DXGADAPTER *v190; // rdi
  __int64 v191; // rax
  __int64 v192; // rax
  __int64 v193; // rax
  __int64 v194; // rax
  size_t v195; // [rsp+50h] [rbp-228h]
  struct DXGADAPTER *v196; // [rsp+60h] [rbp-218h] BYREF
  char v197; // [rsp+68h] [rbp-210h]
  char v198[7]; // [rsp+69h] [rbp-20Fh] BYREF
  void *Src[2]; // [rsp+70h] [rbp-208h]
  size_t Size; // [rsp+80h] [rbp-1F8h]
  DXGADAPTER *v201; // [rsp+88h] [rbp-1F0h] BYREF
  int v202; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v203; // [rsp+98h] [rbp-1E0h]
  struct DXGADAPTER *v204; // [rsp+A0h] [rbp-1D8h] BYREF
  char v205; // [rsp+A8h] [rbp-1D0h]
  struct DXGPROCESS *v206; // [rsp+B0h] [rbp-1C8h]
  __int64 v207; // [rsp+B8h] [rbp-1C0h]
  BOOL v208; // [rsp+C0h] [rbp-1B8h]
  char v209[8]; // [rsp+C8h] [rbp-1B0h] BYREF
  struct DXGADAPTER *v210; // [rsp+D0h] [rbp-1A8h]
  char v211; // [rsp+D8h] [rbp-1A0h]
  unsigned int v212; // [rsp+E0h] [rbp-198h]
  char v213[8]; // [rsp+E8h] [rbp-190h] BYREF
  DXGADAPTER *v214; // [rsp+F0h] [rbp-188h]
  char v215; // [rsp+F8h] [rbp-180h]
  __int64 v216; // [rsp+100h] [rbp-178h] BYREF
  struct DXGADAPTER *v217; // [rsp+108h] [rbp-170h]
  char v218; // [rsp+110h] [rbp-168h]
  unsigned __int64 v219; // [rsp+118h] [rbp-160h] BYREF
  struct DXGDEVICE *v220; // [rsp+120h] [rbp-158h] BYREF
  void *v221; // [rsp+128h] [rbp-150h]
  DXGADAPTER *v222; // [rsp+130h] [rbp-148h] BYREF
  int v223; // [rsp+140h] [rbp-138h] BYREF
  unsigned __int64 v224; // [rsp+148h] [rbp-130h] BYREF
  struct DXGDEVICE *v225[2]; // [rsp+150h] [rbp-128h] BYREF
  unsigned __int64 v226; // [rsp+160h] [rbp-118h] BYREF
  __int64 v227; // [rsp+168h] [rbp-110h] BYREF
  __int64 v228; // [rsp+170h] [rbp-108h]
  int v229; // [rsp+178h] [rbp-100h]
  _DXGKARG_QUERYADAPTERINFO v230; // [rsp+180h] [rbp-F8h] BYREF
  _D3DKMT_QUERYADAPTERINFO v231; // [rsp+1B0h] [rbp-C8h] BYREF
  _BYTE v232[80]; // [rsp+1D0h] [rbp-A8h] BYREF
  wchar_t Str2[20]; // [rsp+220h] [rbp-58h] BYREF

  v3 = a3;
  v4 = a2;
  v197 = a2;
  v5 = a1;
  v6 = 0LL;
  v203 = 0LL;
  v202 = 2015;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2015);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v202, 2015);
  CurrentProcess = PsGetCurrentProcess(v8, v7);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess);
  v14 = ProcessDxgProcess;
  v206 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*((_BYTE *)ProcessDxgProcess + 323) & 4) != 0 )
  {
    ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v125 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v14 = *v125;
      v206 = *v125;
    }
    v4 = v197;
  }
  if ( !v14 )
  {
    v126 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v126 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v126);
    goto LABEL_239;
  }
  v221 = 0LL;
  if ( v4 )
  {
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (const struct _D3DKMT_QUERYADAPTERINFO *)MmUserProbeAddress;
    v15 = *(_OWORD *)&v5->hAdapter;
    v16 = *(_QWORD *)&v5->PrivateDriverDataSize;
  }
  else
  {
    v15 = *(_OWORD *)&v5->hAdapter;
    v16 = *(_QWORD *)&v5->PrivateDriverDataSize;
  }
  Size = v16;
  *(_OWORD *)Src = v15;
  if ( !*((_QWORD *)&v15 + 1) )
  {
    v24 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v202);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v25, &EventProfilerExit, v26, v202);
    return 3221225485LL;
  }
  v17 = (unsigned int)Size;
  if ( !(_DWORD)Size )
  {
    v28 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v202);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v29, &EventProfilerExit, v30, v202);
    return 3221225485LL;
  }
  v18 = (Size + 7) & 0xFFFFFFF8;
  v212 = v18;
  if ( v18 < (unsigned int)Size )
  {
    v31 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v31 + 24) = -1073741811LL;
    *(_QWORD *)(v31 + 32) = 2489LL;
    WdLogEvent5_WdWarning(v31);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v202);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v32, &EventProfilerExit, v33, v202);
    return 3221225485LL;
  }
  v207 = ((_DWORD)Size + 7) & 0xFFFFFFF8;
  v22 = (unsigned int *)operator new[](v18, 0x4B677844u, (POOL_TYPE)512);
  v225[1] = (struct DXGDEVICE *)v22;
  v221 = v22;
  if ( !v22 )
  {
    v34 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v34 + 24) = -1073741801LL;
    WdLogEvent5_WdWarning(v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v202);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v35, &EventProfilerExit, v36, v202);
    return 3221225495LL;
  }
  v23 = SHIDWORD(Src[0]);
  if ( HIDWORD(Src[0]) == 16 )
  {
LABEL_14:
    v195 = (unsigned int)Size;
    if ( v197 )
    {
      if ( (unsigned __int64)(unsigned int)Size + *((_QWORD *)&v15 + 1) < *((_QWORD *)&v15 + 1)
        || (unsigned __int64)(unsigned int)Size + *((_QWORD *)&v15 + 1) > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v22, *((const void **)&v15 + 1), v17);
    }
    else
    {
      memmove(v22, *((const void **)&v15 + 1), (unsigned int)Size);
    }
  }
  else
  {
    if ( SHIDWORD(Src[0]) < 17 || SHIDWORD(Src[0]) >= 23 )
    {
      switch ( HIDWORD(Src[0]) )
      {
        case 1:
        case 7:
        case 9:
        case 0x17:
        case 0x19:
        case 0x1F:
        case 0x22:
        case 0x29:
        case 0x2A:
        case 0x2E:
        case 0x2F:
        case 0x30:
        case 0x32:
        case 0x33:
        case 0x3D:
        case 0x3E:
        case 0x3F:
        case 0x40:
          goto LABEL_14;
        default:
          break;
      }
    }
    v195 = (unsigned int)Size;
    memset(v22, 0, (unsigned int)Size);
  }
  v208 = 0;
  if ( (_DWORD)v23 == 16 )
  {
    v37 = *((_QWORD *)v14 + 13);
    v38 = v37 && (*(unsigned int (__fastcall **)(_QWORD))(v37 + 224))(0LL);
    v208 = v38;
  }
  v201 = 0LL;
  if ( v197 )
    v39 = &v201;
  else
    v39 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v222,
    (unsigned int)Src[0],
    (struct _KTHREAD **)v14,
    v39);
  if ( v197 )
    v3 = v201;
  else
    v201 = v3;
  if ( !v3 )
  {
    v129 = WdLogNewEntry5_WdWarning(v41, v40, v42);
    *(_QWORD *)(v129 + 24) = LODWORD(Src[0]);
    *(_QWORD *)(v129 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v129);
    operator delete[](v22);
    v130 = v222;
    if ( !v222 )
      goto LABEL_239;
LABEL_249:
    DXGADAPTER::ReleaseReferenceNoTracking(v130);
LABEL_239:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v202);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v127, &EventProfilerExit, v128, v202);
    return 3221225485LL;
  }
  v43 = 0;
  if ( (_DWORD)v23 != 9 )
    goto LABEL_52;
  if ( (_DWORD)v17 != 48 )
  {
    v131 = WdLogNewEntry5_WdWarning(v41, v40, v42);
    *(_QWORD *)(v131 + 24) = v17;
    *(_QWORD *)(v131 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v131);
    operator delete[](v22);
    v130 = v222;
    if ( !v222 )
      goto LABEL_239;
    goto LABEL_249;
  }
  v43 = *v22;
LABEL_52:
  PairingAdapters = DxgkpGetPairingAdapters(v3, v43, &v196, &v224, &v204, &v226);
  if ( PairingAdapters >= 0 || (_DWORD)v23 == 9 )
  {
    v46 = v204;
  }
  else
  {
    v46 = 0LL;
    v204 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v3, v43, &v196, &v224, 0LL, 0LL);
  }
  if ( PairingAdapters >= 0 )
  {
    v47 = v196;
    if ( v196 != v3 && v46 != v3 )
    {
      v132 = WdLogNewEntry5_WdAssertion(v44);
      *(_QWORD *)(v132 + 24) = 2644LL;
      WdLogEvent5_WdAssertion(v132);
    }
    if ( v46 && !*((_QWORD *)v46 + 307) )
    {
      v133 = WdLogNewEntry5_WdAssertion(v44);
      *(_QWORD *)(v133 + 24) = 2646LL;
      WdLogEvent5_WdAssertion(v133);
    }
    if ( !v47 || !*((_QWORD *)v47 + 308) )
    {
      v134 = WdLogNewEntry5_WdAssertion(v44);
      *(_QWORD *)(v134 + 24) = 2648LL;
      WdLogEvent5_WdAssertion(v134);
    }
    v49 = 0;
    if ( (unsigned int)v23 <= 0x1B )
    {
      v48 = 138619200;
      if ( _bittest(&v48, v23) )
        v49 = 1;
    }
    if ( v3 == v47 && *((_BYTE *)v3 + 185) || v47 && *((_BYTE *)v47 + 185) && !v49 )
    {
      if ( (unsigned int)v23 > 0x39 || (v135 = 0x210F85840908010LL, !_bittest64(&v135, v23)) )
      {
        v210 = v47;
        v211 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v209);
        if ( *((_DWORD *)v47 + 44) != 1 )
        {
          LODWORD(v66) = -1073741130;
          if ( v211 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v209);
          goto LABEL_263;
        }
        *(void **)&v231.hAdapter = Src[0];
        *(_QWORD *)&v231.PrivateDriverDataSize = Size;
        v231.pPrivateDriverData = v22;
        v136 = v212;
        v137 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(
                 (struct DXGADAPTER *)((char *)v196 + 4080),
                 v206,
                 &v231,
                 v212);
        v66 = v137;
        if ( v137 < 0 )
        {
          v141 = (_QWORD *)WdLogNewEntry5_WdWarning(v139, v138, v140);
          v141[3] = LODWORD(Src[0]);
          v141[4] = v66;
          v141[5] = 2697LL;
          WdLogEvent5_WdWarning(v141);
          if ( v211 )
          {
LABEL_266:
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v209);
            v67 = v195;
            goto LABEL_99;
          }
LABEL_263:
          v67 = v195;
          goto LABEL_99;
        }
        switch ( HIDWORD(Src[0]) )
        {
          case 1:
            if ( v136 < 0x20C )
              goto LABEL_287;
            v144 = (unsigned __int16 *)(v22 + 1);
            break;
          case 2:
            if ( v136 < 0x210 )
              goto LABEL_287;
            v144 = (unsigned __int16 *)v22;
            break;
          case 0x30:
            if ( v136 >= 0x228 )
            {
              if ( !v22[135] && ((v22[1] & 1) != 0 || *v22 == 2) )
              {
                v142 = (unsigned __int64)(v207 - 552) >> 1;
                if ( *v22 == 2 || v22[132] != 7 )
                  v143 = TranslateUmdFileNameToVm((unsigned __int16 *)v22 + 272, (int)v142 + 1, v22 + 134);
                else
                  v143 = TranslateUmdFileNameToVmMultiString((unsigned __int16 *)v22 + 272, (int)v142 + 1, v22 + 134);
                LODWORD(v66) = v143;
                if ( v143 == -2147483643 )
                {
                  LODWORD(v66) = 0;
                  v22[135] = 1;
                }
              }
LABEL_283:
              if ( v211 )
                goto LABEL_266;
              goto LABEL_263;
            }
LABEL_287:
            LODWORD(v66) = -1073741811;
            goto LABEL_283;
          default:
            goto LABEL_283;
        }
        LODWORD(v66) = TranslateUmdFileNameToVm(v144, 0x104u, 0LL);
        goto LABEL_283;
      }
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v232, v47, v46);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v196 + 2), v196);
    v50 = v204;
    if ( v204 )
    {
      v51 = _InterlockedExchangeAdd64((volatile signed __int64 *)v204 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v50 = v204;
      if ( v51 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v204 + 2), v204);
    }
    if ( HIDWORD(Src[0]) == 9 )
    {
      LODWORD(v66) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v232);
      if ( (int)v66 < 0 )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v232);
        goto LABEL_263;
      }
      if ( !v50 || !*((_QWORD *)v50 + 307) )
      {
        v191 = WdLogNewEntry5_WdAssertion(v108);
        *(_QWORD *)(v191 + 24) = 2782LL;
        WdLogEvent5_WdAssertion(v191);
      }
      if ( (_DWORD)Size != 48 )
      {
        LODWORD(v66) = -1073741811;
        v192 = WdLogNewEntry5_WdWarning(v108, v107, v109);
        v67 = v195;
        *(_QWORD *)(v192 + 24) = v195;
        *(_QWORD *)(v192 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v192);
        goto LABEL_98;
      }
      v110 = *((_QWORD *)v50 + 307);
      v111 = *v22;
      if ( (unsigned int)v111 >= *(_DWORD *)(v110 + 80) )
      {
        LODWORD(v66) = -1071774972;
        v193 = WdLogNewEntry5_WdWarning(v110, v111, v109);
        *(_QWORD *)(v193 + 24) = *v22;
        *(_QWORD *)(v193 + 32) = *(unsigned int *)(*((_QWORD *)v50 + 307) + 80LL);
        WdLogEvent5_WdWarning(v193);
      }
      else
      {
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)v110, v111);
        if ( *(_DWORD *)DisplayModeInfo )
        {
          *(_OWORD *)(v22 + 1) = *(_OWORD *)DisplayModeInfo;
          *(_OWORD *)(v22 + 5) = *((_OWORD *)DisplayModeInfo + 1);
          *(_QWORD *)(v22 + 9) = *((_QWORD *)DisplayModeInfo + 4);
          v22[11] = *((_DWORD *)DisplayModeInfo + 10);
        }
        else
        {
          LODWORD(v66) = -1071774919;
          v194 = WdLogNewEntry5_WdWarning(v114, v113, v115);
          *(_QWORD *)(v194 + 24) = *v22;
          *(_QWORD *)(v194 + 32) = v50;
          WdLogEvent5_WdWarning(v194);
        }
      }
LABEL_97:
      v67 = v195;
LABEL_98:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v232);
LABEL_99:
      if ( (int)v66 >= 0 )
      {
        v68 = Src[1];
        if ( v197 && ((char *)Src[1] + v67 > (void *)MmUserProbeAddress || (char *)Src[1] + v67 <= Src[1]) )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v68, v22, v67);
      }
      operator delete[](v22);
      if ( v222 && _InterlockedExchangeAdd64((volatile signed __int64 *)v222 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v222 + 2), v222);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v202);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v69, &EventProfilerExit, v70, v202);
      return (unsigned int)v66;
    }
    v217 = v196;
    _InterlockedIncrement64((volatile signed __int64 *)v47 + 3);
    v216 = -1LL;
    KeEnterCriticalRegion();
    v52 = v196;
    v53 = (char *)v196 + 120;
    ExAcquirePushLockSharedEx((char *)v196 + 120, 0LL);
    v218 = 1;
    v214 = v204;
    v215 = 0;
    if ( v204 && v204 != v52 )
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v213);
    v55 = *((unsigned int *)v201 + 44);
    if ( (_DWORD)v55 == 1 )
    {
      v56 = v204;
      if ( !v204 )
        goto LABEL_81;
      if ( *((_DWORD *)v204 + 44) == 1 )
      {
        v56 = v204;
LABEL_81:
        v57 = SHIDWORD(Src[0]);
        if ( HIDWORD(Src[0]) == 16 )
        {
LABEL_82:
          if ( (_DWORD)Size == 8 )
          {
            v58 = PsGetCurrentProcess(v55, v54);
            v59 = PsGetProcessDxgProcess(v58);
            v63 = v59;
            if ( v59 )
            {
              if ( (*(_BYTE *)(v59 + 323) & 4) != 0 )
              {
                v187 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
                v188 = v187;
                if ( v187 )
                {
                  ObfDereferenceObject(v187);
                  v63 = *v188;
                }
              }
            }
            if ( *(_BYTE *)(v63 + 322) )
            {
              v218 = 0;
              ExReleasePushLockSharedEx(v53, 0LL);
              KeLeaveCriticalRegion();
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v196 + 2), v196);
              if ( v215 )
              {
                v215 = 0;
                v190 = v214;
                ExReleasePushLockSharedEx((char *)v214 + 120, 0LL);
                KeLeaveCriticalRegion();
                DXGADAPTER::ReleaseReferenceNoTracking(v190);
              }
              if ( !v208 )
                v6 = v201;
              v205 = 0;
              AdapterRegistryInfo = OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
                                      v6,
                                      v64,
                                      *v22,
                                      v22,
                                      lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_);
LABEL_93:
              LODWORD(v66) = AdapterRegistryInfo;
            }
            else
            {
              LODWORD(v66) = -1073741790;
              v189 = WdLogNewEntry5_WdWarning(v61, v60, v62);
              *(_QWORD *)(v189 + 24) = -1073741790LL;
              WdLogEvent5_WdWarning(v189);
            }
LABEL_94:
            if ( v215 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v213);
            if ( v218 )
            {
              v218 = 0;
              v75 = v217;
              ExReleasePushLockSharedEx((char *)v217 + 120, 0LL);
              KeLeaveCriticalRegion();
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v217 + 2), v217);
            }
            goto LABEL_97;
          }
LABEL_355:
          LODWORD(v66) = -1073741811;
          v122 = WdLogNewEntry5_WdWarning(v55, v54, v56);
          v173 = v195;
        }
        else
        {
          v54 = 0x1C0000000uLL;
          switch ( HIDWORD(Src[0]) )
          {
            case 0:
              memset(&v230, 0, sizeof(v230));
              v230.Type = DXGKQAITYPE_UMDRIVERPRIVATE;
              v230.pOutputData = v22;
              v230.OutputDataSize = Size;
              v83 = v206;
              if ( (*((_BYTE *)v206 + 323) & 8) != 0 )
              {
                v230.Flags.Value |= 1u;
                v230.Flags.Value ^= (*(_BYTE *)&v230.Flags.0 ^ (unsigned __int8)(2
                                                                               * *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v206 + 57) + 456LL)
                                                                                          + 240LL))) & 2;
              }
              v84 = (unsigned int *)v196;
              v85 = *((_QWORD *)v196 + 308);
              KeEnterCriticalRegion();
              ExAcquirePushLockSharedEx(v85 + 56, 0LL);
              v86 = *(_QWORD *)(*((_QWORD *)v83 + 6) + 8LL * v84[50]);
              if ( v86 )
                v230.hKmdProcessHandle = *(HANDLE *)(v86 + 16);
              ExReleasePushLockSharedEx(v85 + 56, 0LL);
              KeLeaveCriticalRegion();
              AdapterRegistryInfo = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v84, &v230, v87);
              goto LABEL_93;
            case 1:
              if ( (_DWORD)Size != 524 )
                goto LABEL_355;
              v78 = v196;
              v79 = (ADAPTER_RENDER *)*((_QWORD *)v196 + 308);
              v80 = *v22;
              if ( (unsigned int)v80 >= 4 )
              {
                LODWORD(v66) = -1073741811;
              }
              else
              {
                UMDFileName = ADAPTER_RENDER::GetUMDFileName(v79, v80);
                if ( (unsigned int)IsNullUmdDriver(UMDFileName) )
                {
                  LODWORD(v66) = -1073741811;
                }
                else
                {
                  LODWORD(v66) = RtlStringCbCopyNW((char *)v22 + 4, v80, *(char **)(v82 + 8), *(unsigned __int16 *)v79);
                  if ( (int)v66 >= 0 )
                    goto LABEL_94;
                }
              }
              v145 = (_QWORD *)WdLogNewEntry5_WdEvent(v79, v80);
              v145[3] = v22;
              v145[4] = v78;
              v145[5] = (int)v66;
              WdLogEvent5_WdEvent(v145);
              goto LABEL_94;
            case 2:
              if ( (_DWORD)Size != 528 )
                goto LABEL_355;
              v151 = *((_QWORD *)v196 + 308);
              if ( (*((_BYTE *)v206 + 323) & 1) != 0 )
              {
                v22[130] = *(_DWORD *)(v151 + 496);
                v22[131] = *(_DWORD *)(v151 + 500);
                v152 = *(unsigned __int16 *)(v151 + 480);
                v153 = *(char **)(v151 + 488);
              }
              else
              {
                v22[130] = *(_DWORD *)(v151 + 472);
                v22[131] = *(_DWORD *)(v151 + 476);
                v152 = *(unsigned __int16 *)(v151 + 456);
                v153 = *(char **)(v151 + 464);
              }
              LODWORD(v66) = RtlStringCbCopyNW((char *)v22, 0x1C0000000LL, v153, v152);
              if ( (int)v66 < 0 )
              {
                v155 = WdLogNewEntry5_WdError(v154);
                *(_QWORD *)(v155 + 24) = (int)v66;
                WdLogEvent5_WdError(v155);
              }
              goto LABEL_94;
            case 3:
              if ( (_DWORD)Size != 24 )
                goto LABEL_355;
              VIDMM_EXPORT::VidMmGetTotalSegmentSize(
                *(VIDMM_EXPORT **)(*((_QWORD *)v196 + 308) + 544LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)v196 + 308) + 552LL),
                0,
                &v219,
                &v219,
                &v219,
                (unsigned __int64 *)v22,
                (unsigned __int64 *)v22 + 1,
                (unsigned __int64 *)v22 + 2);
              LODWORD(v66) = 0;
              goto LABEL_94;
            case 4:
            case 0x34:
              if ( (_DWORD)Size != 16 )
                goto LABEL_355;
              v159 = v196;
              if ( HIDWORD(Src[0]) == 4 )
                v159 = v201;
              if ( !v159 )
                goto LABEL_317;
              *(_OWORD *)v22 = *(_OWORD *)((char *)v159 + 252);
              LODWORD(v66) = 0;
              goto LABEL_94;
            case 5:
              if ( (_DWORD)Size != 12 )
                goto LABEL_355;
              AdapterRegistryInfo = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v196 + 308) + 520LL)
                                                                                                  + 8LL)
                                                                                      + 512LL))(
                                      *(_QWORD *)(*((_QWORD *)v196 + 308) + 528LL),
                                      v22);
              goto LABEL_93;
            case 6:
            case 0x35:
              if ( (_DWORD)Size != 12 )
                goto LABEL_355;
              LODWORD(v66) = -1073741823;
              v165 = v196;
              if ( HIDWORD(Src[0]) == 6 )
                v165 = v201;
              if ( v165 )
              {
                v166 = *(_QWORD *)(*((_QWORD *)v165 + 24) + 64LL);
                *v22 = *(_DWORD *)(v166 + 1128);
                v22[1] = *(unsigned __int16 *)(v166 + 1134);
                v22[2] = (unsigned __int16)*(_DWORD *)(v166 + 1132);
                LODWORD(v66) = 0;
              }
              goto LABEL_94;
            case 7:
              if ( (_DWORD)Size != 12 )
                goto LABEL_355;
              AdapterRegistryInfo = VIDMM_EXPORT::VidMmSetWorkingSetInformation(
                                      *(VIDMM_EXPORT **)(*((_QWORD *)v196 + 308) + 544LL),
                                      v206,
                                      (struct _D3DKMT_WORKINGSETINFO *)v22);
              goto LABEL_93;
            case 8:
            case 0x36:
              if ( (_DWORD)Size != 2080 )
                goto LABEL_355;
              LODWORD(v66) = -1073741823;
              v167 = v196;
              if ( HIDWORD(Src[0]) == 8 )
                v167 = v201;
              if ( !v167 )
                goto LABEL_94;
              AdapterRegistryInfo = DpiQueryAdapterRegistryInfo(*((_QWORD *)v167 + 24), v22);
              goto LABEL_93;
            case 0xB:
            case 0x37:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              v198[0] = 0;
              LODWORD(v66) = -1073741823;
              if ( HIDWORD(Src[0]) == 11 )
                v89 = v201;
              else
                v89 = v196;
              if ( !v89 )
                goto LABEL_94;
              v90 = 0;
              v198[0] = 0;
              v91 = *((_DWORD *)v89 + 75);
              if ( (v91 & 0x20) != 0 || (v91 & 4) != 0 )
              {
                IsDriverUpdateInProgress = 0;
              }
              else
              {
                IsDriverUpdateInProgress = DpiIsDriverUpdateInProgress(*((_QWORD *)v89 + 24), v198);
                v90 = v198[0];
              }
              *v22 = IsDriverUpdateInProgress;
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v216);
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v213);
              if ( !v90 )
                goto LABEL_159;
              DxgkInvalidateDeviceState(*((_QWORD *)v89 + 24));
              LODWORD(v66) = 0;
              goto LABEL_94;
            case 0xC:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              *v22 = 0;
              *v22 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v196 + 308) + 16LL) + 1836LL) >> 5) & 1;
              LODWORD(v66) = 0;
              goto LABEL_94;
            case 0xD:
            case 0x38:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              LODWORD(v66) = -1073741823;
              if ( HIDWORD(Src[0]) == 13 )
                v105 = v201;
              else
                v105 = v196;
              if ( v105 )
              {
                *v22 = DXGADAPTER::GetDriverVersion(v105);
                LODWORD(v66) = 0;
              }
              goto LABEL_94;
            case 0xF:
            case 0x39:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              LODWORD(v66) = -1073741823;
              v71 = v196;
              if ( HIDWORD(Src[0]) == 15 )
                v72 = v201;
              else
                v72 = v196;
              if ( v72 )
              {
                AdapterType = DXGADAPTER::GetAdapterType(v72, &v223);
                v74 = *AdapterType;
                *v22 = *AdapterType;
                if ( v71 )
                  *v22 = v74 ^ ((unsigned __int16)v74 ^ (unsigned __int16)(*((unsigned __int8 *)v71 + 187) << 8)) & 0x100;
                LODWORD(v66) = 0;
              }
              goto LABEL_94;
            case 0x10:
              goto LABEL_82;
            case 0x11:
            case 0x3A:
              if ( (_DWORD)Size != 12 )
                goto LABEL_355;
              LODWORD(v66) = -1073741823;
              if ( HIDWORD(Src[0]) == 17 )
                v77 = v201;
              else
                v77 = v196;
              if ( v77 )
              {
                DXGADAPTER::QueryWDDM1_2Caps(v77, (struct _D3DKMT_WDDM_1_2_CAPS *)v22);
                LODWORD(v66) = 0;
              }
              goto LABEL_94;
            case 0x12:
              if ( (_DWORD)Size != 8 )
                goto LABEL_355;
              AdapterRegistryInfo = ADAPTER_RENDER::GetUmdFileVersion(
                                      *((union _LARGE_INTEGER **)v196 + 308),
                                      (union _LARGE_INTEGER *)v22);
              goto LABEL_93;
            case 0x13:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              LODWORD(v66) = 0;
              if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v196 + 308) + 16LL) + 2307LL) )
                goto LABEL_206;
              *v22 = 1;
              goto LABEL_94;
            case 0x14:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              LODWORD(v66) = 0;
              if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v196 + 308)) )
                goto LABEL_206;
              *v22 = 1;
              goto LABEL_94;
            case 0x15:
              if ( (_DWORD)Size != 520 )
                goto LABEL_355;
              v146 = v196;
              if ( (_BYTE)word_1C007A75C && *((_BYTE *)v196 + 2311) )
              {
                v147 = ADAPTER_RENDER::CopyDListFileName(
                         *((ADAPTER_RENDER **)v196 + 308),
                         (unsigned __int16 *)v22,
                         (unsigned int)v56);
LABEL_352:
                v66 = v147;
                if ( v147 < 0 )
                {
                  v172 = (_QWORD *)WdLogNewEntry5_WdEvent(v149, v148);
                  v172[3] = v22;
                  v172[4] = v146;
                  v172[5] = v66;
                  WdLogEvent5_WdEvent(v172);
                }
              }
              else
              {
                v150 = (_QWORD *)WdLogNewEntry5_WdEvent(v55, 0x1C0000000uLL);
                v150[3] = v22;
                v150[4] = v146;
                LODWORD(v66) = -1073741637;
                v150[5] = -1073741637LL;
                WdLogEvent5_WdEvent(v150);
              }
              goto LABEL_94;
            case 0x16:
            case 0x3B:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              LODWORD(v66) = -1073741823;
              if ( HIDWORD(Src[0]) == 22 )
                v76 = v201;
              else
                v76 = v196;
              if ( v76 )
              {
                DXGADAPTER::QueryWDDM1_3Caps(v76, (struct _D3DKMT_WDDM_1_3_CAPS *)v22);
                LODWORD(v66) = 0;
              }
              goto LABEL_94;
            case 0x17:
              if ( (_DWORD)Size != 16 )
                goto LABEL_355;
              if ( !v22[1] )
                goto LABEL_228;
              if ( !*((_BYTE *)DXGPROCESS::GetCurrent(v55, 0x1C0000000LL) + 322) )
              {
                LODWORD(v66) = -1073741790;
                v122 = WdLogNewEntry5_WdWarning(v117, v116, v118);
                *(_QWORD *)(v122 + 24) = -1073741790LL;
                goto LABEL_222;
              }
              if ( v22[1] )
              {
                *(_DWORD *)(*((_QWORD *)v196 + 308) + 984LL) = v22[3];
                LODWORD(v66) = 0;
              }
              else
              {
LABEL_228:
                v123 = v196;
                v22[2] = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v196 + 308));
                v22[3] = *(_DWORD *)(*((_QWORD *)v123 + 308) + 984LL);
LABEL_229:
                LODWORD(v66) = 0;
              }
              goto LABEL_94;
            case 0x18:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              *v22 = 0;
              v96 = v196;
              v97 = (*((_DWORD *)v196 + 458) & 0x20) == 0;
              *v22 = v97;
              v98 = 0;
              if ( (*((_BYTE *)v96 + 1836) & 0x60) == 0x60 )
                v98 = 2;
              v99 = v97 | v98;
              *v22 = v99;
              v100 = 0;
              if ( (*((_BYTE *)v96 + 1836) & 0xA0) == 0xA0 )
                v100 = 4;
              v101 = v99 | v100;
              *v22 = v101;
              if ( *((_DWORD *)v96 + 585) > 1u )
                LODWORD(v6) = 8;
              v102 = v101 | (unsigned int)v6;
              *v22 = v102;
              *v22 = v102 | (16 * (*((_DWORD *)v96 + 586) & 1));
              LODWORD(v66) = 0;
              goto LABEL_94;
            case 0x19:
              if ( (_DWORD)Size != 78 )
                goto LABEL_355;
              AdapterRegistryInfo = DXGADAPTER::QueryNodeMetadata(v196, *v22, (struct _DXGK_NODEMETADATA *)(v22 + 1));
              goto LABEL_93;
            case 0x1A:
              if ( (_DWORD)Size != 520 )
                goto LABEL_355;
              v146 = v196;
              v168 = *((_QWORD *)v196 + 308);
              *(_WORD *)v22 = 0;
              v169 = *(unsigned __int16 *)(v168 + 424);
              v170 = *(char **)(v168 + 432);
              goto LABEL_351;
            case 0x1B:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              *v22 = (*((_DWORD *)v201 + 75) & 0x200) != 0;
              LODWORD(v66) = 0;
              goto LABEL_94;
            case 0x1C:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              LODWORD(v66) = 0;
              if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v196 + 308) + 16LL) + 1828LL) & 0x10) == 0 )
                goto LABEL_206;
              *v22 = 1;
              goto LABEL_94;
            case 0x1D:
              if ( (_DWORD)Size != 520 )
                goto LABEL_355;
              v146 = v196;
              v171 = *((_QWORD *)v196 + 308);
              *(_WORD *)v22 = 0;
              v169 = *(unsigned __int16 *)(v171 + 440);
              v170 = *(char **)(v171 + 448);
LABEL_351:
              v147 = RtlStringCbCopyNW((char *)v22, 0x1C0000000LL, v170, v169);
              goto LABEL_352;
            case 0x1E:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              if ( *((int *)v196 + 526) < 0x2000 )
                v88 = 1;
              else
                v88 = *((_DWORD *)v196 + 62);
              *v22 = v88;
              LODWORD(v66) = 0;
              goto LABEL_94;
            case 0x1F:
              if ( (_DWORD)Size != 28 )
                goto LABEL_355;
              v93 = *v22;
              if ( *((int *)v196 + 526) < 0x2000 )
                v94 = 1;
              else
                v94 = *((_DWORD *)v196 + 62);
              if ( (unsigned int)v93 < v94 )
              {
                _mm_lfence();
                v95 = *(_DWORD **)(*(_QWORD *)(352 * v93 + *((_QWORD *)v196 + 295) + 8) + 64LL);
                v22[1] = v95[277];
                v22[2] = v95[278];
                v22[3] = v95[279];
                v22[4] = v95[280];
                v22[5] = v95[281];
                v22[6] = v95[276];
                LODWORD(v66) = 0;
                goto LABEL_94;
              }
              LODWORD(v66) = -1073741811;
              v122 = WdLogNewEntry5_WdWarning(v55, 0x1C0000000uLL, v56);
              *(_QWORD *)(v122 + 24) = v93;
              goto LABEL_357;
            case 0x20:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              QueryDriverCapsExt(v56, (struct _D3DKMT_DRIVERCAPS_EXT *)v22);
              LODWORD(v66) = 0;
              goto LABEL_94;
            case 0x21:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              v227 = 0LL;
              v228 = 0LL;
              v229 = 0;
              MiracastSupportInternal = DxgkMiracastQueryMiracastSupportInternal((__int64)&v227);
              v178 = MiracastSupportInternal;
              if ( MiracastSupportInternal == -1073741637 )
              {
                *v22 = 0;
                LODWORD(v66) = 0;
                goto LABEL_94;
              }
              if ( MiracastSupportInternal < 0 )
              {
                LODWORD(v66) = MiracastSupportInternal;
                v122 = WdLogNewEntry5_WdWarning(v176, v175, v177);
                *(_QWORD *)(v122 + 24) = v178;
                goto LABEL_222;
              }
              *v22 = 2 - ((_BYTE)v228 != 0);
              LODWORD(v66) = 0;
              goto LABEL_94;
            case 0x22:
              if ( (_DWORD)Size != 12 )
                goto LABEL_355;
              if ( *((int *)v196 + 526) < 0x2000 )
                v103 = 1LL;
              else
                v103 = *((unsigned int *)v196 + 62);
              if ( (*((_DWORD *)v196 + 459) & 0x40) == 0 )
              {
                LODWORD(v66) = -1073741811;
                v122 = WdLogNewEntry5_WdWarning(v196, 0x1C0000000uLL, v103);
                *(_QWORD *)(v122 + 24) = -1073741811LL;
                goto LABEL_222;
              }
              v104 = *v22;
              if ( (unsigned int)v104 < (unsigned int)v103 )
              {
                ADAPTER_RENDER::QueryGpuMmuCaps(
                  *((ADAPTER_RENDER **)v196 + 308),
                  v104,
                  (struct _D3DKMT_GPUMMU_CAPS *)(v22 + 1));
                LODWORD(v66) = 0;
                goto LABEL_94;
              }
              LODWORD(v66) = -1073741811;
              v122 = WdLogNewEntry5_WdWarning(v196, v104, v103);
              v173 = *v22;
              break;
            case 0x23:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              LODWORD(v66) = 0;
              if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v196 + 308) + 16LL) + 2405LL) )
                goto LABEL_206;
              *v22 = 1;
              goto LABEL_94;
            case 0x24:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              *v22 = *((_DWORD *)DXGGLOBAL::GetGlobal(v55) + 252);
              LODWORD(v66) = 0;
              goto LABEL_94;
            case 0x25:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v196 + 308) + 16LL) + 2406LL) != 0;
              *v22 = (unsigned int)v6;
              LODWORD(v66) = 0;
              goto LABEL_94;
            case 0x26:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v196 + 308) + 16LL) + 2407LL) != 0;
              *v22 = (unsigned int)v6;
              LODWORD(v66) = 0;
              goto LABEL_94;
            case 0x27:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v196 + 308) + 16LL) + 2408LL) != 0;
              *v22 = (unsigned int)v6;
              LODWORD(v66) = 0;
              goto LABEL_94;
            case 0x28:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v196 + 308) + 16LL) + 2409LL) != 0;
              *v22 = (unsigned int)v6;
              LODWORD(v66) = 0;
              goto LABEL_94;
            case 0x29:
              if ( (_DWORD)Size != 24 )
                goto LABEL_355;
              AdapterRegistryInfo = DxgkReadPnPRegistryPath(
                                      v196,
                                      *v22,
                                      v22[1],
                                      *((_QWORD *)v22 + 1),
                                      *((_QWORD *)v22 + 2));
              goto LABEL_93;
            case 0x2A:
              if ( (_DWORD)Size != 56 )
                goto LABEL_355;
              if ( *((int *)v196 + 526) < 0x2000 )
                v156 = 1LL;
              else
                v156 = *((unsigned int *)v196 + 62);
              v157 = *v22;
              if ( (unsigned int)v157 >= (unsigned int)v156 )
              {
                v158 = WdLogNewEntry5_WdWarning(v156, 0x1C0000000uLL, v157);
                *(_QWORD *)(v158 + 24) = *v22;
                *(_QWORD *)(v158 + 32) = -1073741811LL;
                WdLogEvent5_WdWarning(v158);
              }
              else
              {
                VIDMM_EXPORT::VidMmGetTotalSegmentSize(
                  *(VIDMM_EXPORT **)(*((_QWORD *)v196 + 308) + 544LL),
                  *(struct VIDMM_GLOBAL **)(*((_QWORD *)v196 + 308) + 552LL),
                  v157,
                  (unsigned __int64 *)v22 + 4,
                  (unsigned __int64 *)v22 + 5,
                  (unsigned __int64 *)v22 + 6,
                  (unsigned __int64 *)v22 + 1,
                  (unsigned __int64 *)v22 + 2,
                  (unsigned __int64 *)v22 + 3);
              }
LABEL_159:
              LODWORD(v66) = 0;
              goto LABEL_94;
            case 0x2B:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              LODWORD(v66) = 0;
              if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v196 + 308) + 16LL) + 2410LL) )
                *v22 = 1;
              else
LABEL_206:
                *v22 = 0;
              goto LABEL_94;
            case 0x2C:
              if ( (_DWORD)Size != 1 )
                goto LABEL_355;
              *(_BYTE *)v22 = 1;
              v179 = v196;
              if ( *((_DWORD *)v196 + 69) != 1297040209 )
                goto LABEL_229;
              wcscpy(Str2, L"Qualcomm Adreno 530");
              if ( wcsncmp(*((const wchar_t **)v196 + 167), Str2, 0x14uLL) )
                goto LABEL_229;
              LODWORD(v66) = 0;
              if ( (*(_DWORD *)(*((_QWORD *)v179 + 295) + 16LL) & 0x10) == 0 )
                *(_BYTE *)v22 = 0;
              goto LABEL_94;
            case 0x2D:
              if ( (_DWORD)Size != 4 )
                goto LABEL_355;
              v106 = v196;
              if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v196 + 308))
                || (v180 = *(_QWORD *)(*((_QWORD *)v106 + 308) + 16LL), *(_QWORD *)(v180 + 1112))
                && *(_BYTE *)(v180 + 2410)
                || *(_QWORD *)(v180 + 1120) && *(_BYTE *)(v180 + 2410) )
              {
                *v22 = 1;
                LODWORD(v66) = 0;
              }
              else
              {
                *v22 = 0;
                LODWORD(v66) = 0;
              }
              goto LABEL_94;
            case 0x2E:
              if ( (_DWORD)Size != 12 )
                goto LABEL_355;
              if ( v22[1] )
              {
                v181 = *v22;
                LODWORD(v66) = 0;
                if ( (unsigned int)v181 < 0x10 )
                  *(_BYTE *)(v181 + *((_QWORD *)v196 + 308) + 968) = v22[2] != 0;
              }
              else
              {
                v182 = (ADAPTER_RENDER *)*((_QWORD *)v196 + 308);
                v183 = *v22;
                if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v182) && (unsigned int)v183 < 0x10 )
                  v184 = *((_BYTE *)v182 + v183 + 968);
                else
                  v184 = 0;
                LOBYTE(v6) = v184 != 0;
                v22[2] = (unsigned int)v6;
                LODWORD(v66) = 0;
              }
              goto LABEL_94;
            case 0x2F:
              if ( (_DWORD)Size != 8 )
                goto LABEL_355;
              DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v220, *v22, (struct _KTHREAD **)v206, v225);
              if ( v225[0] )
              {
                *((_BYTE *)v22 + 4) = *((_BYTE *)v225[0] + 1746);
                LODWORD(v66) = 0;
              }
              else
              {
                v186 = WdLogNewEntry5_WdError(v185);
                *(_QWORD *)(v186 + 24) = *v22;
                WdLogEvent5_WdError(v186);
                LODWORD(v66) = -1073741811;
              }
              if ( v220 && _InterlockedExchangeAdd64((volatile signed __int64 *)v220 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v220 + 2), v220);
              goto LABEL_94;
            case 0x30:
              AdapterRegistryInfo = DxgkpQueryRegistry(v196, v22, Size);
              goto LABEL_93;
            case 0x31:
              if ( (_DWORD)Size != 8 )
                goto LABEL_355;
              AdapterRegistryInfo = ADAPTER_RENDER::GetKmdFileVersion(
                                      *((ADAPTER_RENDER **)v196 + 308),
                                      (union _LARGE_INTEGER *)v22);
              goto LABEL_93;
            case 0x32:
            case 0x33:
              v56 = (struct DXGADAPTER *)(unsigned int)Size;
              if ( (unsigned int)Size < 8 )
                goto LABEL_355;
              AdapterRegistryInfo = DXGADAPTER::ReadBlockListInfo(
                                      v196,
                                      (struct _D3DKMT_BLOCKLIST_INFO *)v22,
                                      (unsigned int)Size,
                                      HIDWORD(Src[0]) == 50);
              goto LABEL_93;
            case 0x3C:
              if ( (_DWORD)Size != 80 )
                goto LABEL_355;
              v160 = v201;
              v161 = *((_QWORD *)v201 + 24);
              if ( !v161 )
              {
                v162 = WdLogNewEntry5_WdAssertion(0LL);
                *(_QWORD *)(v162 + 24) = 3111LL;
                WdLogEvent5_WdAssertion(v162);
                v161 = *((_QWORD *)v160 + 24);
              }
              AdapterUniqueGUID = (const void **)DpiFdoGetAdapterUniqueGUID(v161);
              if ( AdapterUniqueGUID )
              {
                memset(v22, 0, 0x50uLL);
                v164 = *(unsigned __int16 *)AdapterUniqueGUID;
                if ( *(_WORD *)AdapterUniqueGUID >= 0x4Eu )
                  v164 = 78LL;
                memmove(v22, AdapterUniqueGUID[1], v164);
                LODWORD(v66) = 0;
              }
              else
              {
LABEL_317:
                LODWORD(v66) = -1073741823;
              }
              goto LABEL_94;
            case 0x3D:
              if ( (_DWORD)Size != 48 )
                goto LABEL_355;
              AdapterRegistryInfo = DXGADAPTER::GetNodePerfData(v196, (struct _D3DKMT_NODE_PERFDATA *)v22);
              goto LABEL_93;
            case 0x3E:
              if ( (_DWORD)Size != 64 )
                goto LABEL_355;
              AdapterRegistryInfo = DXGADAPTER::GetAdapterPerfData(v196, (struct _D3DKMT_ADAPTER_PERFDATA *)v22);
              goto LABEL_93;
            case 0x3F:
              if ( (_DWORD)Size != 40 )
                goto LABEL_355;
              AdapterRegistryInfo = DXGADAPTER::GetAdapterPerfDataCaps(v196, (struct _D3DKMT_ADAPTER_PERFDATACAPS *)v22);
              goto LABEL_93;
            case 0x40:
              if ( (_DWORD)Size != 132 )
                goto LABEL_355;
              AdapterRegistryInfo = DXGADAPTER::GetGpuVersion(v196, (struct _D3DKMT_GPUVERSION *)v22);
              goto LABEL_93;
            default:
              LODWORD(v66) = -1073741811;
              v122 = WdLogNewEntry5_WdWarning(v55, 0x1C0000000uLL, v56);
              *(_QWORD *)(v122 + 24) = v57;
              goto LABEL_357;
          }
        }
        *(_QWORD *)(v122 + 24) = v173;
LABEL_357:
        *(_QWORD *)(v122 + 32) = -1073741811LL;
LABEL_222:
        WdLogEvent5_WdWarning(v122);
        goto LABEL_94;
      }
    }
    LODWORD(v66) = -1073741130;
    if ( v215 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v213);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v216);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v232);
    goto LABEL_263;
  }
  v119 = WdLogNewEntry5_WdError(v44);
  *(_QWORD *)(v119 + 24) = v3;
  *(_QWORD *)(v119 + 32) = v43;
  WdLogEvent5_WdError(v119);
  operator delete[](v22);
  if ( v222 )
    DXGADAPTER::ReleaseReferenceNoTracking(v222);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v202);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v120, &EventProfilerExit, v121, v202);
  return (unsigned int)PairingAdapters;
}
