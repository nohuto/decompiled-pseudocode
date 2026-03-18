/*
 * XREFs of ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C00FC010
 * Callers:
 *     ?VmBusCreatePagingQueue@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002C750 (-VmBusCreatePagingQueue@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z @ 0x1C00A6E70 (-DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z.c)
 *     DxgkCreatePagingQueue @ 0x1C00FC000 (DxgkCreatePagingQueue.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D648 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00BFDFC (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkCreatePagingQueueInternal(struct _D3DKMT_CREATEPAGINGQUEUE *a1, int a2, __int64 a3)
{
  struct _D3DKMT_CREATEPAGINGQUEUE *v4; // r15
  ULONG64 v5; // rcx
  _OWORD *p_hDevice; // rax
  struct _D3DKMT_CREATEPAGINGQUEUE *v7; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGDEVICE *v11; // r13
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r12d
  __int64 v16; // rcx
  __int64 PhysicalAdapterIndex; // rdx
  struct DXGPAGINGQUEUE *v18; // rdx
  __int64 v19; // r8
  struct DXGDEVICE *v20; // rcx
  bool v21; // zf
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // rax
  struct DXGDEVICE *v28; // [rsp+30h] [rbp-C8h] BYREF
  int v29; // [rsp+38h] [rbp-C0h]
  struct _D3DKMT_CREATEPAGINGQUEUE *v30; // [rsp+40h] [rbp-B8h]
  struct DXGDEVICE *v31; // [rsp+48h] [rbp-B0h] BYREF
  _OWORD v32[2]; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v33[136]; // [rsp+70h] [rbp-88h] BYREF
  struct DXGDEVICE *v35; // [rsp+110h] [rbp+18h] BYREF
  struct DXGPAGINGQUEUE *v36; // [rsp+118h] [rbp+20h] BYREF

  v4 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2117);
  memset(v32, 0, sizeof(v32));
  v30 = 0LL;
  if ( a2 )
  {
    v5 = MmUserProbeAddress;
    p_hDevice = &v4->hDevice;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      p_hDevice = (_OWORD *)MmUserProbeAddress;
    v32[0] = *p_hDevice;
    v32[1] = p_hDevice[1];
    v7 = (struct _D3DKMT_CREATEPAGINGQUEUE *)v32;
    v30 = (struct _D3DKMT_CREATEPAGINGQUEUE *)v32;
  }
  else
  {
    v7 = v4;
    v30 = v4;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v35, v7->hDevice, Current, &v31);
  v11 = v31;
  if ( v31 )
  {
    v28 = v31;
    v29 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v28);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, (__int64)v11, 0LL, v12, 0);
    v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v33);
    if ( v15 < 0 )
      goto LABEL_35;
    v16 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
    PhysicalAdapterIndex = v7->PhysicalAdapterIndex;
    if ( (unsigned int)PhysicalAdapterIndex < *(_DWORD *)(v16 + 248) )
    {
      v36 = 0LL;
      v15 = DXGDEVICE::CreatePagingQueue(v11, PhysicalAdapterIndex, v7->Priority, &v36);
      if ( v15 >= 0 )
      {
        v18 = v36;
        v7->hSyncObject = *(_DWORD *)(*((_QWORD *)v36 + 5) + 40LL);
        v7->FenceValueCPUVirtualAddress = *(void **)(*((_QWORD *)v18 + 5) + 56LL);
        v7->hPagingQueue = *((_DWORD *)v18 + 6);
        if ( a2 )
        {
          if ( (unsigned __int64)v4 >= MmUserProbeAddress )
            v4 = (struct _D3DKMT_CREATEPAGINGQUEUE *)MmUserProbeAddress;
          *(_OWORD *)&v4->hDevice = *(_OWORD *)&v7->hDevice;
          *(_OWORD *)&v4->FenceValueCPUVirtualAddress = *(_OWORD *)&v7->FenceValueCPUVirtualAddress;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
        v20 = v28;
        if ( v28 && v29 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)v28 + 13));
          KeLeaveCriticalRegion();
        }
        if ( !v35 )
          goto LABEL_21;
        v20 = (struct DXGDEVICE *)_InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL);
        v21 = v20 == (struct DXGDEVICE *)1;
LABEL_19:
        if ( v21 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
LABEL_21:
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q((__int64)v20, &EventProfilerExit, v19, 2117);
        return (unsigned int)v15;
      }
LABEL_35:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
      if ( v28 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v28);
      v20 = v35;
      if ( !v35 )
        goto LABEL_21;
      v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
      goto LABEL_19;
    }
    v27 = WdLogNewEntry5_WdWarning(v16, PhysicalAdapterIndex, v13, v14);
    *(_QWORD *)(v27 + 24) = v7->PhysicalAdapterIndex;
    WdLogEvent5_WdWarning(v27);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
    if ( v28 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v28);
    if ( v35 )
    {
      v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v25 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
    }
    v26 = (qword_1C006E790 & 2) == 0;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v23 + 24) = v7->hDevice;
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
    v25 = qword_1C006E790;
    v26 = (qword_1C006E790 & 2) == 0;
  }
  if ( !v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v25, &EventProfilerExit, v24, 2117);
  return 3221225485LL;
}
