/*
 * XREFs of DxgkConfigureSharedResource @ 0x1C00F2D00
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C00932C8 (-ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkConfigureSharedResource(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rdi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v6; // rcx
  PERESOURCE *v7; // rdi
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // esi
  unsigned int v11; // edi
  __int64 v12; // r8
  struct DXGDEVICE *v13; // rcx
  bool v14; // zf
  bool v15; // zf
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  struct DXGDEVICE *v20; // rcx
  _QWORD v21[2]; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v22[4]; // [rsp+40h] [rbp-88h]
  void *v23[2]; // [rsp+50h] [rbp-78h]
  _BYTE v24[96]; // [rsp+60h] [rbp-68h] BYREF
  struct DXGDEVICE *v25; // [rsp+D8h] [rbp+10h] BYREF
  struct DXGDEVICE *v26; // [rsp+E0h] [rbp+18h] BYREF

  v3 = (_OWORD *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2056);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v17 = WdLogNewEntry5_WdError(v4);
    v11 = -1073741811;
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    v13 = (struct DXGDEVICE *)qword_1C005F010;
    v15 = (qword_1C005F010 & 2) == 0;
    goto LABEL_14;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v22 = *v3;
  *(_OWORD *)v23 = v3[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v25, v22[0], Current, &v26);
  v7 = (PERESOURCE *)v26;
  if ( !v26 )
  {
    v18 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v18 + 24) = v22[0];
    v11 = -1073741811;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    if ( !v25 )
    {
LABEL_13:
      v15 = (qword_1C005F010 & 2) == 0;
LABEL_14:
      if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)v13, &EventProfilerExit, v12, 2056);
      return v11;
    }
    v13 = (struct DXGDEVICE *)_InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    v14 = v13 == (struct DXGDEVICE *)1;
LABEL_11:
    if ( v14 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
    goto LABEL_13;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v21, v26);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, (__int64)v7, 0, v8, 0);
  v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v24);
  if ( v10 >= 0 )
  {
    LOBYTE(v9) = v22[2];
    v11 = DXGDEVICE::ConfigureSharedResource(v7, v9, v23[0], v22[1], (unsigned __int8)v23[1]);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
    if ( v21[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v21);
    v13 = v25;
    if ( !v25 )
      goto LABEL_13;
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_11;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
  if ( v21[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v21);
  v20 = v25;
  if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v20, &EventProfilerExit, v19, 2056);
  return (unsigned int)v10;
}
