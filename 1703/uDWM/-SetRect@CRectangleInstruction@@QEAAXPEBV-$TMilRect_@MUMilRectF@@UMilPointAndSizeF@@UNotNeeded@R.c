/*
 * XREFs of ?SetRect@CRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800158A4
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z @ 0x180015634 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18003D918 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x18009F618 (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleInstruction::SetRect(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    *(_OWORD *)(a1 + 24) = *a2;
  }
  else
  {
    result = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return result;
}
