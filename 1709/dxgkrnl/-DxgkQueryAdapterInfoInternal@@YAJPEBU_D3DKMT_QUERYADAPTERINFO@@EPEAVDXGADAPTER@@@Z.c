/*
 * XREFs of ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C008E700
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C008E6E0 (DxgkQueryAdapterInfo.c)
 *     ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0194BA0 (-VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x1C00012D8 (RtlStringCbCopyNW.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x1C0001F24 (-QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00075FC (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z @ 0x1C0013E68 (-VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VidMmSetWorkingSetInformation@VIDMM_EXPORT@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_WORKINGSETINFO@@@Z @ 0x1C0023B00 (-VidMmSetWorkingSetInformation@VIDMM_EXPORT@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_WORKINGSETINFO@@@Z.c)
 *     DxgkInvalidateDeviceState @ 0x1C002E788 (DxgkInvalidateDeviceState.c)
 *     ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C007FD9C (-IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z.c)
 *     ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1C0082638 (-QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C00826C4 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMTUMDVERSION@@@Z @ 0x1C0082C20 (-GetUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMTUMDVERSION@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00839FC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C008450C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C00847D8 (-QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0084D8C (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     DpiIsDriverUpdateInProgress @ 0x1C00FAD88 (DpiIsDriverUpdateInProgress.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00FB1B0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C01721C8 (-QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C0176EEC (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x1C017EB80 (-DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C017F070 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGI@Z @ 0x1C017F474 (-TranslateUmdFileNameToVm@@YAJPEAGI@Z.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x1C01974A4 (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C01C8CA4 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C01DC084 (DpiQueryAdapterRegistryInfo.c)
 */

__int64 __fastcall DxgkQueryAdapterInfoInternal(
        const struct _D3DKMT_QUERYADAPTERINFO *a1,
        char a2,
        struct DXGADAPTER *a3)
{
  DXGADAPTER *v3; // r13
  char v4; // di
  const struct _D3DKMT_QUERYADAPTERINFO *v5; // rbx
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *v12; // r15
  DXGADAPTER *v13; // r14
  __int128 v14; // xmm0
  size_t v15; // xmm1_8
  size_t v16; // rbx
  unsigned int v17; // eax
  SIZE_T v18; // rdx
  unsigned int *PoolWithTag; // r12
  unsigned int v20; // esi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  struct DXGADAPTER **v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // edi
  __int64 v40; // rcx
  int PairingAdapters; // ebx
  struct DXGADAPTER *v42; // r15
  struct DXGADAPTER *v43; // rdi
  int v44; // eax
  bool v45; // cl
  struct DXGADAPTER *v46; // rsi
  signed __int64 v47; // rax
  struct DXGADAPTER *v48; // rsi
  char *v49; // r15
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  struct DXGADAPTER *v52; // r8
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rsi
  __int64 v61; // rdx
  int AdapterRegistryInfo; // eax
  size_t v63; // rdi
  void *v64; // rcx
  DXGADAPTER *v65; // rcx
  __int64 v66; // r8
  int v67; // eax
  struct DXGADAPTER *v68; // rdi
  unsigned int *AdapterType; // rax
  unsigned int v70; // edx
  struct DXGADAPTER *v71; // rdi
  const struct _UNICODE_STRING *UMDFileName; // rax
  size_t v73; // rdx
  unsigned __int16 *v74; // rcx
  __int64 v75; // r8
  struct DXGADAPTER *v76; // rdi
  char v77; // di
  DXGADAPTER *v78; // rsi
  int v79; // eax
  unsigned __int8 IsDriverUpdateInProgress; // al
  struct DXGADAPTER *v81; // r8
  BOOL v82; // ecx
  int v83; // edx
  int v84; // edx
  int v85; // ecx
  __int64 v86; // rdi
  unsigned int v87; // eax
  _DWORD *v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // rcx
  __int64 v95; // rdx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // rax
  __int64 v101; // r8
  DXGADAPTER *v102; // rcx
  struct DXGADAPTER *v103; // rdi
  char v104; // cl
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // rcx
  __int64 v109; // rax
  struct DXGADAPTER *v110; // rdi
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v112; // rdi
  __int64 v113; // rax
  DXGADAPTER *v114; // rcx
  __int64 v115; // r8
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // r8
  DXGADAPTER *v121; // rcx
  int AdapterInfo; // eax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  _QWORD *v126; // rax
  wchar_t *v127; // rcx
  _QWORD *v128; // rax
  struct DXGADAPTER *v129; // rdi
  NTSTATUS v130; // eax
  _QWORD *v131; // rax
  __int64 v132; // r8
  size_t v133; // r9
  const wchar_t *v134; // r8
  __int64 v135; // rcx
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // r8
  size_t v139; // r9
  const wchar_t *v140; // r8
  __int64 v141; // r8
  _QWORD *v142; // rax
  int v143; // eax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // rdi
  size_t v148; // rcx
  struct DXGADAPTER *v149; // rdi
  __int64 v150; // rcx
  __int64 v151; // rax
  ADAPTER_RENDER *v152; // rsi
  __int64 v153; // rdi
  char v154; // cl
  __int64 v155; // rax
  __int64 *v156; // rax
  __int64 *v157; // r12
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  size_t v163; // [rsp+50h] [rbp-208h]
  struct DXGADAPTER *v165; // [rsp+60h] [rbp-1F8h] BYREF
  char v166[8]; // [rsp+68h] [rbp-1F0h] BYREF
  void *Src[2]; // [rsp+70h] [rbp-1E8h]
  size_t Size; // [rsp+80h] [rbp-1D8h]
  DXGADAPTER *v169; // [rsp+88h] [rbp-1D0h] BYREF
  struct DXGADAPTER *v170; // [rsp+90h] [rbp-1C8h] BYREF
  BOOL v171; // [rsp+98h] [rbp-1C0h]
  char v172; // [rsp+9Ch] [rbp-1BCh]
  struct DXGPROCESS *v173; // [rsp+A8h] [rbp-1B0h]
  unsigned int *v174; // [rsp+B0h] [rbp-1A8h]
  unsigned int v175; // [rsp+B8h] [rbp-1A0h]
  DXGADAPTER *v176; // [rsp+C0h] [rbp-198h] BYREF
  _QWORD v177[2]; // [rsp+D0h] [rbp-188h] BYREF
  char v178; // [rsp+E0h] [rbp-178h]
  __int64 v179; // [rsp+E8h] [rbp-170h] BYREF
  struct DXGADAPTER *v180; // [rsp+F0h] [rbp-168h]
  char v181; // [rsp+F8h] [rbp-160h]
  unsigned __int64 v182; // [rsp+100h] [rbp-158h] BYREF
  struct DXGDEVICE *v183; // [rsp+108h] [rbp-150h] BYREF
  PVOID P; // [rsp+110h] [rbp-148h]
  char v185[8]; // [rsp+118h] [rbp-140h] BYREF
  struct DXGADAPTER *v186; // [rsp+120h] [rbp-138h]
  char v187; // [rsp+128h] [rbp-130h]
  int v188; // [rsp+130h] [rbp-128h]
  int v189; // [rsp+134h] [rbp-124h] BYREF
  unsigned __int64 v190; // [rsp+138h] [rbp-120h] BYREF
  struct DXGDEVICE *v191; // [rsp+140h] [rbp-118h] BYREF
  __int64 v192; // [rsp+148h] [rbp-110h] BYREF
  __int64 v193; // [rsp+150h] [rbp-108h]
  int v194; // [rsp+158h] [rbp-100h]
  _DXGKARG_QUERYADAPTERINFO v195; // [rsp+160h] [rbp-F8h] BYREF
  unsigned int *v196; // [rsp+190h] [rbp-C8h]
  size_t v197; // [rsp+198h] [rbp-C0h]
  unsigned __int64 v198; // [rsp+1A0h] [rbp-B8h] BYREF
  _BYTE v199[80]; // [rsp+1B0h] [rbp-A8h] BYREF
  wchar_t Str2[20]; // [rsp+200h] [rbp-58h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v188 = 2015;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2015);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v7);
  v12 = ProcessDxgProcess;
  v173 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*((_BYTE *)ProcessDxgProcess + 307) & 4) != 0 )
  {
    ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v112 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v12 = *v112;
      v173 = *v112;
    }
    v4 = a2;
  }
  if ( !v12 )
  {
    v113 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v113 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v113);
