/*
 * XREFs of ?SetPosition@ViewWrapperBase@@UEAAJPEBUtagRECT@@@Z @ 0x18004F960
 * Callers:
 *     ?SetPosition@DesktopSingleViewShellExperiencePersonality@@UEAAJPEBUtagRECT@@@Z @ 0x18006DE80 (-SetPosition@DesktopSingleViewShellExperiencePersonality@@UEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18004F360 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 */

__int64 __fastcall ViewWrapperBase::SetPosition(ViewWrapperBase *this, const struct tagRECT *a2)
{
  ViewWrapperBase::SetDesiredPosition(
    (__int64)this,
    a2->left,
    a2->top,
    a2->right - a2->left,
    a2->bottom - a2->top,
    3,
    0LL);
  return 0LL;
}
