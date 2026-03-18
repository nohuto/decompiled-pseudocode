/*
 * XREFs of ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z @ 0x1C00A1870
 * Callers:
 *     DxgkCreateSynchronizationObject @ 0x1C00A1850 (DxgkCreateSynchronizationObject.c)
 *     ?DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00DA950 (-DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z.c)
 *     ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017E2A0 (-VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateSynchronizationObjectInternal @ 0x1C01C2634 (DxgkCreateSynchronizationObjectInternal.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0001938 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C000AC00 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0014A18 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C0014CA0 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     McTemplateK0ppp @ 0x1C002CACC (McTemplateK0ppp.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0097778 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00E5B10 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@_KI@Z @ 0x1C01C0308 (-CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@_KI@Z.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObjectImpl(
        struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a1,
        int a2,
        DXGADAPTER ***a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r13
  __int64 *ThreadProperty; // rax
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 hDevice; // rbx
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE Type; // r12d
  __int64 v24; // rcx
  __int64 v25; // r9
  struct DXGDEVICE *v26; // rdi
  __int64 v27; // rax
  char v28; // r8
  __int64 v29; // rcx
  _QWORD *v30; // rax
  DXGADAPTER *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // rdx
  ULONG64 v38; // rcx
  __int64 v39; // r8
  struct _KEVENT *v40; // rax
  struct _KEVENT *v41; // rbx
  unsigned __int8 v42; // bl
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  _DWORD *p_hSyncObject; // rdx
  D3DKMT_HANDLE hSyncObject; // r12d
  _DWORD *p_SharedHandle; // rdx
  ULONG64 p_Fence; // rsi
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE v52; // r14d
  __int128 v53; // xmm2
  __int128 v54; // xmm3
  _OWORD *v55; // rax
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int64 v58; // r9
  struct _KTHREAD **Current; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  DXGADAPTER *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rdx
  struct DXGADAPTER *v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rax
  int PairingAdapters; // eax
  __int64 v70; // rcx
  __int64 v71; // rax
  struct DXGADAPTER *v72; // rdi
  DXGADAPTER *v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rax
  ADAPTER_DISPLAY *v78; // r11
  __int64 InitialCount; // rdi
  unsigned int v80; // eax
  __int64 v81; // rcx
  DXGADAPTER **v82; // r11
  __int64 v83; // rax
  unsigned __int64 v84; // rcx
  __int64 v85; // r8
  unsigned __int64 v86; // rax
  UINT64 v87; // rax
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // rtt
  void *FenceValueCPUVirtualAddress; // rdi
  __int64 v91; // rax
  int PeriodicFrameNotification; // eax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // r8
  int v101; // [rsp+40h] [rbp-278h] BYREF
  __int64 v102; // [rsp+48h] [rbp-270h]
  char v103[8]; // [rsp+50h] [rbp-268h] BYREF
  DXGADAPTER *v104; // [rsp+58h] [rbp-260h] BYREF
  struct DXGDEVICE *v105; // [rsp+68h] [rbp-250h] BYREF
  int v106; // [rsp+70h] [rbp-248h]
  struct DXGDEVICE *v107; // [rsp+78h] [rbp-240h] BYREF
  DXGSYNCOBJECT *v108[2]; // [rsp+80h] [rbp-238h] BYREF
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v109; // [rsp+90h] [rbp-228h] BYREF
  __int64 v110; // [rsp+F0h] [rbp-1C8h]
  struct DXGADAPTERSYNCOBJECT *v111; // [rsp+F8h] [rbp-1C0h] BYREF
  DXGADAPTER *v112; // [rsp+100h] [rbp-1B8h] BYREF
  struct DXGDEVICESYNCOBJECT *v113; // [rsp+108h] [rbp-1B0h] BYREF
  struct DXGADAPTER *v114; // [rsp+110h] [rbp-1A8h] BYREF
  struct DXGADAPTER *v115; // [rsp+118h] [rbp-1A0h] BYREF
  char v116[8]; // [rsp+120h] [rbp-198h] BYREF
  struct _KTHREAD **v117[2]; // [rsp+128h] [rbp-190h] BYREF
  DXGADAPTER *v118; // [rsp+138h] [rbp-180h]
  char v119; // [rsp+140h] [rbp-178h]
  struct _KTHREAD **v120[2]; // [rsp+148h] [rbp-170h] BYREF
  DXGADAPTER *v121; // [rsp+158h] [rbp-160h]
  unsigned __int64 v122; // [rsp+170h] [rbp-148h] BYREF
  unsigned __int64 v123; // [rsp+178h] [rbp-140h] BYREF
  _BYTE v124[80]; // [rsp+180h] [rbp-138h] BYREF
  _BYTE v125[96]; // [rsp+1D0h] [rbp-E8h] BYREF
  _BYTE v126[136]; // [rsp+230h] [rbp-88h] BYREF
  char v128; // [rsp+2D0h] [rbp+18h]
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v129; // [rsp+2D8h] [rbp+20h] BYREF

  v102 = 0LL;
  v101 = 2041;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2041);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v101, 2041);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v13 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v11 = *v13;
      }
    }
  }
  v110 = v11;
  if ( !v11 )
  {
    v14 = WdLogNewEntry5_WdError(v9);
    LODWORD(hDevice) = -1073741811;
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
LABEL_145:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v99, &EventProfilerExit, v100, v101);
    return (unsigned int)hDevice;
  }
  v128 = *(_BYTE *)(v11 + 323) & 0xC;
  if ( a2 )
  {
    v9 = MmUserProbeAddress;
    v16 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v16 = (_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v109 = *v16;
  }
  else
  {
    v109 = *a1;
  }
  v109.hSyncObject = 0;
  if ( (v109.Info.Flags.Value & 0x7FFFFF00) != 0 )
  {
    v17 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    LODWORD(hDevice) = -1073741811;
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_145;
  }
  v18 = (v109.Info.Flags.Value >> 1) & 1;
  if ( ((v109.Info.Flags.Value >> 1) & 1) != 0 && (*(_BYTE *)&v109.Info.Flags.0 & 1) == 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gDxgkrnlCounterAccumulated);
    v19 = WdLogNewEntry5_WdWarning(v109.Info.Flags.Value, v18, v10);
    *(_QWORD *)(v19 + 24) = 272LL;
LABEL_20:
    WdLogEvent5_WdWarning(v19);
    goto LABEL_21;
  }
  Type = v109.Info.Type;
  if ( (unsigned int)(v109.Info.Type - 5) <= 1 )
  {
    if ( a3 )
    {
      v19 = WdLogNewEntry5_WdWarning(v109.Info.Flags.Value, v18, v10);
      *(_QWORD *)(v19 + 24) = 281LL;
      goto LABEL_20;
    }
    if ( (*(_BYTE *)&v109.Info.Flags.0 & 1) != 0 && !(_DWORD)v18 )
    {
      v19 = WdLogNewEntry5_WdWarning(v109.Info.Flags.Value, v18, v10);
      *(_QWORD *)(v19 + 24) = 286LL;
      goto LABEL_20;
    }
    if ( (*(_BYTE *)&v109.Info.Flags.0 & 0x10) != 0 && (*(_BYTE *)&v109.Info.Flags.0 & 0x20) != 0 )
    {
      v19 = WdLogNewEntry5_WdWarning(v109.Info.Flags.Value, v18, v10);
      *(_QWORD *)(v19 + 24) = 292LL;
      goto LABEL_20;
    }
  }
  else if ( *(_BYTE *)&v109.Info.Flags.0 < 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v109.Info.Flags.Value, v18, v10);
    *(_QWORD *)(v19 + 24) = 298LL;
    goto LABEL_20;
  }
  hDevice = v109.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v103, v109.hDevice, (struct _KTHREAD **)v11, &v107);
  v26 = v107;
  if ( !v107 && (a2 || (_DWORD)hDevice) )
  {
    v27 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v27 + 24) = hDevice;
    LODWORD(hDevice) = -1073741811;
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v27);
LABEL_144:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v103);
    goto LABEL_145;
  }
  v108[0] = 0LL;
  v111 = 0LL;
  v105 = v107;
  v106 = 0;
  if ( a3 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v126, (struct DXGADAPTER *const)a3, 0LL);
    LODWORD(hDevice) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v126);
    if ( (int)hDevice < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v126);
      goto LABEL_143;
    }
    LODWORD(hDevice) = CreateSynchronizationObjectInternal(v26, 1, a3[308], &v109, v108, 0LL, 0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v126);
    goto LABEL_80;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v125, (__int64)v107, 0, v25, 0);
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v116,
    *(struct DXGADAPTER *const *)(*((_QWORD *)v26 + 2) + 16LL),
    0LL);
  v29 = (unsigned int)(Type - 5);
  if ( (unsigned int)v29 <= 1 )
  {
    v40 = (struct _KEVENT *)*((_QWORD *)v26 + 2);
    v41 = v40 + 4;
    if ( *((_DWORD *)v26 + 82) != 2 )
      v41 = v40 + 3;
    if ( !KeReadStateEvent(v41) )
      KeWaitForSingleObject(v41, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v26 + 13), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL) + 96LL));
      v42 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v26 + 2) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v43, 40);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v26 + 13), 1u);
      if ( v42 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v26 + 2) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v106 = 1;
    LODWORD(hDevice) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v125);
    if ( (int)hDevice < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v116);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v125);
      goto LABEL_143;
    }
    v36 = *((_QWORD *)v26 + 2);
    v46 = *(_QWORD *)(v36 + 16);
    if ( *(int *)(v46 + 2104) < 0x2000 && !*(_BYTE *)(v46 + 2396) )
    {
      v47 = WdLogNewEntry5_WdWarning(v45, v44, v36);
      *(_QWORD *)(v47 + 24) = 346LL;
      WdLogEvent5_WdWarning(v47);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v116);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v125);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v103);
LABEL_21:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v20, &EventProfilerExit, v21, v101);
      return -1073741811LL;
    }
    goto LABEL_60;
  }
  if ( v119 != v28 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29);
    v30[3] = 275LL;
    v30[4] = 4LL;
    v30[5] = v117;
    v30[6] = 0LL;
    v30[7] = 0LL;
    WdLogEvent5_WdCriticalError(v30);
  }
  v31 = v118;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v118 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v118 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v32, &EventBlockThread, v33, 72);
      KeWaitForSingleObject((char *)v118 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v118);
    v31 = v118;
  }
  v119 = 1;
  if ( *((_DWORD *)v31 + 44) != 1 )
    goto LABEL_55;
  if ( v118 == v121 || (COREACCESS::AcquireShared((DXGADAPTER **)v120), *((_DWORD *)v121 + 44) == 1) )
  {
    v36 = *((_QWORD *)v26 + 2);
    v26 = v107;
LABEL_60:
    v113 = 0LL;
    LODWORD(hDevice) = CreateSynchronizationObjectInternal(v26, 1, (DXGADAPTER **)v36, &v109, v108, &v113, &v111);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v116);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v125);
LABEL_80:
    if ( (int)hDevice >= 0 )
    {
      if ( a2 )
      {
        p_hSyncObject = &a1->hSyncObject;
        v38 = MmUserProbeAddress;
        if ( (unsigned __int64)&a1->hSyncObject >= MmUserProbeAddress )
          p_hSyncObject = (_DWORD *)MmUserProbeAddress;
        hSyncObject = v109.hSyncObject;
        *p_hSyncObject = v109.hSyncObject;
        if ( (*(_BYTE *)&v109.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v109.Info.Flags.0 & 2) == 0 || v128) )
        {
          p_SharedHandle = &a1->Info.SharedHandle;
          v38 = MmUserProbeAddress;
          if ( (unsigned __int64)&a1->Info.SharedHandle >= MmUserProbeAddress )
            p_SharedHandle = (_DWORD *)MmUserProbeAddress;
          *p_SharedHandle = v109.Info.SharedHandle;
        }
        p_Fence = (ULONG64)&a1->Info.Fence;
        v52 = v109.Info.Type;
        v53 = *(_OWORD *)&v109.Info.SynchronizationMutex.InitialState;
        v54 = *(_OWORD *)&v109.Info.Reserved.Reserved[2];
        if ( v109.Info.Type == D3DDDI_MONITORED_FENCE )
        {
          v38 = MmUserProbeAddress;
          v55 = (_OWORD *)p_Fence;
          if ( p_Fence >= MmUserProbeAddress )
            v55 = (_OWORD *)MmUserProbeAddress;
          *v55 = *(_OWORD *)&v109.Info.SynchronizationMutex.InitialState;
          v55[1] = v54;
        }
        if ( v52 == D3DDDI_PERIODIC_MONITORED_FENCE )
        {
          v38 = MmUserProbeAddress;
          if ( p_Fence >= MmUserProbeAddress )
            p_Fence = MmUserProbeAddress;
          *(_OWORD *)p_Fence = v53;
          *(_OWORD *)(p_Fence + 16) = v54;
          *(_QWORD *)(p_Fence + 32) = v109.Info.Reserved.Reserved[4];
        }
      }
      else
      {
        hSyncObject = v109.hSyncObject;
        a1->hSyncObject = v109.hSyncObject;
        if ( (*(_BYTE *)&v109.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v109.Info.Flags.0 & 2) == 0 || v128) )
          a1->Info.SharedHandle = v109.Info.SharedHandle;
        v52 = v109.Info.Type;
        v56 = *(_OWORD *)&v109.Info.SynchronizationMutex.InitialState;
        v57 = *(_OWORD *)&v109.Info.Reserved.Reserved[2];
        if ( v109.Info.Type == D3DDDI_MONITORED_FENCE )
        {
          *(_OWORD *)&a1->Info.SynchronizationMutex.InitialState = *(_OWORD *)&v109.Info.SynchronizationMutex.InitialState;
          *(_OWORD *)&a1->Info.Reserved.Reserved[2] = v57;
        }
        if ( v52 == D3DDDI_PERIODIC_MONITORED_FENCE )
        {
          *(_OWORD *)&a1->Info.SynchronizationMutex.InitialState = v56;
          *(_OWORD *)&a1->Info.Reserved.Reserved[2] = v57;
          a1->Info.Reserved.Reserved[4] = v109.Info.Reserved.Reserved[4];
        }
      }
      if ( bTracingEnabled )
      {
        v58 = v111 ? *((_QWORD *)v111 + 4) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0ppp(v38, &EventOpenSyncObject, v39, v58, hSyncObject, v26);
      }
      if ( v52 != D3DDDI_PERIODIC_MONITORED_FENCE )
        goto LABEL_134;
      v112 = 0LL;
      Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
      hDevice = v109.Info.Semaphore.MaxCount;
      DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v104, v109.Info.Semaphore.MaxCount, Current, &v112);
      v63 = v112;
      if ( !v112 )
      {
        v64 = WdLogNewEntry5_WdWarning(v61, v60, v62);
        *(_QWORD *)(v64 + 24) = hDevice;
        LODWORD(hDevice) = -1073741811;
        *(_QWORD *)(v64 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v64);
        goto LABEL_132;
      }
      if ( !DXGADAPTER::IsDxgmms2(v112) )
      {
        v68 = WdLogNewEntry5_WdWarning(v66, v65, v67);
        *(_QWORD *)(v68 + 24) = 480LL;
        WdLogEvent5_WdWarning(v68);
        LODWORD(hDevice) = -1073741811;
        goto LABEL_132;
      }
      PairingAdapters = DxgkpGetPairingAdapters(v66, 0, &v115, &v123, &v114, &v122);
      hDevice = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v71 = WdLogNewEntry5_WdError(v70);
        *(_QWORD *)(v71 + 24) = v63;
        *(_QWORD *)(v71 + 32) = hDevice;
        WdLogEvent5_WdError(v71);
        goto LABEL_132;
      }
      v72 = v114;
      v73 = v115;
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v124, v115, v114);
      hDevice = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v124);
      DXGADAPTER::ReleaseReferenceNoTracking(v73);
      DXGADAPTER::ReleaseReferenceNoTracking(v72);
      if ( (int)hDevice >= 0 )
      {
        v78 = (ADAPTER_DISPLAY *)*((_QWORD *)v72 + 307);
        InitialCount = v109.Info.Semaphore.InitialCount;
        v80 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v78, v109.Info.Semaphore.InitialCount);
        hDevice = v80;
        if ( v80 == -1 )
        {
          v83 = WdLogNewEntry5_WdError(v81);
          *(_QWORD *)(v83 + 24) = InitialCount;
          WdLogEvent5_WdError(v83);
          LODWORD(hDevice) = -1073741811;
          goto LABEL_131;
        }
        v84 = *((_QWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(v82, v80) + 2);
        v86 = HIDWORD(v84);
        if ( !HIDWORD(v84) || !(_DWORD)v84 )
        {
          v93 = WdLogNewEntry5_WdError(v84);
          *(_QWORD *)(v93 + 24) = hDevice;
          WdLogEvent5_WdError(v93);
          LODWORD(hDevice) = -1073741676;
          goto LABEL_131;
        }
        v89 = 10000000 * v86;
        v87 = 10000000 * v86 / (unsigned int)v84;
        v88 = v89 % (unsigned int)v84;
        FenceValueCPUVirtualAddress = v109.Info.MonitoredFence.FenceValueCPUVirtualAddress;
        if ( v109.Info.PeriodicMonitoredFence.Time > v87 )
        {
          v91 = WdLogNewEntry5_WdWarning((unsigned int)v84, v88, v85);
          *(_QWORD *)(v91 + 24) = FenceValueCPUVirtualAddress;
          LODWORD(hDevice) = -1073741811;
          *(_QWORD *)(v91 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v91);
          goto LABEL_131;
        }
        PeriodicFrameNotification = DXGSYNCOBJECT::CreatePeriodicFrameNotification(v108[0], v73, v87, hDevice);
        hDevice = PeriodicFrameNotification;
        if ( PeriodicFrameNotification >= 0 )
          goto LABEL_131;
      }
      v77 = WdLogNewEntry5_WdWarning(v75, v74, v76);
      *(_QWORD *)(v77 + 24) = hDevice;
      WdLogEvent5_WdWarning(v77);
LABEL_131:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v124);
LABEL_132:
      if ( v104 )
        DXGADAPTER::ReleaseReferenceNoTracking(v104);
LABEL_134:
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v11 + 208));
      v94 = (hSyncObject >> 6) & 0xFFFFFF;
      if ( (unsigned int)v94 < *(_DWORD *)(v11 + 248) )
      {
        v95 = *(_QWORD *)(v11 + 232);
        if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v95 + 16 * v94 + 8) & 0x60)
          && (*(_DWORD *)(v95 + 16 * v94 + 8) & 0x1F) != 0 )
        {
          v96 = 2 * ((*(_QWORD *)&v109.hSyncObject >> 6) & 0xFFFFFFLL);
          if ( (*(_DWORD *)(v95 + 16 * ((*(_QWORD *)&v109.hSyncObject >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
          {
            v97 = WdLogNewEntry5_WdAssertion((hSyncObject >> 25) & 0x60);
            *(_QWORD *)(v97 + 24) = 215LL;
            WdLogEvent5_WdAssertion(v97);
            v95 = *(_QWORD *)(v11 + 232);
          }
          *(_DWORD *)(v95 + 8 * v96 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v11 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v11 + 208, 0LL);
      KeLeaveCriticalRegion();
      if ( (int)hDevice < 0 )
      {
        v129.hSyncObject = hSyncObject;
        DxgkDestroySynchronizationObjectImpl(&v129, 0);
      }
      goto LABEL_143;
    }
    v98 = WdLogNewEntry5_WdWarning(v38, v37, v39);
    *(_QWORD *)(v98 + 24) = (int)hDevice;
    WdLogEvent5_WdWarning(v98);
LABEL_143:
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
    goto LABEL_144;
  }
  COREACCESS::Release(v120);
LABEL_55:
  COREACCESS::Release(v117);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v116);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v125);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v103);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v34, &EventProfilerExit, v35, v101);
  return 3221226166LL;
}
