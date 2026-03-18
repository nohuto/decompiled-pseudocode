/*
 * XREFs of ??_GDXGSHAREDVMOBJECT@@AEAAPEAXI@Z @ 0x1C002D524
 * Callers:
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C017B3F4 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DXGSHAREDVMOBJECT::`scalar deleting destructor'(_QWORD *P)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax

  if ( P[1] )
  {
    v2 = WdLogNewEntry5_WdAssertion(P);
    *(_QWORD *)(v2 + 24) = 168LL;
    WdLogEvent5_WdAssertion(v2);
  }
  if ( *((_DWORD *)P + 4) )
  {
    v3 = WdLogNewEntry5_WdAssertion(P);
    *(_QWORD *)(v3 + 24) = 169LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)P + 6) )
  {
    v4 = WdLogNewEntry5_WdAssertion(P);
    *(_QWORD *)(v4 + 24) = 170LL;
    WdLogEvent5_WdAssertion(v4);
  }
  ExFreePoolWithTag(P, 0);
  return P;
}
