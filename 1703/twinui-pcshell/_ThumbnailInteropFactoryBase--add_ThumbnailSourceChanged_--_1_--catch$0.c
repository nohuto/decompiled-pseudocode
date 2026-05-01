/*
 * XREFs of _ThumbnailInteropFactoryBase::add_ThumbnailSourceChanged_::_1_::catch$0 @ 0x1801A48C4
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180025434 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ThumbnailInteropFactoryBase::add_ThumbnailSourceChanged_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 72) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x40,
                           (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\factory.cpp",
                           a4);
  return &loc_1801679FC;
}
