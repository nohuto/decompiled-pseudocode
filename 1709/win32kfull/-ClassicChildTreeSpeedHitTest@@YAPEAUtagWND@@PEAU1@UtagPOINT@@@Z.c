/*
 * XREFs of ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C005E58C
 * Callers:
 *     xxxSpeedHitTest @ 0x1C005DC7C (xxxSpeedHitTest.c)
 *     xxxDCompSpeedHitTest @ 0x1C005DFBC (xxxDCompSpeedHitTest.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C005E58C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     TouchTargetChildTree @ 0x1C01D5E48 (TouchTargetChildTree.c)
 * Callees:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C005E58C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     LayerHitTest @ 0x1C011678C (LayerHitTest.c)
 */

struct tagWND *__fastcall ClassicChildTreeSpeedHitTest(struct tagWND *a1, struct tagPOINT a2)
{
  __int64 v2; // rdi
  LONG y; // esi
  __int64 v6; // rcx
  struct tagWND *result; // rax

  v2 = *((_QWORD *)a1 + 14);
  if ( !v2 )
    return a1;
  y = a2.y;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v2 + 71) & 0x10) != 0
      && a2.x >= *(_DWORD *)(v2 + 128)
      && a2.x < *(_DWORD *)(v2 + 136)
      && y >= *(_DWORD *)(v2 + 132)
      && y < *(_DWORD *)(v2 + 140) )
    {
      v6 = *(_QWORD *)(v2 + 216);
      if ( (!v6 || (unsigned int)GrePtInRegion(v6, (unsigned int)a2.x, (unsigned int)y))
        && ((*(_BYTE *)(v2 + 66) & 8) == 0
         || (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))LayerHitTest)(v2, a2)) )
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
