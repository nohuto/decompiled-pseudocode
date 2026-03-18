/*
 * XREFs of ?AnalyzeNewMousePosition@CMouseProcessor@@AEBA?AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z @ 0x1C004545C
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0045DB0 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMouseProcessor::AnalyzeNewMousePosition(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r9
  unsigned int v3; // r8d

  v2 = *(_DWORD **)a2;
  v3 = 0;
  if ( a1[608] == *(_DWORD *)(*(_QWORD *)a2 + 48LL) && a1[609] == v2[13] )
  {
    if ( a1[610] != v2[14] || a1[611] != v2[15] )
      return 1;
  }
  else
  {
    return 2;
  }
  return v3;
}
