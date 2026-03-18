/*
 * XREFs of DxgkLock @ 0x1C00CAEF0
 * Callers:
 *     ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017FB60 (-VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E8760 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00E9030 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkLock(_D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  bool v4; // r15
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  struct _KTHREAD **v8; // rbx
  _D3DKMT_LOCK *v9; // rcx
  __int64 v10; // rcx
  struct DXGDEVICE *v11; // rdi
  __int64 v12; // rcx
  int v13; // ebx
  struct _KEVENT *v14; // r14
  volatile signed __int64 *v15; // rdi
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r14d
  _QWORD *p_pData; // rcx
  _DWORD *p_hAllocation; // rsi
  struct DXGADAPTER *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int8 v27; // bl
  __int64 v28; // r8
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  struct _KEVENT *v35; // rcx
  unsigned __int8 v36; // bl
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // [rsp+30h] [rbp-118h] BYREF
  __int64 v41; // [rsp+38h] [rbp-110h]
  _D3DKMT_LOCK v42; // [rsp+40h] [rbp-108h] BYREF
  struct DXGDEVICE *v43; // [rsp+70h] [rbp-D8h] BYREF
  int v44; // [rsp+78h] [rbp-D0h]
  __int64 v45; // [rsp+90h] [rbp-B8h] BYREF
  struct DXGADAPTER *v46; // [rsp+98h] [rbp-B0h]
  char v47; // [rsp+A0h] [rbp-A8h]
  _BYTE v48[8]; // [rsp+B0h] [rbp-98h] BYREF
  struct _KTHREAD **v49[2]; // [rsp+B8h] [rbp-90h] BYREF
  DXGADAPTER *v50; // [rsp+C8h] [rbp-80h]
  char v51; // [rsp+D0h] [rbp-78h]
  struct _KTHREAD **v52[5]; // [rsp+D8h] [rbp-70h] BYREF
  char v53; // [rsp+100h] [rbp-48h]
  struct DXGDEVICE *v54; // [rsp+158h] [rbp+10h] BYREF
  struct DXGDEVICE *v55; // [rsp+160h] [rbp+18h] BYREF

  v41 = 0LL;
  v40 = 2011;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2011);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v40, 2011);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v30 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v30;
      }
    }
  }
  if ( !v8 )
  {
    v31 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v31 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v31);
LABEL_55:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v32, &EventProfilerExit, v33, v40);
    return 3221225485LL;
  }
  if ( v4 )
  {
    v9 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v9 = (_D3DKMT_LOCK *)MmUserProbeAddress;
    v42 = *v9;
  }
  else
  {
    v42 = *a1;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v55, v42.hDevice, v8, &v54);
  v11 = v54;
  if ( !v54 )
  {
    v34 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v34 + 24) = v42.hDevice;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    if ( v55 && _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
    goto LABEL_55;
  }
  v43 = v54;
  v12 = *(_QWORD *)(*((_QWORD *)v54 + 2) + 16LL);
  if ( *(int *)(v12 + 2104) >= 0x2000 || *(_BYTE *)(v12 + 2396) )
    v13 = *((_DWORD *)DXGGLOBAL::GetGlobal(v12) + 223);
  else
    v13 = 0;
  v44 = v13;
  v14 = (struct _KEVENT *)*((_QWORD *)v11 + 2);
  if ( *((_DWORD *)v11 + 82) == 2 )
  {
    if ( KeReadStateEvent(v14 + 4) )
      goto LABEL_15;
    v35 = v14 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v14 + 3) )
      goto LABEL_15;
    v35 = v14 + 3;
  }
  KeWaitForSingleObject(v35, Executive, 0, 0, 0LL);
LABEL_15:
  KeEnterCriticalRegion();
  if ( !v13 )
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v11 + 13), 0) )
      goto LABEL_17;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 96LL));
    v27 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v28, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v11 + 13), 1u);
    if ( v27 )
      goto LABEL_67;
    goto LABEL_48;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v11 + 112, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 96LL));
    v36 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v11 + 112));
    if ( v36 )
LABEL_67:
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
LABEL_48:
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_17:
  v15 = *(volatile signed __int64 **)(*((_QWORD *)v11 + 2) + 16LL);
  v46 = (struct DXGADAPTER *)v15;
  _InterlockedIncrement64(v15 + 3);
  v45 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v15 + 15, 0LL);
  v47 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, (__int64)v54, 0, v16, 0);
  if ( v51 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17);
    v37[3] = 275LL;
    v37[4] = 4LL;
    v37[5] = v49;
    v37[6] = 0LL;
    v37[7] = 0LL;
    WdLogEvent5_WdCriticalError(v37);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v50 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v50 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v18, &EventBlockThread, v19, 72);
      KeWaitForSingleObject((char *)v50 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v50);
  }
  v51 = 1;
  if ( *((_DWORD *)v52[4] + 106) != 1 )
    goto LABEL_74;
  if ( v53 )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)v52);
    if ( *((_DWORD *)v52[2] + 44) != 1 )
    {
      COREACCESS::Release(v52);
LABEL_74:
      COREACCESS::Release(v49);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v45);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v43);
      if ( v55 && _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v38, &EventProfilerExit, v39, v40);
      return 3221226166LL;
    }
  }
  v42.hDevice = 0;
  v20 = DXGDEVICE::Lock(v54, &v42, (struct COREDEVICEACCESS *)v48);
  if ( v20 >= 0 )
  {
    p_pData = &a1->pData;
    if ( v4 )
    {
      if ( (unsigned __int64)p_pData >= MmUserProbeAddress )
        p_pData = (_QWORD *)MmUserProbeAddress;
      *p_pData = v42.pData;
      p_hAllocation = &a1->hAllocation;
      if ( (unsigned __int64)p_hAllocation >= MmUserProbeAddress )
        p_hAllocation = (_DWORD *)MmUserProbeAddress;
      *p_hAllocation = v42.hAllocation;
    }
    else
    {
      *p_pData = v42.pData;
      a1->hAllocation = v42.hAllocation;
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
  v23 = v46;
  ExReleasePushLockSharedEx((char *)v46 + 120, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v46 + 2), v46);
  if ( v44 )
    ExReleasePushLockSharedEx((char *)v54 + 112, 0LL);
  else
    ExReleaseResourceLite(*((PERESOURCE *)v54 + 13));
  KeLeaveCriticalRegion();
  if ( v55 && _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v40);
  return (unsigned int)v20;
}
