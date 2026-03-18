/*
 * XREFs of DxgkLock2 @ 0x1C00F38E0
 * Callers:
 *     ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017FB60 (-VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     ?VidMmLock@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C001AAB4 (-VidMmLock@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C0145A60 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0183378 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C0185890 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 */

__int64 __fastcall DxgkLock2(ULONG64 a1)
{
  __int64 v2; // rcx
  bool v3; // si
  __int64 v4; // r8
  int v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rcx
  struct _KTHREAD **v11; // r15
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _D3DKMT_LOCK2 *v19; // r14
  struct _D3DKMT_LOCK2 *v20; // rax
  __int64 v21; // rcx
  struct DXGDEVICE *v22; // rsi
  __int64 v23; // rax
  struct _KEVENT *v24; // rcx
  struct _LIST_ENTRY *Blink; // rax
  int v26; // eax
  int v27; // ebx
  int v28; // r12d
  struct _KEVENT *v29; // rdi
  __int64 v30; // r9
  unsigned __int8 v31; // bl
  __int64 v32; // r8
  struct _KEVENT *v33; // rdi
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct DXGALLOCATION *v44; // rbx
  _QWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  struct DXGDEVICE *hAllocation; // rcx
  __int64 v49; // rax
  int v50; // eax
  struct DXGDEVICE *v51; // rdi
  int v52; // eax
  _QWORD *v53; // rdx
  unsigned int v54; // [rsp+28h] [rbp-120h]
  unsigned int v55; // [rsp+30h] [rbp-118h]
  int v56; // [rsp+40h] [rbp-108h] BYREF
  __int64 v57; // [rsp+48h] [rbp-100h]
  struct DXGDEVICE *v58; // [rsp+50h] [rbp-F8h] BYREF
  struct DXGDEVICE *v59; // [rsp+58h] [rbp-F0h] BYREF
  int v60; // [rsp+60h] [rbp-E8h]
  struct _KTHREAD **v61; // [rsp+70h] [rbp-D8h]
  struct _D3DKMT_LOCK2 *v62; // [rsp+78h] [rbp-D0h]
  struct _LIST_ENTRY *v63; // [rsp+80h] [rbp-C8h]
  struct _LIST_ENTRY *v64; // [rsp+88h] [rbp-C0h]
  char v65[8]; // [rsp+90h] [rbp-B8h] BYREF
  struct _KTHREAD **v66[2]; // [rsp+98h] [rbp-B0h] BYREF
  DXGADAPTER *v67; // [rsp+A8h] [rbp-A0h]
  char v68; // [rsp+B0h] [rbp-98h]
  struct _KTHREAD **v69[5]; // [rsp+B8h] [rbp-90h] BYREF
  char v70; // [rsp+E0h] [rbp-68h]
  struct _D3DKMT_LOCK2 v71; // [rsp+F0h] [rbp-58h] BYREF
  bool v73; // [rsp+158h] [rbp+10h]
  struct DXGALLOCATION *v74; // [rsp+160h] [rbp+18h] BYREF
  char v75; // [rsp+168h] [rbp+20h] BYREF

  v3 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v73 = v3;
  v5 = 0;
  v57 = 0LL;
  v56 = 2103;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2, &EventProfilerEnter, v4, 2103);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v56, 2103);
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
  v61 = v11;
  if ( !v11 )
  {
    v14 = WdLogNewEntry5_WdError(v10);
    v15 = -1073741811;
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
LABEL_10:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, v56);
    return v15;
  }
  v19 = &v71;
  v62 = &v71;
  if ( v3 )
  {
    v20 = (struct _D3DKMT_LOCK2 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v20 = (struct _D3DKMT_LOCK2 *)MmUserProbeAddress;
    v71 = *v20;
  }
  else
  {
    v19 = (struct _D3DKMT_LOCK2 *)a1;
    v62 = (struct _D3DKMT_LOCK2 *)a1;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v75, v19->hDevice, v11, &v58);
  v22 = v58;
  if ( !v58 )
  {
    v23 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v23 + 24) = v19->hDevice;
    v15 = -1073741811;
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v75);
    goto LABEL_10;
  }
  v24 = (struct _KEVENT *)*((_QWORD *)v58 + 2);
  Blink = v24->Header.WaitListHead.Blink;
  v63 = Blink;
  v64 = Blink;
  v59 = v58;
  if ( SLODWORD(Blink[131].Blink) >= 0x2000 || BYTE4(Blink[149].Blink) )
  {
    v26 = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v24) + 223);
    v60 = v26;
    v24 = (struct _KEVENT *)*((_QWORD *)v22 + 2);
    v27 = v26;
    v28 = v26;
    v5 = v26;
  }
  else
  {
    v60 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
  }
  if ( *((_DWORD *)v22 + 82) == 2 )
  {
    v29 = v24 + 4;
    if ( !KeReadStateEvent(v24 + 4) )
    {
      KeWaitForSingleObject(v29, Executive, 0, 0, 0LL);
      v27 = v28;
    }
  }
  else
  {
    v33 = v24 + 3;
    v27 = v26;
    if ( !KeReadStateEvent(v24 + 3) )
    {
      KeWaitForSingleObject(v33, Executive, 0, 0, 0LL);
      v27 = v5;
    }
  }
  KeEnterCriticalRegion();
  if ( v27 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v22 + 112, 0LL) )
      goto LABEL_41;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v22 + 2) + 16LL) + 96LL));
    v31 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v22 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v22 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v22 + 13), 0) )
      goto LABEL_41;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v22 + 2) + 16LL) + 96LL));
    v31 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v22 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v32, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v22 + 13), 1u);
  }
  if ( v31 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v22 + 2) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v22 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_41:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v65, (__int64)v22, 0, v30, 0);
  if ( v68 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34);
    v35[3] = 275LL;
    v35[4] = 4LL;
    v35[5] = v66;
    v35[6] = 0LL;
    v35[7] = 0LL;
    WdLogEvent5_WdCriticalError(v35);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v67 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v67 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v36, &EventBlockThread, v37, 72);
      KeWaitForSingleObject((char *)v67 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v67);
  }
  v68 = 1;
  if ( *((_DWORD *)v69[4] + 106) != 1 )
    goto LABEL_54;
  if ( !v70 || (COREACCESS::AcquireShared((DXGADAPTER **)v69), *((_DWORD *)v69[2] + 44) == 1) )
  {
    DXGPROCESS::GetAllocationSafe((__int64)v11, (DXGALLOCATIONREFERENCE *)&v74, v19->hAllocation);
    v44 = v74;
    if ( !v74 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40, v42);
      v45[3] = v19->hAllocation;
      v15 = -1073741811;
      v45[4] = -1073741811LL;
LABEL_60:
      WdLogEvent5_WdWarning(v45);
LABEL_61:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v74);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v59);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v75);
      goto LABEL_10;
    }
    v46 = *(_QWORD *)(*((_QWORD *)v74 + 1) + 16LL);
    v47 = *(_QWORD *)(*((_QWORD *)v22 + 2) + 16LL);
    if ( *(_QWORD *)(v46 + 16) == v47 )
    {
      v42 = BYTE1(v63[11].Blink);
      if ( !(_BYTE)v42 && !*((_QWORD *)v74 + 3) )
      {
        v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v47, v42);
        hAllocation = (struct DXGDEVICE *)v19->hAllocation;
        goto LABEL_64;
      }
      v49 = *((_QWORD *)v74 + 5);
      if ( !v49
        || (v46 = *(unsigned int *)(v49 + 4), (v46 & 1) == 0)
        || (v46 & 2) != 0
        || (v46 = *(unsigned int *)(*(_QWORD *)(v49 + 56) + 12LL), (v46 & 0x200) != 0)
        || (v46 & 0x400) != 0
        || (v50 = *(_DWORD *)(v47 + 300), (v50 & 0x10) != 0)
        || (v50 & 8) != 0
        || (*(_DWORD *)(v47 + 1836) & 0x80u) != 0 )
      {
        v51 = v58;
        if ( (_BYTE)v42 )
        {
          v52 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                  (DXG_GUEST_VIRTUALGPU_VMBUS *)&v63[255],
                  (struct DXGPROCESS *)v11,
                  v58,
                  v19,
                  0,
                  v54,
                  v55);
        }
        else
        {
          if ( !*((_DWORD *)v58 + 18) )
            ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v58 + 13));
          if ( *((struct DXGDEVICE **)v44 + 1) != v51 )
          {
            v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v47, v42);
            v45[3] = v44;
            v45[4] = v51;
            v45[5] = *((_QWORD *)v44 + 1);
            v15 = -1073741811;
            v45[6] = -1073741811LL;
            goto LABEL_60;
          }
          v52 = VIDMM_EXPORT::VidMmLock(
                  *(VIDMM_EXPORT **)(*((_QWORD *)v22 + 2) + 544LL),
                  *(struct VIDMM_GLOBAL **)(*((_QWORD *)v22 + 2) + 552LL),
                  *((struct _VIDMM_MULTI_ALLOC **)v44 + 3),
                  v43,
                  &v19->pData);
        }
        v15 = v52;
        if ( v52 >= 0 && v73 )
        {
          v53 = (_QWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v53 = (_QWORD *)MmUserProbeAddress;
          *v53 = v19->pData;
        }
        goto LABEL_61;
      }
    }
    v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v47, v42);
    hAllocation = v58;
LABEL_64:
    v45[3] = hAllocation;
    v45[4] = v74;
    v15 = -1073741811;
    v45[5] = -1073741811LL;
    goto LABEL_60;
  }
  COREACCESS::Release(v69);
LABEL_54:
  COREACCESS::Release(v66);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v59);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v75);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v38, &EventProfilerExit, v39, v56);
  return 3221226166LL;
}
