/*
 * XREFs of DxgkUnpinDirectFlipResources @ 0x1C018C3B0
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
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C0189384 (-UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkUnpinDirectFlipResources(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  _BOOL8 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r13
  unsigned int v17; // r12d
  __int64 v18; // rdx
  __int64 v19; // rcx
  DXGDEVICE *v20; // r15
  __int64 v21; // rax
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned int i; // esi
  unsigned int *v30; // rdx
  __int64 v31; // r14
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  bool v38; // zf
  __int64 v39; // rax
  struct DXGDEVICE *v40; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v41[2]; // [rsp+38h] [rbp-C0h] BYREF
  unsigned int v42[4]; // [rsp+48h] [rbp-B0h]
  struct DXGDEVICE *v43; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v44[152]; // [rsp+60h] [rbp-98h] BYREF
  char v45; // [rsp+110h] [rbp+18h]

  v3 = (_OWORD *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2080);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v10 = qword_1C006E790;
    v11 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    {
LABEL_8:
      Template_q(v10, &EventProfilerExit, v9, 2080);
      return (unsigned int)v8;
    }
    return (unsigned int)v8;
  }
  v13 = (unsigned int)_guard_dispatch_icall_fptr() == 0;
  v45 = v13;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v42 = *v3;
  v16 = *(_QWORD *)&v42[2];
  if ( !*(_QWORD *)&v42[2] || (v17 = v42[1]) == 0 )
  {
    v39 = WdLogNewEntry5_WdWarning(v13, 1LL, v14, v15);
    *(_QWORD *)(v39 + 24) = v42[0];
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v39 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v39);
    v11 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v40, v42[0], Current, &v43);
  v20 = v43;
  if ( v43 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41, v43);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, (__int64)v20, 2LL, v22, 0);
    v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v44);
    v8 = v23;
    if ( v23 >= 0 )
    {
      for ( i = 0; i < v17; ++i )
      {
        v30 = (unsigned int *)(v16 + 4LL * i);
        if ( v30 + 1 < v30 || (unsigned __int64)(v30 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v31 = *v30;
        v32 = DXGDEVICE::UnpinDirectFlipResource(v20, v31, v45, (struct COREDEVICEACCESS *)v44);
        v8 = v32;
        if ( v32 < 0 )
        {
          v37 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
          *(_QWORD *)(v37 + 24) = v31;
          *(_QWORD *)(v37 + 32) = v8;
          WdLogEvent5_WdWarning(v37);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
          v38 = v41[0] == 0LL;
          goto LABEL_32;
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
      v38 = v41[0] == 0LL;
LABEL_32:
      if ( !v38 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
      if ( v40 )
      {
        v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL);
        if ( v10 == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
      }
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        goto LABEL_8;
      return (unsigned int)v8;
    }
    v28 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
    *(_QWORD *)(v28 + 24) = v20;
    *(_QWORD *)(v28 + 32) = v8;
    WdLogEvent5_WdWarning(v28);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
    if ( v41[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v21 + 24) = v42[0];
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
  }
  if ( v40 )
  {
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v10 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    goto LABEL_8;
  return (unsigned int)v8;
}
