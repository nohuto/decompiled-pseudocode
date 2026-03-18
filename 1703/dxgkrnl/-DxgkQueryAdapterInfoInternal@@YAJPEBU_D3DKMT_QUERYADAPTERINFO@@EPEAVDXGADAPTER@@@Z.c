/*
 * XREFs of ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00D94F0
 * Callers:
 *     ?VmBusQueryAdapterInfo@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002E6F0 (-VmBusQueryAdapterInfo@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkQueryAdapterInfo @ 0x1C00D94E0 (DxgkQueryAdapterInfo.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x1C0001E90 (RtlStringCbCopyNW.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x1C0006A70 (-QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000B4C0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     RtlStringCbCopyW @ 0x1C000CC60 (RtlStringCbCopyW.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z @ 0x1C00128C4 (-VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VidMmSetWorkingSetInformation@VIDMM_EXPORT@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_WORKINGSETINFO@@@Z @ 0x1C002546C (-VidMmSetWorkingSetInformation@VIDMM_EXPORT@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_WORKINGSETINFO@@@Z.c)
 *     ?VmBusSendQueryAdapterInfo@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@@Z @ 0x1C0030EF0 (-VmBusSendQueryAdapterInfo@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@@Z.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C008C2A0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1C00CEEAC (-QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C00CEF34 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C00CF480 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00D00CC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00D2FBC (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C00D31D8 (-QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00D3750 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C016E9F0 (-QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C01734F8 (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x1C017ADD0 (-DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C017B2C0 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C01AEEF8 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C01C2998 (DpiQueryAdapterRegistryInfo.c)
 */

__int64 __fastcall DxgkQueryAdapterInfoInternal(
        const struct _D3DKMT_QUERYADAPTERINFO *a1,
        char a2,
        struct DXGADAPTER *a3)
{
  DXGADAPTER *v3; // r15
  const struct _D3DKMT_QUERYADAPTERINFO *v5; // rbx
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGPROCESS *v13; // r14
  DXGADAPTER *v14; // r13
  __int128 v15; // xmm0
  size_t v16; // xmm1_8
  size_t v17; // rbx
  unsigned int v18; // eax
  SIZE_T v19; // rdx
  unsigned int *PoolWithTag; // r12
  unsigned int v21; // edi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  bool v36; // al
  struct DXGADAPTER **v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned int v42; // r14d
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // r8
  __int64 v47; // r9
  struct DXGADAPTER *v48; // rbx
  struct DXGADAPTER *v49; // r14
  int v50; // eax
  bool v51; // cl
  struct DXGADAPTER *v52; // rdi
  signed __int64 v53; // rax
  struct DXGADAPTER *v54; // rdi
  char *v55; // r15
  unsigned __int64 v56; // rdx
  __int64 v57; // r9
  __int64 v58; // rcx
  struct DXGADAPTER *v59; // r8
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdi
  __int64 v69; // rdx
  int AdapterRegistryInfo; // eax
  size_t v71; // rdi
  void *v72; // rcx
  DXGADAPTER *v73; // rcx
  __int64 v74; // r8
  int v75; // eax
  struct DXGADAPTER *v76; // rdi
  signed int v77; // eax
  __int64 v78; // rcx
  struct DXGADAPTER *v79; // r8
  BOOL v80; // ecx
  int v81; // edx
  unsigned int v82; // edx
  unsigned int v83; // eax
  _DWORD *v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rdx
  char v87; // cl
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rcx
  __int64 v93; // rdx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  struct DXGADAPTER *v99; // rdi
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rax
  struct DXGADAPTER *v104; // rdi
  struct DXGPROCESS **ThreadProperty; // rax
  __int64 v106; // rax
  DXGADAPTER *v107; // rcx
  __int64 v108; // r8
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // r8
  DXGADAPTER *v114; // rcx
  int AdapterInfo; // eax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  _QWORD *v120; // rax
  __int64 v121; // rcx
  _WORD *v122; // rax
  __int64 v123; // rax
  _WORD *v124; // rdx
  int v125; // r13d
  _QWORD *v126; // rax
  _QWORD *v127; // rax
  __int64 v128; // rax
  __int64 ProcessWow64Process; // rax
  size_t v130; // rdx
  __int64 v131; // r8
  size_t v132; // r9
  const wchar_t *v133; // r8
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rax
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // rax
  __int64 v140; // rdx
  size_t v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r8
  int MiracastSupportInternal; // eax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // rdi
  struct DXGADAPTER *v150; // rdi
  __int64 v151; // rax
  __int64 v152; // rax
  ADAPTER_RENDER *v153; // rsi
  __int64 v154; // rdi
  char v155; // cl
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 *v158; // rax
  DXGADAPTER *v159; // rdi
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  size_t v164; // [rsp+58h] [rbp-1F0h]
  struct DXGADAPTER *v165; // [rsp+60h] [rbp-1E8h] BYREF
  char v166; // [rsp+68h] [rbp-1E0h]
  void *Src[2]; // [rsp+70h] [rbp-1D8h]
  size_t Size; // [rsp+80h] [rbp-1C8h]
  DXGADAPTER *v169; // [rsp+88h] [rbp-1C0h] BYREF
  struct DXGADAPTER *v170; // [rsp+90h] [rbp-1B8h] BYREF
  char v171; // [rsp+98h] [rbp-1B0h]
  BOOL v172; // [rsp+9Ch] [rbp-1ACh]
  struct DXGPROCESS *v173; // [rsp+A8h] [rbp-1A0h]
  DXGADAPTER *v174; // [rsp+B0h] [rbp-198h] BYREF
  char v175[8]; // [rsp+C0h] [rbp-188h] BYREF
  DXGADAPTER *v176; // [rsp+C8h] [rbp-180h]
  char v177; // [rsp+D0h] [rbp-178h]
  unsigned __int64 v178; // [rsp+D8h] [rbp-170h] BYREF
  struct DXGDEVICE *v179[2]; // [rsp+E0h] [rbp-168h] BYREF
  PVOID P; // [rsp+F0h] [rbp-158h]
  char v181[8]; // [rsp+F8h] [rbp-150h] BYREF
  struct DXGADAPTER *v182; // [rsp+100h] [rbp-148h]
  char v183; // [rsp+108h] [rbp-140h]
  _QWORD v184[2]; // [rsp+110h] [rbp-138h] BYREF
  char v185; // [rsp+120h] [rbp-128h]
  int v186; // [rsp+128h] [rbp-120h]
  int v187; // [rsp+12Ch] [rbp-11Ch] BYREF
  unsigned __int64 v188; // [rsp+130h] [rbp-118h] BYREF
  struct DXGDEVICE *v189; // [rsp+138h] [rbp-110h] BYREF
  __int64 v190; // [rsp+140h] [rbp-108h] BYREF
  __int64 v191; // [rsp+148h] [rbp-100h]
  int v192; // [rsp+150h] [rbp-F8h]
  struct _DXGKARG_QUERYADAPTERINFO v193; // [rsp+158h] [rbp-F0h] BYREF
  unsigned int *v194; // [rsp+188h] [rbp-C0h]
  size_t v195; // [rsp+190h] [rbp-B8h]
  unsigned __int64 v196; // [rsp+198h] [rbp-B0h] BYREF
  _BYTE v197[80]; // [rsp+1A0h] [rbp-A8h] BYREF
  wchar_t Str2[20]; // [rsp+1F0h] [rbp-58h] BYREF

