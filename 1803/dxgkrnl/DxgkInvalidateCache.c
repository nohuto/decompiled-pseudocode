/*
 * XREFs of DxgkInvalidateCache @ 0x1C016E220
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00166DC (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A57C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkInvalidateCache(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rcx
  struct DXGDEVICE *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rax
  struct _EX_RUNDOWN_REF *v24; // rax
  unsigned int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+38h] [rbp-B0h]
  _BYTE v30[16]; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v31[4]; // [rsp+50h] [rbp-98h]
  __int64 v32; // [rsp+60h] [rbp-88h]
  _BYTE v33[120]; // [rsp+70h] [rbp-78h] BYREF
  struct DXGDEVICE *v34; // [rsp+F8h] [rbp+10h] BYREF
  struct _EX_RUNDOWN_REF *v35; // [rsp+100h] [rbp+18h] BYREF
  struct DXGDEVICE *v36; // [rsp+108h] [rbp+20h] BYREF

  v3 = a1;
  v29 = 0LL;
  v28 = 2122;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2122);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2122);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = 34LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v10, v28);
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v31 = *(_OWORD *)v3;
  v32 = *(_QWORD *)(v3 + 16);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34, v31[0], Current, &v36);
  v13 = v36;
  if ( !v36 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = v31[0];
    WdLogEvent5_WdError(v14);
LABEL_14:
    if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
    goto LABEL_6;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30,
    v36);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, (__int64)v13, 0, v15, 0);
  v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v33);
  if ( v16 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30);
    if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v18, v28);
    return (unsigned int)v16;
  }
  v19 = v31[1];
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v35, v31[1]);
  if ( !v35 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v23[3] = v13;
    v23[4] = v19;
LABEL_27:
    WdLogEvent5_WdWarning(v23);
LABEL_28:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v35);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30);
    goto LABEL_14;
  }
  if ( (struct DXGDEVICE *)v35[1].Count != v13 )
  {
    v24 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v21);
    v24[3].Count = v35[1].Count;
    v24[4].Count = (ULONG_PTR)v13;
    WdLogEvent5_WdError(v24);
    goto LABEL_28;
  }
  if ( !v35[3].Count )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, 0LL, v22);
    v23[3] = v13;
    v23[4] = v19;
    v23[5] = v35;
    goto LABEL_27;
  }
  v25 = _guard_dispatch_icall_fptr();
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v35);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30);
  if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v28);
  return v25;
}
