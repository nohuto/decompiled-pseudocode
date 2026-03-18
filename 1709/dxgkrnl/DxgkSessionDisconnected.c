/*
 * XREFs of DxgkSessionDisconnected @ 0x1C00FC260
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002D40 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0090AB0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00FC1C0 (DxgkMiracastStopAllMiracastSessions.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C00FC2E0 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C01C86AC (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

void __fastcall DxgkSessionDisconnected(char a1)
{
  __int64 v2; // rcx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  OUTPUTDUPL_MGR *v4; // rbx
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]
  union _LARGE_INTEGER v8; // [rsp+58h] [rbp+10h] BYREF

  DxgkIncreaseSessionAdapterUniqueness();
  if ( a1 )
  {
    v8.QuadPart = -300000000LL;
    DxgkMiracastStopAllMiracastSessions(1, &v8, 0x81u);
  }
  else
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(v2);
    v4 = RemoteOutputDuplMgr;
    if ( RemoteOutputDuplMgr )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, *((struct _KTHREAD ***)RemoteOutputDuplMgr + 3));
      DXGPUSHLOCK::AcquireExclusive(v6);
      *((_DWORD *)v4 + 12) = 0;
      v7 = 2;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
      OUTPUTDUPL_MGR::ProcessRemoteSessionDisconnect(v4);
    }
  }
}
