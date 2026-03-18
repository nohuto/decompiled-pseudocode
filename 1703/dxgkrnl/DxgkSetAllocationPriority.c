/*
 * XREFs of DxgkSetAllocationPriority @ 0x1C0180DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C017F5D8 (-SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z.c)
 */

__int64 __fastcall DxgkSetAllocationPriority(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_SETALLOCATIONPRIORITY *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // r8
  struct DXGDEVICE *v10; // rcx
  bool v11; // zf
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGDEVICE *v15; // rdi
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD v28[2]; // [rsp+30h] [rbp-98h] BYREF
  _D3DKMT_SETALLOCATIONPRIORITY v29; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v30[96]; // [rsp+60h] [rbp-68h] BYREF
  struct DXGDEVICE *v31; // [rsp+D8h] [rbp+10h] BYREF
  struct DXGDEVICE *v32; // [rsp+E0h] [rbp+18h] BYREF

  v3 = (_D3DKMT_SETALLOCATIONPRIORITY *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2007);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v10 = (struct DXGDEVICE *)qword_1C006E790;
    v11 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v10, &EventProfilerExit, v9, 2007);
    return v8;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_D3DKMT_SETALLOCATIONPRIORITY *)MmUserProbeAddress;
  v29 = *v3;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v31, v29.hDevice, Current, &v32);
  v15 = v32;
  if ( !v32 )
  {
    v16 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v16 + 24) = v29.hDevice;
    v8 = -1073741811;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    if ( !v31 )
    {
LABEL_17:
      v11 = (qword_1C006E790 & 2) == 0;
      goto LABEL_6;
    }
    v10 = (struct DXGDEVICE *)_InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    v17 = v10 == (struct DXGDEVICE *)1;
LABEL_15:
    if ( v17 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
    goto LABEL_17;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28, v32);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v15, 0LL, v18, 0);
  v19 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30);
  v24 = v19;
  if ( v19 >= 0 )
  {
    v8 = DXGDEVICE::SetAllocationPriority(v15, &v29, v22, v23);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
    if ( v28[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28);
    v10 = v31;
    if ( !v31 )
      goto LABEL_17;
    v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_15;
  }
  v25 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
  *(_QWORD *)(v25 + 24) = v15;
  *(_QWORD *)(v25 + 32) = v24;
  WdLogEvent5_WdWarning(v25);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
  if ( v28[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28);
  if ( v31 )
  {
    v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v26 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v26, &EventProfilerExit, v27, 2007);
  return (unsigned int)v24;
}
