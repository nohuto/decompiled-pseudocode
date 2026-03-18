/*
 * XREFs of DxgkCheckOcclusion @ 0x1C00E8C00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C000D5E8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000D614 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0014764 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C008C2D4 (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCheckOcclusion(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct DXGPROCESS *Current; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v15; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v23[24]; // [rsp+28h] [rbp-50h] BYREF
  struct tagRECT v24; // [rsp+40h] [rbp-38h] BYREF

  v3 = (_QWORD *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2038);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_QWORD *)MmUserProbeAddress;
    if ( *v3 )
    {
      if ( (unsigned int)_guard_dispatch_icall_fptr() )
      {
        v10 = -1071775738;
        *(_QWORD *)&v24.left = 0LL;
        *(_QWORD *)&v24.right = 0LL;
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v23, Current);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v23, 1u);
        if ( (unsigned int)_guard_dispatch_icall_fptr() == 1 )
        {
          Global = DXGGLOBAL::GetGlobal(v15);
          if ( DXGGLOBAL::IsWindowVisible(Global, &v24) )
            v10 = 0;
        }
        else
        {
          v22 = WdLogNewEntry5_WdError(v15);
          *(_QWORD *)(v22 + 24) = 301LL;
          WdLogEvent5_WdError(v22);
        }
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v23);
        v13 = (qword_1C005F010 & 2) == 0;
      }
      else
      {
        v10 = -1071775738;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8) + 24) = -1071775738LL;
        v12 = qword_1C005F010;
        v13 = (qword_1C005F010 & 2) == 0;
      }
      if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v12, &EventProfilerExit, v11, 2038);
      return v10;
    }
    v21 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, v6);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
    v20 = (qword_1C005F010 & 2) == 0;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    v19 = qword_1C005F010;
    v20 = (qword_1C005F010 & 2) == 0;
  }
  if ( !v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v18, 2038);
  return 3221225485LL;
}
