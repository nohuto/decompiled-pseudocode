/*
 * XREFs of OutputDuplRemoteSessionDisconnected @ 0x1C01CDA88
 * Callers:
 *     DxgkSessionDisconnected @ 0x1C01A2130 (DxgkSessionDisconnected.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0015320 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00AAB1C (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C01CB840 (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

void __fastcall OutputDuplRemoteSessionDisconnected(__int64 a1)
{
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  struct OUTPUTDUPL_MGR *v2; // rbx
  _BYTE v3[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(a1);
  v2 = RemoteOutputDuplMgr;
  if ( RemoteOutputDuplMgr )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v3, *((struct _KTHREAD ***)RemoteOutputDuplMgr + 3), 0);
    DXGPUSHLOCK::AcquireExclusive(v4);
    *((_DWORD *)v2 + 12) = 0;
    v5 = 2;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v3);
    OUTPUTDUPL_MGR::ProcessRemoteSessionDisconnect((OUTPUTDUPL_CONTEXT **)v2);
  }
}