  v3 = a3;
  v166 = a2;
  v5 = a1;
  v186 = 2015;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2015);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v7);
  v13 = ProcessDxgProcess;
  v173 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*((_BYTE *)ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
      {
        v13 = *ThreadProperty;
        v173 = *ThreadProperty;
      }
    }
  }
  if ( !v13 )
  {
    v106 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v106 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v106);
LABEL_210:
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v107, &EventProfilerExit, v108, 2015);
    return 3221225485LL;
  }
  v14 = 0LL;
  P = 0LL;
  if ( a2 )
  {
    v10 = MmUserProbeAddress;
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
    v22 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v22);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v23, &EventProfilerExit, v24, 2015);
    return 3221225485LL;
  }
  v17 = (unsigned int)Size;
  if ( !(_DWORD)Size )
  {
    v26 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v27, &EventProfilerExit, v28, 2015);
    return 3221225485LL;
  }
  v18 = (Size + 7) & 0xFFFFFFF8;
  if ( v18 < (unsigned int)Size )
  {
    v29 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v29 + 24) = -1073741811LL;
    *(_QWORD *)(v29 + 32) = 2008LL;
    WdLogEvent5_WdWarning(v29);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v30, &EventProfilerExit, v31, 2015);
    return 3221225485LL;
  }
  v19 = v18;
  if ( v18 )
  {
    if ( v18 > 0x7FFFFFFFuLL )
    {
      PoolWithTag = 0LL;
      goto LABEL_15;
    }
  }
  else
  {
    v19 = 1LL;
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag((POOL_TYPE)512, v19, 0x4B677844u);
LABEL_15:
  v179[1] = (struct DXGDEVICE *)PoolWithTag;
  P = PoolWithTag;
  if ( PoolWithTag )
  {
    v21 = HIDWORD(Src[0]);
    if ( HIDWORD(Src[0]) == 16 )
    {
LABEL_17:
      v164 = (unsigned int)Size;
      if ( v166 )
      {
        if ( (unsigned __int64)(unsigned int)Size + *((_QWORD *)&v15 + 1) < *((_QWORD *)&v15 + 1)
          || (unsigned __int64)(unsigned int)Size + *((_QWORD *)&v15 + 1) > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(PoolWithTag, *((const void **)&v15 + 1), v17);
      }
      else
      {
        memmove(PoolWithTag, *((const void **)&v15 + 1), (unsigned int)Size);
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
          v164 = (unsigned int)Size;
          memset(PoolWithTag, 0, (unsigned int)Size);
          break;
      }
    }
    v172 = 0;
    if ( v21 == 16 )
    {
      v35 = *((_QWORD *)v13 + 9);
      v36 = v35 && (*(unsigned int (__fastcall **)(_QWORD))(v35 + 224))(0LL);
      v172 = v36;
    }
    v169 = 0LL;
    if ( v166 )
      v37 = &v169;
    else
      v37 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v174, LODWORD(Src[0]), (struct _KTHREAD **)v13, v37);
    if ( v166 )
      v3 = v169;
    else
      v169 = v3;
    if ( v3 )
    {
      v42 = 0;
      if ( v21 != 9 )
      {
LABEL_55:
        LODWORD(v45) = DxgkpGetPairingAdapters(v3, v42, &v165, &v188, &v170, &v196);
        if ( (int)v45 >= 0 || v21 == 9 )
        {
          v48 = v170;
        }
        else
        {
          v48 = 0LL;
          v170 = 0LL;
          LODWORD(v45) = DxgkpGetPairingAdapters(v3, v42, &v165, &v188, 0LL, 0LL);
        }
        if ( (int)v45 < 0 )
        {
          v102 = WdLogNewEntry5_WdError(v44, v43);
          *(_QWORD *)(v102 + 24) = v3;
          *(_QWORD *)(v102 + 32) = v42;
          WdLogEvent5_WdError(v102);
          ExFreePoolWithTag(PoolWithTag, 0);
          v73 = v174;
          if ( !v174 )
          {
LABEL_111:
            if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q((__int64)v73, &EventProfilerExit, v74, 2015);
            return (unsigned int)v45;
          }
LABEL_199:
          DXGADAPTER::ReleaseReference(v73);
          goto LABEL_111;
        }
        v49 = v165;
        if ( v165 != v3 && v48 != v3 )
        {
          v110 = WdLogNewEntry5_WdAssertion(v44, v43, v46, v47);
          *(_QWORD *)(v110 + 24) = 2156LL;
          WdLogEvent5_WdAssertion(v110);
        }
        if ( v48 && !*((_QWORD *)v48 + 285) )
        {
          v111 = WdLogNewEntry5_WdAssertion(v44, v43, v46, v47);
          *(_QWORD *)(v111 + 24) = 2158LL;
          WdLogEvent5_WdAssertion(v111);
        }
        if ( !v49 || !*((_QWORD *)v49 + 286) )
        {
          v112 = WdLogNewEntry5_WdAssertion(v44, v43, v46, v47);
          *(_QWORD *)(v112 + 24) = 2160LL;
          WdLogEvent5_WdAssertion(v112);
        }
        v51 = 0;
        if ( v21 <= 0x1B )
        {
          v50 = 138651984;
          if ( _bittest(&v50, v21) )
            v51 = 1;
        }
        if ( (v3 == v49 && *((_BYTE *)v3 + 186) || v49 && *((_BYTE *)v49 + 186) && !v51) && v21 != 15 )
        {
          v182 = v49;
          v183 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
          if ( *((_DWORD *)v49 + 44) != 1 )
          {
            if ( v183 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
            v114 = v174;
            if ( v174 )
              DXGADAPTER::ReleaseReference(v174);
            if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q((__int64)v114, &EventProfilerExit, v113, 2015);
            return 3221226166LL;
          }
          v193.hKmdProcessHandle = Src[0];
          v195 = Size;
          v194 = PoolWithTag;
          AdapterInfo = DXGADAPTER::VmBusSendQueryAdapterInfo(
                          v165,
                          v173,
                          (struct _D3DKMT_QUERYADAPTERINFO *)&v193.hKmdProcessHandle);
          v45 = AdapterInfo;
          if ( AdapterInfo < 0 )
          {
            v120 = (_QWORD *)WdLogNewEntry5_WdWarning(v117, v116, v118, v119);
            v120[3] = LODWORD(Src[0]);
            v120[4] = v45;
            v120[5] = 2196LL;
            WdLogEvent5_WdWarning(v120);
            ExFreePoolWithTag(PoolWithTag, 0);
            if ( v183 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
            v73 = v174;
            if ( !v174 )
              goto LABEL_111;
            goto LABEL_199;
          }
          if ( HIDWORD(Src[0]) == 1 )
          {
            v121 = 0LL;
            v122 = PoolWithTag + 1;
            do
            {
              if ( !*v122 )
                break;
              LODWORD(v14) = (_DWORD)v14 + 1;
              ++v121;
              ++v122;
            }
            while ( v121 < 260 );
            v123 = (int)v14;
            if ( (int)v14 >= 0 )
            {
              v124 = (_WORD *)PoolWithTag + (int)v14 + 2;
              do
              {
                if ( *v124 == 92 )
                  break;
                LODWORD(v14) = (_DWORD)v14 - 1;
                --v124;
                --v123;
              }
              while ( v123 >= 0 );
            }
            v125 = (_DWORD)v14 + 1;
            if ( v125 )
              RtlStringCbCopyW((NTSTRSAFE_PWSTR)PoolWithTag + 2, 0x208uLL, (NTSTRSAFE_PCWSTR)PoolWithTag + v125 + 2);
          }
          if ( v183 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
          v71 = v164;
LABEL_102:
          if ( (int)v45 >= 0 )
          {
            v72 = Src[1];
            if ( v166 && ((char *)Src[1] + v71 > (void *)MmUserProbeAddress || (char *)Src[1] + v71 <= Src[1]) )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v72, PoolWithTag, v71);
          }
          ExFreePoolWithTag(PoolWithTag, 0);
          if ( v174 && _InterlockedExchangeAdd64((volatile signed __int64 *)v174 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v174 + 2), v174);
          goto LABEL_111;
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v197, v49, v48);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v165 + 2), v165);
        v52 = v170;
        if ( v170 )
        {
          v53 = _InterlockedExchangeAdd64((volatile signed __int64 *)v170 + 3, 0xFFFFFFFFFFFFFFFFuLL);
          v52 = v170;
          if ( v53 == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v170 + 2), v170);
        }
        if ( HIDWORD(Src[0]) == 9 )
        {
          LODWORD(v45) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v197);
          if ( (int)v45 < 0 )
          {
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v197);
            v71 = v164;
            goto LABEL_102;
          }
          if ( !v52 || !*((_QWORD *)v52 + 285) )
          {
            v160 = WdLogNewEntry5_WdAssertion(v89, v88, v90, v91);
            *(_QWORD *)(v160 + 24) = 2256LL;
            WdLogEvent5_WdAssertion(v160);
          }
          if ( (_DWORD)Size != 48 )
          {
            LODWORD(v45) = -1073741811;
            v161 = WdLogNewEntry5_WdWarning(v89, v88, v90, v91);
            v71 = v164;
            *(_QWORD *)(v161 + 24) = v164;
            *(_QWORD *)(v161 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v161);
            goto LABEL_101;
          }
          v92 = *((_QWORD *)v52 + 285);
          v93 = *PoolWithTag;
          if ( (unsigned int)v93 >= *(_DWORD *)(v92 + 80) )
          {
            LODWORD(v45) = -1071774972;
            v162 = WdLogNewEntry5_WdWarning(v92, v93, v90, v91);
            *(_QWORD *)(v162 + 24) = *PoolWithTag;
            *(_QWORD *)(v162 + 32) = *(unsigned int *)(*((_QWORD *)v52 + 285) + 80LL);
            WdLogEvent5_WdWarning(v162);
          }
          else
          {
            DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)v92, v93);
            if ( *(_DWORD *)DisplayModeInfo )
            {
              *(_OWORD *)(PoolWithTag + 1) = *(_OWORD *)DisplayModeInfo;
              *(_OWORD *)(PoolWithTag + 5) = *((_OWORD *)DisplayModeInfo + 1);
              *(_QWORD *)(PoolWithTag + 9) = *((_QWORD *)DisplayModeInfo + 4);
              PoolWithTag[11] = *((_DWORD *)DisplayModeInfo + 10);
            }
            else
            {
              LODWORD(v45) = -1071774919;
              v163 = WdLogNewEntry5_WdWarning(v96, v95, v97, v98);
              *(_QWORD *)(v163 + 24) = *PoolWithTag;
              *(_QWORD *)(v163 + 32) = v52;
              WdLogEvent5_WdWarning(v163);
            }
          }
