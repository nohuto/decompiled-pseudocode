/*
 * XREFs of ?AnalyzeNewMousePosition@CMouseProcessor@@AEBA?AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z @ 0x1C0013AD8
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0014B60 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMouseProcessor::AnalyzeNewMousePosition(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r9
  unsigned int v4; // ecx

  v2 = *(_DWORD **)a2;
  if ( a1[646] == *(_DWORD *)(*(_QWORD *)a2 + 48LL) && a1[647] == v2[13] )
    v4 = 0;
  else
    v4 = 2;
  if ( !v4 && (a1[648] != v2[14] || a1[649] != v2[15]) )
    return 1;
  return v4;
}
