/*
 * XREFs of ?ShellReadyChanged@CortanaDesktopExperienceView@@EEAAJXZ @ 0x1800C3D20
 * Callers:
 *     <none>
 * Callees:
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800C517C (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ShellReadyChanged(CortanaDesktopExperienceView *this)
{
  CortanaDesktopExperienceView::PostTargetedMessage((char *)this - 72, 1LL);
  return 0LL;
}
