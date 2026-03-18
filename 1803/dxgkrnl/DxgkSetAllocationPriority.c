/*
 * XREFs of DxgkSetAllocationPriority @ 0x1C016D0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C016B6A4 (-SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z.c)
 */

__int64 __fastcall DxgkSetAllocationPriority(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_SETALLOCATIONPRIORITY *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rcx
  DXGDEVICE *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+38h] [rbp-A0h]
  _QWORD v27[2]; // [rsp+40h] [rbp-98h] BYREF
  _D3DKMT_SETALLOCATIONPRIORITY v28; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v29[96]; // [rsp+70h] [rbp-68h] BYREF
  struct DXGDEVICE *v30; // [rsp+E8h] [rbp+10h] BYREF
  struct DXGDEVICE *v31; // [rsp+F0h] [rbp+18h] BYREF

  v3 = (_D3DKMT_SETALLOCATIONPRIORITY *)a1;
  v26 = 0LL;
  v25 = 2007;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2007);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2007);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    v9 = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v10, &EventProfilerExit, v11, v25);
    return v9;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_D3DKMT_SETALLOCATIONPRIORITY *)MmUserProbeAddress;
  v28 = *v3;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v30, v28.hDevice, Current, &v31);
  v14 = v31;
  if ( !v31 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = v28.hDevice;
    v9 = -1073741811;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    if ( !v30 )
      goto LABEL_6;
LABEL_14:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27, v31);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v29, (__int64)v14, 0, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v29);
  v21 = v17;
  if ( v17 >= 0 )
  {
    v9 = DXGDEVICE::SetAllocationPriority(v14, &v28);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
    if ( v27[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    if ( !v30 )
      goto LABEL_6;
    goto LABEL_14;
  }
  v22 = WdLogNewEntry5_WdWarning(v19, v18, v20);
  *(_QWORD *)(v22 + 24) = v14;
  *(_QWORD *)(v22 + 32) = v21;
  WdLogEvent5_WdWarning(v22);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
  if ( v27[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
  if ( v30 && _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v25);
  return (unsigned int)v21;
}
