/*
 * XREFs of DxgkProcessLockScreen @ 0x1C01B0170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C009DAE0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C01AE880 (-ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

void __fastcall DxgkProcessLockScreen(__int64 a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGGLOBAL *Global; // rax
  OUTPUTDUPL_CONTEXT **RemoteOutputDuplMgr; // rax

  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 9) + 224LL))(0LL) )
    {
      RemoteOutputDuplMgr = (OUTPUTDUPL_CONTEXT **)FindRemoteOutputDuplMgr();
      if ( RemoteOutputDuplMgr )
        OUTPUTDUPL_MGR::ProcessLockScreenActive(RemoteOutputDuplMgr);
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal(v6, v5, v7, v8);
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)Global,
        (__int64 (__fastcall *)(_QWORD *, __int64))ProcessLockScreenAdapterCallback,
        0LL,
        1LL);
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v4 + 24) = 3666LL;
    WdLogEvent5_WdError(v4);
  }
}
