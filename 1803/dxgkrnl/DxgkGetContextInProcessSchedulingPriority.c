/*
 * XREFs of DxgkGetContextInProcessSchedulingPriority @ 0x1C018E5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002694 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0016BF4 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0016D0C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetInProcessSchedulingPriority@DXGCONTEXT@@QEAAHXZ @ 0x1C0172B58 (-GetInProcessSchedulingPriority@DXGCONTEXT@@QEAAHXZ.c)
 */

__int64 __fastcall DxgkGetContextInProcessSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+38h] [rbp-A0h]
  __int64 v26; // [rsp+40h] [rbp-98h] BYREF
  char v27; // [rsp+48h] [rbp-90h]
  _BYTE v28[16]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v29[120]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v30; // [rsp+E8h] [rbp+10h]
  DXGCONTEXT *v31; // [rsp+F0h] [rbp+18h] BYREF

  v3 = (__int64 *)a1;
  v25 = 0LL;
  v24 = 2085;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2085);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 2085);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v10, v24);
    return 3221225485LL;
  }
  v12 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v12 = (__int64 *)MmUserProbeAddress;
  v30 = *v12;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v28, *v12, Current, &v31, 0);
  v16 = (__int64 *)v31;
  if ( !v31 )
  {
    v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v17 + 24) = (unsigned int)v30;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v28);
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
    (DXGDEVICEACCESSLOCKSHARED *)&v26,
    *((struct DXGDEVICE **)v31 + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v29, v16[2], 0, v18, 0);
  v19 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v29);
  if ( v19 >= 0 )
  {
    HIDWORD(v30) = DXGCONTEXT::GetInProcessSchedulingPriority((DXGCONTEXT *)v16);
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    *v3 = v30;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
    if ( v26 && v27 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v26 + 104));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v22, &EventProfilerExit, v23, v24);
    return 0LL;
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
    if ( v26 && v27 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v26 + 104));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v20, &EventProfilerExit, v21, v24);
    return (unsigned int)v19;
  }
}
