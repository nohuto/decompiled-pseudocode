/*
 * XREFs of DxgkQueryAllocationResidency @ 0x1C009C3C0
 * Callers:
 *     ?VmBusQueryAllocationResidency@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002E7B0 (-VmBusQueryAllocationResidency@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002034 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C00C40DC (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkQueryAllocationResidency(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rbx
  unsigned __int8 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rdx
  __int64 v17; // rcx
  DXGDEVICE *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // [rsp+30h] [rbp-A8h] BYREF
  char v31; // [rsp+38h] [rbp-A0h]
  _D3DKMT_QUERYALLOCATIONRESIDENCY v32; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v33[120]; // [rsp+60h] [rbp-78h] BYREF
  struct DXGDEVICE *v34; // [rsp+E8h] [rbp+10h] BYREF
  struct DXGDEVICE *v35; // [rsp+F0h] [rbp+18h] BYREF

  v3 = (__int128 *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2008);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    v9 = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    v11 = qword_1C006E790;
    v12 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v11, &EventProfilerExit, v10, 2008);
    return v9;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int128 *)MmUserProbeAddress;
    v14 = *v3;
    v15 = v3[1];
  }
  else
  {
    v14 = *v3;
    v15 = v3[1];
  }
  *(_OWORD *)&v32.AllocationCount = v15;
  *(_OWORD *)&v32.hDevice = v14;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34, (unsigned int)v14, Current, &v35);
  v18 = v35;
  if ( !v35 )
  {
    v19 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v19 + 24) = v32.hDevice;
    v9 = -1073741811;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
LABEL_17:
    if ( v34 )
    {
      v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v11 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
    }
    v12 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v30, v35);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, (__int64)v18, 0LL, v20, 0);
  v21 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v33);
  v26 = v21;
  if ( v21 >= 0 )
  {
    v9 = DXGDEVICE::QueryAllocationResidency(v18, &v32, v4);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
    v11 = v30;
    if ( v30 && v31 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v30 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_17;
  }
  v27 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
  *(_QWORD *)(v27 + 24) = v18;
  *(_QWORD *)(v27 + 32) = v26;
  WdLogEvent5_WdWarning(v27);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
  v29 = v30;
  if ( v30 && v31 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v30 + 104));
    KeLeaveCriticalRegion();
  }
  if ( v34 )
  {
    v29 = _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v29 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v29, &EventProfilerExit, v28, 2008);
  return (unsigned int)v26;
}
