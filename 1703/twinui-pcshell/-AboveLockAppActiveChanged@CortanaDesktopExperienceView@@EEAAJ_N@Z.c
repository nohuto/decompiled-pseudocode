/*
 * XREFs of ?AboveLockAppActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x1800C3D60
 * Callers:
 *     <none>
 * Callees:
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800C517C (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::AboveLockAppActiveChanged(CortanaDesktopExperienceView *this)
{
  CortanaDesktopExperienceView::PostTargetedMessage((char *)this - 72, 4LL);
  return 0LL;
}