LABEL_219:
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v114, &EventProfilerExit, v115, 2015);
    return 3221225485LL;
  }
  v13 = 0LL;
  P = 0LL;
  if ( v4 )
  {
    v10 = MmUserProbeAddress;
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (const struct _D3DKMT_QUERYADAPTERINFO *)MmUserProbeAddress;
    v14 = *(_OWORD *)&v5->hAdapter;
    v15 = *(_QWORD *)&v5->PrivateDriverDataSize;
  }
  else
  {
    v14 = *(_OWORD *)&v5->hAdapter;
    v15 = *(_QWORD *)&v5->PrivateDriverDataSize;
  }
  Size = v15;
  *(_OWORD *)Src = v14;
  if ( !*((_QWORD *)&v14 + 1) )
  {
    v21 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v22, &EventProfilerExit, v23, 2015);
    return 3221225485LL;
  }
  v16 = (unsigned int)Size;
  if ( !(_DWORD)Size )
  {
    v25 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v25);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v26, &EventProfilerExit, v27, 2015);
    return 3221225485LL;
  }
  v17 = (Size + 7) & 0xFFFFFFF8;
  v175 = v17;
  if ( v17 < (unsigned int)Size )
  {
    v28 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    *(_QWORD *)(v28 + 32) = 2120LL;
    WdLogEvent5_WdWarning(v28);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v29, &EventProfilerExit, v30, 2015);
    return 3221225485LL;
  }
  v18 = v17;
  if ( !v17 )
  {
    v18 = 1LL;
    goto LABEL_14;
  }
  if ( v17 <= 0x7FFFFFFFuLL )
  {
LABEL_14:
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag((POOL_TYPE)512, v18, 0x4B677844u);
    goto LABEL_15;
  }
  PoolWithTag = 0LL;
