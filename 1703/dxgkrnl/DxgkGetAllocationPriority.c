/*
 * XREFs of DxgkGetAllocationPriority @ 0x1C0180060
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002034 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1C017F1E4 (-GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z.c)
 */

__int64 __fastcall DxgkGetAllocationPriority(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_GETALLOCATIONPRIORITY *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rax
  unsigned int AllocationPriority; // edi
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGDEVICE *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // [rsp+30h] [rbp-98h] BYREF
  char v28; // [rsp+38h] [rbp-90h]
  _D3DKMT_GETALLOCATIONPRIORITY v29; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v30[96]; // [rsp+60h] [rbp-68h] BYREF
  struct DXGDEVICE *v31; // [rsp+D8h] [rbp+10h] BYREF
  struct DXGDEVICE *v32; // [rsp+E0h] [rbp+18h] BYREF

  v3 = (_D3DKMT_GETALLOCATIONPRIORITY *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2138);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    AllocationPriority = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v10 = qword_1C006E790;
    v11 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v10, &EventProfilerExit, v9, 2138);
    return AllocationPriority;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_D3DKMT_GETALLOCATIONPRIORITY *)MmUserProbeAddress;
  v29 = *v3;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v31, v29.hDevice, Current, &v32);
  v15 = v32;
  if ( !v32 )
  {
    v16 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v16 + 24) = v29.hDevice;
    AllocationPriority = -1073741811;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
LABEL_14:
    if ( v31 )
    {
      v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v10 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
    }
    v11 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v27, v32);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v15, 0LL, v17, 0);
  v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30);
  v23 = v18;
  if ( v18 >= 0 )
  {
    AllocationPriority = DXGDEVICE::GetAllocationPriority(v15, &v29, v21, v22);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
    v10 = v27;
    if ( v27 && v28 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v27 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_14;
  }
  v24 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
  *(_QWORD *)(v24 + 24) = v15;
  *(_QWORD *)(v24 + 32) = v23;
  WdLogEvent5_WdWarning(v24);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
  v26 = v27;
  if ( v27 && v28 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v27 + 104));
    KeLeaveCriticalRegion();
  }
  if ( v31 )
  {
    v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v26 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v26, &EventProfilerExit, v25, 2138);
  return (unsigned int)v23;
}
