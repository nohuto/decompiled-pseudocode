/*
 * XREFs of DxgkConfigureSharedResource @ 0x1C00FFFD0
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
 *     ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C00C0454 (-ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkConfigureSharedResource(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  PERESOURCE *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // esi
  unsigned int v13; // edi
  __int64 v14; // r8
  struct DXGDEVICE *v15; // rcx
  bool v16; // zf
  bool v17; // zf
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  struct DXGDEVICE *v22; // rcx
  _QWORD v23[2]; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v24[4]; // [rsp+40h] [rbp-88h]
  void *v25[2]; // [rsp+50h] [rbp-78h]
  _BYTE v26[96]; // [rsp+60h] [rbp-68h] BYREF
  struct DXGDEVICE *v27; // [rsp+D8h] [rbp+10h] BYREF
  struct DXGDEVICE *v28; // [rsp+E0h] [rbp+18h] BYREF

  v3 = (_OWORD *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2056);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v19 = WdLogNewEntry5_WdError(v5, v4);
    v13 = -1073741811;
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    v15 = (struct DXGDEVICE *)qword_1C006E790;
    v17 = (qword_1C006E790 & 2) == 0;
    goto LABEL_14;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v24 = *v3;
  *(_OWORD *)v25 = v3[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v27, v24[0], Current, &v28);
  v9 = (PERESOURCE *)v28;
  if ( !v28 )
  {
    v20 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v20 + 24) = v24[0];
    v13 = -1073741811;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    if ( !v27 )
    {
LABEL_13:
      v17 = (qword_1C006E790 & 2) == 0;
LABEL_14:
      if ( !v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q((__int64)v15, &EventProfilerExit, v14, 2056);
      return v13;
    }
    v15 = (struct DXGDEVICE *)_InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    v16 = v15 == (struct DXGDEVICE *)1;
LABEL_11:
    if ( v16 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v27 + 2), v27);
    goto LABEL_13;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v23, v28);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, (__int64)v9, 0LL, v10, 0);
  v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v26);
  if ( v12 >= 0 )
  {
    LOBYTE(v11) = v24[2];
    v13 = DXGDEVICE::ConfigureSharedResource(v9, v11, v25[0], v24[1], (unsigned __int8)v25[1]);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
    if ( v23[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v23);
    v15 = v27;
    if ( !v27 )
      goto LABEL_13;
    v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_11;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
  if ( v23[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v23);
  v22 = v27;
  if ( v27 && _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v27 + 2), v27);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v22, &EventProfilerExit, v21, 2056);
  return (unsigned int)v12;
}
