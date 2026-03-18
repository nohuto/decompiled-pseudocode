/*
 * XREFs of DxgkInvalidateCache @ 0x1C0182120
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004E20 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkInvalidateCache(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGDEVICE *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // r15d
  __int64 v17; // r8
  struct DXGDEVICE *v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _EX_RUNDOWN_REF *v28; // rax
  unsigned int v29; // esi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  struct DXGDEVICE *v34; // rcx
  _BYTE v35[16]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v36[4]; // [rsp+40h] [rbp-98h]
  __int64 v37; // [rsp+50h] [rbp-88h]
  _BYTE v38[120]; // [rsp+60h] [rbp-78h] BYREF
  struct DXGDEVICE *v39; // [rsp+E8h] [rbp+10h] BYREF
  struct _EX_RUNDOWN_REF *v40; // [rsp+F0h] [rbp+18h] BYREF
  struct DXGDEVICE *v41; // [rsp+F8h] [rbp+20h] BYREF

  v3 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2122);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = 34LL;
    WdLogEvent5_WdError(v7);
LABEL_6:
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v8, &EventProfilerExit, v9, 2122);
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v36 = *(_OWORD *)v3;
  v37 = *(_QWORD *)(v3 + 16);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v39, v36[0], Current, &v41);
  v13 = v41;
  if ( !v41 )
  {
    v14 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v14 + 24) = v36[0];
    WdLogEvent5_WdError(v14);
LABEL_14:
    if ( v39 )
    {
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v8 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
    }
    goto LABEL_6;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v35,
    v41);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v38, (__int64)v13, 0LL, v15, 0);
  v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v38);
  if ( v16 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v35);
    v18 = v39;
    if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v18, &EventProfilerExit, v17, 2122);
    return (unsigned int)v16;
  }
  v19 = v36[1];
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v40, v36[1]);
  if ( !v40 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    v24[3] = v13;
    v24[4] = v19;
LABEL_27:
    WdLogEvent5_WdWarning(v24);
LABEL_28:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v40, v25, v26, v27);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v35);
    goto LABEL_14;
  }
  if ( (struct DXGDEVICE *)v40[1].Count != v13 )
  {
    v28 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v21, v20);
    v28[3].Count = v40[1].Count;
    v28[4].Count = (ULONG_PTR)v13;
    WdLogEvent5_WdError(v28);
    goto LABEL_28;
  }
  if ( !v40[3].Count )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, 0LL, v22, v23);
    v24[3] = v13;
    v24[4] = v19;
    v24[5] = v40;
    goto LABEL_27;
  }
  v29 = _guard_dispatch_icall_fptr();
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v40, v30, v31, v32);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v35);
  v34 = v39;
  if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v34, &EventProfilerExit, v33, 2122);
  return v29;
}
