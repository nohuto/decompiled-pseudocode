/*
 * XREFs of DxgkGetAllocationPriority @ 0x1C0184130
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000E3DC (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1C0182B28 (-GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z.c)
 */

__int64 __fastcall DxgkGetAllocationPriority(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_GETALLOCATIONPRIORITY *v3; // rdi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v6; // rax
  unsigned int AllocationPriority; // edi
  __int64 v8; // r8
  struct DXGDEVICE *v9; // rcx
  bool v10; // zf
  __int64 v12; // rcx
  DXGDEVICE *v13; // rdi
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  _D3DKMT_GETALLOCATIONPRIORITY v25; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v26[120]; // [rsp+50h] [rbp-78h] BYREF
  struct DXGDEVICE *v27; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v28; // [rsp+E0h] [rbp+18h] BYREF
  struct DXGDEVICE *v29; // [rsp+E8h] [rbp+20h] BYREF

  v3 = (_D3DKMT_GETALLOCATIONPRIORITY *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2138);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    AllocationPriority = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    v9 = (struct DXGDEVICE *)qword_1C005F010;
    v10 = (qword_1C005F010 & 2) == 0;
LABEL_6:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v9, &EventProfilerExit, v8, 2138);
    return AllocationPriority;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_D3DKMT_GETALLOCATIONPRIORITY *)MmUserProbeAddress;
  v25 = *v3;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v27, v25.hDevice, Current, &v29);
  v13 = v29;
  if ( !v29 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = v25.hDevice;
    AllocationPriority = -1073741811;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    if ( !v27 )
    {
LABEL_17:
      v10 = (qword_1C005F010 & 2) == 0;
      goto LABEL_6;
    }
    v9 = (struct DXGDEVICE *)_InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    v15 = v9 == (struct DXGDEVICE *)1;
LABEL_15:
    if ( v15 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v27 + 2), v27);
    goto LABEL_17;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v28, v29);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, (__int64)v13, 0, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v26);
  v21 = v17;
  if ( v17 >= 0 )
  {
    AllocationPriority = DXGDEVICE::GetAllocationPriority(v13, &v25);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
    if ( v28 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v28 + 104));
      KeLeaveCriticalRegion();
    }
    v9 = v27;
    if ( !v27 )
      goto LABEL_17;
    v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_15;
  }
  v22 = WdLogNewEntry5_WdWarning(v19, v18, v20);
  *(_QWORD *)(v22 + 24) = v13;
  *(_QWORD *)(v22 + 32) = v21;
  WdLogEvent5_WdWarning(v22);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
  v24 = v28;
  if ( v28 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v28 + 104));
    KeLeaveCriticalRegion();
  }
  if ( v27 )
  {
    v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v24 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v27 + 2), v27);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v23, 2138);
  return (unsigned int)v21;
}
