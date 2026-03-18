/*
 * XREFs of ?TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ @ 0x1C01CC410
 * Callers:
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C01C8244 (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 *     ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C01CBAC0 (-Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF(OUTPUTDUPL_SESSION_MGR *this)
{
  int updated; // eax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  int CurrentProcessSessionId; // [rsp+50h] [rbp+8h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this);
  updated = ZwUpdateWnfStateData(
              &WNF_DX_MODERN_OUTPUTDUPLICATION_CONTEXTS,
              (char *)this + 48,
              392LL,
              0LL,
              &CurrentProcessSessionId,
              0,
              0);
  v4 = updated;
  if ( updated < 0 )
  {
    v5 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v5 + 24) = v4;
    WdLogEvent5_WdError(v5);
  }
  return (unsigned int)v4;
}
