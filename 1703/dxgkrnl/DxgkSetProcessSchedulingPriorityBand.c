/*
 * XREFs of DxgkSetProcessSchedulingPriorityBand @ 0x1C01A2FD0
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
 *     ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1C01A20F8 (-SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z.c)
 */

__int64 __fastcall DxgkSetProcessSchedulingPriorityBand(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx
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
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  void *v26; // r14
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // r8
  struct DXGPROCESS *Process; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // [rsp+28h] [rbp-80h] BYREF
  void *v51; // [rsp+30h] [rbp-78h]
  __int64 v52; // [rsp+38h] [rbp-70h]
  _BYTE v53[80]; // [rsp+40h] [rbp-68h] BYREF

  v4 = (_DWORD *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2140);
  if ( !CheckTokenForResourceManagerAccess(a1, a2, a3, a4) )
  {
    v9 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
    *(_QWORD *)(v9 + 24) = DXGPROCESS::GetCurrent(v10);
    *(_QWORD *)(v9 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v9);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v11, 2140);
    return 3221225506LL;
  }
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal(v6, v5, v7, v8) + 280) )
  {
    v16 = WdLogNewEntry5_WdWarning(0LL, v13, v14, v15);
    LODWORD(v17) = -1073741823;
    *(_QWORD *)(v16 + 24) = -1073741823LL;
    WdLogEvent5_WdWarning(v16);
LABEL_11:
    v19 = qword_1C006E790;
    v20 = (qword_1C006E790 & 2) == 0;
    goto LABEL_12;
  }
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v21 = v4;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v21 = (_DWORD *)MmUserProbeAddress;
  v22 = (unsigned int)*v21;
  if ( *v21 < 0x18u )
  {
    v23 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v22, v14, v15);
    *(_QWORD *)(v23 + 24) = 3543LL;
    WdLogEvent5_WdWarning(v23);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v24, &EventProfilerExit, v25, 2140);
    return 3221225485LL;
  }
  if ( *v21 > 0x18u )
    LODWORD(v22) = 24;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_DWORD *)MmUserProbeAddress;
  memmove(&v50, v4, (unsigned int)v22);
  v26 = v51;
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v53, v51, 0x2000);
  v27 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v53, 0);
  v17 = v27;
  if ( v27 < 0 )
  {
    v32 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
    *(_QWORD *)(v32 + 24) = v26;
    *(_QWORD *)(v32 + 32) = v17;
LABEL_29:
    WdLogEvent5_WdWarning(v32);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v53, v33, v34, v35);
    goto LABEL_11;
  }
  if ( (unsigned int)v52 <= 1 && !HIDWORD(v50) )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v53);
    v45 = DXGPROCESS::SetProcessSchedulingPriorityBand((__int64)Process, (unsigned int)v52, v43, v44);
    v17 = v45;
    if ( v45 >= 0 )
    {
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v53, v46, v48, v49);
      v20 = (qword_1C006E790 & 2) == 0;
LABEL_12:
      if ( !v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v19, &EventProfilerExit, v18, 2140);
      return (unsigned int)v17;
    }
    v32 = WdLogNewEntry5_WdWarning(v47, v46, v48, v49);
    *(_QWORD *)(v32 + 24) = v17;
    goto LABEL_29;
  }
  v36 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
  *(_QWORD *)(v36 + 24) = -1073741811LL;
  WdLogEvent5_WdWarning(v36);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v53, v37, v38, v39);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v40, &EventProfilerExit, v41, 2140);
  return 3221225485LL;
}