LABEL_100:
          v71 = v164;
LABEL_101:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v197);
          goto LABEL_102;
        }
        v184[1] = v165;
        _InterlockedIncrement64((volatile signed __int64 *)v49 + 3);
        v184[0] = -1LL;
        KeEnterCriticalRegion();
        v54 = v165;
        v55 = (char *)v165 + 120;
        ExAcquirePushLockSharedEx((char *)v165 + 120, 0LL);
        v185 = 1;
        v176 = v170;
        v177 = 0;
        if ( v170 && v170 != v54 )
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v175);
        v58 = *((unsigned int *)v169 + 44);
        if ( (_DWORD)v58 == 1 )
        {
          v59 = v170;
          if ( !v170 )
            goto LABEL_84;
          if ( *((_DWORD *)v170 + 44) == 1 )
          {
            v59 = v170;
LABEL_84:
            v60 = SHIDWORD(Src[0]);
            if ( HIDWORD(Src[0]) == 16 )
            {
              if ( (_DWORD)Size != 8 )
              {
LABEL_340:
                LODWORD(v45) = -1073741811;
                v157 = WdLogNewEntry5_WdWarning(v58, v56, v59, v57);
                *(_QWORD *)(v157 + 24) = v164;
LABEL_341:
                *(_QWORD *)(v157 + 32) = -1073741811LL;
                WdLogEvent5_WdWarning(v157);
                goto LABEL_97;
              }
              v61 = PsGetCurrentProcess(v58);
              v63 = PsGetProcessDxgProcess(v61, v62);
              v68 = v63;
              if ( v63 )
              {
                if ( (*(_BYTE *)(v63 + 275) & 2) != 0 )
                {
                  v158 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
                  if ( v158 )
                    v68 = *v158;
                }
              }
              if ( *(_BYTE *)(v68 + 274) )
              {
                v185 = 0;
                ExReleasePushLockSharedEx(v55, 0LL);
                KeLeaveCriticalRegion();
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v165 + 2), v165);
                if ( v177 )
                {
                  v177 = 0;
                  v159 = v176;
                  ExReleasePushLockSharedEx((char *)v176 + 120, 0LL);
                  KeLeaveCriticalRegion();
                  DXGADAPTER::ReleaseReference(v159);
                }
                if ( !v172 )
                  v14 = v169;
                v171 = 0;
                AdapterRegistryInfo = OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
                                        v14,
                                        v69,
                                        *PoolWithTag,
                                        PoolWithTag,
                                        lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_);
LABEL_96:
                LODWORD(v45) = AdapterRegistryInfo;
                goto LABEL_97;
              }
