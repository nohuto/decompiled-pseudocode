/*
 * XREFs of ?GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA?AW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4EDGEUI_TRAYSTUCKPLACE@@_N1@Z @ 0x1800632F0
 * Callers:
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180061DB4 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CortanaDesktopExperienceView::GetBorderFlagFromStuckEdge(__int64 a1, int a2, char a3, char a4)
{
  unsigned int v4; // r10d
  unsigned __int8 v5; // cl
  int v6; // edx
  int v7; // edx
  int v8; // r10d
  int v9; // eax

  v4 = 0;
  if ( *(_BYTE *)(a1 + 205) || (v5 = 1, a4) )
    v5 = 0;
  if ( !a2 )
    return (8 * v5) | 4u;
  v6 = a2 - 1;
  if ( !v6 )
  {
    v8 = a3 != 0 ? 1 : 4;
    v9 = 8 * v5;
    return v9 | (unsigned int)v8;
  }
  v7 = v6 - 1;
  if ( !v7 )
    return (8 * v5) | 1u;
  if ( v7 == 1 )
  {
    v8 = a3 != 0 ? 1 : 4;
    v9 = 2 * v5;
    return v9 | (unsigned int)v8;
  }
  return v4;
}
