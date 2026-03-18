/*
 * XREFs of DxgkGetContextSchedulingPriority @ 0x1C008B9E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002034 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0004CAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetContextSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r8
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGCONTEXT *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // r14d
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // [rsp+30h] [rbp-98h] BYREF
  char v26; // [rsp+38h] [rbp-90h]
  _BYTE v27[16]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v28[120]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v29; // [rsp+D8h] [rbp+10h]
  struct DXGCONTEXT *v30; // [rsp+E0h] [rbp+18h] BYREF

  v3 = (__int64 *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2030);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v9 = qword_1C006E790;
    v10 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v9, &EventProfilerExit, v8, 2030);
    return 3221225485LL;
  }
  v12 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v12 = (__int64 *)MmUserProbeAddress;
  v29 = *v12;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27, *v12, Current, &v30, 0);
  v17 = v30;
  if ( !v30 )
  {
    v18 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v18 + 24) = (unsigned int)v29;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27);
    v10 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
    (DXGDEVICEACCESSLOCKSHARED *)&v25,
    *((struct DXGDEVICE **)v30 + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v28, *((_QWORD *)v17 + 2), 0LL, v19, 0);
  v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v28);
  if ( v20 >= 0 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    HIDWORD(v29) = *((_DWORD *)v17 + 89);
    *v3 = v29;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
    if ( v25 && v26 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v25 + 104));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v23, &EventProfilerExit, v24, 2030);
    return 0LL;
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
    if ( v25 && v26 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v25 + 104));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v21, &EventProfilerExit, v22, 2030);
    return (unsigned int)v20;
  }
}
