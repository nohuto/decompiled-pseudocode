/*
 * XREFs of DxgkSessionDisconnected @ 0x1C00A6520
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C009DAE0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C00A65A0 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00A6600 (DxgkMiracastStopAllMiracastSessions.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C01AE8F0 (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

void __fastcall DxgkSessionDisconnected(char a1)
{
  __int64 v2; // rcx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  OUTPUTDUPL_MGR *v6; // rbx
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  DxgkIncreaseSessionAdapterUniqueness();
  if ( a1 )
  {
    v10 = -300000000LL;
    LOBYTE(v2) = 1;
    DxgkMiracastStopAllMiracastSessions(v2, &v10, 129LL);
  }
  else
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    v6 = RemoteOutputDuplMgr;
    if ( RemoteOutputDuplMgr )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, *((struct _KTHREAD ***)RemoteOutputDuplMgr + 3), v4, v5);
      DXGPUSHLOCK::AcquireExclusive(v8);
      *((_DWORD *)v6 + 12) = 0;
      v9 = 2;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
      OUTPUTDUPL_MGR::ProcessRemoteSessionDisconnect(v6);
    }
  }
}
