/*
 * XREFs of _DesktopBackgroundFactory::CreateThumbnailVisual_::_1_::catch$5 @ 0x1801A4AD6
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180025434 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall DesktopBackgroundFactory::CreateThumbnailVisual_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 136),
                           (void *)0x44,
                           (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\desktopbackgroundfactory.cpp",
                           a4);
  return &loc_180169190;
}
