/*
 * XREFs of DxgkUnlock2 @ 0x1C00F8770
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0186F80 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C000AC00 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A57C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C0145A60 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C0185890 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 */

__int64 __fastcall DxgkUnlock2(struct _D3DKMT_UNLOCK2 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  bool v4; // r15
  int v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rcx
  struct _KTHREAD **v11; // rsi
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  struct _D3DKMT_UNLOCK2 *v18; // r14
  __int64 v19; // rcx
  struct DXGDEVICE *v20; // rdi
  __int64 v21; // rax
  struct _KEVENT *v22; // rcx
  struct _LIST_ENTRY *Blink; // rax
  int v24; // eax
  int v25; // ebx
  int v26; // r12d
  struct _KEVENT *v27; // r15
  __int64 v28; // r9
  unsigned __int8 v29; // bl
  __int64 v30; // r8
  struct _KEVENT *v31; // r15
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // r8
  _QWORD *v44; // rax
  __int64 v45; // r8
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  int v52; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+38h] [rbp-C0h]
  struct DXGDEVICE *v54; // [rsp+40h] [rbp-B8h] BYREF
  int v55; // [rsp+48h] [rbp-B0h]
  struct _D3DKMT_UNLOCK2 v56; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v57[8]; // [rsp+60h] [rbp-98h] BYREF
  struct _KTHREAD **v58[2]; // [rsp+68h] [rbp-90h] BYREF
  DXGADAPTER *v59; // [rsp+78h] [rbp-80h]
  char v60; // [rsp+80h] [rbp-78h]
  struct _KTHREAD **v61[5]; // [rsp+88h] [rbp-70h] BYREF
  char v62; // [rsp+B0h] [rbp-48h]
  struct DXGALLOCATION *v63; // [rsp+108h] [rbp+10h] BYREF
  char v64; // [rsp+110h] [rbp+18h] BYREF
  struct DXGDEVICE *v65; // [rsp+118h] [rbp+20h] BYREF

  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v5 = 0;
  v53 = 0LL;
  v52 = 2104;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2, &EventProfilerEnter, v3, 2104);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v52, 2104);
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
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
    v14 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
LABEL_10:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v15, &EventProfilerExit, v16, v52);
    return 3221225485LL;
  }
  v18 = &v56;
  if ( v4 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (struct _D3DKMT_UNLOCK2 *)MmUserProbeAddress;
    v56 = *a1;
  }
  else
  {
    v18 = a1;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v64, v18->hDevice, v11, &v65);
  v20 = v65;
  if ( !v65 )
  {
    v21 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v21 + 24) = v18->hDevice;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v64);
    goto LABEL_10;
  }
  v54 = v65;
  v22 = (struct _KEVENT *)*((_QWORD *)v65 + 2);
  Blink = v22->Header.WaitListHead.Blink;
  if ( SLODWORD(Blink[131].Blink) >= 0x2000 || BYTE4(Blink[149].Blink) )
  {
    v24 = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v22) + 223);
    v55 = v24;
    v22 = (struct _KEVENT *)*((_QWORD *)v20 + 2);
    v25 = v24;
    v26 = v24;
    v5 = v24;
  }
  else
  {
    v55 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
  }
  if ( *((_DWORD *)v20 + 82) == 2 )
  {
    v27 = v22 + 4;
    if ( !KeReadStateEvent(v22 + 4) )
    {
      KeWaitForSingleObject(v27, Executive, 0, 0, 0LL);
      v25 = v26;
    }
  }
  else
  {
    v31 = v22 + 3;
    v25 = v24;
    if ( !KeReadStateEvent(v22 + 3) )
    {
      KeWaitForSingleObject(v31, Executive, 0, 0, 0LL);
      v25 = v5;
    }
  }
  KeEnterCriticalRegion();
  if ( v25 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v20 + 112, 0LL) )
      goto LABEL_41;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 96LL));
    v29 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v20 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v20 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v20 + 13), 0) )
      goto LABEL_41;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 96LL));
    v29 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v20 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v30, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v20 + 13), 1u);
  }
  if ( v29 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v20 + 2) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_41:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, (__int64)v20, 0, v28, 0);
  if ( v60 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32);
    v33[3] = 275LL;
    v33[4] = 4LL;
    v33[5] = v58;
    v33[6] = 0LL;
    v33[7] = 0LL;
    WdLogEvent5_WdCriticalError(v33);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v59 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v59 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v34, &EventBlockThread, v35, 72);
      KeWaitForSingleObject((char *)v59 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v59);
  }
  v60 = 1;
  if ( *((_DWORD *)v61[4] + 106) != 1 )
    goto LABEL_54;
  if ( v62 )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)v61);
    if ( *((_DWORD *)v61[2] + 44) != 1 )
    {
      COREACCESS::Release(v61);
LABEL_54:
      COREACCESS::Release(v58);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v54);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v64);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v36, &EventProfilerExit, v37, v52);
      return 3221226166LL;
    }
  }
  v38 = *(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL);
  if ( *(_BYTE *)(v38 + 185) )
  {
    LODWORD(v39) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v38 + 4080),
                     (struct DXGPROCESS *)v11,
                     v65,
                     v18,
                     0);
    goto LABEL_60;
  }
  DXGPROCESS::GetAllocationSafe((__int64)v11, (DXGALLOCATIONREFERENCE *)&v63, v18->hAllocation);
  if ( !v63 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, 0LL, v43);
    v44[3] = v18->hAllocation;
LABEL_66:
    WdLogEvent5_WdWarning(v44);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v63);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v54);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v64);
    goto LABEL_10;
  }
  v45 = *(_QWORD *)(*((_QWORD *)v63 + 1) + 16LL);
  v46 = *(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL);
  if ( *(_QWORD *)(v45 + 16) != v46 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v63, v45);
    v44[3] = v65;
    v44[4] = v63;
    v44[5] = -1073741811LL;
    goto LABEL_66;
  }
  if ( !*((_QWORD *)v63 + 3) )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v63, v45);
    v44[3] = v18->hAllocation;
    v44[4] = v63;
    goto LABEL_66;
  }
  v47 = DXGDEVICE::Unlock2(v65, v63, 1);
  v39 = v47;
  if ( v47 < 0 )
  {
    v49 = WdLogNewEntry5_WdError(v48);
    *(_QWORD *)(v49 + 24) = v63;
    *(_QWORD *)(v49 + 32) = v39;
    WdLogEvent5_WdError(v49);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v63);
LABEL_60:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v54);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v64);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v40, &EventProfilerExit, v41, v52);
    return (unsigned int)v39;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v63);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v54);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v64);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v50, &EventProfilerExit, v51, v52);
  return 0LL;
}
