/*
 * XREFs of DxgkQueryAllocationResidency @ 0x1C0184C10
 * Callers:
 *     ?VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0194CC0 (-VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000E3DC (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C01830C8 (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 */

__int64 __fastcall DxgkQueryAllocationResidency(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rdi
  unsigned __int8 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // r8
  struct DXGDEVICE *v12; // rcx
  bool v13; // zf
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rcx
  struct DXGPROCESS **v18; // rdi
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  _D3DKMT_QUERYALLOCATIONRESIDENCY v30; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v31[120]; // [rsp+50h] [rbp-78h] BYREF
  struct DXGDEVICE *v32; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v33; // [rsp+E0h] [rbp+18h] BYREF
  struct DXGDEVICE *v34; // [rsp+E8h] [rbp+20h] BYREF

  v3 = (__int128 *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2008);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    v10 = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    v12 = (struct DXGDEVICE *)qword_1C005F010;
    v13 = (qword_1C005F010 & 2) == 0;
LABEL_6:
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v12, &EventProfilerExit, v11, 2008);
    return v10;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int128 *)MmUserProbeAddress;
    v15 = *v3;
    v16 = v3[1];
  }
  else
  {
    v15 = *v3;
    v16 = v3[1];
  }
  *(_OWORD *)&v30.AllocationCount = v16;
  *(_OWORD *)&v30.hDevice = v15;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v32, v15, Current, &v34);
  v18 = (struct DXGPROCESS **)v34;
  if ( !v34 )
  {
    v19 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v19 + 24) = v30.hDevice;
    v10 = -1073741811;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    if ( !v32 )
    {
LABEL_20:
      v13 = (qword_1C005F010 & 2) == 0;
      goto LABEL_6;
    }
    v12 = (struct DXGDEVICE *)_InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    v20 = v12 == (struct DXGDEVICE *)1;
LABEL_18:
    if ( v20 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
    goto LABEL_20;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v33, v34);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, (__int64)v18, 0, v21, 0);
  v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v31);
  v26 = v22;
  if ( v22 >= 0 )
  {
    v10 = DXGDEVICE::QueryAllocationResidency(v18, &v30, v4);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
    if ( v33 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v33 + 104));
      KeLeaveCriticalRegion();
    }
    v12 = v32;
    if ( !v32 )
      goto LABEL_20;
    v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_18;
  }
  v27 = WdLogNewEntry5_WdWarning(v24, v23, v25);
  *(_QWORD *)(v27 + 24) = v18;
  *(_QWORD *)(v27 + 32) = v26;
  WdLogEvent5_WdWarning(v27);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
  v29 = v33;
  if ( v33 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v33 + 104));
    KeLeaveCriticalRegion();
  }
  if ( v32 )
  {
    v29 = _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v29 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v28, 2008);
  return (unsigned int)v26;
}
