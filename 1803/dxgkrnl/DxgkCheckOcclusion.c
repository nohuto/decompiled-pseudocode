/*
 * XREFs of DxgkCheckOcclusion @ 0x1C010AD30
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0009A64 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001A718 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C001A72C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C010C348 (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 */

__int64 __fastcall DxgkCheckOcclusion(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGPROCESS *Current; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // esi
  __int64 v15; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-68h] BYREF
  __int64 v26; // [rsp+28h] [rbp-60h]
  _BYTE v28[24]; // [rsp+38h] [rbp-50h] BYREF
  struct tagRECT v29; // [rsp+50h] [rbp-38h] BYREF

  v3 = (_QWORD *)a1;
  v26 = 0LL;
  v25 = 2038;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2038);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2038);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_QWORD *)MmUserProbeAddress;
    if ( *v3 )
    {
      if ( (unsigned int)_guard_dispatch_icall_fptr() )
      {
        v14 = -1071775738;
        *(_QWORD *)&v29.left = 0LL;
        *(_QWORD *)&v29.right = 0LL;
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v28, Current);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v28, 1u);
        if ( (unsigned int)_guard_dispatch_icall_fptr() == 1 )
        {
          Global = DXGGLOBAL::GetGlobal(v15);
          if ( DXGGLOBAL::IsWindowVisible(Global, &v29) )
            v14 = 0;
        }
        else
        {
          v24 = WdLogNewEntry5_WdError(v15);
          *(_QWORD *)(v24 + 24) = 300LL;
          WdLogEvent5_WdError(v24);
        }
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v28);
      }
      else
      {
        v14 = -1071775738;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10, v12, v13) + 24) = -1071775738LL;
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v17, &EventProfilerExit, v18, v25);
      return v14;
    }
    v21 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v6, v8);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v25);
  return 3221225485LL;
}
