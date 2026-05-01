/*
 * XREFs of s_ComputeDragVisualDestinationRect @ 0x1802B0104
 * Callers:
 *     ?_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x1802AFB68 (-_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayou.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall s_ComputeDragVisualDestinationRect(_OWORD *a1, _DWORD *a2, __int64 a3)
{
  int v3; // r10d
  int v4; // ecx
  __int64 result; // rax

  *(_OWORD *)a3 = *a1;
  v3 = *(_DWORD *)(a3 + 4);
  v4 = (*(_DWORD *)(a3 + 8) - *(_DWORD *)a3) / 2 - (a2[2] - *a2) / 2 + *(_DWORD *)a3;
  *(_DWORD *)a3 = v4;
  *(_DWORD *)(a3 + 8) = v4 + a2[2] - *a2;
  result = (unsigned int)((*(_DWORD *)(a3 + 12) - v3) / 2 - (a2[3] - a2[1]) / 2);
  *(_DWORD *)(a3 + 4) = result + v3;
  *(_DWORD *)(a3 + 12) = a2[3] + result + v3 - a2[1];
  return result;
}
