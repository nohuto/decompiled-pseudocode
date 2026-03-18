/*
 * XREFs of DxgkCheckOcclusion @ 0x1C0097B00
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0001BD8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0001C04 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00139F0 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C00D7E98 (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 */

__int64 __fastcall DxgkCheckOcclusion(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  bool v19; // zf
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rax
  _BYTE v27[24]; // [rsp+28h] [rbp-50h] BYREF
  struct tagRECT v28; // [rsp+40h] [rbp-38h] BYREF

  v3 = (_QWORD *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2038);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_QWORD *)MmUserProbeAddress;
    if ( *v3 )
    {
      if ( (unsigned int)_guard_dispatch_icall_fptr() )
      {
        v13 = -1071775738;
        *(_QWORD *)&v28.left = 0LL;
        *(_QWORD *)&v28.right = 0LL;
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v27, Current);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v27, 1u);
        if ( (unsigned int)_guard_dispatch_icall_fptr() == 1 )
        {
          Global = DXGGLOBAL::GetGlobal();
          if ( DXGGLOBAL::IsWindowVisible(Global, &v28) )
            v13 = 0;
        }
        else
        {
          v26 = WdLogNewEntry5_WdError(v15, v14);
          *(_QWORD *)(v26 + 24) = 299LL;
          WdLogEvent5_WdError(v26);
        }
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v27);
        v19 = (qword_1C006E790 & 2) == 0;
      }
      else
      {
        v13 = -1071775738;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = -1071775738LL;
        v17 = qword_1C006E790;
        v19 = (qword_1C006E790 & 2) == 0;
      }
      if ( !v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v17, &EventProfilerExit, v18, 2038);
      return v13;
    }
    v25 = WdLogNewEntry5_WdWarning(v5, v4, v6, v7);
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v25);
    v24 = (qword_1C006E790 & 2) == 0;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    v23 = qword_1C006E790;
    v24 = (qword_1C006E790 & 2) == 0;
  }
  if ( !v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v23, &EventProfilerExit, v22, 2038);
  return 3221225485LL;
}
