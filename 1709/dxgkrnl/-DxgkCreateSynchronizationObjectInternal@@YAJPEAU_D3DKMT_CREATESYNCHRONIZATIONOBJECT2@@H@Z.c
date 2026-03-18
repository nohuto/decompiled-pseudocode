/*
 * XREFs of ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00A2270
 * Callers:
 *     DxgkCreateSynchronizationObject @ 0x1C00A3030 (DxgkCreateSynchronizationObject.c)
 *     ?DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00F6D90 (-DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z.c)
 *     ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192490 (-VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C0004090 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00075FC (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C00079B4 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     McTemplateK0ppp @ 0x1C00287B0 (McTemplateK0ppp.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C007A948 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00A1CA0 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@_KI@Z @ 0x1C01BF20C (-CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@_KI@Z.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObjectInternal(
        struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // r15d
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r13
  __int64 *ThreadProperty; // rax
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 hDevice; // rbx
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
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE Type; // r14d
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r9
  struct DXGDEVICE *v40; // rsi
  __int64 v41; // rax
  DXGADAPTER ***v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  _QWORD *v46; // rax
  DXGADAPTER *v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // r8
  int v52; // r12d
  DXGADAPTER **v53; // r14
  struct _KEVENT *v54; // r14
  __int64 v55; // r8
  unsigned __int8 v56; // r14
  __int64 v57; // rdx
  __int64 v58; // r8
  int v59; // r14d
  __int64 v60; // rcx
  __int64 v61; // r8
  DXGADAPTER *v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r8
  int v66; // eax
  __int64 v67; // rdx
  ULONG64 v68; // rcx
  __int64 v69; // r8
  _DWORD *p_hSyncObject; // rdx
  D3DKMT_HANDLE hSyncObject; // r15d
  _DWORD *p_SharedHandle; // rdx
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE v73; // r14d
  __int128 v74; // xmm2
  __int128 v75; // xmm3
  _OWORD *p_InitialState; // rdx
  ULONG64 p_Fence; // rdx
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  DXGADAPTER *v87; // rdi
  __int64 v88; // rax
  __int64 v89; // rdx
  struct DXGADAPTER *v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rax
  int PairingAdapters; // eax
  __int64 v94; // rcx
  __int64 v95; // rax
  struct DXGADAPTER *v96; // rdi
  DXGADAPTER *v97; // rsi
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rax
  ADAPTER_DISPLAY *v102; // r11
  __int64 InitialCount; // rdi
  unsigned int v104; // eax
  __int64 v105; // rcx
  DXGADAPTER **v106; // r11
  __int64 v107; // rax
  unsigned __int64 v108; // rcx
  unsigned __int64 v109; // rax
  UINT64 v110; // rax
  unsigned __int64 v111; // rdx
  unsigned __int64 v112; // rtt
  void *FenceValueCPUVirtualAddress; // rdi
  int PeriodicFrameNotification; // eax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // r8
  __int64 v119; // rdi
  __int64 v120; // rax
  __int64 v121; // r8
  DXGADAPTER *v122; // [rsp+40h] [rbp-208h] BYREF
  struct DXGDEVICE *v123; // [rsp+50h] [rbp-1F8h] BYREF
  int v124; // [rsp+58h] [rbp-1F0h]
  struct DXGDEVICE *v125; // [rsp+60h] [rbp-1E8h] BYREF
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v126; // [rsp+70h] [rbp-1D8h] BYREF
  struct DXGADAPTERSYNCOBJECT *v127; // [rsp+D0h] [rbp-178h] BYREF
  DXGADAPTER *v128; // [rsp+D8h] [rbp-170h] BYREF
  DXGSYNCOBJECT *v129; // [rsp+E0h] [rbp-168h] BYREF
  char v130[8]; // [rsp+F0h] [rbp-158h] BYREF
  _BYTE v131[16]; // [rsp+F8h] [rbp-150h] BYREF
  DXGADAPTER *v132; // [rsp+108h] [rbp-140h]
  char v133; // [rsp+110h] [rbp-138h]
  _BYTE v134[16]; // [rsp+118h] [rbp-130h] BYREF
  DXGADAPTER *v135; // [rsp+128h] [rbp-120h]
  struct DXGDEVICESYNCOBJECT *v136; // [rsp+140h] [rbp-108h] BYREF
  struct DXGADAPTER *v137; // [rsp+148h] [rbp-100h] BYREF
  struct DXGADAPTER *v138; // [rsp+150h] [rbp-F8h] BYREF
  unsigned __int64 v139; // [rsp+158h] [rbp-F0h] BYREF
  unsigned __int64 v140; // [rsp+160h] [rbp-E8h] BYREF
  _BYTE v141[80]; // [rsp+170h] [rbp-D8h] BYREF
  _BYTE v142[96]; // [rsp+1C0h] [rbp-88h] BYREF
  _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v143; // [rsp+260h] [rbp+18h] BYREF
  char v144; // [rsp+268h] [rbp+20h] BYREF

  v3 = a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2041);
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v11 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
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
  if ( !v11 )
  {
    v14 = WdLogNewEntry5_WdError(v9);
    LODWORD(hDevice) = -1073741811;
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
LABEL_153:
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, 2041);
    return (unsigned int)hDevice;
  }
  if ( v3 )
  {
    v18 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v18 = (_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v126 = *v18;
    v19 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v126.hDevice, 12));
    if ( (v19 & 0x7FFFFF00) != 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v19, v8, v10);
      *(_QWORD *)(v20 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v20);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v21, &EventProfilerExit, v22, 2041);
      return 3221225485LL;
    }
    v24 = ((unsigned int)v19 >> 1) & 1;
    if ( (((unsigned int)v19 >> 1) & 1) != 0 && (v19 & 1) == 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&gDxgkrnlCounterAccumulated);
      v25 = WdLogNewEntry5_WdWarning(v19, v24, v10);
      *(_QWORD *)(v25 + 24) = 215LL;
      WdLogEvent5_WdWarning(v25);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v26, &EventProfilerExit, v27, 2041);
      return -1073741811LL;
    }
    Type = v126.Info.Type;
    if ( (unsigned int)(v126.Info.Type - 5) <= 1 )
    {
      if ( (v19 & 1) != 0 && !(_DWORD)v24 )
      {
        v32 = WdLogNewEntry5_WdWarning(v19, v24, v10);
        *(_QWORD *)(v32 + 24) = 224LL;
        WdLogEvent5_WdWarning(v32);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v33, &EventProfilerExit, v34, 2041);
        return -1073741811LL;
      }
      if ( (v19 & 0x10) != 0 && (v19 & 0x20) != 0 )
      {
        v35 = WdLogNewEntry5_WdWarning(v19, v24, v10);
        *(_QWORD *)(v35 + 24) = 230LL;
        WdLogEvent5_WdWarning(v35);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v36, &EventProfilerExit, v37, 2041);
        return -1073741811LL;
      }
    }
    else if ( (v19 & 0x80u) != 0LL )
    {
      v29 = WdLogNewEntry5_WdWarning(v19, v24, v10);
      *(_QWORD *)(v29 + 24) = 236LL;
      WdLogEvent5_WdWarning(v29);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v30, &EventProfilerExit, v31, 2041);
      return -1073741811LL;
    }
  }
  else
  {
    v126 = *a1;
    Type = v126.Info.Type;
  }
  v126.hSyncObject = 0;
  hDevice = v126.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v144, v126.hDevice, (struct _KTHREAD **)v11, &v125);
  v40 = v125;
  if ( !v125 )
  {
    v41 = WdLogNewEntry5_WdError(v38);
    *(_QWORD *)(v41 + 24) = hDevice;
    LODWORD(hDevice) = -1073741811;
    *(_QWORD *)(v41 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v41);
LABEL_152:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v144);
    goto LABEL_153;
  }
  v129 = 0LL;
  v127 = 0LL;
  v123 = v125;
  v124 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v142, (__int64)v125, 0, v39, 0);
  v42 = (DXGADAPTER ***)((char *)v40 + 16);
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v130,
    *(struct DXGADAPTER *const *)(*((_QWORD *)v40 + 2) + 16LL),
    0LL);
  v45 = (unsigned int)(Type - 5);
  if ( (unsigned int)v45 > 1 )
  {
    if ( v133 != (_BYTE)v44 )
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45, v43, v44);
      v46[3] = 275LL;
      v46[4] = 4LL;
      v46[5] = v131;
      v46[6] = 0LL;
      v46[7] = 0LL;
      WdLogEvent5_WdCriticalError(v46);
    }
    v47 = v132;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v132 + 20) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v132 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v48, &EventBlockThread, v49, 72);
        KeWaitForSingleObject((char *)v132 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v132);
      v47 = v132;
    }
    v133 = 1;
    if ( *((_DWORD *)v47 + 44) != 1 )
      goto LABEL_60;
    if ( v132 != v135 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v134);
      if ( *((_DWORD *)v135 + 44) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v134);
LABEL_60:
        COREACCESS::Release((COREACCESS *)v131);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v130);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v142);
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v123);
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v144);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v50, &EventProfilerExit, v51, 2041);
        return 3221226166LL;
      }
    }
    v40 = v125;
    v52 = v124;
LABEL_88:
    v136 = 0LL;
    v66 = CreateSynchronizationObjectInternal(v40, 1, *v42, &v126, &v129, &v136, &v127);
    hDevice = v66;
    if ( v66 < 0 )
    {
      v116 = WdLogNewEntry5_WdWarning(v68, v67, v69);
      *(_QWORD *)(v116 + 24) = hDevice;
      WdLogEvent5_WdWarning(v116);
      LODWORD(hDevice) = -1073741811;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v130);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v142);
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v123);
      hSyncObject = v126.hSyncObject;
LABEL_144:
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v11 + 200));
      v117 = (hSyncObject >> 6) & 0xFFFFFF;
      if ( (unsigned int)v117 < *(_DWORD *)(v11 + 240) )
      {
        v118 = *(_QWORD *)(v11 + 224);
        if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v118 + 16 * v117 + 8) & 0x60)
          && (*(_DWORD *)(v118 + 16 * v117 + 8) & 0x1F) != 0 )
        {
          v119 = 2 * ((*(_QWORD *)&v126.hSyncObject >> 6) & 0xFFFFFFLL);
          if ( (*(_DWORD *)(v118 + 16 * ((*(_QWORD *)&v126.hSyncObject >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
          {
            v120 = WdLogNewEntry5_WdAssertion((hSyncObject >> 25) & 0x60);
            *(_QWORD *)(v120 + 24) = 191LL;
            WdLogEvent5_WdAssertion(v120);
          }
          *(_DWORD *)(*(_QWORD *)(v11 + 224) + 8 * v119 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v11 + 208) = 0LL;
      ExReleasePushLockExclusiveEx(v11 + 200, 0LL);
      KeLeaveCriticalRegion();
      if ( (int)hDevice < 0 )
      {
        v143.hSyncObject = hSyncObject;
        DxgkDestroySynchronizationObjectInternal(&v143, 0LL, v121);
      }
      goto LABEL_152;
    }
    if ( v3 )
    {
      p_hSyncObject = &a1->hSyncObject;
      v68 = MmUserProbeAddress;
      if ( (unsigned __int64)&a1->hSyncObject >= MmUserProbeAddress )
        p_hSyncObject = (_DWORD *)MmUserProbeAddress;
      hSyncObject = v126.hSyncObject;
      *p_hSyncObject = v126.hSyncObject;
      if ( (*(_BYTE *)&v126.Info.Flags.0 & 1) != 0 && (*(_BYTE *)&v126.Info.Flags.0 & 2) == 0 )
      {
        p_SharedHandle = &a1->Info.SharedHandle;
        v68 = MmUserProbeAddress;
        if ( (unsigned __int64)&a1->Info.SharedHandle >= MmUserProbeAddress )
          p_SharedHandle = (_DWORD *)MmUserProbeAddress;
        *p_SharedHandle = v126.Info.SharedHandle;
      }
      v73 = v126.Info.Type;
      v74 = *(_OWORD *)&v126.Info.SynchronizationMutex.InitialState;
      v75 = *(_OWORD *)&v126.Info.Reserved.Reserved[2];
      if ( v126.Info.Type == D3DDDI_MONITORED_FENCE )
      {
        p_InitialState = &a1->Info.SynchronizationMutex.InitialState;
        v68 = MmUserProbeAddress;
        if ( (unsigned __int64)&a1->Info.Fence >= MmUserProbeAddress )
          p_InitialState = (_OWORD *)MmUserProbeAddress;
        *p_InitialState = *(_OWORD *)&v126.Info.SynchronizationMutex.InitialState;
        p_InitialState[1] = v75;
      }
      if ( v73 == D3DDDI_PERIODIC_MONITORED_FENCE )
      {
        p_Fence = (ULONG64)&a1->Info.Fence;
        v68 = MmUserProbeAddress;
        if ( (unsigned __int64)&a1->Info.Fence >= MmUserProbeAddress )
          p_Fence = MmUserProbeAddress;
        *(_OWORD *)p_Fence = v74;
        *(_OWORD *)(p_Fence + 16) = v75;
        *(_QWORD *)(p_Fence + 32) = v126.Info.Reserved.Reserved[4];
      }
    }
    else
    {
      hSyncObject = v126.hSyncObject;
      a1->hSyncObject = v126.hSyncObject;
      if ( (*(_BYTE *)&v126.Info.Flags.0 & 1) != 0 && (*(_BYTE *)&v126.Info.Flags.0 & 2) == 0 )
        a1->Info.SharedHandle = v126.Info.SharedHandle;
      v73 = v126.Info.Type;
      v78 = *(_OWORD *)&v126.Info.SynchronizationMutex.InitialState;
      v79 = *(_OWORD *)&v126.Info.Reserved.Reserved[2];
      if ( v126.Info.Type == D3DDDI_MONITORED_FENCE )
      {
        *(_OWORD *)&a1->Info.SynchronizationMutex.InitialState = *(_OWORD *)&v126.Info.SynchronizationMutex.InitialState;
        *(_OWORD *)&a1->Info.Reserved.Reserved[2] = v79;
      }
      if ( v73 == D3DDDI_PERIODIC_MONITORED_FENCE )
      {
        *(_OWORD *)&a1->Info.SynchronizationMutex.InitialState = v78;
        *(_OWORD *)&a1->Info.Reserved.Reserved[2] = v79;
        a1->Info.Reserved.Reserved[4] = v126.Info.Reserved.Reserved[4];
      }
    }
    if ( bTracingEnabled )
    {
      v80 = v127 ? *((_QWORD *)v127 + 4) : 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppp(v68, &EventOpenSyncObject, v69, v80, hSyncObject, v40);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v130);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v142);
    if ( v52 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v40 + 13));
      KeLeaveCriticalRegion();
    }
    if ( v73 != D3DDDI_PERIODIC_MONITORED_FENCE )
      goto LABEL_144;
    v128 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v82, v81);
    hDevice = v126.Info.Semaphore.MaxCount;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v122, v126.Info.Semaphore.MaxCount, Current, &v128);
    v87 = v128;
    if ( !v128 )
    {
      v88 = WdLogNewEntry5_WdWarning(v85, v84, v86);
      *(_QWORD *)(v88 + 24) = hDevice;
      LODWORD(hDevice) = -1073741811;
      *(_QWORD *)(v88 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v88);
      goto LABEL_124;
    }
    if ( !DXGADAPTER::IsDxgmms2(v128) )
    {
      v92 = WdLogNewEntry5_WdWarning(v90, v89, v91);
      *(_QWORD *)(v92 + 24) = 408LL;
      WdLogEvent5_WdWarning(v92);
      LODWORD(hDevice) = -1073741811;
      goto LABEL_124;
    }
    PairingAdapters = DxgkpGetPairingAdapters(v90, 0, &v138, &v140, &v137, &v139);
    hDevice = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v95 = WdLogNewEntry5_WdError(v94);
      *(_QWORD *)(v95 + 24) = v87;
      *(_QWORD *)(v95 + 32) = hDevice;
      WdLogEvent5_WdError(v95);
      goto LABEL_124;
    }
    v96 = v137;
    v97 = v138;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v141, v138, v137);
    hDevice = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v141);
    DXGADAPTER::ReleaseReferenceNoTracking(v97);
    DXGADAPTER::ReleaseReferenceNoTracking(v96);
    if ( (int)hDevice < 0 )
      goto LABEL_131;
    v102 = (ADAPTER_DISPLAY *)*((_QWORD *)v96 + 288);
    InitialCount = v126.Info.Semaphore.InitialCount;
    v104 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v102, v126.Info.Semaphore.InitialCount);
    hDevice = v104;
    if ( v104 == -1 )
    {
      v107 = WdLogNewEntry5_WdError(v105);
      *(_QWORD *)(v107 + 24) = InitialCount;
      WdLogEvent5_WdError(v107);
      LODWORD(hDevice) = -1073741811;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v141);
    }
    else
    {
      v108 = *((_QWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(v106, v104) + 2);
      v109 = HIDWORD(v108);
      if ( HIDWORD(v108) && (_DWORD)v108 )
      {
        v112 = 10000000 * v109;
        v110 = 10000000 * v109 / (unsigned int)v108;
        v111 = v112 % (unsigned int)v108;
        FenceValueCPUVirtualAddress = v126.Info.MonitoredFence.FenceValueCPUVirtualAddress;
        if ( v126.Info.PeriodicMonitoredFence.Time > v110 )
        {
          v101 = WdLogNewEntry5_WdWarning(v108, v111, (unsigned int)v108);
          *(_QWORD *)(v101 + 24) = FenceValueCPUVirtualAddress;
          LODWORD(hDevice) = -1073741811;
          *(_QWORD *)(v101 + 32) = -1073741811LL;
          goto LABEL_132;
        }
        PeriodicFrameNotification = DXGSYNCOBJECT::CreatePeriodicFrameNotification(v129, v97, v110, hDevice);
        hDevice = PeriodicFrameNotification;
        if ( PeriodicFrameNotification >= 0 )
          goto LABEL_133;
LABEL_131:
        v101 = WdLogNewEntry5_WdWarning(v99, v98, v100);
        *(_QWORD *)(v101 + 24) = hDevice;
LABEL_132:
        WdLogEvent5_WdWarning(v101);
LABEL_133:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v141);
        goto LABEL_124;
      }
      v115 = WdLogNewEntry5_WdError(v108);
      *(_QWORD *)(v115 + 24) = hDevice;
      WdLogEvent5_WdError(v115);
      LODWORD(hDevice) = -1073741676;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v141);
    }
LABEL_124:
    if ( v122 )
      DXGADAPTER::ReleaseReferenceNoTracking(v122);
    goto LABEL_144;
  }
  v53 = *v42;
  if ( *((_DWORD *)v40 + 82) == 2 )
    v54 = (struct _KEVENT *)(v53 + 12);
  else
    v54 = (struct _KEVENT *)(v53 + 9);
  if ( !KeReadStateEvent(v54) )
    KeWaitForSingleObject(v54, Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v40 + 13), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGADAPTER *)((char *)(*v42)[2] + 96));
    v56 = DXGADAPTER::TryWakeUpFromD3State((*v42)[2]);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v55, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v40 + 13), 1u);
    if ( v56 )
      DXGADAPTER::EnableD3Requests((*v42)[2]);
    ExReleasePushLockSharedEx((char *)(*v42)[2] + 96, 0LL);
    KeLeaveCriticalRegion();
  }
  v52 = 1;
  v124 = 1;
  v59 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v142);
  if ( v59 >= 0 )
  {
    v62 = (*v42)[2];
    if ( *((int *)v62 + 492) >= 0x2000 || *((_BYTE *)v62 + 2252) )
      goto LABEL_88;
    v63 = WdLogNewEntry5_WdWarning(v62, v57, v58);
    *(_QWORD *)(v63 + 24) = 294LL;
    WdLogEvent5_WdWarning(v63);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v130);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v142);
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v123);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v144);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v64, &EventProfilerExit, v65, 2041);
    return -1073741811LL;
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v130);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v142);
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v123);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v144);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v60, &EventProfilerExit, v61, 2041);
    return (unsigned int)v59;
  }
}