LABEL_200:
              LODWORD(v45) = -1073741790;
              v103 = WdLogNewEntry5_WdWarning(v65, v64, v66, v67);
              *(_QWORD *)(v103 + 24) = -1073741790LL;
            }
            else
            {
              v56 = 0x1C0000000uLL;
              switch ( HIDWORD(Src[0]) )
              {
                case 0:
                  v193.Type = DXGKQAITYPE_UMDRIVERPRIVATE;
                  v193.pInputData = 0LL;
                  v193.InputDataSize = 0;
                  v193.pOutputData = PoolWithTag;
                  v193.OutputDataSize = Size;
                  v193.Flags.Value = 0;
                  AdapterRegistryInfo = DXGADAPTER::DdiQueryAdapterInfo(v165, &v193, (__int64)v59);
                  goto LABEL_96;
                case 1:
                  if ( (_DWORD)Size != 524 )
                    goto LABEL_340;
                  v76 = v165;
                  v77 = ADAPTER_RENDER::CopyUmdFileName(
                          *((ADAPTER_RENDER **)v165 + 286),
                          (struct _D3DKMT_UMDFILENAMEINFO *)PoolWithTag);
                  goto LABEL_136;
                case 2:
                  if ( (_DWORD)Size != 528 )
                    goto LABEL_340;
                  v128 = PsGetCurrentProcess(v58);
                  ProcessWow64Process = PsGetProcessWow64Process(v128);
                  v131 = *((_QWORD *)v165 + 286);
                  if ( ProcessWow64Process )
                  {
                    PoolWithTag[130] = *(_DWORD *)(v131 + 392);
                    PoolWithTag[131] = *(_DWORD *)(v131 + 396);
                    v132 = *(unsigned __int16 *)(v131 + 376);
                    v133 = *(const wchar_t **)(v131 + 384);
                  }
                  else
                  {
                    PoolWithTag[130] = *(_DWORD *)(v131 + 368);
                    PoolWithTag[131] = *(_DWORD *)(v131 + 372);
                    v132 = *(unsigned __int16 *)(v131 + 352);
                    v133 = *(const wchar_t **)(v131 + 360);
                  }
                  LODWORD(v45) = RtlStringCbCopyNW((NTSTRSAFE_PWSTR)PoolWithTag, v130, v133, v132);
                  if ( (int)v45 < 0 )
                  {
                    v136 = WdLogNewEntry5_WdError(v135, v134);
                    *(_QWORD *)(v136 + 24) = (int)v45;
                    WdLogEvent5_WdError(v136);
                  }
                  goto LABEL_97;
                case 3:
                  if ( (_DWORD)Size != 24 )
                    goto LABEL_340;
                  VIDMM_EXPORT::VidMmGetTotalSegmentSize(
                    *(VIDMM_EXPORT **)(*((_QWORD *)v165 + 286) + 432LL),
                    *(struct VIDMM_GLOBAL **)(*((_QWORD *)v165 + 286) + 440LL),
                    0,
                    &v178,
                    &v178,
                    &v178,
                    (unsigned __int64 *)PoolWithTag,
                    (unsigned __int64 *)PoolWithTag + 1,
                    (unsigned __int64 *)PoolWithTag + 2);
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 4:
                  if ( (_DWORD)Size != 16 )
                    goto LABEL_340;
                  *(_OWORD *)PoolWithTag = *(_OWORD *)((char *)v169 + 252);
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 5:
                  if ( (_DWORD)Size != 12 )
                    goto LABEL_340;
                  AdapterRegistryInfo = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v165 + 286) + 408LL) + 8LL)
                                                                                          + 416LL))(
                                          *(_QWORD *)(*((_QWORD *)v165 + 286) + 416LL),
                                          PoolWithTag);
                  goto LABEL_96;
                case 6:
                  if ( (_DWORD)Size != 12 )
                    goto LABEL_340;
                  v140 = *(_QWORD *)(*((_QWORD *)v169 + 24) + 64LL);
                  *PoolWithTag = *(_DWORD *)(v140 + 1128);
                  PoolWithTag[1] = *(unsigned __int16 *)(v140 + 1134);
                  PoolWithTag[2] = (unsigned __int16)*(_DWORD *)(v140 + 1132);
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 7:
                  if ( (_DWORD)Size != 12 )
                    goto LABEL_340;
                  AdapterRegistryInfo = VIDMM_EXPORT::VidMmSetWorkingSetInformation(
                                          *(VIDMM_EXPORT **)(*((_QWORD *)v165 + 286) + 432LL),
                                          v173,
                                          (struct _D3DKMT_WORKINGSETINFO *)PoolWithTag);
                  goto LABEL_96;
                case 8:
                  if ( (_DWORD)Size != 2080 )
                    goto LABEL_340;
                  AdapterRegistryInfo = DpiQueryAdapterRegistryInfo(*((_QWORD *)v169 + 24), PoolWithTag);
                  goto LABEL_96;
                case 0xB:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_340;
                  *PoolWithTag = *((unsigned __int8 *)v169 + 180);
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 0xC:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_340;
                  *PoolWithTag = 0;
                  *PoolWithTag ^= (*PoolWithTag ^ (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v165 + 286) + 16LL) + 1676LL) >> 5)) & 1;
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 0xD:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_340;
                  *PoolWithTag = DXGADAPTER::GetDriverVersion(v169);
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 0xF:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_340;
                  *PoolWithTag = *DXGADAPTER::GetAdapterType(v169, &v187);
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 0x11:
                  if ( (_DWORD)Size != 12 )
                    goto LABEL_340;
                  DXGADAPTER::QueryWDDM1_2Caps(v169, (struct _D3DKMT_WDDM_1_2_CAPS *)PoolWithTag);
                  goto LABEL_123;
                case 0x12:
                  if ( (_DWORD)Size != 8 )
                    goto LABEL_340;
                  AdapterRegistryInfo = ADAPTER_RENDER::GetUmdFileVersion(
                                          *((union _LARGE_INTEGER **)v165 + 286),
                                          (union _LARGE_INTEGER *)PoolWithTag,
                                          (__int64)v59,
                                          v57);
                  goto LABEL_96;
                case 0x13:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_340;
                  v87 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v165 + 286) + 16LL) + 2147LL);
                  goto LABEL_164;
                case 0x14:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_340;
                  LODWORD(v45) = 0;
                  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v165 + 286)) )
                    goto LABEL_170;
                  *PoolWithTag = 1;
                  goto LABEL_97;
                case 0x15:
                  if ( (_DWORD)Size != 520 )
                    goto LABEL_340;
                  v76 = v165;
                  if ( (_BYTE)word_1C006F9DC && *((_BYTE *)v165 + 2151) )
                  {
                    v77 = ADAPTER_RENDER::CopyDListFileName(
                            *((ADAPTER_RENDER **)v165 + 286),
                            (unsigned __int16 *)PoolWithTag,
                            (unsigned int)v59);
LABEL_136:
                    v45 = v77;
                    if ( v77 < 0 )
                    {
                      v126 = (_QWORD *)WdLogNewEntry5_WdEvent(v78);
                      v126[3] = PoolWithTag;
                      v126[4] = v76;
                      v126[5] = v45;
                      WdLogEvent5_WdEvent(v126);
                    }
                  }
                  else
                  {
                    v127 = (_QWORD *)WdLogNewEntry5_WdEvent(v58);
                    v127[3] = PoolWithTag;
                    v127[4] = v76;
                    LODWORD(v45) = -1073741637;
                    v127[5] = -1073741637LL;
                    WdLogEvent5_WdEvent(v127);
                  }
                  goto LABEL_97;
                case 0x16:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_284;
                  DXGADAPTER::QueryWDDM1_3Caps(v169, (struct _D3DKMT_WDDM_1_3_CAPS *)PoolWithTag);
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 0x17:
                  if ( (_DWORD)Size != 16 )
                    goto LABEL_284;
                  if ( !PoolWithTag[1] )
                    goto LABEL_202;
                  v65 = *((unsigned __int8 *)DXGPROCESS::GetCurrent(v58) + 274);
                  if ( !(_BYTE)v65 )
                    goto LABEL_200;
                  if ( PoolWithTag[1] )
                  {
                    *(_DWORD *)(*((_QWORD *)v165 + 286) + 872LL) = PoolWithTag[3];
                    LODWORD(v45) = 0;
                  }
                  else
                  {
LABEL_202:
                    v104 = v165;
                    PoolWithTag[2] = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v165 + 286));
                    PoolWithTag[3] = *(_DWORD *)(*((_QWORD *)v104 + 286) + 872LL);
                    LODWORD(v45) = 0;
                  }
                  goto LABEL_97;
                case 0x18:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_284;
                  *PoolWithTag = 0;
                  v79 = v165;
                  v80 = (*((_DWORD *)v165 + 418) & 0x20) == 0;
                  *PoolWithTag = v80;
                  v81 = 0;
                  if ( (*((_BYTE *)v79 + 1676) & 0x60) == 0x60 )
                    v81 = 2;
                  v82 = v80 & 0xFFFFFFFD | v81;
                  *PoolWithTag = v82;
                  if ( (*((_BYTE *)v79 + 1676) & 0xA0) == 0xA0 )
                    LODWORD(v14) = 4;
                  *PoolWithTag = v82 & 0xFFFFFFFB | (unsigned int)v14;
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 0x19:
                  if ( (_DWORD)Size != 78 )
                    goto LABEL_284;
                  AdapterRegistryInfo = DXGADAPTER::QueryNodeMetadata(
                                          v165,
                                          *PoolWithTag,
                                          (struct _DXGK_NODEMETADATA *)(PoolWithTag + 1));
                  goto LABEL_96;
                case 0x1A:
                  if ( (_DWORD)Size != 520 )
                    goto LABEL_284;
                  v76 = v165;
                  v142 = *((_QWORD *)v165 + 286);
                  *(_WORD *)PoolWithTag = 0;
                  v77 = RtlStringCbCopyNW(
                          (NTSTRSAFE_PWSTR)PoolWithTag,
                          0x1C0000000uLL,
                          *(STRSAFE_PCNZWCH *)(v142 + 328),
                          *(unsigned __int16 *)(v142 + 320));
                  goto LABEL_136;
                case 0x1B:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_284;
                  *PoolWithTag = (*((_DWORD *)v169 + 75) >> 9) & 1;
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 0x1C:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_284;
                  LODWORD(v45) = 0;
                  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v165 + 286) + 16LL) + 1668LL) & 0x10) == 0 )
                    goto LABEL_170;
                  *PoolWithTag = 1;
                  goto LABEL_97;
                case 0x1D:
                  if ( (_DWORD)Size != 520 )
                    goto LABEL_284;
                  v76 = v165;
                  v143 = *((_QWORD *)v165 + 286);
                  *(_WORD *)PoolWithTag = 0;
                  v77 = RtlStringCbCopyNW(
                          (NTSTRSAFE_PWSTR)PoolWithTag,
                          0x1C0000000uLL,
                          *(STRSAFE_PCNZWCH *)(v143 + 344),
                          *(unsigned __int16 *)(v143 + 336));
                  goto LABEL_136;
                case 0x1E:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_284;
                  if ( *((int *)v165 + 486) < 0x2000 )
                    v75 = 1;
                  else
                    v75 = *((_DWORD *)v165 + 62);
                  *PoolWithTag = v75;
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 0x1F:
                  if ( (_DWORD)Size != 28 )
                    goto LABEL_284;
                  v60 = *PoolWithTag;
                  if ( *((int *)v165 + 486) < 0x2000 )
                    v83 = 1;
                  else
                    v83 = *((_DWORD *)v165 + 62);
                  if ( (unsigned int)v60 >= v83 )
                    goto LABEL_339;
                  _mm_lfence();
                  v84 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)v165 + 274) + 48 * v60 + 8) + 64LL);
                  PoolWithTag[1] = v84[277];
                  PoolWithTag[2] = v84[278];
                  PoolWithTag[3] = v84[279];
                  PoolWithTag[4] = v84[280];
                  PoolWithTag[5] = v84[281];
                  PoolWithTag[6] = v84[276];
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 0x20:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_284;
                  QueryDriverCapsExt(v59, (struct _D3DKMT_DRIVERCAPS_EXT *)PoolWithTag);
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 0x21:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_284;
                  v190 = 0LL;
                  v191 = 0LL;
                  v192 = 0;
                  MiracastSupportInternal = DxgkMiracastQueryMiracastSupportInternal((__int64)&v190);
                  v149 = MiracastSupportInternal;
                  if ( MiracastSupportInternal == -1073741637 )
                  {
                    *PoolWithTag = 0;
                    LODWORD(v45) = 0;
                    goto LABEL_97;
                  }
                  if ( MiracastSupportInternal < 0 )
                  {
                    LODWORD(v45) = MiracastSupportInternal;
                    v103 = WdLogNewEntry5_WdWarning(v146, v145, v147, v148);
                    *(_QWORD *)(v103 + 24) = v149;
                    break;
                  }
                  *PoolWithTag = 2 - ((_BYTE)v191 != 0);
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 0x22:
                  if ( (_DWORD)Size != 12 )
                    goto LABEL_284;
                  if ( *((int *)v165 + 486) < 0x2000 )
                    v85 = 1LL;
                  else
                    v85 = *((unsigned int *)v165 + 62);
                  if ( (*((_DWORD *)v165 + 419) & 0x40) == 0 )
                  {
                    LODWORD(v45) = -1073741811;
                    v103 = WdLogNewEntry5_WdWarning(v165, 0x1C0000000uLL, v85, v57);
                    *(_QWORD *)(v103 + 24) = -1073741811LL;
                    break;
                  }
                  v86 = *PoolWithTag;
                  if ( (unsigned int)v86 < (unsigned int)v85 )
                  {
                    ADAPTER_RENDER::QueryGpuMmuCaps(
                      *((ADAPTER_RENDER **)v165 + 286),
                      v86,
                      (struct _D3DKMT_GPUMMU_CAPS *)(PoolWithTag + 1));
                    LODWORD(v45) = 0;
                    goto LABEL_97;
                  }
                  LODWORD(v45) = -1073741811;
                  v103 = WdLogNewEntry5_WdWarning(v165, v86, v85, v57);
                  v141 = *PoolWithTag;
                  goto LABEL_286;
                case 0x23:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_284;
                  v87 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v165 + 286) + 16LL) + 2237LL);
                  goto LABEL_164;
                case 0x24:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_284;
                  *PoolWithTag = *((_DWORD *)DXGGLOBAL::GetGlobal(v58, 0x1C0000000LL, (__int64)v59, v57) + 232);
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 0x25:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_284;
                  LOBYTE(v14) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v165 + 286) + 16LL) + 2238LL) != 0;
                  *PoolWithTag = (unsigned int)v14;
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 0x26:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_284;
                  LOBYTE(v14) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v165 + 286) + 16LL) + 2239LL) != 0;
                  *PoolWithTag = (unsigned int)v14;
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 0x27:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_284;
                  LOBYTE(v14) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v165 + 286) + 16LL) + 2240LL) != 0;
                  *PoolWithTag = (unsigned int)v14;
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 0x28:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_284;
                  LOBYTE(v14) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v165 + 286) + 16LL) + 2241LL) != 0;
                  *PoolWithTag = (unsigned int)v14;
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 0x29:
                  if ( (_DWORD)Size != 24 )
                    goto LABEL_284;
                  AdapterRegistryInfo = DxgkReadPnPRegistryPath(
                                          v165,
                                          *PoolWithTag,
                                          PoolWithTag[1],
                                          *((_QWORD *)PoolWithTag + 1),
                                          *((_QWORD *)PoolWithTag + 2));
                  goto LABEL_96;
                case 0x2A:
                  if ( (_DWORD)Size != 56 )
                    goto LABEL_340;
                  if ( *((int *)v165 + 486) < 0x2000 )
                    v137 = 1LL;
                  else
                    v137 = *((unsigned int *)v165 + 62);
                  v138 = *PoolWithTag;
                  if ( (unsigned int)v138 >= (unsigned int)v137 )
                  {
                    v139 = WdLogNewEntry5_WdWarning(v137, 0x1C0000000uLL, v138, v57);
                    *(_QWORD *)(v139 + 24) = *PoolWithTag;
                    *(_QWORD *)(v139 + 32) = -1073741811LL;
                    WdLogEvent5_WdWarning(v139);
                  }
                  else
                  {
                    VIDMM_EXPORT::VidMmGetTotalSegmentSize(
                      *(VIDMM_EXPORT **)(*((_QWORD *)v165 + 286) + 432LL),
                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)v165 + 286) + 440LL),
                      v138,
                      (unsigned __int64 *)PoolWithTag + 4,
                      (unsigned __int64 *)PoolWithTag + 5,
                      (unsigned __int64 *)PoolWithTag + 6,
                      (unsigned __int64 *)PoolWithTag + 1,
                      (unsigned __int64 *)PoolWithTag + 2,
                      (unsigned __int64 *)PoolWithTag + 3);
                  }
                  LODWORD(v45) = 0;
                  goto LABEL_97;
                case 0x2B:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_284;
                  v87 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v165 + 286) + 16LL) + 2242LL);
