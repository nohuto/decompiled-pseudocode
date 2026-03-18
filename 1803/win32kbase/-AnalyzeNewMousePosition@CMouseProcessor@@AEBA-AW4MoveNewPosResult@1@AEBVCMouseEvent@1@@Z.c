/*
 * XREFs of ?AnalyzeNewMousePosition@CMouseProcessor@@AEBA?AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z @ 0x1C0037598
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0037E1C (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMouseProcessor::AnalyzeNewMousePosition(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r9
  unsigned int v4; // ecx

  v2 = *(_DWORD **)a2;
  if ( a1[610] == *(_DWORD *)(*(_QWORD *)a2 + 48LL) && a1[611] == v2[13] )
    v4 = 0;
  else
    v4 = 2;
  if ( !v4 && (a1[612] != v2[14] || a1[613] != v2[15]) )
    return 1;
  return v4;
}
