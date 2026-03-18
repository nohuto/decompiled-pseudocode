/*
 * XREFs of DxgkInvalidateCache @ 0x1C0186390
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004104 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00145BC (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkInvalidateCache(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rsi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rcx
  struct DXGDEVICE *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // r15d
  __int64 v15; // r8
  struct DXGDEVICE *v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  struct _EX_RUNDOWN_REF *v22; // rax
  unsigned int v23; // esi
  __int64 v24; // r8
  struct DXGDEVICE *v25; // rcx
  _BYTE v26[16]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v27[4]; // [rsp+40h] [rbp-98h]
  __int64 v28; // [rsp+50h] [rbp-88h]
  _BYTE v29[120]; // [rsp+60h] [rbp-78h] BYREF
  struct DXGDEVICE *v30; // [rsp+E8h] [rbp+10h] BYREF
  struct _EX_RUNDOWN_REF *v31; // [rsp+F0h] [rbp+18h] BYREF
  struct DXGDEVICE *v32; // [rsp+F8h] [rbp+20h] BYREF

  v3 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2122);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = 34LL;
    WdLogEvent5_WdError(v6);
LABEL_6:
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v7, &EventProfilerExit, v8, 2122);
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v27 = *(_OWORD *)v3;
  v28 = *(_QWORD *)(v3 + 16);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v30, v27[0], Current, &v32);
  v11 = v32;
  if ( !v32 )
  {
    v12 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v12 + 24) = v27[0];
    WdLogEvent5_WdError(v12);
LABEL_14:
    if ( v30 )
    {
      v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v7 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
    }
    goto LABEL_6;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v26,
    v32);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v29, (__int64)v11, 0, v13, 0);
  v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v29);
  if ( v14 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v26);
    v16 = v30;
    if ( v30 && _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v16, &EventProfilerExit, v15, 2122);
    return (unsigned int)v14;
  }
  v17 = v27[1];
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v31, v27[1]);
  if ( !v31 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
    v21[3] = v11;
    v21[4] = v17;
LABEL_27:
    WdLogEvent5_WdWarning(v21);
LABEL_28:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v26);
    goto LABEL_14;
  }
  if ( (struct DXGDEVICE *)v31[1].Count != v11 )
  {
    v22 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v19);
    v22[3].Count = v31[1].Count;
    v22[4].Count = (ULONG_PTR)v11;
    WdLogEvent5_WdError(v22);
    goto LABEL_28;
  }
  if ( !v31[3].Count )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, 0LL, v20);
    v21[3] = v11;
    v21[4] = v17;
    v21[5] = v31;
    goto LABEL_27;
  }
  v23 = _guard_dispatch_icall_fptr();
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v26);
  v25 = v30;
  if ( v30 && _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v25, &EventProfilerExit, v24, 2122);
  return v23;
}
