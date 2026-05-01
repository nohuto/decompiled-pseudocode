/*
 * XREFs of _ThumbnailInteropFactoryBase::CreateThumbnailVisual_::_1_::catch$1 @ 0x1801A488E
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180025434 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ThumbnailInteropFactoryBase::CreateThumbnailVisual_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 144) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0x39,
                            (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\factory.cpp",
                            a4);
  return &loc_180167934;
}
