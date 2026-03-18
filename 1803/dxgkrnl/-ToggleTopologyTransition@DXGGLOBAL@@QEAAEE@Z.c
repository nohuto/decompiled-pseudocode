/*
 * XREFs of ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1C0016AC0
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1C00C4F60 (DxgkCompleteTopologyTransition.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::ToggleTopologyTransition(DXGGLOBAL *this, char a2)
{
  int v2; // ebx
  __int64 v4; // rax

  if ( a2 )
  {
    v2 = _InterlockedIncrement((volatile signed __int32 *)this + 133);
  }
  else
  {
    v2 = _InterlockedDecrement((volatile signed __int32 *)this + 133);
    if ( v2 < 0 )
    {
      v4 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v4 + 24) = 1090LL;
      WdLogEvent5_WdAssertion(v4);
    }
  }
  return v2 != 0;
}
