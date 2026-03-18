/*
 * XREFs of ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1C00071C4
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1C008CD60 (DxgkCompleteTopologyTransition.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::ToggleTopologyTransition(DXGGLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v6; // rax

  if ( (_BYTE)a2 )
  {
    v4 = _InterlockedIncrement((volatile signed __int32 *)this + 131);
  }
  else
  {
    v4 = _InterlockedDecrement((volatile signed __int32 *)this + 131);
    if ( v4 < 0 )
    {
      v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      *(_QWORD *)(v6 + 24) = 1008LL;
      WdLogEvent5_WdAssertion(v6);
    }
  }
  return v4 != 0;
}
