/*
 * XREFs of DxgkQueryAllocationResidency @ 0x1C016CDD0
 * Callers:
 *     ?VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01811B0 (-VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002694 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C016B2D0 (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 */

__int64 __fastcall DxgkQueryAllocationResidency(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rbx
  unsigned __int8 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rcx
  struct DXGPROCESS **v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+38h] [rbp-B0h]
  __int64 v30; // [rsp+40h] [rbp-A8h] BYREF
  char v31; // [rsp+48h] [rbp-A0h]
  _D3DKMT_QUERYALLOCATIONRESIDENCY v32; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v33[120]; // [rsp+70h] [rbp-78h] BYREF
  struct DXGDEVICE *v34; // [rsp+F8h] [rbp+10h] BYREF
  struct DXGDEVICE *v35; // [rsp+100h] [rbp+18h] BYREF

  v3 = (__int128 *)a1;
  v29 = 0LL;
  v28 = 2008;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2008);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2008);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    v10 = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v12, v28);
    return v10;
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
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34, v14, Current, &v35);
  v17 = (struct DXGPROCESS **)v35;
  if ( !v35 )
  {
    v18 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v18 + 24) = v32.hDevice;
    v10 = -1073741811;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
LABEL_17:
    if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v30, v35);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, (__int64)v17, 0, v19, 0);
  v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v33);
  v24 = v20;
  if ( v20 >= 0 )
  {
    v10 = DXGDEVICE::QueryAllocationResidency(v17, &v32, v4);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
    if ( v30 && v31 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v30 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_17;
  }
  v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
  *(_QWORD *)(v25 + 24) = v17;
  *(_QWORD *)(v25 + 32) = v24;
  WdLogEvent5_WdWarning(v25);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
  if ( v30 && v31 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v30 + 104));
    KeLeaveCriticalRegion();
  }
  if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v28);
  return (unsigned int)v24;
}
