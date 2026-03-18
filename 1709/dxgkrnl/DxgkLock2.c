/*
 * XREFs of DxgkLock2 @ 0x1C009E500
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
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C0004090 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00145BC (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmLock@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0014AC8 (-VidMmLock@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C016F1AC (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0196A80 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C0198C20 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 */

__int64 __fastcall DxgkLock2(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  bool v4; // si
  __int64 v5; // r8
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rcx
  struct _KTHREAD **v10; // r15
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct _D3DKMT_LOCK2 *v17; // r14
  struct _D3DKMT_LOCK2 *v18; // rax
  __int64 v19; // rcx
  struct DXGDEVICE *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r13
  int v23; // ebx
  struct _KEVENT *v24; // r12
  struct _KEVENT *v25; // rcx
  __int64 v26; // r9
  unsigned __int8 v27; // bl
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  struct DXGALLOCATION *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  _QWORD *v46; // rax
  struct DXGDEVICE *hAllocation; // rcx
  __int64 v48; // rax
  int v49; // eax
  struct DXGDEVICE *v50; // rsi
  int v51; // eax
  _QWORD *v52; // rax
  _QWORD *v53; // rdx
  unsigned int v54; // [rsp+28h] [rbp-110h]
  unsigned int v55; // [rsp+30h] [rbp-108h]
  struct DXGDEVICE *v56; // [rsp+40h] [rbp-F8h] BYREF
  struct DXGDEVICE *v57; // [rsp+48h] [rbp-F0h] BYREF
  int v58; // [rsp+50h] [rbp-E8h]
  struct _KTHREAD **v59; // [rsp+60h] [rbp-D8h]
  struct _D3DKMT_LOCK2 *v60; // [rsp+68h] [rbp-D0h]
  __int64 v61; // [rsp+70h] [rbp-C8h]
  _BYTE v62[8]; // [rsp+80h] [rbp-B8h] BYREF
  _BYTE v63[16]; // [rsp+88h] [rbp-B0h] BYREF
  DXGADAPTER *v64; // [rsp+98h] [rbp-A0h]
  char v65; // [rsp+A0h] [rbp-98h]
  _BYTE v66[16]; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-80h]
  __int64 v68; // [rsp+C8h] [rbp-70h]
  char v69; // [rsp+D0h] [rbp-68h]
  struct _D3DKMT_LOCK2 v70; // [rsp+E0h] [rbp-58h] BYREF
  bool v72; // [rsp+148h] [rbp+10h]
  struct DXGALLOCATION *v73; // [rsp+150h] [rbp+18h] BYREF
  char v74; // [rsp+158h] [rbp+20h] BYREF

  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v72 = v4;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v3, &EventProfilerEnter, v5, 2103);
  CurrentProcess = PsGetCurrentProcess(v3, v2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v7);
  v10 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v12 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v10 = *v12;
      }
    }
  }
  v59 = v10;
  if ( !v10 )
  {
    v13 = WdLogNewEntry5_WdError(v9);
    v14 = -1073741811;
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_85:
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v15, &EventProfilerExit, v16, 2103);
    return v14;
  }
  v17 = &v70;
  v60 = &v70;
  if ( v4 )
  {
    v18 = (struct _D3DKMT_LOCK2 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v18 = (struct _D3DKMT_LOCK2 *)MmUserProbeAddress;
    v70 = *v18;
  }
  else
  {
    v17 = (struct _D3DKMT_LOCK2 *)a1;
    v60 = (struct _D3DKMT_LOCK2 *)a1;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v74, v17->hDevice, v10, &v56);
  v20 = v56;
  if ( !v56 )
  {
    v21 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v21 + 24) = v17->hDevice;
    v14 = -1073741811;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
LABEL_84:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v74);
    goto LABEL_85;
  }
  v22 = *(_QWORD *)(*((_QWORD *)v56 + 2) + 16LL);
  v61 = v22;
  v57 = v56;
  if ( *(int *)(v22 + 1968) >= 0x2000 || *(_BYTE *)(v22 + 2252) )
    v23 = *((_DWORD *)DXGGLOBAL::GetGlobal(v19) + 203);
  else
    v23 = 0;
  v58 = v23;
  v24 = (struct _KEVENT *)*((_QWORD *)v20 + 2);
  if ( *((_DWORD *)v20 + 82) == 2 )
  {
    if ( KeReadStateEvent(v24 + 4) )
      goto LABEL_27;
    v25 = v24 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v24 + 3) )
      goto LABEL_27;
    v25 = v24 + 3;
  }
  KeWaitForSingleObject(v25, Executive, 0, 0, 0LL);