LABEL_164:
                  LODWORD(v45) = 0;
                  if ( v87 )
                    *PoolWithTag = 1;
                  else
LABEL_170:
                    *PoolWithTag = 0;
                  goto LABEL_97;
                case 0x2C:
                  if ( (_DWORD)Size != 1 )
                    goto LABEL_284;
                  *(_BYTE *)PoolWithTag = 1;
                  v150 = v165;
                  if ( *((_DWORD *)v165 + 69) == 1297040209
                    && (wcscpy(Str2, L"Qualcomm Adreno 530"), !wcsncmp(*((const wchar_t **)v165 + 152), Str2, 0x14uLL)) )
                  {
                    LODWORD(v45) = 0;
                    if ( (*(_DWORD *)(*((_QWORD *)v150 + 274) + 16LL) & 0x10) == 0 )
                      *(_BYTE *)PoolWithTag = 0;
                  }
                  else
                  {
LABEL_123:
                    LODWORD(v45) = 0;
                  }
                  goto LABEL_97;
                case 0x2D:
                  if ( (_DWORD)Size != 4 )
                    goto LABEL_284;
                  v99 = v165;
                  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v165 + 286))
                    || (v151 = *(_QWORD *)(*((_QWORD *)v99 + 286) + 16LL), *(_QWORD *)(v151 + 1104))
                    && *(_BYTE *)(v151 + 2242)
                    || *(_QWORD *)(v151 + 1112) && *(_BYTE *)(v151 + 2242) )
                  {
                    *PoolWithTag = 1;
                    LODWORD(v45) = 0;
                  }
                  else
                  {
                    *PoolWithTag = 0;
                    LODWORD(v45) = 0;
                  }
                  goto LABEL_97;
                case 0x2E:
                  if ( (_DWORD)Size != 12 )
                    goto LABEL_284;
                  if ( PoolWithTag[1] )
                  {
                    v152 = *PoolWithTag;
                    LODWORD(v45) = 0;
                    if ( (unsigned int)v152 < 0x10 )
                      *(_BYTE *)(v152 + *((_QWORD *)v165 + 286) + 856) = PoolWithTag[2] != 0;
                  }
                  else
                  {
                    v153 = (ADAPTER_RENDER *)*((_QWORD *)v165 + 286);
                    v154 = *PoolWithTag;
                    if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v153) && (unsigned int)v154 < 0x10 )
                      v155 = *((_BYTE *)v153 + v154 + 856);
                    else
                      v155 = 0;
                    LOBYTE(v14) = v155 != 0;
                    PoolWithTag[2] = (unsigned int)v14;
                    LODWORD(v45) = 0;
                  }
                  goto LABEL_97;
                case 0x2F:
                  if ( (_DWORD)Size == 8 )
                  {
                    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
                      (DXGDEVICEBYHANDLE *)v179,
                      *PoolWithTag,
                      (struct _KTHREAD **)v173,
                      &v189);
                    if ( v189 )
                    {
                      *((_BYTE *)PoolWithTag + 4) = *((_BYTE *)v189 + 1858);
                      LODWORD(v45) = 0;
                    }
                    else
                    {
                      v156 = WdLogNewEntry5_WdError(v101, v100);
                      *(_QWORD *)(v156 + 24) = *PoolWithTag;
                      WdLogEvent5_WdError(v156);
                      LODWORD(v45) = -1073741811;
                    }
                    if ( v179[0]
                      && _InterlockedExchangeAdd64((volatile signed __int64 *)v179[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    {
                      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v179[0] + 2), v179[0]);
                    }
                    goto LABEL_97;
                  }
