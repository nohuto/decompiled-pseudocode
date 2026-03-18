/*
 * XREFs of ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C00A101C
 * Callers:
 *     DxgkCreatePagingQueue @ 0x1C00A1000 (DxgkCreatePagingQueue.c)
 *     ?DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z @ 0x1C00DF270 (-DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z.c)
 *     ?VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017DFC0 (-VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001A40 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00F2914 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 */

__int64 __fastcall DxgkCreatePagingQueueInternal(struct _D3DKMT_CREATEPAGINGQUEUE *a1, int a2, __int64 a3)
{
  struct _D3DKMT_CREATEPAGINGQUEUE *v4; // r15
  _OWORD *p_hDevice; // rax
  struct _D3DKMT_CREATEPAGINGQUEUE *v6; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v8; // rcx
  struct DXGDEVICE *v9; // r13
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // r12d
  __int64 v13; // rcx
  __int64 PhysicalAdapterIndex; // rdx
  struct DXGPAGINGQUEUE *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-D0h]
  struct DXGDEVICE *v25; // [rsp+40h] [rbp-C8h] BYREF
  int v26; // [rsp+48h] [rbp-C0h]
  struct _D3DKMT_CREATEPAGINGQUEUE *v27; // [rsp+50h] [rbp-B8h]
  struct DXGDEVICE *v28; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v29[2]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v30[136]; // [rsp+80h] [rbp-88h] BYREF
  struct DXGDEVICE *v32; // [rsp+120h] [rbp+18h] BYREF
  struct DXGPAGINGQUEUE *v33; // [rsp+128h] [rbp+20h] BYREF

  v4 = a1;
  v24 = 0LL;
  v23 = 2117;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2117);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2117);
  memset(v29, 0, sizeof(v29));
  v27 = 0LL;
  if ( a2 )
  {
    p_hDevice = &v4->hDevice;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      p_hDevice = (_OWORD *)MmUserProbeAddress;
    v29[0] = *p_hDevice;
    v29[1] = p_hDevice[1];
    v6 = (struct _D3DKMT_CREATEPAGINGQUEUE *)v29;
    v27 = (struct _D3DKMT_CREATEPAGINGQUEUE *)v29;
  }
  else
  {
    v6 = v4;
    v27 = v4;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v32, v6->hDevice, Current, &v28);
  v9 = v28;
  if ( v28 )
  {
    v25 = v28;
    v26 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v25);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v9, 0, v10, 0);
    v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30);
    if ( v12 < 0 )
      goto LABEL_33;
    v13 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
    PhysicalAdapterIndex = v6->PhysicalAdapterIndex;
    if ( (unsigned int)PhysicalAdapterIndex < *(_DWORD *)(v13 + 248) )
    {
      v33 = 0LL;
      v12 = DXGDEVICE::CreatePagingQueue(v9, PhysicalAdapterIndex, v6->Priority, &v33);
      if ( v12 >= 0 )
      {
        v15 = v33;
        v6->hSyncObject = *(_DWORD *)(*((_QWORD *)v33 + 5) + 40LL);
        v6->FenceValueCPUVirtualAddress = *(void **)(*((_QWORD *)v15 + 5) + 56LL);
        v6->hPagingQueue = *((_DWORD *)v15 + 6);
        if ( a2 )
        {
          if ( (unsigned __int64)v4 >= MmUserProbeAddress )
            v4 = (struct _D3DKMT_CREATEPAGINGQUEUE *)MmUserProbeAddress;
          *(_OWORD *)&v4->hDevice = *(_OWORD *)&v6->hDevice;
          *(_OWORD *)&v4->FenceValueCPUVirtualAddress = *(_OWORD *)&v6->FenceValueCPUVirtualAddress;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
        if ( v25 && v26 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)v25 + 13));
          KeLeaveCriticalRegion();
        }
        if ( !v32 )
          goto LABEL_20;
        goto LABEL_18;
      }
LABEL_33:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
      if ( v25 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v25);
      if ( !v32 )
        goto LABEL_20;
LABEL_18:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
LABEL_20:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v16, &EventProfilerExit, v17, v23);
      return (unsigned int)v12;
    }
    v22 = WdLogNewEntry5_WdWarning(v13, PhysicalAdapterIndex, v11);
    *(_QWORD *)(v22 + 24) = v6->PhysicalAdapterIndex;
    WdLogEvent5_WdWarning(v22);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
    if ( v25 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v25);
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v19 + 24) = v6->hDevice;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
  }
  if ( v32 && _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v23);
  return 3221225485LL;
}
