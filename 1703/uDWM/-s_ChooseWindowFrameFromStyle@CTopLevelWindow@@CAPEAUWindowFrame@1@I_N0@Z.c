/*
 * XREFs of ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18001532C
 * Callers:
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x180027A50 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x1800293B0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetCornerRadius@CTopLevelWindow@@QEBAHXZ @ 0x180080508 (-GetCornerRadius@CTopLevelWindow@@QEBAHXZ.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x180080744 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     IsOpenThemeDataPresent @ 0x18004D268 (IsOpenThemeDataPresent.c)
 */

struct CTopLevelWindow::WindowFrame *__fastcall CTopLevelWindow::s_ChooseWindowFrameFromStyle(
        char a1,
        char a2,
        char a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  char v8; // al
  __int64 v9; // r9

  v3 = 2;
  v4 = a1 & 2;
  v8 = IsOpenThemeDataPresent();
  v9 = 0LL;
  if ( v8 && (a1 & 6) != 0 || a2 )
  {
    if ( (a1 & 0x20) != 0 )
    {
      if ( !a3 && (a1 & 0x40) == 0 )
        v3 = 3;
    }
    else if ( a3 || (a1 & 0x40) != 0 )
    {
      v3 = v4 != 0 ? 4 : 0;
    }
    else
    {
      v3 = v4 != 0 ? 5 : 1;
    }
    return *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8LL * v3);
  }
  return (struct CTopLevelWindow::WindowFrame *)v9;
}
