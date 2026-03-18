/*
 * XREFs of ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C01D267C
 * Callers:
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C00E2D74 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01C8054 (-Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01C8438 (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C01D3CE8 (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::MarkForPendingDestroy(OUTPUTDUPL_CONTEXT *this)
{
  unsigned int v1; // edi
  __int64 v3; // rax
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int ProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v10; // rdx

  v1 = 0;
  if ( *((_DWORD *)this + 72) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 2371LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 74);
  if ( v5 )
  {
    if ( !*((_DWORD *)this + 76) )
    {
      v7 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v7 + 24) = 2382LL;
      WdLogEvent5_WdAssertion(v7);
    }
    ProcessSessionId = PsGetProcessSessionId(*((_QWORD *)this + 3));
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, ProcessSessionId);
    OUTPUTDUPL_CONTEXT::ReleaseSessionReference(this, SessionDataForSpecifiedSession);
    *((_DWORD *)this + 76) = 0;
    if ( !*((_DWORD *)this + 72) )
    {
      *((_DWORD *)this + 72) = 1;
      if ( *((_DWORD *)this + 10) )
      {
        do
        {
          DXGDXGIKEYEDMUTEX::Abandon(*((DXGDXGIKEYEDMUTEX **)this + v1 + 6));
          DXGDXGIKEYEDMUTEX::CloseConsumerResources(*((struct _KPROCESS ***)this + v1++ + 6), v10);
        }
        while ( v1 < *((_DWORD *)this + 10) );
      }
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 2377LL;
    WdLogEvent5_WdAssertion(v6);
  }
}
