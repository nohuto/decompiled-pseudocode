/*
 * XREFs of DxgkSetProcessSchedulingPriorityBand @ 0x1C01BAF20
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
 *     ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1C01B9E50 (-SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z.c)
 */

__int64 __fastcall DxgkSetProcessSchedulingPriorityBand(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rbx
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
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  void *v25; // r14
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  struct DXGPROCESS *Process; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // [rsp+28h] [rbp-80h] BYREF
  void *v44; // [rsp+30h] [rbp-78h]
  __int64 v45; // [rsp+38h] [rbp-70h]
  _BYTE v46[80]; // [rsp+40h] [rbp-68h] BYREF

  v3 = (_DWORD *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2140);
  if ( !CheckTokenForResourceManagerAccess(a1) )
  {
    v7 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v7 + 24) = DXGPROCESS::GetCurrent(v9, v8);
    *(_QWORD *)(v7 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v7);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C005F010, &EventProfilerExit, v10, 2140);
    return 3221225506LL;
  }
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal(v5) + 280) )
  {
    v15 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    LODWORD(v16) = -1073741823;
    *(_QWORD *)(v15 + 24) = -1073741823LL;
    WdLogEvent5_WdWarning(v15);
LABEL_11:
    v18 = qword_1C005F010;
    v19 = (qword_1C005F010 & 2) == 0;
    goto LABEL_12;
  }
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v20 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v20 = (_DWORD *)MmUserProbeAddress;
  v21 = (unsigned int)*v20;
  if ( *v20 < 0x18u )
  {
    v22 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v21, v14);
    *(_QWORD *)(v22 + 24) = 3707LL;
    WdLogEvent5_WdWarning(v22);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v23, &EventProfilerExit, v24, 2140);
    return 3221225485LL;
  }
  if ( *v20 > 0x18u )
    LODWORD(v21) = 24;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_DWORD *)MmUserProbeAddress;
  memmove(&v43, v3, (unsigned int)v21);
  v25 = v44;
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v46, v44, 0x2000);
  v26 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v46, 0);
  v16 = v26;
  if ( v26 < 0 )
  {
    v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
    *(_QWORD *)(v30 + 24) = v25;
    *(_QWORD *)(v30 + 32) = v16;
LABEL_29:
    WdLogEvent5_WdWarning(v30);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v46, v31, v32);
    goto LABEL_11;
  }
  if ( (unsigned int)v45 <= 1 && !HIDWORD(v43) )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v46);
    v39 = DXGPROCESS::SetProcessSchedulingPriorityBand((__int64)Process, v45);
    v16 = v39;
    if ( v39 >= 0 )
    {
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v46, v40, v42);
      v19 = (qword_1C005F010 & 2) == 0;
LABEL_12:
      if ( !v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v18, &EventProfilerExit, v17, 2140);
      return (unsigned int)v16;
    }
    v30 = WdLogNewEntry5_WdWarning(v41, v40, v42);
    *(_QWORD *)(v30 + 24) = v16;
    goto LABEL_29;
  }
  v33 = WdLogNewEntry5_WdWarning(v28, v27, v29);
  *(_QWORD *)(v33 + 24) = -1073741811LL;
  WdLogEvent5_WdWarning(v33);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v46, v34, v35);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v36, &EventProfilerExit, v37, 2140);
  return 3221225485LL;
}