LABEL_15:
  v174 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    v31 = WdLogNewEntry5_WdWarning(v10, v18, v11);
    *(_QWORD *)(v31 + 24) = -1073741801LL;
    WdLogEvent5_WdWarning(v31);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v32, &EventProfilerExit, v33, 2015);
    return 3221225495LL;
  }
  v20 = HIDWORD(Src[0]);
  if ( HIDWORD(Src[0]) == 16 )
  {
LABEL_17:
    v163 = (unsigned int)Size;
    if ( a2 )
    {
      if ( (unsigned __int64)(unsigned int)Size + *((_QWORD *)&v14 + 1) < *((_QWORD *)&v14 + 1)
        || (unsigned __int64)(unsigned int)Size + *((_QWORD *)&v14 + 1) > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(PoolWithTag, *((const void **)&v14 + 1), v16);
    }
    else
    {
      memmove(PoolWithTag, *((const void **)&v14 + 1), (unsigned int)Size);
    }
  }
  else
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
        goto LABEL_17;
      default:
        v163 = (unsigned int)Size;
        memset(PoolWithTag, 0, (unsigned int)Size);
        break;
    }
  }
  v171 = 0;
  if ( v20 == 16 )
  {
    v34 = *((_QWORD *)v12 + 12);
    v171 = v34 && (*(unsigned int (__fastcall **)(_QWORD))(v34 + 224))(0LL);
  }
  v169 = 0LL;
  if ( a2 )
    v35 = &v169;
  else
    v35 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v176,
    (unsigned int)Src[0],
    (struct _KTHREAD **)v12,
    v35);
  if ( a2 )
    v3 = v169;
  else
    v169 = v3;
  if ( !v3 )
  {
    v116 = WdLogNewEntry5_WdWarning(v37, v36, v38);
    *(_QWORD *)(v116 + 24) = LODWORD(Src[0]);
    goto LABEL_227;
  }
  v39 = 0;
  if ( v20 != 9 )
    goto LABEL_54;
  if ( (_DWORD)v16 != 48 )
  {
    v116 = WdLogNewEntry5_WdWarning(v37, v36, v38);
    *(_QWORD *)(v116 + 24) = v16;
LABEL_227:
    *(_QWORD *)(v116 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v116);
    ExFreePoolWithTag(PoolWithTag, 0);
    v114 = v176;
    if ( v176 )
      DXGADAPTER::ReleaseReferenceNoTracking(v176);
    goto LABEL_219;
  }
  v39 = *PoolWithTag;
LABEL_54:
  PairingAdapters = DxgkpGetPairingAdapters(v3, v39, &v165, &v190, &v170, &v198);
  if ( PairingAdapters >= 0 || v20 == 9 )
  {
    v42 = v170;
  }
  else
  {
    v42 = 0LL;
    v170 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v3, v39, &v165, &v190, 0LL, 0LL);
  }
  if ( PairingAdapters >= 0 )
  {
    v43 = v165;
    if ( v165 != v3 && v42 != v3 )
    {
      v117 = WdLogNewEntry5_WdAssertion(v40);
      *(_QWORD *)(v117 + 24) = 2268LL;
      WdLogEvent5_WdAssertion(v117);
    }
    if ( v42 && !*((_QWORD *)v42 + 288) )
    {
      v118 = WdLogNewEntry5_WdAssertion(v40);
      *(_QWORD *)(v118 + 24) = 2270LL;
      WdLogEvent5_WdAssertion(v118);
    }
    if ( !v43 || !*((_QWORD *)v43 + 289) )
    {
      v119 = WdLogNewEntry5_WdAssertion(v40);
      *(_QWORD *)(v119 + 24) = 2272LL;
      WdLogEvent5_WdAssertion(v119);
    }
    v45 = 0;
    if ( v20 <= 0x1B )
    {
      v44 = 138651984;
      if ( _bittest(&v44, v20) )
        v45 = 1;
    }
    if ( (v3 == v43 && *((_BYTE *)v3 + 185) || v43 && *((_BYTE *)v43 + 185) && !v45) && v20 != 15 )
    {
      v186 = v43;
      v187 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v185);
      if ( *((_DWORD *)v43 + 44) != 1 )
      {
        if ( v187 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v185);
        v121 = v176;
        if ( v176 )
          DXGADAPTER::ReleaseReferenceNoTracking(v176);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q((__int64)v121, &EventProfilerExit, v120, 2015);
        return 3221226166LL;
      }
      v195.hKmdProcessHandle = Src[0];
      v197 = Size;
      v196 = PoolWithTag;
      AdapterInfo = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(
                      (struct DXGADAPTER *)((char *)v165 + 3888),
                      v173,
                      (struct _D3DKMT_QUERYADAPTERINFO *)&v195.hKmdProcessHandle,
                      v175);
      v13 = (DXGADAPTER *)AdapterInfo;
      if ( AdapterInfo < 0 )
      {
        v126 = (_QWORD *)WdLogNewEntry5_WdWarning(v124, v123, v125);
        v126[3] = LODWORD(Src[0]);
        v126[4] = v13;
        v126[5] = 2307LL;
        WdLogEvent5_WdWarning(v126);
        ExFreePoolWithTag(PoolWithTag, 0);
        if ( v187 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v185);
        v65 = v176;
        if ( v176 )
          DXGADAPTER::ReleaseReferenceNoTracking(v176);
LABEL_109:
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q((__int64)v65, &EventProfilerExit, v66, 2015);
        return (unsigned int)v13;
      }
      if ( HIDWORD(Src[0]) == 1 )
      {
        v127 = (wchar_t *)(PoolWithTag + 1);
      }
      else
      {
        if ( HIDWORD(Src[0]) != 2 )
        {
LABEL_255:
          if ( v187 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v185);
          v63 = v163;
          goto LABEL_100;
        }
        v127 = (wchar_t *)PoolWithTag;
      }
      LODWORD(v13) = TranslateUmdFileNameToVm(v127, v123);
      goto LABEL_255;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v199, v43, v42);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v165 + 2), v165);
    v46 = v170;
    if ( v170 )
    {
      v47 = _InterlockedExchangeAdd64((volatile signed __int64 *)v170 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v46 = v170;
      if ( v47 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v170 + 2), v170);
    }
    if ( HIDWORD(Src[0]) == 9 )
    {
      LODWORD(v13) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v199);
      if ( (int)v13 < 0 )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v199);
        v63 = v163;
        goto LABEL_100;
      }
      if ( !v46 || !*((_QWORD *)v46 + 288) )
      {
        v159 = WdLogNewEntry5_WdAssertion(v92);
        *(_QWORD *)(v159 + 24) = 2354LL;
        WdLogEvent5_WdAssertion(v159);
      }
      if ( (_DWORD)Size != 48 )
      {
        LODWORD(v13) = -1073741811;
        v160 = WdLogNewEntry5_WdWarning(v92, v91, v93);
        v63 = v163;
        *(_QWORD *)(v160 + 24) = v163;
        *(_QWORD *)(v160 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v160);
        goto LABEL_99;
      }
      v94 = *((_QWORD *)v46 + 288);
      v95 = *PoolWithTag;
      if ( (unsigned int)v95 >= *(_DWORD *)(v94 + 80) )
      {
        LODWORD(v13) = -1071774972;
        v161 = WdLogNewEntry5_WdWarning(v94, v95, v93);
        *(_QWORD *)(v161 + 24) = *PoolWithTag;
        *(_QWORD *)(v161 + 32) = *(unsigned int *)(*((_QWORD *)v46 + 288) + 80LL);
        WdLogEvent5_WdWarning(v161);
      }
      else
      {
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)v94, v95);
        if ( *(_DWORD *)DisplayModeInfo )
        {
          *(_OWORD *)(PoolWithTag + 1) = *(_OWORD *)DisplayModeInfo;
          *(_OWORD *)(PoolWithTag + 5) = *((_OWORD *)DisplayModeInfo + 1);
          *(_QWORD *)(PoolWithTag + 9) = *((_QWORD *)DisplayModeInfo + 4);
          PoolWithTag[11] = *((_DWORD *)DisplayModeInfo + 10);
        }
        else
        {
          LODWORD(v13) = -1071774919;
          v162 = WdLogNewEntry5_WdWarning(v98, v97, v99);
          *(_QWORD *)(v162 + 24) = *PoolWithTag;
          *(_QWORD *)(v162 + 32) = v46;
          WdLogEvent5_WdWarning(v162);
        }
      }
