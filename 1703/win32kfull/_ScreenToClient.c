/*
 * XREFs of _ScreenToClient @ 0x1C0018E14
 * Callers:
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     xxxArrangeIconicWindows @ 0x1C0137030 (xxxArrangeIconicWindows.c)
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0211DE4 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScreenToClient(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = *(_WORD *)(a1 + 82) & 0x3FFF;
  if ( (_DWORD)result != 669 )
  {
    if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 )
      *a2 = *(_DWORD *)(a1 + 152) - *a2;
    else
      *a2 -= *(_DWORD *)(a1 + 144);
    result = *(unsigned int *)(a1 + 148);
    a2[1] -= result;
  }
  return result;
}
