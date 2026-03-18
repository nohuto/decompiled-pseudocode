/*
 * XREFs of ?TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ @ 0x1C01AF334
 * Callers:
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C01ABD70 (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 *     ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C01AEB7C (-Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF(
        OUTPUTDUPL_SESSION_MGR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int updated; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  int CurrentProcessSessionId; // [rsp+50h] [rbp+8h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2, a3, a4);
  updated = ZwUpdateWnfStateData(
              &WNF_DX_MODERN_OUTPUTDUPLICATION_CONTEXTS,
              (char *)this + 48,
              392LL,
              0LL,
              &CurrentProcessSessionId,
              0,
              0);
  v8 = updated;
  if ( updated < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdError(v9);
  }
  return (unsigned int)v8;
}