LABEL_98:
      v63 = v163;
LABEL_99:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v199);
LABEL_100:
      if ( (int)v13 >= 0 )
      {
        v64 = Src[1];
        if ( a2 && ((char *)Src[1] + v63 > (void *)MmUserProbeAddress || (char *)Src[1] + v63 <= Src[1]) )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v64, PoolWithTag, v63);
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( v176 && _InterlockedExchangeAdd64((volatile signed __int64 *)v176 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v176 + 2), v176);
      goto LABEL_109;
    }
    v180 = v165;
    _InterlockedIncrement64((volatile signed __int64 *)v43 + 3);
    v179 = -1LL;
    KeEnterCriticalRegion();
    v48 = v165;
    v49 = (char *)v165 + 120;
    ExAcquirePushLockSharedEx((char *)v165 + 120, 0LL);
    v181 = 1;
    v177[1] = v170;
    v178 = 0;
    if ( v170 && v170 != v48 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v170 + 3);
      v177[0] = -1LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)v170 + 120, 0LL);
      v178 = 1;
    }
    v51 = *((unsigned int *)v169 + 44);
    if ( (_DWORD)v51 == 1 )
    {
      v52 = v170;
      if ( !v170 )
        goto LABEL_83;
      if ( *((_DWORD *)v170 + 44) == 1 )
      {
        v52 = v170;
LABEL_83:
        v53 = SHIDWORD(Src[0]);
        if ( HIDWORD(Src[0]) == 16 )
        {
          if ( (_DWORD)Size == 8 )
          {
            v54 = PsGetCurrentProcess();
            v56 = PsGetProcessDxgProcess(v54, v55);
            v60 = v56;
            if ( v56 && (*(_BYTE *)(v56 + 307) & 4) != 0 )
            {
              v156 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
              v157 = v156;
              if ( v156 )
              {
                ObfDereferenceObject(v156);
                v60 = *v157;
              }
              PoolWithTag = v174;
            }
            if ( *(_BYTE *)(v60 + 306) )
            {
              v181 = 0;
              ExReleasePushLockSharedEx(v49, 0LL);
              KeLeaveCriticalRegion();
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v165 + 2), v165);
              if ( v178 )
              {
                v178 = 0;
                v76 = v170;
                ExReleasePushLockSharedEx((char *)v170 + 120, 0LL);
                KeLeaveCriticalRegion();
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v76 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v170 + 2), v170);
              }
              if ( !v171 )
                v13 = v169;
              v172 = 0;
              AdapterRegistryInfo = OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
                                      v13,
                                      v61,
                                      *PoolWithTag,
                                      PoolWithTag,
                                      lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_);
LABEL_94:
              LODWORD(v13) = AdapterRegistryInfo;
            }
            else
            {
              LODWORD(v13) = -1073741790;
              v158 = WdLogNewEntry5_WdWarning(v58, v57, v59);
              *(_QWORD *)(v158 + 24) = -1073741790LL;
              WdLogEvent5_WdWarning(v158);
            }
LABEL_95:
            if ( v178 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v177);
            if ( v181 )
            {
              v181 = 0;
              v68 = v180;
              ExReleasePushLockSharedEx((char *)v180 + 120, 0LL);
              KeLeaveCriticalRegion();
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v180 + 2), v180);
            }
            goto LABEL_98;
          }
