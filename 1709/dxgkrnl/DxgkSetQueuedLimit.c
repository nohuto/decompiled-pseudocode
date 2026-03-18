/*
 * XREFs of DxgkSetQueuedLimit @ 0x1C00EDE20
 * Callers:
 *     ?VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0199A10 (-VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1C0093420 (-SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLIMIT@@@Z @ 0x1C0197C6C (-VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 */

__int64 __fastcall DxgkSetQueuedLimit(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_SETQUEUEDLIMIT *v3; // r14
  bool v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rcx
  struct _KTHREAD **v11; // rdi
  _D3DKMT_SETQUEUEDLIMIT *v12; // r15
  _D3DKMT_SETQUEUEDLIMIT *v13; // rcx
  __int64 v14; // rcx
  struct DXGDEVICE *v15; // rbx
  struct _KEVENT *v16; // rsi
  struct _KEVENT *v17; // rsi
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGDEVICE *v24; // rsi
  D3DKMT_QUEUEDLIMIT_TYPE Type; // eax
  int v26; // eax
  unsigned int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int8 v35; // si
  __int64 v36; // r8
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  struct DXGDEVICE *v42; // [rsp+30h] [rbp-B8h] BYREF
  struct DXGDEVICE *v43; // [rsp+38h] [rbp-B0h] BYREF
  struct DXGDEVICE *v44; // [rsp+40h] [rbp-A8h] BYREF
  int v45; // [rsp+48h] [rbp-A0h]
  _BYTE v46[8]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v47[16]; // [rsp+58h] [rbp-90h] BYREF
  DXGADAPTER *v48; // [rsp+68h] [rbp-80h]
  char v49; // [rsp+70h] [rbp-78h]
  _BYTE v50[16]; // [rsp+78h] [rbp-70h] BYREF
  __int64 v51; // [rsp+88h] [rbp-60h]
  __int64 v52; // [rsp+98h] [rbp-50h]
  char v53; // [rsp+A0h] [rbp-48h]
  _D3DKMT_SETQUEUEDLIMIT v54; // [rsp+B0h] [rbp-38h] BYREF

  v3 = (_D3DKMT_SETQUEUEDLIMIT *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2035);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v8);
  v11 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v32 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v11 = *v32;
      }
    }
  }
  if ( !v11 )
  {
    v33 = WdLogNewEntry5_WdError(v10);
    v27 = -1073741811;
    *(_QWORD *)(v33 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v33);
    goto LABEL_42;
  }
  v12 = &v54;
  if ( v4 )
  {
    v13 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v13 = (_D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
    v54 = *v13;
  }
  else
  {
    v12 = v3;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, v12->hDevice, v11, &v43);
  v15 = v43;
  if ( !v43 )
  {
    v34 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v34 + 24) = v12->hDevice;
    v27 = -1073741811;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    if ( v42 )
    {
      v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v28 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    }
LABEL_42:
    if ( (qword_1C005F010 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v27;
    goto LABEL_77;
  }
  v44 = v43;
  v16 = (struct _KEVENT *)*((_QWORD *)v43 + 2);
  if ( *((_DWORD *)v43 + 82) == 2 )
  {
    v17 = v16 + 4;
    if ( KeReadStateEvent(v17) )
      goto LABEL_12;
  }
  else
  {
    v17 = v16 + 3;
    if ( KeReadStateEvent(v17) )
      goto LABEL_12;
  }
  KeWaitForSingleObject(v17, Executive, 0, 0, 0LL);
LABEL_12:
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 13), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 96LL));
    v35 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v36, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 13), 1u);
    if ( v35 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v45 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v46, (__int64)v15, 2, v18, 0);
  if ( v49 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19, v21);
    v37[3] = 275LL;
    v37[4] = 4LL;
    v37[5] = v47;
    v37[6] = 0LL;
    v37[7] = 0LL;
    WdLogEvent5_WdCriticalError(v37);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v48 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v48 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v22, &EventBlockThread, v23, 72);
      KeWaitForSingleObject((char *)v48 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v48);
  }
  v49 = 1;
  if ( *(_DWORD *)(v52 + 408) != 1 )
    goto LABEL_61;
  if ( v53 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v50);
    if ( *(_DWORD *)(v51 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v50);
LABEL_61:
      COREACCESS::Release((COREACCESS *)v47);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v46);
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v44);
      if ( v42 )
      {
        v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL);
        if ( v38 == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
      }
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v38, &EventProfilerExit, v39, 2035);
      return 3221226166LL;
    }
  }
  v24 = v43;
  if ( !*((_BYTE *)v43 + 1693) )
  {
    Type = v12->Type;
    if ( Type == D3DKMT_SET_QUEUEDLIMIT_PRESENT )
    {
      v26 = DXGDEVICE::SetQueuedPresentLimit(v43, v12->QueuedPresentLimit);
    }
    else
    {
      if ( Type != D3DKMT_GET_QUEUEDLIMIT_PRESENT )
      {
        v27 = -1073741811;
        goto LABEL_29;
      }
      v26 = (*(__int64 (__fastcall **)(_QWORD, union _D3DKMT_SETQUEUEDLIMIT::$A93923BD602231B9E75A21ABFFB5534A *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 504LL) + 8LL) + 176LL))(
              *((_QWORD *)v43 + 75),
              &v12->8);
    }
    v27 = v26;
    if ( v26 >= 0 && v4 )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
      *v3 = *v12;
    }
LABEL_29:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v46);
    ExReleaseResourceLite(*((PERESOURCE *)v24 + 13));
    KeLeaveCriticalRegion();
    if ( v42 )
    {
      v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v28 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    }
    if ( (qword_1C005F010 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v27;
LABEL_77:
    McTemplateK0q(v28, &EventProfilerExit, v29, 2035);
    return v27;
  }
  DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetQueuedLimit(
    (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 3888LL),
    (struct DXGPROCESS *)v11,
    v43,
    v12);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v46);
  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v44);
  if ( v42 )
  {
    v40 = _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v40 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v40, &EventProfilerExit, v41, 2035);
  return 0LL;
}
