/*
 * XREFs of _lambda_06c7fb13e4115b68176da9e8404c9d66_::operator() @ 0x1C01DBEAC
 * Callers:
 *     ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01DBFA0 (-BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONN.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v6; // rax
  _DWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *result; // rax

  v4 = a2;
  if ( **(_DWORD **)a1 <= **(_DWORD **)(a1 + 8) )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, *(_QWORD *)a1, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *(_DWORD **)a1;
  v8 = (unsigned int)--*v7;
  result = *(_QWORD **)(a1 + 16);
  *(_DWORD *)(*result + 4 * v8) = v4;
  return result;
}