LABEL_347:
          LODWORD(v13) = -1073741811;
          v109 = WdLogNewEntry5_WdWarning(v51, v50, v52);
          v148 = v163;
        }
        else
        {
          v50 = 0x1C0000000uLL;
          switch ( HIDWORD(Src[0]) )
          {
            case 0:
              v195.Type = DXGKQAITYPE_UMDRIVERPRIVATE;
              v195.pInputData = 0LL;
              v195.InputDataSize = 0;
              v195.pOutputData = PoolWithTag;
              v195.OutputDataSize = Size;
              v195.Flags.Value = 0;
              AdapterRegistryInfo = DXGADAPTER::DdiQueryAdapterInfo(v165, &v195, (__int64)v52);
              goto LABEL_94;
            case 1:
              if ( (_DWORD)Size != 524 )
                goto LABEL_347;
              v71 = v165;
              if ( *PoolWithTag >= 4 )
              {
                LODWORD(v13) = -1073741811;
              }
              else
              {
                UMDFileName = ADAPTER_RENDER::GetUMDFileName(*((ADAPTER_RENDER **)v165 + 289), *PoolWithTag);
                if ( (unsigned int)IsNullUmdDriver(UMDFileName) )
                {
                  LODWORD(v13) = -1073741811;
                }
                else
                {
                  LODWORD(v13) = RtlStringCbCopyNW(
                                   (NTSTRSAFE_PWSTR)PoolWithTag + 2,
                                   v73,
                                   *(STRSAFE_PCNZWCH *)(v75 + 8),
                                   *v74);
                  if ( (int)v13 >= 0 )
                    goto LABEL_95;
                }
              }
              v128 = (_QWORD *)WdLogNewEntry5_WdEvent();
              v128[3] = PoolWithTag;
              v128[4] = v71;
              v128[5] = (int)v13;
              WdLogEvent5_WdEvent(v128);
              goto LABEL_95;
            case 2:
              if ( (_DWORD)Size != 528 )
                goto LABEL_347;
              v132 = *((_QWORD *)v165 + 289);
              if ( (*((_BYTE *)v173 + 307) & 1) != 0 )
              {
                PoolWithTag[130] = *(_DWORD *)(v132 + 488);
                PoolWithTag[131] = *(_DWORD *)(v132 + 492);
                v133 = *(unsigned __int16 *)(v132 + 472);
                v134 = *(const wchar_t **)(v132 + 480);
              }
              else
              {
                PoolWithTag[130] = *(_DWORD *)(v132 + 464);
                PoolWithTag[131] = *(_DWORD *)(v132 + 468);
                v133 = *(unsigned __int16 *)(v132 + 448);
                v134 = *(const wchar_t **)(v132 + 456);
              }
              LODWORD(v13) = RtlStringCbCopyNW((NTSTRSAFE_PWSTR)PoolWithTag, 0x1C0000000uLL, v134, v133);
              if ( (int)v13 < 0 )
              {
                v136 = WdLogNewEntry5_WdError(v135);
                *(_QWORD *)(v136 + 24) = (int)v13;
                WdLogEvent5_WdError(v136);
              }
              goto LABEL_95;
            case 3:
              if ( (_DWORD)Size != 24 )
                goto LABEL_347;
              VIDMM_EXPORT::VidMmGetTotalSegmentSize(
                *(VIDMM_EXPORT **)(*((_QWORD *)v165 + 289) + 528LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)v165 + 289) + 536LL),
                0,
                &v182,
                &v182,
                &v182,
                (unsigned __int64 *)PoolWithTag,
                (unsigned __int64 *)PoolWithTag + 1,
                (unsigned __int64 *)PoolWithTag + 2);
              goto LABEL_95;
            case 4:
              if ( (_DWORD)Size != 16 )
                goto LABEL_347;
              *(_OWORD *)PoolWithTag = *(_OWORD *)((char *)v169 + 252);
              goto LABEL_95;
            case 5:
              if ( (_DWORD)Size != 12 )
                goto LABEL_347;
              AdapterRegistryInfo = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v165 + 289) + 504LL)
                                                                                                  + 8LL)
                                                                                      + 416LL))(
                                      *(_QWORD *)(*((_QWORD *)v165 + 289) + 512LL),
                                      PoolWithTag);
              goto LABEL_94;
            case 6:
              if ( (_DWORD)Size != 12 )
                goto LABEL_347;
              v137 = *(_QWORD *)(*((_QWORD *)v169 + 24) + 64LL);
              *PoolWithTag = *(_DWORD *)(v137 + 1128);
              PoolWithTag[1] = *(unsigned __int16 *)(v137 + 1134);
              PoolWithTag[2] = (unsigned __int16)*(_DWORD *)(v137 + 1132);
              goto LABEL_95;
            case 7:
              if ( (_DWORD)Size != 12 )
                goto LABEL_347;
              AdapterRegistryInfo = VIDMM_EXPORT::VidMmSetWorkingSetInformation(
                                      *(VIDMM_EXPORT **)(*((_QWORD *)v165 + 289) + 528LL),
                                      v173,
                                      (struct _D3DKMT_WORKINGSETINFO *)PoolWithTag);
              goto LABEL_94;
            case 8:
              if ( (_DWORD)Size != 2080 )
                goto LABEL_347;
              AdapterRegistryInfo = DpiQueryAdapterRegistryInfo(*((_QWORD *)v169 + 24), PoolWithTag);
              goto LABEL_94;
            case 0xB:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              v77 = 0;
              v166[0] = 0;
              v78 = v169;
              v79 = *((_DWORD *)v169 + 75);
              if ( (v79 & 0x20) != 0 || (v79 & 4) != 0 )
              {
                IsDriverUpdateInProgress = 0;
              }
              else
              {
                IsDriverUpdateInProgress = DpiIsDriverUpdateInProgress(*((_QWORD *)v169 + 24), v166);
                v77 = v166[0];
              }
              *PoolWithTag = IsDriverUpdateInProgress;
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v179);
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v177);
              if ( v77 )
                DxgkInvalidateDeviceState(*((_QWORD *)v78 + 24));
              goto LABEL_95;
            case 0xC:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              *PoolWithTag = 0;
              *PoolWithTag ^= (*PoolWithTag ^ (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v165 + 289) + 16LL) + 1700LL) >> 5)) & 1;
              goto LABEL_95;
            case 0xD:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              *PoolWithTag = DXGADAPTER::GetDriverVersion(v169);
              goto LABEL_95;
            case 0xF:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              AdapterType = DXGADAPTER::GetAdapterType(v169, &v189);
              v70 = *AdapterType;
              *PoolWithTag = *AdapterType;
              *PoolWithTag = v70 ^ ((unsigned __int16)v70 ^ (unsigned __int16)(*((unsigned __int8 *)v165 + 186) << 8)) & 0x100;
              goto LABEL_95;
            case 0x11:
              if ( (_DWORD)Size != 12 )
                goto LABEL_347;
              DXGADAPTER::QueryWDDM1_2Caps(v169, (struct _D3DKMT_WDDM_1_2_CAPS *)PoolWithTag);
              goto LABEL_95;
            case 0x12:
              if ( (_DWORD)Size != 8 )
                goto LABEL_347;
              AdapterRegistryInfo = ADAPTER_RENDER::GetUmdFileVersion(
                                      *((ADAPTER_RENDER **)v165 + 289),
                                      (union _LARGE_INTEGER *)PoolWithTag);
              goto LABEL_94;
            case 0x13:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              v104 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v165 + 289) + 16LL) + 2171LL);
              goto LABEL_187;
            case 0x14:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v165 + 289)) )
                goto LABEL_191;
              *PoolWithTag = 1;
              goto LABEL_95;
            case 0x15:
              if ( (_DWORD)Size != 520 )
                goto LABEL_347;
              v129 = v165;
              if ( (_BYTE)word_1C006085C && *((_BYTE *)v165 + 2175) )
              {
                v130 = ADAPTER_RENDER::CopyDListFileName(
                         *((ADAPTER_RENDER **)v165 + 289),
                         (unsigned __int16 *)PoolWithTag,
                         (unsigned int)v52);
LABEL_294:
                v13 = (DXGADAPTER *)v130;
                if ( v130 < 0 )
                {
                  v142 = (_QWORD *)WdLogNewEntry5_WdEvent();
                  v142[3] = PoolWithTag;
                  v142[4] = v129;
                  v142[5] = v13;
                  WdLogEvent5_WdEvent(v142);
                }
              }
              else
              {
                v131 = (_QWORD *)WdLogNewEntry5_WdEvent();
                v131[3] = PoolWithTag;
                v131[4] = v129;
                LODWORD(v13) = -1073741637;
                v131[5] = -1073741637LL;
                WdLogEvent5_WdEvent(v131);
              }
              goto LABEL_95;
            case 0x16:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              DXGADAPTER::QueryWDDM1_3Caps(v169, (struct _D3DKMT_WDDM_1_3_CAPS *)PoolWithTag);
              goto LABEL_95;
            case 0x17:
              if ( (_DWORD)Size != 16 )
                goto LABEL_347;
              if ( !PoolWithTag[1] )
                goto LABEL_210;
              v106 = *((unsigned __int8 *)DXGPROCESS::GetCurrent() + 306);
              if ( !(_BYTE)v106 )
              {
                LODWORD(v13) = -1073741790;
                v109 = WdLogNewEntry5_WdWarning(v106, v105, v107);
                *(_QWORD *)(v109 + 24) = -1073741790LL;
                goto LABEL_209;
              }
              if ( PoolWithTag[1] )
              {
                *(_DWORD *)(*((_QWORD *)v165 + 289) + 968LL) = PoolWithTag[3];
              }
              else
              {
LABEL_210:
                v110 = v165;
                PoolWithTag[2] = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v165 + 289));
                PoolWithTag[3] = *(_DWORD *)(*((_QWORD *)v110 + 289) + 968LL);
              }
              goto LABEL_95;
            case 0x18:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              *PoolWithTag = 0;
              v81 = v165;
              v82 = (*((_DWORD *)v165 + 424) & 0x20) == 0;
              *PoolWithTag = v82;
              v83 = 0;
              if ( (*((_BYTE *)v81 + 1700) & 0x60) == 0x60 )
                v83 = 2;
              v84 = v82 | v83;
              *PoolWithTag = v84;
              v85 = 0;
              if ( (*((_BYTE *)v81 + 1700) & 0xA0) == 0xA0 )
                v85 = 4;
              *PoolWithTag = v84 | v85;
              goto LABEL_95;
            case 0x19:
              if ( (_DWORD)Size != 78 )
                goto LABEL_347;
              AdapterRegistryInfo = DXGADAPTER::QueryNodeMetadata(
                                      v165,
                                      *PoolWithTag,
                                      (struct _DXGK_NODEMETADATA *)(PoolWithTag + 1));
              goto LABEL_94;
            case 0x1A:
              if ( (_DWORD)Size != 520 )
                goto LABEL_347;
              v129 = v165;
              v138 = *((_QWORD *)v165 + 289);
              *(_WORD *)PoolWithTag = 0;
              v139 = *(unsigned __int16 *)(v138 + 416);
              v140 = *(const wchar_t **)(v138 + 424);
              goto LABEL_293;
            case 0x1B:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              *PoolWithTag = (*((_DWORD *)v169 + 75) >> 9) & 1;
              goto LABEL_95;
            case 0x1C:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              *PoolWithTag = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v165 + 289) + 16LL) + 1692LL) & 0x10) != 0;
              goto LABEL_95;
            case 0x1D:
              if ( (_DWORD)Size != 520 )
                goto LABEL_347;
              v129 = v165;
              v141 = *((_QWORD *)v165 + 289);
              *(_WORD *)PoolWithTag = 0;
              v139 = *(unsigned __int16 *)(v141 + 432);
              v140 = *(const wchar_t **)(v141 + 440);
