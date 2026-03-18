/*
 * XREFs of ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C0062A4C
 * Callers:
 *     xxxSpeedHitTest @ 0x1C005F884 (xxxSpeedHitTest.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C0062A4C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     xxxDCompSpeedHitTest @ 0x1C00B6DB8 (xxxDCompSpeedHitTest.c)
 *     TouchTargetChildTree @ 0x1C01D1850 (TouchTargetChildTree.c)
 * Callees:
 *     LayerHitTest @ 0x1C0003B34 (LayerHitTest.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C0062A4C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 */

struct tagWND *__fastcall ClassicChildTreeSpeedHitTest(struct tagWND *a1, struct tagPOINT a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  struct tagWND *result; // rax
  LONG y; // [rsp+3Ch] [rbp+14h]

  y = a2.y;
  v2 = *((_QWORD *)a1 + 14);
  if ( !v2 )
    return a1;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v2 + 71) & 0x10) != 0
      && a2.x >= *(_DWORD *)(v2 + 128)
      && a2.x < *(_DWORD *)(v2 + 136)
      && y >= *(_DWORD *)(v2 + 132)
      && y < *(_DWORD *)(v2 + 140) )
    {
      v5 = *(_QWORD *)(v2 + 216);
      if ( (!v5 || (unsigned int)GrePtInRegion(v5, (unsigned int)a2.x, (unsigned int)y))
        && ((*(_BYTE *)(v2 + 66) & 8) == 0 || LayerHitTest(v2, *(_QWORD *)&a2)) )
      {
        break;
      }
    }
    v2 = *(_QWORD *)(v2 + 88);
    if ( !v2 )
      return a1;
  }
  if ( !*(_QWORD *)(v2 + 112) )
    return (struct tagWND *)v2;
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v2 + 144, a2) )
    return (struct tagWND *)v2;
  result = ClassicChildTreeSpeedHitTest((struct tagWND *)v2, a2);
  if ( !result || result == (struct tagWND *)v2 )
    return (struct tagWND *)v2;
  return result;
}
