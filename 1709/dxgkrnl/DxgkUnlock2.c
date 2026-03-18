/*
 * XREFs of DxgkUnlock2 @ 0x1C00A1620
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C019A1A0 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C016F1AC (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C0198C20 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 */

__int64 __fastcall DxgkUnlock2(struct _D3DKMT_UNLOCK2 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  bool v4; // si
  __int64 v5; // r8
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rcx
  struct _KTHREAD **v10; // r14
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _D3DKMT_UNLOCK2 *v17; // r15
  __int64 v18; // rcx
  struct DXGDEVICE *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // ebx
  struct _KEVENT *v23; // r12
  struct _KEVENT *v24; // rcx
  __int64 v25; // r9
  unsigned __int8 v26; // bl
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  _QWORD *v42; // rax
  __int64 v43; // r8
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  struct _D3DKMT_UNLOCK2 v50; // [rsp+30h] [rbp-A8h] BYREF
  struct DXGDEVICE *v51; // [rsp+38h] [rbp-A0h] BYREF
  int v52; // [rsp+40h] [rbp-98h]
  _BYTE v53[8]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v54[16]; // [rsp+58h] [rbp-80h] BYREF
  DXGADAPTER *v55; // [rsp+68h] [rbp-70h]
  char v56; // [rsp+70h] [rbp-68h]
  _BYTE v57[16]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v58; // [rsp+88h] [rbp-50h]
  __int64 v59; // [rsp+98h] [rbp-40h]
  char v60; // [rsp+A0h] [rbp-38h]
  struct DXGALLOCATION *v61; // [rsp+E8h] [rbp+10h] BYREF
  char v62; // [rsp+F0h] [rbp+18h] BYREF
  struct DXGDEVICE *v63; // [rsp+F8h] [rbp+20h] BYREF

  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v3, &EventProfilerEnter, v5, 2104);
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
  if ( !v10 )
  {
    v13 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_10:
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v14, &EventProfilerExit, v15, 2104);
    return 3221225485LL;
  }
  v17 = &v50;
  if ( v4 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (struct _D3DKMT_UNLOCK2 *)MmUserProbeAddress;
    v50 = *a1;
  }
  else
  {
    v17 = a1;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v62, v17->hDevice, v10, &v63);
  v19 = v63;
  if ( !v63 )
  {
    v20 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v20 + 24) = v17->hDevice;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v62);
    goto LABEL_10;
  }
  v51 = v63;
  v21 = *(_QWORD *)(*((_QWORD *)v63 + 2) + 16LL);
  if ( *(int *)(v21 + 1968) >= 0x2000 || *(_BYTE *)(v21 + 2252) )
    v22 = *((_DWORD *)DXGGLOBAL::GetGlobal(v21) + 203);
  else
    v22 = 0;
  v52 = v22;
  v23 = (struct _KEVENT *)*((_QWORD *)v19 + 2);
  if ( *((_DWORD *)v19 + 82) == 2 )
  {
    if ( KeReadStateEvent(v23 + 4) )
      goto LABEL_31;
    v24 = v23 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v23 + 3) )
      goto LABEL_31;
    v24 = v23 + 3;
  }
  KeWaitForSingleObject(v24, Executive, 0, 0, 0LL);
LABEL_31:
  KeEnterCriticalRegion();
  if ( v22 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v19 + 112, 0LL) )
      goto LABEL_42;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 96LL));
    v26 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v19 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v19 + 13), 0) )
      goto LABEL_42;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 96LL));
    v26 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v27, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v19 + 13), 1u);
  }
  if ( v26 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_42:
  v28 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL);
  if ( *(_BYTE *)(v28 + 185) )
  {
    LODWORD(v29) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v28 + 3888),
                     (struct DXGPROCESS *)v10,
                     v19,
                     v17,
                     0);
    goto LABEL_44;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v53, (__int64)v19, 0, v25, 0);
  if ( v56 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32, v34);
    v35[3] = 275LL;
    v35[4] = 4LL;
    v35[5] = v54;
    v35[6] = 0LL;
    v35[7] = 0LL;
    WdLogEvent5_WdCriticalError(v35);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v55 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v55 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v36, &EventBlockThread, v37, 72);
      KeWaitForSingleObject((char *)v55 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v55);
  }
  v56 = 1;
  if ( *(_DWORD *)(v59 + 408) != 1 )
    goto LABEL_61;
  if ( v60 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v57);
    if ( *(_DWORD *)(v58 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v57);
LABEL_61:
      COREACCESS::Release((COREACCESS *)v54);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v51);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v62);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v38, &EventProfilerExit, v39, 2104);
      return 3221226166LL;
    }
  }
  DXGPROCESS::GetAllocationSafe((__int64)v10, (DXGALLOCATIONREFERENCE *)&v61, v17->hAllocation);
  if ( !v61 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, 0LL, v41);
    v42[3] = v17->hAllocation;
LABEL_67:
    WdLogEvent5_WdWarning(v42);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v61);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v51);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v62);
    goto LABEL_10;
  }
  v43 = *(_QWORD *)(*((_QWORD *)v61 + 1) + 16LL);
  v44 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL);
  if ( *(_QWORD *)(v43 + 16) != v44 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v61, v43);
    v42[3] = v63;
    v42[4] = v61;
    v42[5] = -1073741811LL;
    goto LABEL_67;
  }
  if ( !*((_QWORD *)v61 + 3) )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v61, v43);
    v42[3] = v17->hAllocation;
    v42[4] = v61;
    goto LABEL_67;
  }
  v45 = DXGDEVICE::Unlock2(v63, v61, 1);
  v29 = v45;
  if ( v45 < 0 )
  {
    v47 = WdLogNewEntry5_WdError(v46);
    *(_QWORD *)(v47 + 24) = v61;
    *(_QWORD *)(v47 + 32) = v29;
    WdLogEvent5_WdError(v47);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v61);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
LABEL_44:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v51);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v62);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v30, &EventProfilerExit, v31, 2104);
    return (unsigned int)v29;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v61);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v51);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v62);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v48, &EventProfilerExit, v49, 2104);
  return 0LL;
}
