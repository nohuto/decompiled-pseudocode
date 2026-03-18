/*
 * XREFs of ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C01C86F8
 * Callers:
 *     OutputDuplRemoteSessionReconnected @ 0x1C01CA4F4 (OutputDuplRemoteSessionReconnected.c)
 * Callees:
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C010744C (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C0170720 (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C01C6184 (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ReconfigureNumSources(OUTPUTDUPL_MGR *this, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rax

  if ( *((_DWORD *)this + 12) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 2445LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( a2 <= 0x10 )
  {
    v7 = 0;
    if ( *((_DWORD *)this + 13) )
    {
      while ( !(unsigned int)OUTPUTDUPL_MGR::QueryActiveContextCount(this, v7) )
      {
        if ( ++v7 >= *((_DWORD *)this + 13) )
          goto LABEL_8;
      }
      v9 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v9 + 24) = 2459LL;
      WdLogEvent5_WdAssertion(v9);
      return 3223192386LL;
    }
    else
    {
LABEL_8:
      OUTPUTDUPL_MGR::DestroySourceContextLists(this);
      *((_DWORD *)this + 13) = a2;
      result = OUTPUTDUPL_MGR::CreateSourceContextLists(this);
      if ( (int)result < 0 )
        *((_DWORD *)this + 13) = 0;
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v5 + 24) = 16LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
  return result;
}
