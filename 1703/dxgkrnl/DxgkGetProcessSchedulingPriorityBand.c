/*
 * XREFs of DxgkGetProcessSchedulingPriorityBand @ 0x1C01A2790
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0001DCC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C009B108 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C009B128 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0121574 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C016CA50 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA?AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ @ 0x1C01A1E54 (-GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA-AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ.c)
 */

__int64 __fastcall DxgkGetProcessSchedulingPriorityBand(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rcx
  bool v20; // zf
  _DWORD *v21; // rax
  size_t v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  const void *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  struct DXGPROCESS *Process; // r14
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int ProcessSchedulingPriorityBand; // eax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned int *v51; // rcx
  unsigned __int64 v52; // r8
  __int64 v53; // [rsp+30h] [rbp-98h] BYREF
  void *v54; // [rsp+38h] [rbp-90h]
  __int64 v55; // [rsp+40h] [rbp-88h]
  _BYTE v56[80]; // [rsp+50h] [rbp-78h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2143);
  if ( !CheckTokenForResourceManagerAccess(a1, a2, a3, a4) )
  {
    v9 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
    *(_QWORD *)(v9 + 24) = DXGPROCESS::GetCurrent(v10);
    *(_QWORD *)(v9 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v9);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v11, 2143);
    return 3221225506LL;
  }
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal(v6, v5, v7, v8) + 280) )
  {
    v16 = WdLogNewEntry5_WdWarning(0LL, v13, v14, v15);
    LODWORD(v17) = -1073741823;
    *(_QWORD *)(v16 + 24) = -1073741823LL;
    WdLogEvent5_WdWarning(v16);
    goto LABEL_11;
  }
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v21 = (_DWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v21 = (_DWORD *)MmUserProbeAddress;
  v22 = (unsigned int)*v21;
  if ( *v21 >= 0x18u )
  {
    if ( *v21 > 0x18u )
      v22 = 24LL;
    v26 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v26 = (const void *)MmUserProbeAddress;
    memmove(&v53, v26, v22);
    if ( !HIDWORD(v53) )
    {
      Process = (struct DXGPROCESS *)v54;
      DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v56, v54, 0x2000);
      v35 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v56, 0);
      v17 = v35;
      if ( v35 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v56);
        ProcessSchedulingPriorityBand = DXGPROCESS::GetProcessSchedulingPriorityBand((__int64)Process, v44, v45, v46);
        if ( ProcessSchedulingPriorityBand != 3 )
        {
          v51 = (unsigned int *)(a1 + 16);
          v52 = a1 + 20;
          if ( a1 + 20 > MmUserProbeAddress || v52 <= (unsigned __int64)v51 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v51 = ProcessSchedulingPriorityBand;
          DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE(
            (DXGPROCESSMUTEXBYHANDLE *)v56,
            ProcessSchedulingPriorityBand,
            v52,
            MmUserProbeAddress);
          v20 = (qword_1C006E790 & 2) == 0;
          goto LABEL_12;
        }
        v40 = WdLogNewEntry5_WdWarning(v48, 3LL, v49, v50);
        v17 = -1073741595LL;
      }
      else
      {
        v40 = WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
      }
      *(_QWORD *)(v40 + 24) = Process;
      *(_QWORD *)(v40 + 32) = v17;
      WdLogEvent5_WdWarning(v40);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v56, v41, v42, v43);
LABEL_11:
      v19 = qword_1C006E790;
      v20 = (qword_1C006E790 & 2) == 0;
LABEL_12:
      if ( !v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v19, &EventProfilerExit, v18, 2143);
      return (unsigned int)v17;
    }
    v31 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
    *(_QWORD *)(v31 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v31);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v32, &EventProfilerExit, v33, 2143);
    return 3221225485LL;
  }
  else
  {
    v23 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v13, v22, v15);
    *(_QWORD *)(v23 + 24) = 3879LL;
    WdLogEvent5_WdWarning(v23);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v24, &EventProfilerExit, v25, 2143);
    return 3221225485LL;
  }
}
