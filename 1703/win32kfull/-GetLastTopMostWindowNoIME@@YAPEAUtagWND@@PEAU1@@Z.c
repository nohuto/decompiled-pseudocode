/*
 * XREFs of ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C001E954
 * Callers:
 *     ImeSetTopmost @ 0x1C001E790 (ImeSetTopmost.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 */

struct tagWND *__fastcall GetLastTopMostWindowNoIME(struct tagWND *a1, __int64 a2)
{
  __int64 DesktopWindow; // rax
  __int64 v3; // r11
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r8

  DesktopWindow = GetDesktopWindow(a1, a2);
  v4 = 0LL;
  if ( !DesktopWindow )
    return 0LL;
  v5 = *(_QWORD *)(DesktopWindow + 112);
  if ( !v5 )
    return 0LL;
  do
  {
    if ( (*(_BYTE *)(v5 + 64) & 8) == 0 )
      break;
    v6 = *(_QWORD *)(v5 + 168);
    v7 = v5;
    if ( (*(_BYTE *)(v6 + 94) & 1) != 0 || *(_WORD *)(v6 + 8) == *(_WORD *)(gpsi + 882LL) )
    {
      while ( v3 != v7 )
      {
        v7 = *(_QWORD *)(v7 + 120);
        if ( !v7 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v4 = v5;
    }
    v5 = *(_QWORD *)(v5 + 88);
  }
  while ( v5 );
  return (struct tagWND *)v4;
}