LABEL_27:
  KeEnterCriticalRegion();
  if ( v23 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v20 + 112, 0LL) )
      goto LABEL_38;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 96LL));
    v27 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v20 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v20 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v20 + 13), 0) )
      goto LABEL_38;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 96LL));
    v27 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v20 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v28, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v20 + 13), 1u);
  }
  if ( v27 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v20 + 2) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_38:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v62, (__int64)v20, 0, v26, 0);
  if ( v65 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v31);
    v32[3] = 275LL;
    v32[4] = 4LL;
    v32[5] = v63;
    v32[6] = 0LL;
    v32[7] = 0LL;
    WdLogEvent5_WdCriticalError(v32);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v64 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v64 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v33, &EventBlockThread, v34, 72);
      KeWaitForSingleObject((char *)v64 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v64);
  }
  v65 = 1;
  if ( *(_DWORD *)(v68 + 408) != 1 )
    goto LABEL_51;
  if ( !v69 || (COREACCESS::AcquireShared((COREACCESS *)v66), *(_DWORD *)(v67 + 176) == 1) )
  {
    DXGPROCESS::GetAllocationSafe((__int64)v10, (DXGALLOCATIONREFERENCE *)&v73, v17->hAllocation);
    v42 = v73;
    if ( !v73 )
    {
      v43 = WdLogNewEntry5_WdWarning(v39, v38, v40);
      *(_QWORD *)(v43 + 24) = v17->hAllocation;
      v14 = -1073741811;
      *(_QWORD *)(v43 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v43);
LABEL_83:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v73);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v57);
      goto LABEL_84;
    }
    v44 = *(_QWORD *)(*((_QWORD *)v73 + 1) + 16LL);
    v45 = *(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL);
    if ( *(_QWORD *)(v44 + 16) == v45 )
    {
      v40 = *(unsigned __int8 *)(v22 + 185);
      if ( !(_BYTE)v40 && !*((_QWORD *)v73 + 3) )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v45, v40);
        hAllocation = (struct DXGDEVICE *)v17->hAllocation;
        goto LABEL_59;
      }
      v48 = *((_QWORD *)v73 + 5);
      if ( !v48
        || (v44 = *(unsigned int *)(v48 + 4), (v44 & 1) == 0)
        || (v44 & 2) != 0
        || (v44 = *(unsigned int *)(*(_QWORD *)(v48 + 56) + 12LL), (v44 & 0x200) != 0)
        || (v44 & 0x400) != 0
        || (v49 = *(_DWORD *)(v45 + 300), (v49 & 0x10) != 0)
        || (v49 & 8) != 0
        || (*(_DWORD *)(v45 + 1700) & 0x80u) != 0 )
      {
        v50 = v56;
        if ( (_BYTE)v40 )
        {
          v51 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                  (DXG_GUEST_VIRTUALGPU_VMBUS *)(v22 + 3888),
                  (struct DXGPROCESS *)v10,
                  v56,
                  v17,
                  0,
                  v54,
                  v55);
        }
        else
        {
          if ( !*((_DWORD *)v56 + 18) )
            ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v56 + 13));
          if ( *((struct DXGDEVICE **)v42 + 1) != v50 )
          {
            v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v45, v40);
            v52[3] = v42;
            v52[4] = v50;
            v52[5] = *((_QWORD *)v42 + 1);
            v14 = -1073741811;
            v52[6] = -1073741811LL;
            WdLogEvent5_WdWarning(v52);
            goto LABEL_83;
          }
          v51 = VIDMM_EXPORT::VidMmLock(
                  *(VIDMM_EXPORT **)(*((_QWORD *)v20 + 2) + 528LL),
                  *(struct VIDMM_GLOBAL **)(*((_QWORD *)v20 + 2) + 536LL),
                  *((struct _VIDMM_MULTI_ALLOC **)v42 + 3),
                  v41,
                  &v17->pData);
        }
        v14 = v51;
        if ( v51 >= 0 && v72 )
        {
          v53 = (_QWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v53 = (_QWORD *)MmUserProbeAddress;
          *v53 = v17->pData;
        }
        goto LABEL_83;
      }
    }
    v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v45, v40);
    hAllocation = v56;
LABEL_59:
    v46[3] = hAllocation;
    v46[4] = v73;
    v14 = -1073741811;
    v46[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v46);
    goto LABEL_83;
  }
  COREACCESS::Release((COREACCESS *)v66);
LABEL_51:
  COREACCESS::Release((COREACCESS *)v63);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v57);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v74);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v35, &EventProfilerExit, v36, 2103);
  return 3221226166LL;
}
