/*
 * XREFs of DxgkLock @ 0x1C0092200
 * Callers:
 *     ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0193960 (-VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0094290 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0094B50 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  bool v4; // r15
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  struct _KTHREAD **v9; // rbx
  struct _D3DKMT_LOCK *v10; // rcx
  __int64 v11; // rcx
  struct DXGDEVICE *v12; // rdi
  __int64 v13; // rcx
  int v14; // ebx
  struct _KEVENT *v15; // r14
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r14d
  _QWORD *p_pData; // rcx
  _DWORD *p_hAllocation; // rsi
  struct DXGADAPTER *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // r8
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  struct _KEVENT *v35; // rcx
  unsigned __int8 v36; // bl
  __int64 v37; // r8
  unsigned __int8 v38; // bl
  _QWORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  struct _D3DKMT_LOCK v42; // [rsp+30h] [rbp-108h] BYREF
  struct DXGDEVICE *v43; // [rsp+60h] [rbp-D8h] BYREF
  int v44; // [rsp+68h] [rbp-D0h]
  __int64 v45; // [rsp+70h] [rbp-C8h] BYREF
  struct DXGADAPTER *v46; // [rsp+78h] [rbp-C0h]
  char v47; // [rsp+80h] [rbp-B8h]
  _BYTE v48[8]; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE v49[16]; // [rsp+A8h] [rbp-90h] BYREF
  DXGADAPTER *v50; // [rsp+B8h] [rbp-80h]
  char v51; // [rsp+C0h] [rbp-78h]
  _BYTE v52[16]; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-60h]
  __int64 v54; // [rsp+E8h] [rbp-50h]
  char v55; // [rsp+F0h] [rbp-48h]
  struct DXGDEVICE *v56; // [rsp+148h] [rbp+10h] BYREF
  struct DXGDEVICE *v57; // [rsp+150h] [rbp+18h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2011);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v9 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v30 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v30;
      }
    }
  }
  if ( !v9 )
  {
    v31 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v31 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v31);
LABEL_46:
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v32, &EventProfilerExit, v33, 2011);
    return 3221225485LL;
  }
  if ( v4 )
  {
    v10 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v10 = (struct _D3DKMT_LOCK *)MmUserProbeAddress;
    v42 = *v10;
  }
  else
  {
    v42 = *a1;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v57, v42.hDevice, v9, &v56);
  v12 = v56;
  if ( !v56 )
  {
    v34 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v34 + 24) = v42.hDevice;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    if ( v57 && _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
    goto LABEL_46;
  }
  v43 = v56;
  v13 = *(_QWORD *)(*((_QWORD *)v56 + 2) + 16LL);
  if ( *(int *)(v13 + 1968) >= 0x2000 || *(_BYTE *)(v13 + 2252) )
    v14 = *((_DWORD *)DXGGLOBAL::GetGlobal(v13) + 203);
  else
    v14 = 0;
  v44 = v14;
  v15 = (struct _KEVENT *)*((_QWORD *)v12 + 2);
  if ( *((_DWORD *)v12 + 82) == 2 )
  {
    if ( KeReadStateEvent(v15 + 4) )
      goto LABEL_15;
    v35 = v15 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v15 + 3) )
      goto LABEL_15;
    v35 = v15 + 3;
  }
  KeWaitForSingleObject(v35, Executive, 0, 0, 0LL);
LABEL_15:
  KeEnterCriticalRegion();
  if ( !v14 )
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v12 + 13), 0) )
      goto LABEL_17;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 96LL));
    v36 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v37, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v12 + 13), 1u);
    if ( v36 )
      goto LABEL_66;
    goto LABEL_67;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v12 + 112, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 96LL));
    v38 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v12 + 112));
    if ( v38 )
LABEL_66:
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL));
LABEL_67:
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_17:
  v46 = *(struct DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v46 + 3);
  v45 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v46 + 120, 0LL);
  v47 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, (__int64)v56, 0, v16, 0);
  if ( v51 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17, v19);
    v39[3] = 275LL;
    v39[4] = 4LL;
    v39[5] = v49;
    v39[6] = 0LL;
    v39[7] = 0LL;
    WdLogEvent5_WdCriticalError(v39);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v50 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v50 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v20, &EventBlockThread, v21, 72);
      KeWaitForSingleObject((char *)v50 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v50);
  }
  v51 = 1;
  if ( *(_DWORD *)(v54 + 408) != 1 )
    goto LABEL_74;
  if ( v55 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v52);
    if ( *(_DWORD *)(v53 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v52);
LABEL_74:
      COREACCESS::Release((COREACCESS *)v49);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v45);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v43);
      if ( v57 && _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v40, &EventProfilerExit, v41, 2011);
      return 3221226166LL;
    }
  }
  v42.hDevice = 0;
  v22 = DXGDEVICE::Lock(v56, &v42, (struct COREDEVICEACCESS *)v48);
  if ( v22 >= 0 )
  {
    if ( v4 )
    {
      p_pData = &a1->pData;
      if ( (unsigned __int64)&a1->pData >= MmUserProbeAddress )
        p_pData = (_QWORD *)MmUserProbeAddress;
      *p_pData = v42.pData;
      p_hAllocation = &a1->hAllocation;
      if ( (unsigned __int64)p_hAllocation >= MmUserProbeAddress )
        p_hAllocation = (_DWORD *)MmUserProbeAddress;
      *p_hAllocation = v42.hAllocation;
    }
    else
    {
      a1->pData = v42.pData;
      a1->hAllocation = v42.hAllocation;
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
  v25 = v46;
  ExReleasePushLockSharedEx((char *)v46 + 120, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v46 + 2), v46);
  if ( v44 )
    ExReleasePushLockSharedEx((char *)v56 + 112, 0LL);
  else
    ExReleaseResourceLite(*((PERESOURCE *)v56 + 13));
  KeLeaveCriticalRegion();
  if ( v57 && _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, 2011);
  return (unsigned int)v22;
}
