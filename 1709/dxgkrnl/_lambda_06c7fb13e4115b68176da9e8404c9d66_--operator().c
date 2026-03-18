/*
 * XREFs of _lambda_06c7fb13e4115b68176da9e8404c9d66_::operator() @ 0x1C01F47C4
 * Callers:
 *     ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01F48C8 (-BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONN.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()(__int64 a1, int a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *result; // rax

  if ( **(_DWORD **)a1 <= **(_DWORD **)(a1 + 8) )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *(_DWORD **)a1;
  v6 = (unsigned int)--*v5;
  result = *(_QWORD **)(a1 + 16);
  *(_DWORD *)(*result + 4 * v6) = a2;
  return result;
}