LABEL_293:
              v130 = RtlStringCbCopyNW((NTSTRSAFE_PWSTR)PoolWithTag, 0x1C0000000uLL, v140, v139);
              goto LABEL_294;
            case 0x1E:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              if ( *((int *)v165 + 492) < 0x2000 )
                v67 = 1;
              else
                v67 = *((_DWORD *)v165 + 62);
              *PoolWithTag = v67;
              goto LABEL_95;
            case 0x1F:
              if ( (_DWORD)Size != 28 )
                goto LABEL_347;
              v86 = *PoolWithTag;
              if ( *((int *)v165 + 492) < 0x2000 )
                v87 = 1;
              else
                v87 = *((_DWORD *)v165 + 62);
              if ( (unsigned int)v86 < v87 )
              {
                _mm_lfence();
                v88 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)v165 + 277) + 48 * v86 + 8) + 64LL);
                PoolWithTag[1] = v88[277];
                PoolWithTag[2] = v88[278];
                PoolWithTag[3] = v88[279];
                PoolWithTag[4] = v88[280];
                PoolWithTag[5] = v88[281];
                PoolWithTag[6] = v88[276];
                goto LABEL_95;
              }
              LODWORD(v13) = -1073741811;
              v109 = WdLogNewEntry5_WdWarning(v51, 0x1C0000000uLL, v52);
              *(_QWORD *)(v109 + 24) = v86;
              goto LABEL_349;
            case 0x20:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              QueryDriverCapsExt(v52, (struct _D3DKMT_DRIVERCAPS_EXT *)PoolWithTag);
              goto LABEL_95;
            case 0x21:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              v192 = 0LL;
              v193 = 0LL;
              v194 = 0;
              v143 = DxgkMiracastQueryMiracastSupportInternal(&v192);
              v147 = v143;
              if ( v143 == -1073741637 )
                goto LABEL_191;
              if ( v143 < 0 )
              {
                LODWORD(v13) = v143;
                v109 = WdLogNewEntry5_WdWarning(v145, v144, v146);
                *(_QWORD *)(v109 + 24) = v147;
                goto LABEL_209;
              }
              *PoolWithTag = 2 - ((_BYTE)v193 != 0);
              goto LABEL_95;
            case 0x22:
              if ( (_DWORD)Size != 12 )
                goto LABEL_347;
              v89 = (__int64)v165;
              if ( *((int *)v165 + 492) < 0x2000 )
                v90 = 1LL;
              else
                v90 = *((unsigned int *)v165 + 62);
              if ( (*((_DWORD *)v165 + 425) & 0x40) == 0 )
              {
                LODWORD(v13) = -1073741811;
                v109 = WdLogNewEntry5_WdWarning(v165, 0x1C0000000uLL, v90);
                *(_QWORD *)(v109 + 24) = -1073741811LL;
                goto LABEL_209;
              }
              v50 = *PoolWithTag;
              if ( (unsigned int)v50 < (unsigned int)v90 )
              {
                ADAPTER_RENDER::QueryGpuMmuCaps(
                  *((ADAPTER_RENDER **)v165 + 289),
                  v50,
                  (struct _D3DKMT_GPUMMU_CAPS *)(PoolWithTag + 1));
                goto LABEL_95;
              }
              LODWORD(v13) = -1073741811;
