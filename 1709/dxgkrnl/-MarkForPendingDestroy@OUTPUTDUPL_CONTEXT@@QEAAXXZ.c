/*
 * XREFs of ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C01CC440
 * Callers:
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0090640 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01C55D0 (-Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01C59A8 (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C01CDAAC (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
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
  __int64 v9; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v11; // rdx

  v1 = 0;
  if ( *((_DWORD *)this + 72) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 2370LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 73);
  if ( v5 )
  {
    if ( !*((_DWORD *)this + 76) )
    {
      v7 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v7 + 24) = 2381LL;
      WdLogEvent5_WdAssertion(v7);
    }
    ProcessSessionId = PsGetProcessSessionId(*((_QWORD *)this + 3));
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, ProcessSessionId, v9);
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
          DXGDXGIKEYEDMUTEX::CloseConsumerResources(*((struct _KPROCESS ***)this + v1++ + 6), v11);
        }
        while ( v1 < *((_DWORD *)this + 10) );
      }
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 2376LL;
    WdLogEvent5_WdAssertion(v6);
  }
}
