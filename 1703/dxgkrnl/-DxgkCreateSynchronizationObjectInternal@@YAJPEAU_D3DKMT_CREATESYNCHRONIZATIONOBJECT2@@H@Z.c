/*
 * XREFs of ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00FC810
 * Callers:
 *     ?VmBusCreateSyncObject@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002C940 (-VmBusCreateSyncObject@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateSynchronizationObject @ 0x1C00FC800 (DxgkCreateSynchronizationObject.c)
 *     ?DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00FD800 (-DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00053F0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000B4C0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C000B8CC (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000D728 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     Template_pp @ 0x1C00385F4 (Template_pp.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00881D8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00D73B0 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@_KI@Z @ 0x1C01A5718 (-CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@_KI@Z.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObjectInternal(
        struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a1,
        int a2,
        __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r15
  __int64 *ThreadProperty; // rax
  __int64 v14; // rax
  __int64 MaxCount; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE Type; // esi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 hDevice; // r12
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r9
  struct DXGDEVICE *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rcx
  _QWORD *v47; // rax
  DXGADAPTER *v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // r8
  COREACCESS *v51; // rcx
  struct _KEVENT *v52; // rsi
  struct _KEVENT *v53; // rsi
  unsigned __int8 v54; // si
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  _DWORD *p_hSyncObject; // rdx
  D3DKMT_HANDLE hSyncObject; // r12d
  _DWORD *p_SharedHandle; // rdx
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE v73; // esi
  __int128 v74; // xmm2
  __int128 v75; // xmm3
  _OWORD *p_InitialState; // rdx
  ULONG64 p_Fence; // rdx
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int64 v80; // r9
  __int64 v81; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  DXGADAPTER *v87; // rdi
  __int64 v88; // rax
  __int64 v89; // rdx
  struct DXGADAPTER *v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rax
  int PairingAdapters; // eax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rax
  struct DXGADAPTER *v98; // rdi
  DXGADAPTER *v99; // rsi
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rax
  ADAPTER_DISPLAY *v105; // r11
  __int64 InitialCount; // rdi
  unsigned int v107; // eax
  __int64 v108; // rdx
  __int64 v109; // rcx
  DXGADAPTER **v110; // r11
  __int64 v111; // rax
  __int64 v112; // rdx
  unsigned __int64 v113; // rcx
  __int64 v114; // r9
  unsigned __int64 v115; // rax
  UINT64 v116; // rax
  unsigned __int64 v117; // rdx
  unsigned __int64 v118; // rtt
  void *FenceValueCPUVirtualAddress; // rdi
  __int64 v120; // rax
  int PeriodicFrameNotification; // eax
  __int64 v122; // rax
  __int64 v123; // r9
  __int64 v124; // rax
  __int64 v125; // r8
  __int64 v126; // rdx
  __int64 v127; // rdi
  __int64 v128; // rax
  __int64 v129; // r8
  __int64 v130; // rax
  DXGADAPTER *v131; // [rsp+40h] [rbp-208h] BYREF
  struct DXGDEVICE *v132; // [rsp+50h] [rbp-1F8h] BYREF
  int v133; // [rsp+58h] [rbp-1F0h]
  struct DXGDEVICE *v134; // [rsp+60h] [rbp-1E8h] BYREF
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v135; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v136; // [rsp+D0h] [rbp-178h]
  struct DXGADAPTERSYNCOBJECT *v137; // [rsp+D8h] [rbp-170h] BYREF
  DXGADAPTER *v138; // [rsp+E0h] [rbp-168h] BYREF
  DXGSYNCOBJECT *v139; // [rsp+E8h] [rbp-160h] BYREF
  char v140[8]; // [rsp+F0h] [rbp-158h] BYREF
  _BYTE v141[16]; // [rsp+F8h] [rbp-150h] BYREF
  DXGADAPTER *v142; // [rsp+108h] [rbp-140h]
  char v143; // [rsp+110h] [rbp-138h]
  _BYTE v144[16]; // [rsp+118h] [rbp-130h] BYREF
  DXGADAPTER *v145; // [rsp+128h] [rbp-120h]
  struct DXGDEVICESYNCOBJECT *v146; // [rsp+140h] [rbp-108h] BYREF
  struct DXGADAPTER *v147; // [rsp+148h] [rbp-100h] BYREF
  struct DXGADAPTER *v148; // [rsp+150h] [rbp-F8h] BYREF
  char v149[8]; // [rsp+160h] [rbp-E8h] BYREF
  _BYTE v150[32]; // [rsp+168h] [rbp-E0h] BYREF
  _BYTE v151[16]; // [rsp+188h] [rbp-C0h] BYREF
  __int64 v152; // [rsp+198h] [rbp-B0h]
  __int64 v153; // [rsp+1A8h] [rbp-A0h]
  char v154; // [rsp+1B0h] [rbp-98h]
  unsigned __int64 v155; // [rsp+1C0h] [rbp-88h] BYREF
  unsigned __int64 v156; // [rsp+1C8h] [rbp-80h] BYREF
  _BYTE v157[80]; // [rsp+1D0h] [rbp-78h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v158; // [rsp+260h] [rbp+18h] BYREF
  char v159; // [rsp+268h] [rbp+20h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2041);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v12 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v12 = *ThreadProperty;
    }
  }
  v136 = v12;
  if ( !v12 )
  {
    v14 = WdLogNewEntry5_WdError(v9, v8);
    LODWORD(MaxCount) = -1073741811;
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
LABEL_151:
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v16, &EventProfilerExit, v17, 2041);
    return (unsigned int)MaxCount;
  }
  if ( a2 )
  {
    v18 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v18 = (_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v135 = *v18;
    v19 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v135.hDevice, 12));
    if ( (v19 & 0x7FFFFF00) != 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v19, v8, v10, v11);
      *(_QWORD *)(v20 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v20);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v21, &EventProfilerExit, v22, 2041);
      return 3221225485LL;
    }
    v24 = ((unsigned int)v19 >> 1) & 1;
    if ( (((unsigned int)v19 >> 1) & 1) != 0 && (v19 & 1) == 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&gDxgkrnlCounterAccumulated);
      v25 = WdLogNewEntry5_WdWarning(v19, v24, v10, v11);
      *(_QWORD *)(v25 + 24) = 204LL;
      WdLogEvent5_WdWarning(v25);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v26, &EventProfilerExit, v27, 2041);
      return -1073741811LL;
    }
    Type = v135.Info.Type;
    if ( (unsigned int)(v135.Info.Type - 5) <= 1 )
    {
      if ( (v19 & 1) != 0 && !(_DWORD)v24 )
      {
        v32 = WdLogNewEntry5_WdWarning(v19, v24, v10, v11);
        *(_QWORD *)(v32 + 24) = 213LL;
        WdLogEvent5_WdWarning(v32);
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v33, &EventProfilerExit, v34, 2041);
        return -1073741811LL;
      }
      if ( (v19 & 0x10) != 0 && (v19 & 0x20) != 0 )
      {
        v35 = WdLogNewEntry5_WdWarning(v19, v24, v10, v11);
        *(_QWORD *)(v35 + 24) = 219LL;
        WdLogEvent5_WdWarning(v35);
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v36, &EventProfilerExit, v37, 2041);
        return -1073741811LL;
      }
    }
    else if ( (v19 & 0x80u) != 0LL )
    {
      v29 = WdLogNewEntry5_WdWarning(v19, v24, v10, v11);
      *(_QWORD *)(v29 + 24) = 225LL;
      WdLogEvent5_WdWarning(v29);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v30, &EventProfilerExit, v31, 2041);
      return -1073741811LL;
    }
  }
  else
  {
    v135 = *a1;
    Type = v135.Info.Type;
  }
  v135.hSyncObject = 0;
  hDevice = v135.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v159, v135.hDevice, (struct _KTHREAD **)v12, &v134);
  v42 = v134;
  if ( !v134 )
  {
    v43 = WdLogNewEntry5_WdError(v40, v39);
    *(_QWORD *)(v43 + 24) = hDevice;
    LODWORD(MaxCount) = -1073741811;
    *(_QWORD *)(v43 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v43);
LABEL_150:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v159);
    goto LABEL_151;
  }
  v139 = 0LL;
  v137 = 0LL;
  v132 = v134;
  v133 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v149, (__int64)v134, 0LL, v41, 0);
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v140,
    *(struct DXGADAPTER *const *)(*((_QWORD *)v42 + 2) + 16LL),
    0LL);
  v46 = (unsigned int)(Type - 5);
  if ( (unsigned int)v46 > 1 )
  {
    if ( v143 != (_BYTE)v45 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v44, v45);
      v47[3] = 275LL;
      v47[4] = 4LL;
      v47[5] = v141;
      v47[6] = 0LL;
      v47[7] = 0LL;
      WdLogEvent5_WdCriticalError(v47);
    }
    v48 = v142;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v142 + 20) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v142 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v49, &EventBlockThread, v50, 72);
        KeWaitForSingleObject((char *)v142 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v142);
      v48 = v142;
    }
    v143 = 1;
    if ( *((_DWORD *)v48 + 44) != 1 )
      goto LABEL_60;
    if ( v142 != v145 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v144);
      if ( *((_DWORD *)v145 + 44) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v144);
LABEL_60:
        v51 = (COREACCESS *)v141;
        goto LABEL_78;
      }
    }
LABEL_88:
    v146 = 0LL;
    v65 = CreateSynchronizationObjectInternal(v134, 1, *((DXGADAPTER ***)v42 + 2), &v135, &v139, &v146, &v137);
    MaxCount = v65;
    if ( v65 < 0 )
    {
      v130 = WdLogNewEntry5_WdWarning(v67, v66, v68, v69);
      *(_QWORD *)(v130 + 24) = MaxCount;
      WdLogEvent5_WdWarning(v130);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v140);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v149);
LABEL_149:
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v132);
      goto LABEL_150;
    }
    if ( a2 )
    {
      p_hSyncObject = &a1->hSyncObject;
      if ( (unsigned __int64)&a1->hSyncObject >= MmUserProbeAddress )
        p_hSyncObject = (_DWORD *)MmUserProbeAddress;
      hSyncObject = v135.hSyncObject;
      *p_hSyncObject = v135.hSyncObject;
      if ( (*(_BYTE *)&v135.Info.Flags.0 & 1) != 0 && (*(_BYTE *)&v135.Info.Flags.0 & 2) == 0 )
      {
        p_SharedHandle = &a1->Info.SharedHandle;
        if ( (unsigned __int64)&a1->Info.SharedHandle >= MmUserProbeAddress )
          p_SharedHandle = (_DWORD *)MmUserProbeAddress;
        *p_SharedHandle = v135.Info.SharedHandle;
      }
      v73 = v135.Info.Type;
      v74 = *(_OWORD *)&v135.Info.SynchronizationMutex.InitialState;
      v75 = *(_OWORD *)&v135.Info.Reserved.Reserved[2];
      if ( v135.Info.Type == D3DDDI_MONITORED_FENCE )
      {
        p_InitialState = &a1->Info.SynchronizationMutex.InitialState;
        if ( (unsigned __int64)&a1->Info.Fence >= MmUserProbeAddress )
          p_InitialState = (_OWORD *)MmUserProbeAddress;
        *p_InitialState = *(_OWORD *)&v135.Info.SynchronizationMutex.InitialState;
        p_InitialState[1] = v75;
      }
      if ( v73 == D3DDDI_PERIODIC_MONITORED_FENCE )
      {
        p_Fence = (ULONG64)&a1->Info.Fence;
        if ( (unsigned __int64)&a1->Info.Fence >= MmUserProbeAddress )
          p_Fence = MmUserProbeAddress;
        *(_OWORD *)p_Fence = v74;
        *(_OWORD *)(p_Fence + 16) = v75;
        *(_QWORD *)(p_Fence + 32) = v135.Info.Reserved.Reserved[4];
      }
    }
    else
    {
      hSyncObject = v135.hSyncObject;
      a1->hSyncObject = v135.hSyncObject;
      if ( (*(_BYTE *)&v135.Info.Flags.0 & 1) != 0 && (*(_BYTE *)&v135.Info.Flags.0 & 2) == 0 )
        a1->Info.SharedHandle = v135.Info.SharedHandle;
      v73 = v135.Info.Type;
      v78 = *(_OWORD *)&v135.Info.SynchronizationMutex.InitialState;
      v79 = *(_OWORD *)&v135.Info.Reserved.Reserved[2];
      if ( v135.Info.Type == D3DDDI_MONITORED_FENCE )
      {
        *(_OWORD *)&a1->Info.SynchronizationMutex.InitialState = *(_OWORD *)&v135.Info.SynchronizationMutex.InitialState;
        *(_OWORD *)&a1->Info.Reserved.Reserved[2] = v79;
      }
      if ( v73 == D3DDDI_PERIODIC_MONITORED_FENCE )
      {
        *(_OWORD *)&a1->Info.SynchronizationMutex.InitialState = v78;
        *(_OWORD *)&a1->Info.Reserved.Reserved[2] = v79;
        a1->Info.Reserved.Reserved[4] = v135.Info.Reserved.Reserved[4];
      }
    }
    if ( bTracingEnabled )
    {
      v80 = v137 ? *((_QWORD *)v137 + 4) : 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_pp(v67, &EventOpenSyncObject, v68, v80, hSyncObject);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v140);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v149);
    if ( v73 != D3DDDI_PERIODIC_MONITORED_FENCE )
    {
LABEL_140:
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v132);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v12 + 168));
      v124 = (hSyncObject >> 6) & 0xFFFFFF;
      if ( (unsigned int)v124 < *(_DWORD *)(v12 + 208) )
      {
        v125 = *(_QWORD *)(v12 + 192);
        v126 = *(unsigned int *)(v125 + 16 * v124 + 8);
        if ( ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v125 + 16 * v124 + 8) & 0x30) && (v126 & 0xF) != 0 )
        {
          v127 = 2 * ((*(_QWORD *)&v135.hSyncObject >> 6) & 0xFFFFFFLL);
          if ( (*(_DWORD *)(v125 + 16 * ((*(_QWORD *)&v135.hSyncObject >> 6) & 0xFFFFFFLL) + 8) & 0x1000) == 0 )
          {
            v128 = WdLogNewEntry5_WdAssertion((hSyncObject >> 26) & 0x30, v126, v125, v123);
            *(_QWORD *)(v128 + 24) = 190LL;
            WdLogEvent5_WdAssertion(v128);
          }
          *(_DWORD *)(*(_QWORD *)(v12 + 192) + 8 * v127 + 8) &= ~0x1000u;
        }
      }
      *(_QWORD *)(v12 + 176) = 0LL;
      ExReleasePushLockExclusiveEx(v12 + 168, 0LL);
      KeLeaveCriticalRegion();
      if ( (int)MaxCount < 0 )
      {
        v158.hSyncObject = hSyncObject;
        DxgkDestroySynchronizationObjectInternal(&v158, 0, v129);
      }
      goto LABEL_149;
    }
    v138 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v81);
    MaxCount = v135.Info.Semaphore.MaxCount;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v131, v135.Info.Semaphore.MaxCount, Current, &v138);
    v87 = v138;
    if ( !v138 )
    {
      v88 = WdLogNewEntry5_WdWarning(v84, v83, v85, v86);
      *(_QWORD *)(v88 + 24) = MaxCount;
      LODWORD(MaxCount) = -1073741811;
      *(_QWORD *)(v88 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v88);
      goto LABEL_138;
    }
    if ( !DXGADAPTER::IsDxgmms2(v138) )
    {
      v93 = WdLogNewEntry5_WdWarning(v90, v89, v91, v92);
      *(_QWORD *)(v93 + 24) = 397LL;
      WdLogEvent5_WdWarning(v93);
      LODWORD(MaxCount) = -1073741811;
      goto LABEL_138;
    }
    PairingAdapters = DxgkpGetPairingAdapters(v90, 0LL, &v148, &v156, &v147, &v155);
    MaxCount = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v97 = WdLogNewEntry5_WdError(v96, v95);
      *(_QWORD *)(v97 + 24) = v87;
      *(_QWORD *)(v97 + 32) = MaxCount;
      WdLogEvent5_WdError(v97);
      goto LABEL_138;
    }
    v98 = v147;
    v99 = v148;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v157, v148, v147);
    MaxCount = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v157);
    DXGADAPTER::ReleaseReference(v99);
    DXGADAPTER::ReleaseReference(v98);
    if ( (int)MaxCount >= 0 )
    {
      v105 = (ADAPTER_DISPLAY *)*((_QWORD *)v98 + 285);
      InitialCount = v135.Info.Semaphore.InitialCount;
      v107 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v105, v135.Info.Semaphore.InitialCount);
      MaxCount = v107;
      if ( v107 == -1 )
      {
        v111 = WdLogNewEntry5_WdError(v109, v108);
        *(_QWORD *)(v111 + 24) = InitialCount;
        WdLogEvent5_WdError(v111);
        LODWORD(MaxCount) = -1073741811;
        goto LABEL_137;
      }
      v113 = *((_QWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(v110, v107) + 2);
      v115 = HIDWORD(v113);
      if ( !HIDWORD(v113) || !(_DWORD)v113 )
      {
        v122 = WdLogNewEntry5_WdError(v113, v112);
        *(_QWORD *)(v122 + 24) = MaxCount;
        WdLogEvent5_WdError(v122);
        LODWORD(MaxCount) = -1073741676;
        goto LABEL_137;
      }
      v118 = 10000000 * v115;
      v116 = 10000000 * v115 / (unsigned int)v113;
      v117 = v118 % (unsigned int)v113;
      FenceValueCPUVirtualAddress = v135.Info.MonitoredFence.FenceValueCPUVirtualAddress;
      if ( v135.Info.PeriodicMonitoredFence.Time > v116 )
      {
        v120 = WdLogNewEntry5_WdWarning(v113, v117, (unsigned int)v113, v114);
        *(_QWORD *)(v120 + 24) = FenceValueCPUVirtualAddress;
        LODWORD(MaxCount) = -1073741811;
        *(_QWORD *)(v120 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v120);
        goto LABEL_137;
      }
      PeriodicFrameNotification = DXGSYNCOBJECT::CreatePeriodicFrameNotification(v139, v99, v116, MaxCount);
      MaxCount = PeriodicFrameNotification;
      if ( PeriodicFrameNotification >= 0 )
        goto LABEL_137;
    }
    v104 = WdLogNewEntry5_WdWarning(v101, v100, v102, v103);
    *(_QWORD *)(v104 + 24) = MaxCount;
    WdLogEvent5_WdWarning(v104);
LABEL_137:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v157);
LABEL_138:
    if ( v131 )
      DXGADAPTER::ReleaseReference(v131);
    goto LABEL_140;
  }
  v52 = (struct _KEVENT *)*((_QWORD *)v42 + 2);
  if ( *((_DWORD *)v42 + 82) == 2 )
    v53 = v52 + 4;
  else
    v53 = v52 + 3;
  if ( !KeReadStateEvent(v53) )
    KeWaitForSingleObject(v53, Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v42 + 13), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) + 96LL));
    v54 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v42 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v55, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v42 + 13), 1u);
    if ( v54 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v42 + 2) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v133 = 1;
  COREACCESS::AcquireShared((COREACCESS *)v150);
  if ( *(_DWORD *)(v153 + 408) != 1 )
  {
LABEL_77:
    v51 = (COREACCESS *)v150;
LABEL_78:
    COREACCESS::Release(v51);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v140);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v149);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v132);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v159);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v59, &EventProfilerExit, v60, 2041);
    return 3221226166LL;
  }
  if ( v154 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v151);
    if ( *(_DWORD *)(v152 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v151);
      goto LABEL_77;
    }
  }
  v61 = *(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL);
  if ( *(int *)(v61 + 1944) >= 0x2000 || *(_BYTE *)(v61 + 2228) )
    goto LABEL_88;
  v62 = WdLogNewEntry5_WdWarning(v61, v56, v57, v58);
  *(_QWORD *)(v62 + 24) = 285LL;
  WdLogEvent5_WdWarning(v62);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v140);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v149);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v132);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v159);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v63, &EventProfilerExit, v64, 2041);
  return -1073741811LL;
}
