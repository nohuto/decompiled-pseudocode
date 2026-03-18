/*
 * XREFs of DxgkGetProcessDeviceRemovalSupport @ 0x1C01B8670
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0009844 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00D2EF4 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00D2F18 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C01471FC (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?GetDeviceRemovalSupport@DXGPROCESS@@QEAAXPEBU_LUID@@PEAE@Z @ 0x1C01B6E14 (-GetDeviceRemovalSupport@DXGPROCESS@@QEAAXPEBU_LUID@@PEAE@Z.c)
 */

__int64 __fastcall DxgkGetProcessDeviceRemovalSupport(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v4; // rax
  struct _LUID v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r8
  DXGPROCESS *Process; // rax
  _BYTE *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int8 v17; // [rsp+20h] [rbp-A8h] BYREF
  int v18; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+30h] [rbp-98h]
  struct _LUID v20[2]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v21; // [rsp+48h] [rbp-80h]
  _BYTE v22[96]; // [rsp+50h] [rbp-78h] BYREF

  v19 = 0LL;
  v18 = 2156;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2156);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2156);
  v4 = a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)&v20[0].LowPart = *(_OWORD *)v4;
  v21 = *(_QWORD *)(v4 + 16);
  v17 = 1;
  v5 = v20[0];
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v22, *(void **)v20, 4096);
  v8 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v22, 0);
  if ( v8 >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v22);
    DXGPROCESS::GetDeviceRemovalSupport(Process, &v20[1], (bool *)&v17);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v22);
    v14 = (_BYTE *)(a1 + 16);
    if ( a1 + 16 >= MmUserProbeAddress )
      v14 = (_BYTE *)MmUserProbeAddress;
    *v14 = v17;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v15, &EventProfilerExit, v16, v18);
    return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v9);
    *(struct _LUID *)(v10 + 24) = v5;
    WdLogEvent5_WdWarning(v10);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v22);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C0079010, &EventProfilerExit, v11, v18);
    return (unsigned int)v8;
  }
}
