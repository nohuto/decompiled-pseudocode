/*
 * XREFs of ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C009177C
 * Callers:
 *     DxgkCreatePagingQueue @ 0x1C0091760 (DxgkCreatePagingQueue.c)
 *     ?DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z @ 0x1C00FAD00 (-DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z.c)
 *     ?VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01921E0 (-VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AD4 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0092C50 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  __int64 v16; // r8
  struct DXGDEVICE *v17; // rcx
  bool v18; // zf
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rax
  struct DXGDEVICE *v25; // [rsp+30h] [rbp-C8h] BYREF
  int v26; // [rsp+38h] [rbp-C0h]
  struct _D3DKMT_CREATEPAGINGQUEUE *v27; // [rsp+40h] [rbp-B8h]
  struct DXGDEVICE *v28; // [rsp+48h] [rbp-B0h] BYREF
  _OWORD v29[2]; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v30[136]; // [rsp+70h] [rbp-88h] BYREF
  struct DXGDEVICE *v32; // [rsp+110h] [rbp+18h] BYREF
  struct DXGPAGINGQUEUE *v33; // [rsp+118h] [rbp+20h] BYREF

  v4 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2117);
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
      goto LABEL_35;
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
        v17 = v25;
        if ( v25 && v26 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)v25 + 13));
          KeLeaveCriticalRegion();
        }
        if ( !v32 )
          goto LABEL_21;
        v17 = (struct DXGDEVICE *)_InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL);
        v18 = v17 == (struct DXGDEVICE *)1;
LABEL_19:
        if ( v18 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
LABEL_21:
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q((__int64)v17, &EventProfilerExit, v16, 2117);
        return (unsigned int)v12;
      }
LABEL_35:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
      if ( v25 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v25);
      v17 = v32;
      if ( !v32 )
        goto LABEL_21;
      v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
      goto LABEL_19;
    }
    v24 = WdLogNewEntry5_WdWarning(v13, PhysicalAdapterIndex, v11);
    *(_QWORD *)(v24 + 24) = v6->PhysicalAdapterIndex;
    WdLogEvent5_WdWarning(v24);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
    if ( v25 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v25);
    if ( v32 )
    {
      v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v22 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
    }
    v23 = (qword_1C005F010 & 2) == 0;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v20 + 24) = v6->hDevice;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    if ( v32 && _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
    v22 = qword_1C005F010;
    v23 = (qword_1C005F010 & 2) == 0;
  }
  if ( !v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v21, 2117);
  return 3221225485LL;
}
