/*
 * XREFs of DxgkGetContextSchedulingPriority @ 0x1C009CE20
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
 */

__int64 __fastcall DxgkGetContextSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGCONTEXT *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+38h] [rbp-A0h]
  __int64 v24; // [rsp+40h] [rbp-98h] BYREF
  char v25; // [rsp+48h] [rbp-90h]
  _BYTE v26[16]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v27[120]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v28; // [rsp+E8h] [rbp+10h]
  struct DXGCONTEXT *v29; // [rsp+F0h] [rbp+18h] BYREF

  v3 = (__int64 *)a1;
  v23 = 0LL;
  v22 = 2030;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2030);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 2030);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v7, &EventProfilerExit, v8, v22);
    return 3221225485LL;
  }
  v10 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v10 = (__int64 *)MmUserProbeAddress;
  v28 = *v10;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v26, *v10, Current, &v29, 0);
  v14 = v29;
  if ( !v29 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = (unsigned int)v28;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v26);
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
    (DXGDEVICEACCESSLOCKSHARED *)&v24,
    *((struct DXGDEVICE **)v29 + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v27, *((_QWORD *)v14 + 2), 0, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v27);
  if ( v17 >= 0 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    HIDWORD(v28) = *((_DWORD *)v14 + 97);
    *v3 = v28;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
    if ( v24 && v25 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v24 + 104));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v20, &EventProfilerExit, v21, v22);
    return 0LL;
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
    if ( v24 && v25 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v24 + 104));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v18, &EventProfilerExit, v19, v22);
    return (unsigned int)v17;
  }
}
