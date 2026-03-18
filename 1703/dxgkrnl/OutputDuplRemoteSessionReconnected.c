/*
 * XREFs of OutputDuplRemoteSessionReconnected @ 0x1C01B0738
 * Callers:
 *     DxgkSessionReconnected @ 0x1C0105230 (DxgkSessionReconnected.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C009DAE0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C01AE93C (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 */

void __fastcall OutputDuplRemoteSessionReconnected(unsigned int a1)
{
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  OUTPUTDUPL_MGR *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edi
  __int64 v14; // rax
  _BYTE v15[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v16; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+30h] [rbp-18h]

  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  v5 = RemoteOutputDuplMgr;
  if ( RemoteOutputDuplMgr )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, *((struct _KTHREAD ***)RemoteOutputDuplMgr + 3), v3, v4);
    DXGPUSHLOCK::AcquireExclusive(v16);
    v17 = 2;
    v8 = OUTPUTDUPL_MGR::ReconfigureNumSources(v5, a1, v6, v7);
    v13 = v8;
    if ( v8 != -1073741801 )
    {
      if ( v8 >= 0 )
        goto LABEL_6;
      v14 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      *(_QWORD *)(v14 + 24) = 3636LL;
      WdLogEvent5_WdAssertion(v14);
    }
    if ( v13 < 0 )
    {
LABEL_7:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
      return;
    }
LABEL_6:
    *((_DWORD *)v5 + 12) = 1;
    goto LABEL_7;
  }
}
