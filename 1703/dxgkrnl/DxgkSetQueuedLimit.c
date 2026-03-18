/*
 * XREFs of DxgkSetQueuedLimit @ 0x1C00946E0
 * Callers:
 *     ?VmBusSetQueuedLimit@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0032DB0 (-VmBusSetQueuedLimit@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendSetQueuedLimit@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLIMIT@@@Z @ 0x1C0031664 (-VmBusSendSetQueuedLimit@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLI.c)
 *     ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1C00C05A8 (-SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkSetQueuedLimit(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_SETQUEUEDLIMIT *v3; // r14
  bool v4; // r12
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **v10; // rdi
  _D3DKMT_SETQUEUEDLIMIT *v11; // r15
  _D3DKMT_SETQUEUEDLIMIT *v12; // rcx
  __int64 v13; // rdx
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
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int8 v34; // si
  __int64 v35; // r8
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // r8
  struct DXGDEVICE *v41; // [rsp+30h] [rbp-B8h] BYREF
  struct DXGDEVICE *v42; // [rsp+38h] [rbp-B0h] BYREF
  struct DXGDEVICE *v43; // [rsp+40h] [rbp-A8h] BYREF
  int v44; // [rsp+48h] [rbp-A0h]
  _BYTE v45[8]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v46[16]; // [rsp+58h] [rbp-90h] BYREF
  DXGADAPTER *v47; // [rsp+68h] [rbp-80h]
  char v48; // [rsp+70h] [rbp-78h]
  _BYTE v49[16]; // [rsp+78h] [rbp-70h] BYREF
  __int64 v50; // [rsp+88h] [rbp-60h]
  __int64 v51; // [rsp+98h] [rbp-50h]
  char v52; // [rsp+A0h] [rbp-48h]
  _D3DKMT_SETQUEUEDLIMIT v53; // [rsp+B0h] [rbp-38h] BYREF

  v3 = (_D3DKMT_SETQUEUEDLIMIT *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2035);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v10 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v10 = *ThreadProperty;
    }
  }
  if ( !v10 )
  {
    v32 = WdLogNewEntry5_WdError(v9, v8);
    v27 = -1073741811;
    *(_QWORD *)(v32 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v32);
    goto LABEL_40;
  }
  v11 = &v53;
  if ( v4 )
  {
    v12 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v12 = (_D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
    v53 = *v12;
  }
  else
  {
    v11 = v3;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v41, v11->hDevice, v10, &v42);
  v15 = v42;
  if ( !v42 )
  {
    v33 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v33 + 24) = v11->hDevice;
    v27 = -1073741811;
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v33);
    if ( v41 )
    {
      v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v28 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
    }
LABEL_40:
    if ( (qword_1C006E790 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v27;
    goto LABEL_77;
  }
  v43 = v42;
  v16 = (struct _KEVENT *)*((_QWORD *)v42 + 2);
  if ( *((_DWORD *)v42 + 82) == 2 )
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
    v34 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v35, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 13), 1u);
    if ( v34 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v44 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, (__int64)v15, 2LL, v18, 0);
  if ( v48 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19, v21);
    v36[3] = 275LL;
    v36[4] = 4LL;
    v36[5] = v46;
    v36[6] = 0LL;
    v36[7] = 0LL;
    WdLogEvent5_WdCriticalError(v36);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v47 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v47 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v22, &EventBlockThread, v23, 72);
      KeWaitForSingleObject((char *)v47 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v47);
  }
  v48 = 1;
  if ( *(_DWORD *)(v51 + 408) != 1 )
    goto LABEL_61;
  if ( v52 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v49);
    if ( *(_DWORD *)(v50 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v49);
LABEL_61:
      COREACCESS::Release((COREACCESS *)v46);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v43);
      if ( v41 )
      {
        v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL);
        if ( v37 == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
      }
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v37, &EventProfilerExit, v38, 2035);
      return 3221226166LL;
    }
  }
  v24 = v42;
  if ( !*((_BYTE *)v42 + 1821) )
  {
    Type = v11->Type;
    if ( Type == D3DKMT_SET_QUEUEDLIMIT_PRESENT )
    {
      v26 = DXGDEVICE::SetQueuedPresentLimit(v42, v11->QueuedPresentLimit);
    }
    else
    {
      if ( Type != D3DKMT_GET_QUEUEDLIMIT_PRESENT )
      {
        v27 = -1073741811;
        goto LABEL_29;
      }
      v26 = (*(__int64 (__fastcall **)(_QWORD, union _D3DKMT_SETQUEUEDLIMIT::$A93923BD602231B9E75A21ABFFB5534A *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 408LL) + 8LL) + 176LL))(
              *((_QWORD *)v42 + 75),
              &v11->8);
    }
    v27 = v26;
    if ( v26 >= 0 && v4 )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
      *v3 = *v11;
    }
LABEL_29:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
    ExReleaseResourceLite(*((PERESOURCE *)v24 + 13));
    KeLeaveCriticalRegion();
    if ( v41 )
    {
      v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v28 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
    }
    if ( (qword_1C006E790 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v27;
LABEL_77:
    Template_q(v28, &EventProfilerExit, v29, 2035);
    return v27;
  }
  DXGADAPTER::VmBusSendSetQueuedLimit(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL), (struct DXGPROCESS *)v10, v42, v11);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v43);
  if ( v41 )
  {
    v39 = _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v39 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v39, &EventProfilerExit, v40, 2035);
  return 0LL;
}