LABEL_284:
                  LODWORD(v45) = -1073741811;
                  v103 = WdLogNewEntry5_WdWarning(v58, 0x1C0000000uLL, v59, v57);
                  v141 = v164;
LABEL_286:
                  *(_QWORD *)(v103 + 24) = v141;
                  *(_QWORD *)(v103 + 32) = -1073741811LL;
                  break;
                default:
LABEL_339:
                  LODWORD(v45) = -1073741811;
                  v157 = WdLogNewEntry5_WdWarning(v58, 0x1C0000000uLL, v59, v57);
                  *(_QWORD *)(v157 + 24) = v60;
                  goto LABEL_341;
              }
            }
            WdLogEvent5_WdWarning(v103);
LABEL_97:
            if ( v177 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v175);
            if ( v185 )
            {
              v185 = 0;
              ExReleasePushLockSharedEx(v55, 0LL);
              KeLeaveCriticalRegion();
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v165 + 2), v165);
            }
            goto LABEL_100;
          }
        }
        LODWORD(v45) = -1073741130;
        if ( v177 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v175);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v184);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v197);
        v71 = v164;
        goto LABEL_102;
      }
      if ( (_DWORD)v17 == 48 )
      {
        v42 = *PoolWithTag;
        goto LABEL_55;
      }
      v109 = WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
      *(_QWORD *)(v109 + 24) = v17;
    }
    else
    {
      v109 = WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
      *(_QWORD *)(v109 + 24) = LODWORD(Src[0]);
    }
    *(_QWORD *)(v109 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v109);
    ExFreePoolWithTag(PoolWithTag, 0);
    v107 = v174;
    if ( v174 )
      DXGADAPTER::ReleaseReference(v174);
    goto LABEL_210;
  }
  v32 = WdLogNewEntry5_WdWarning(v10, v19, v11, v12);
  *(_QWORD *)(v32 + 24) = -1073741801LL;
  WdLogEvent5_WdWarning(v32);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v33, &EventProfilerExit, v34, 2015);
  return 3221225495LL;
}
