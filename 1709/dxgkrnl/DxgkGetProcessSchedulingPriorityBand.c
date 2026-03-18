/*
 * XREFs of DxgkGetProcessSchedulingPriorityBand @ 0x1C01BA6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000E380 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00F1B34 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00F1B54 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0120E14 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C01701A8 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA?AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ @ 0x1C01B9BA4 (-GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA-AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ.c)
 */

__int64 __fastcall DxgkGetProcessSchedulingPriorityBand(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rcx
  bool v19; // zf
  _DWORD *v20; // rax
  size_t v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  const void *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  struct DXGPROCESS *Process; // r15
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned int ProcessSchedulingPriorityBand; // eax
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int *v43; // rcx
  unsigned __int64 v44; // r8
  __int64 v45; // [rsp+28h] [rbp-80h] BYREF
  void *v46; // [rsp+30h] [rbp-78h]
  __int64 v47; // [rsp+38h] [rbp-70h]
  _BYTE v48[80]; // [rsp+40h] [rbp-68h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2143);
  if ( !CheckTokenForResourceManagerAccess(a1) )
  {
    v7 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v7 + 24) = DXGPROCESS::GetCurrent(v9, v8);
    *(_QWORD *)(v7 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v7);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C005F010, &EventProfilerExit, v10, 2143);
    return 3221225506LL;
  }
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal(v5) + 280) )
  {
    v15 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    LODWORD(v16) = -1073741823;
    *(_QWORD *)(v15 + 24) = -1073741823LL;
    WdLogEvent5_WdWarning(v15);
    goto LABEL_11;
  }
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v20 = (_DWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v20 = (_DWORD *)MmUserProbeAddress;
  v21 = (unsigned int)*v20;
  if ( *v20 >= 0x18u )
  {
    if ( *v20 > 0x18u )
      v21 = 24LL;
    v25 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v25 = (const void *)MmUserProbeAddress;
    memmove(&v45, v25, v21);
    if ( !HIDWORD(v45) )
    {
      Process = (struct DXGPROCESS *)v46;
      DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v48, v46, 0x2000);
      v33 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v48, 0);
      v16 = v33;
      if ( v33 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v48);
        ProcessSchedulingPriorityBand = DXGPROCESS::GetProcessSchedulingPriorityBand((__int64)Process);
        if ( ProcessSchedulingPriorityBand != 3 )
        {
          v43 = (unsigned int *)(a1 + 16);
          v44 = a1 + 20;
          if ( a1 + 20 > MmUserProbeAddress || v44 <= (unsigned __int64)v43 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v43 = ProcessSchedulingPriorityBand;
          DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE(
            (DXGPROCESSMUTEXBYHANDLE *)v48,
            ProcessSchedulingPriorityBand,
            v44);
          v19 = (qword_1C005F010 & 2) == 0;
          goto LABEL_12;
        }
        v37 = WdLogNewEntry5_WdWarning(v41, 3LL, v42);
        v16 = -1073741595LL;
      }
      else
      {
        v37 = WdLogNewEntry5_WdWarning(v35, v34, v36);
      }
      *(_QWORD *)(v37 + 24) = Process;
      *(_QWORD *)(v37 + 32) = v16;
      WdLogEvent5_WdWarning(v37);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v48, v38, v39);
LABEL_11:
      v18 = qword_1C005F010;
      v19 = (qword_1C005F010 & 2) == 0;
LABEL_12:
      if ( !v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v18, &EventProfilerExit, v17, 2143);
      return (unsigned int)v16;
    }
    v29 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v29 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v29);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v30, &EventProfilerExit, v31, 2143);
    return 3221225485LL;
  }
  else
  {
    v22 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v12, v21);
    *(_QWORD *)(v22 + 24) = 4043LL;
    WdLogEvent5_WdWarning(v22);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v23, &EventProfilerExit, v24, 2143);
    return 3221225485LL;
  }
}
