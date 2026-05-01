/*
 * XREFs of ?ShellModeChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x180187530
 * Callers:
 *     <none>
 * Callees:
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180186DC8 (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ShellModeChanged(
        CortanaDesktopExperienceView *this,
        unsigned __int8 a2)
{
  CortanaDesktopExperienceView::PostTargetedMessage((__int64)this - 72, 0, a2);
  return 0LL;
}
