/*
 * XREFs of DxgkGetProcessSchedulingPriorityBand @ 0x1C01B88D0
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
 *     ?GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA?AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ @ 0x1C01B7094 (-GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA-AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ.c)
 */

__int64 __fastcall DxgkGetProcessSchedulingPriorityBand(ULONG64 a1, __int64 a2, __int64 a3)
{
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
  size_t v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  const void *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  struct DXGPROCESS *Process; // r14
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  int ProcessSchedulingPriorityBand; // eax
  __int64 v40; // rcx
  __int64 v41; // r8
  _DWORD *v42; // rcx
  int v43; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+28h] [rbp-A0h]
  unsigned int v45; // [rsp+30h] [rbp-98h]
  int v46; // [rsp+34h] [rbp-94h]
  __int64 v47; // [rsp+38h] [rbp-90h] BYREF
  void *v48; // [rsp+40h] [rbp-88h]
  __int64 v49; // [rsp+48h] [rbp-80h]
  _BYTE v50[96]; // [rsp+50h] [rbp-78h] BYREF

  v44 = 0LL;
  v43 = 2143;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2143);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 2143);
  if ( !CheckTokenForResourceManagerAccess(v4) )
  {
    v8 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v8 + 24) = DXGPROCESS::GetCurrent(v10, v9);
    *(_QWORD *)(v8 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v12, v43);
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
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v21 = (unsigned int *)a1;
  if ( a1 >= MmUserProbeAddress )
    v21 = (unsigned int *)MmUserProbeAddress;
  v45 = *v21;
  v22 = v45;
  if ( v45 < 0x18 )
  {
    v23 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v14, v45);
    *(_QWORD *)(v23 + 24) = 4246LL;
    WdLogEvent5_WdWarning(v23);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v24, &EventProfilerExit, v25, v43);
    return 3221225485LL;
  }
  if ( v45 > 0x18 )
    v22 = 24LL;
  v45 = v22;
  v26 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v26 = (const void *)MmUserProbeAddress;
  memmove(&v47, v26, v22);
  if ( !HIDWORD(v47) )
  {
    Process = (struct DXGPROCESS *)v48;
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v50, v48, 0x2000);
    v34 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v50, 0);
    v18 = v34;
    if ( v34 >= 0 )
    {
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v50);
      ProcessSchedulingPriorityBand = DXGPROCESS::GetProcessSchedulingPriorityBand((__int64)Process);
      v46 = ProcessSchedulingPriorityBand;
      if ( ProcessSchedulingPriorityBand != 3 )
      {
        v42 = (_DWORD *)(a1 + 16);
        if ( a1 + 20 > MmUserProbeAddress || a1 + 20 <= (unsigned __int64)v42 )
          *(_BYTE *)MmUserProbeAddress = 0;
        *v42 = ProcessSchedulingPriorityBand;
        goto LABEL_34;
      }
      v38 = WdLogNewEntry5_WdWarning(v40, 3LL, v41);
      v18 = -1073741595LL;
    }
    else
    {
      v38 = WdLogNewEntry5_WdWarning(v36, v35, v37);
    }
    *(_QWORD *)(v38 + 24) = Process;
    *(_QWORD *)(v38 + 32) = v18;
    WdLogEvent5_WdWarning(v38);
LABEL_34:
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v50);
LABEL_11:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v19, &EventProfilerExit, v20, v43);
    return (unsigned int)v18;
  }
  v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
  *(_QWORD *)(v30 + 24) = -1073741811LL;
  WdLogEvent5_WdWarning(v30);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v43);
  return 3221225485LL;
}
