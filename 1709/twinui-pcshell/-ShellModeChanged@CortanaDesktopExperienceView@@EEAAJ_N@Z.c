/*
 * XREFs of ?ShellModeChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x1800D5B90
 * Callers:
 *     <none>
 * Callees:
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800D6FFC (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ShellModeChanged(CortanaDesktopExperienceView *this)
{
  CortanaDesktopExperienceView::PostTargetedMessage((char *)this - 72, 0LL);
  return 0LL;
}
