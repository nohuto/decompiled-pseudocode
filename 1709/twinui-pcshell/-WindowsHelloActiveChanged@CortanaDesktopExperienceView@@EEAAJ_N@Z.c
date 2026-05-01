/*
 * XREFs of ?WindowsHelloActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x1800D5C10
 * Callers:
 *     <none>
 * Callees:
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800D6FFC (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::WindowsHelloActiveChanged(CortanaDesktopExperienceView *this, char a2)
{
  if ( a2 )
    CortanaDesktopExperienceView::PostTargetedMessage((char *)this - 72, 5LL);
  return 0LL;
}
