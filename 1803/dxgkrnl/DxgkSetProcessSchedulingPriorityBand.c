/*
 * XREFs of DxgkSetProcessSchedulingPriorityBand @ 0x1C01B97B0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0009844 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00D2EF4 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00D2F18 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C01471FC (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C01B650C (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 *     ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1C01B7840 (-SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z.c)
 */

__int64 __fastcall DxgkSetProcessSchedulingPriorityBand(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int *v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  void *v26; // rsi
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  struct DXGPROCESS *Process; // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+28h] [rbp-A0h]
  unsigned int v42; // [rsp+30h] [rbp-98h]
  __int64 v43; // [rsp+38h] [rbp-90h] BYREF
  void *v44; // [rsp+40h] [rbp-88h]
  __int64 v45; // [rsp+48h] [rbp-80h]
  _BYTE v46[96]; // [rsp+50h] [rbp-78h] BYREF

  v3 = (unsigned int *)a1;
  v41 = 0LL;
  v40 = 2140;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2140);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v40, 2140);
  if ( !CheckTokenForResourceManagerAccess(v4) )
  {
    v8 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v8 + 24) = DXGPROCESS::GetCurrent(v10, v9);
    *(_QWORD *)(v8 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v12, v40);
    return 3221225506LL;
  }
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal(v6) + 300) )
  {
    v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    LODWORD(v18) = -1073741823;
    *(_QWORD *)(v17 + 24) = -1073741823LL;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_11;
  }
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v21 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v21 = (unsigned int *)MmUserProbeAddress;
  v42 = *v21;
  v22 = v42;
  if ( v42 < 0x18 )
  {
    v23 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v42, v16);
    *(_QWORD *)(v23 + 24) = 3910LL;
    WdLogEvent5_WdWarning(v23);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v24, &EventProfilerExit, v25, v40);
    return 3221225485LL;
  }
  if ( v42 > 0x18 )
    v22 = 24;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  memmove(&v43, v3, v22);
  v26 = v44;
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v46, v44, 0x2000);
  v27 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v46, 0);
  v18 = v27;
  if ( v27 < 0 )
  {
    v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v31 + 24) = v26;
    *(_QWORD *)(v31 + 32) = v18;
    goto LABEL_28;
  }
  if ( (unsigned int)v45 <= 1 && !HIDWORD(v43) )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v46);
    v36 = DXGPROCESS::SetProcessSchedulingPriorityBand((__int64)Process, v45);
    v18 = v36;
    if ( v36 >= 0 )
      goto LABEL_29;
    v31 = WdLogNewEntry5_WdWarning(v38, v37, v39);
    *(_QWORD *)(v31 + 24) = v18;
LABEL_28:
    WdLogEvent5_WdWarning(v31);
LABEL_29:
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v46);
LABEL_11:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v19, &EventProfilerExit, v20, v40);
    return (unsigned int)v18;
  }
  v32 = WdLogNewEntry5_WdWarning(v29, v28, v30);
  *(_QWORD *)(v32 + 24) = -1073741811LL;
  WdLogEvent5_WdWarning(v32);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v46);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v33, &EventProfilerExit, v34, v40);
  return 3221225485LL;
}
