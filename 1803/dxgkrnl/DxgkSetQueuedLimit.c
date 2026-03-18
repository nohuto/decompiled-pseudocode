/*
 * XREFs of DxgkSetQueuedLimit @ 0x1C00A0B50
 * Callers:
 *     ?VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01866B0 (-VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1C00F317C (-SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z.c)
 *     ?VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLIMIT@@@Z @ 0x1C01848CC (-VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 */

__int64 __fastcall DxgkSetQueuedLimit(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_SETQUEUEDLIMIT *v3; // r15
  bool v4; // di
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r13
  _D3DKMT_SETQUEUEDLIMIT *v7; // r14
  _D3DKMT_SETQUEUEDLIMIT *v8; // rax
  __int64 v9; // rcx
  struct DXGDEVICE *v10; // rdi
  __int64 v11; // r9
  int v12; // r12d
  D3DKMT_QUEUEDLIMIT_TYPE Type; // eax
  int v14; // eax
  int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  bool v25; // [rsp+30h] [rbp-D8h]
  struct DXGDEVICE *v26; // [rsp+38h] [rbp-D0h] BYREF
  int v27; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h]
  struct DXGDEVICE *v29; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v30[3]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v31[96]; // [rsp+70h] [rbp-98h] BYREF
  _D3DKMT_SETQUEUEDLIMIT v32; // [rsp+D0h] [rbp-38h] BYREF

  v3 = (_D3DKMT_SETQUEUEDLIMIT *)a1;
  v28 = 0LL;
  v27 = 2035;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2035);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 2035);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v25 = v4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v19 = WdLogNewEntry5_WdError(v5);
    v15 = -1073741811;
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
LABEL_24:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, v27);
    return (unsigned int)v15;
  }
  v7 = &v32;
  if ( v4 )
  {
    v8 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v8 = (_D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
    v32 = *v8;
  }
  else
  {
    v7 = v3;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v26, v7->hDevice, Current, &v29);
  v10 = v29;
  if ( !v29 )
  {
    v20 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v20 + 24) = v7->hDevice;
    v15 = -1073741811;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
LABEL_21:
    if ( v26 && _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26 + 2), v26);
    goto LABEL_24;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30, v29);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, (__int64)v10, 2, v11, 0);
  v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v31);
  if ( v12 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
    if ( v30[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
    if ( v26 && _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26 + 2), v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v21, &EventProfilerExit, v22, v27);
    return (unsigned int)v12;
  }
  else
  {
    if ( (*((_BYTE *)v10 + 1709) & 1) == 0 )
    {
      Type = v7->Type;
      if ( Type == D3DKMT_SET_QUEUEDLIMIT_PRESENT )
      {
        v14 = DXGDEVICE::SetQueuedPresentLimit(v10, v7->QueuedPresentLimit);
      }
      else
      {
        if ( Type != D3DKMT_GET_QUEUEDLIMIT_PRESENT )
        {
          v15 = -1073741811;
LABEL_14:
          if ( v15 >= 0 && v25 )
          {
            if ( (unsigned __int64)v3 >= MmUserProbeAddress )
              v3 = (_D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
            *v3 = *v7;
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
          if ( v30[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
          goto LABEL_21;
        }
        v14 = _guard_dispatch_icall_fptr();
      }
      v15 = v14;
      goto LABEL_14;
    }
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetQueuedLimit(
      (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 4080LL),
      (struct DXGPROCESS *)Current,
      v10,
      v7);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
    if ( v30[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
    if ( v26 && _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26 + 2), v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v23, &EventProfilerExit, v24, v27);
    return 0LL;
  }
}
