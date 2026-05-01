/*
 * XREFs of ?_GetOffsetSourceLocation@CDesktopPositioner@@AEAAXPEBUtagRECT@@U2@UtagSIZE@@2PEAUtagPOINT@@@Z @ 0x1800F50D8
 * Callers:
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x1800F4EFC (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopPositioner::_GetOffsetSourceLocation(
        CDesktopPositioner *this,
        const struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagSIZE a4,
        struct tagSIZE a5,
        struct tagPOINT *a6)
{
  LONG left; // r11d
  LONG top; // ebx
  LONG v9; // edx
  LONG v10; // edx

  left = a3->left;
  top = a3->top;
  *a6 = 0LL;
  a6->x = left;
  a6->y = top;
  if ( a2 )
  {
    v9 = a2->left;
    if ( a4.cx + v9 + a5.cx <= a3->right )
      left = v9;
    v10 = a2->top;
    a6->x = left;
    if ( v10 + a5.cy + a4.cy <= a3->bottom )
      top = v10;
    a6->y = top;
  }
}
