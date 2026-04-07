/*
 * XREFs of ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x180033750
 * Callers:
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001B868 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x18001C400 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DD20 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetCornerRadius@CTopLevelWindow@@QEBAHXZ @ 0x180081A50 (-GetCornerRadius@CTopLevelWindow@@QEBAHXZ.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x180081C8C (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     IsOpenThemeDataPresent @ 0x1800494F0 (IsOpenThemeDataPresent.c)
 */

struct CTopLevelWindow::WindowFrame *__fastcall CTopLevelWindow::s_ChooseWindowFrameFromStyle(
        __int64 a1,
        __int64 a2,
        char a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  char v6; // r14
  char v7; // si
  char v8; // al
  __int64 v9; // r9

  v3 = 2;
  v4 = a1 & 2;
  v6 = a2;
  v7 = a1;
  v8 = IsOpenThemeDataPresent(a1, a2);
  v9 = 0LL;
  if ( v8 && (v7 & 6) != 0 || v6 )
  {
    if ( (v7 & 0x20) != 0 )
    {
      if ( !a3 && (v7 & 0x40) == 0 )
        v3 = 3;
    }
    else if ( a3 || (v7 & 0x40) != 0 )
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