LABEL_315:
              v109 = WdLogNewEntry5_WdWarning(v89, v50, v90);
              v148 = *PoolWithTag;
              break;
            case 0x23:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              v104 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v165 + 289) + 16LL) + 2261LL);
              goto LABEL_187;
            case 0x24:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              *PoolWithTag = *((_DWORD *)DXGGLOBAL::GetGlobal(v51) + 232);
              goto LABEL_95;
            case 0x25:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              *PoolWithTag = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v165 + 289) + 16LL) + 2262LL) != 0;
              goto LABEL_95;
            case 0x26:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              *PoolWithTag = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v165 + 289) + 16LL) + 2263LL) != 0;
              goto LABEL_95;
            case 0x27:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              *PoolWithTag = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v165 + 289) + 16LL) + 2264LL) != 0;
              goto LABEL_95;
            case 0x28:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              *PoolWithTag = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v165 + 289) + 16LL) + 2265LL) != 0;
              goto LABEL_95;
            case 0x29:
              if ( (_DWORD)Size != 24 )
                goto LABEL_347;
              AdapterRegistryInfo = DxgkReadPnPRegistryPath(
                                      v165,
                                      *PoolWithTag,
                                      PoolWithTag[1],
                                      *((_QWORD *)PoolWithTag + 1),
                                      *((_QWORD *)PoolWithTag + 2));
              goto LABEL_94;
            case 0x2A:
              if ( (_DWORD)Size != 56 )
                goto LABEL_347;
              if ( *((int *)v165 + 492) < 0x2000 )
                v89 = 1LL;
              else
                v89 = *((unsigned int *)v165 + 62);
              v90 = *PoolWithTag;
              if ( (unsigned int)v90 >= (unsigned int)v89 )
                goto LABEL_315;
              VIDMM_EXPORT::VidMmGetTotalSegmentSize(
                *(VIDMM_EXPORT **)(*((_QWORD *)v165 + 289) + 528LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)v165 + 289) + 536LL),
                v90,
                (unsigned __int64 *)PoolWithTag + 4,
                (unsigned __int64 *)PoolWithTag + 5,
                (unsigned __int64 *)PoolWithTag + 6,
                (unsigned __int64 *)PoolWithTag + 1,
                (unsigned __int64 *)PoolWithTag + 2,
                (unsigned __int64 *)PoolWithTag + 3);
              goto LABEL_95;
            case 0x2B:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              v104 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v165 + 289) + 16LL) + 2266LL);
