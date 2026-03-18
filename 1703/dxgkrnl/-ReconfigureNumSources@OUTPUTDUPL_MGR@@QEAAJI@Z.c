/*
 * XREFs of ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C01AE93C
 * Callers:
 *     OutputDuplRemoteSessionReconnected @ 0x1C01B0738 (OutputDuplRemoteSessionReconnected.c)
 * Callees:
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C0101040 (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C0118470 (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C01AC72C (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ReconfigureNumSources(OUTPUTDUPL_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax

  v4 = a2;
  if ( *((_DWORD *)this + 12) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 2364LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( v4 <= 0x10 )
  {
    v9 = 0;
    if ( *((_DWORD *)this + 13) )
    {
      while ( !(unsigned int)OUTPUTDUPL_MGR::QueryActiveContextCount(this, v9, a3, a4) )
      {
        if ( ++v9 >= *((_DWORD *)this + 13) )
          goto LABEL_8;
      }
      v13 = WdLogNewEntry5_WdAssertion(v11, v10, a3, a4);
      *(_QWORD *)(v13 + 24) = 2378LL;
      WdLogEvent5_WdAssertion(v13);
      return 3223192386LL;
    }
    else
    {
LABEL_8:
      OUTPUTDUPL_MGR::DestroySourceContextLists(this);
      *((_DWORD *)this + 13) = v4;
      result = OUTPUTDUPL_MGR::CreateSourceContextLists(this, v12);
      if ( (int)result < 0 )
        *((_DWORD *)this + 13) = 0;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v7 + 24) = 16LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  return result;
}