LABEL_187:
              if ( !v104 )
                goto LABEL_191;
              goto LABEL_184;
            case 0x2C:
              if ( (_DWORD)Size != 1 )
                goto LABEL_347;
              *(_BYTE *)PoolWithTag = 1;
              v149 = v165;
              if ( *((_DWORD *)v165 + 69) == 1297040209 )
              {
                wcscpy(Str2, L"Qualcomm Adreno 530");
                if ( !wcsncmp(*((const wchar_t **)v165 + 155), Str2, 0x14uLL)
                  && (*(_DWORD *)(*((_QWORD *)v149 + 277) + 16LL) & 0x10) == 0 )
                {
                  *(_BYTE *)PoolWithTag = 0;
                }
              }
              goto LABEL_95;
            case 0x2D:
              if ( (_DWORD)Size != 4 )
                goto LABEL_347;
              v103 = v165;
              if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v165 + 289)) )
                goto LABEL_184;
              v150 = *(_QWORD *)(*((_QWORD *)v103 + 289) + 16LL);
              if ( *(_QWORD *)(v150 + 1104) )
              {
                if ( *(_BYTE *)(v150 + 2266) )
                  goto LABEL_184;
              }
              if ( *(_QWORD *)(v150 + 1112) )
              {
                if ( *(_BYTE *)(v150 + 2266) )
LABEL_184:
                  *PoolWithTag = 1;
                else
                  *PoolWithTag = 0;
              }
              else
              {
LABEL_191:
                *PoolWithTag = 0;
              }
              goto LABEL_95;
            case 0x2E:
              if ( (_DWORD)Size != 12 )
                goto LABEL_347;
              if ( PoolWithTag[1] )
              {
                v151 = *PoolWithTag;
                if ( (unsigned int)v151 < 0x10 )
                  *(_BYTE *)(v151 + *((_QWORD *)v165 + 289) + 952) = PoolWithTag[2] != 0;
              }
              else
              {
                v152 = (ADAPTER_RENDER *)*((_QWORD *)v165 + 289);
                v153 = *PoolWithTag;
                if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v152) && (unsigned int)v153 < 0x10 )
                  v154 = *((_BYTE *)v152 + v153 + 952);
                else
                  v154 = 0;
                PoolWithTag[2] = v154 != 0;
              }
              goto LABEL_95;
            case 0x2F:
              if ( (_DWORD)Size != 8 )
                goto LABEL_347;
              DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
                (DXGDEVICEBYHANDLE *)&v183,
                *PoolWithTag,
                (struct _KTHREAD **)v173,
                &v191);
              if ( v191 )
              {
                *((_BYTE *)PoolWithTag + 4) = *((_BYTE *)v191 + 1730);
              }
              else
              {
                v155 = WdLogNewEntry5_WdError(v108);
                *(_QWORD *)(v155 + 24) = *PoolWithTag;
                WdLogEvent5_WdError(v155);
                LODWORD(v13) = -1073741811;
              }
              if ( v183 && _InterlockedExchangeAdd64((volatile signed __int64 *)v183 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v183 + 2), v183);
              goto LABEL_95;
            default:
              LODWORD(v13) = -1073741811;
              v109 = WdLogNewEntry5_WdWarning(v51, 0x1C0000000uLL, v52);
              *(_QWORD *)(v109 + 24) = v53;
              goto LABEL_349;
          }
        }
        *(_QWORD *)(v109 + 24) = v148;
LABEL_349:
        *(_QWORD *)(v109 + 32) = -1073741811LL;
LABEL_209:
        WdLogEvent5_WdWarning(v109);
        goto LABEL_95;
      }
    }
    LODWORD(v13) = -1073741130;
    if ( v178 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v177);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v179);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v199);
    v63 = v163;
    goto LABEL_100;
  }
  v100 = WdLogNewEntry5_WdError(v40);
  *(_QWORD *)(v100 + 24) = v3;
  *(_QWORD *)(v100 + 32) = v39;
  WdLogEvent5_WdError(v100);
  ExFreePoolWithTag(PoolWithTag, 0);
  v102 = v176;
  if ( v176 )
    DXGADAPTER::ReleaseReferenceNoTracking(v176);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v102, &EventProfilerExit, v101, 2015);
  return (unsigned int)PairingAdapters;
}
