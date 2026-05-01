/*
 * XREFs of _ThumbnailInteropFactoryBase::get_SourceSize_::_1_::catch$0 @ 0x1801A484F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180025434 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ThumbnailInteropFactoryBase::get_SourceSize_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x2B,
                           (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\factory.cpp",
                           a4);
  return &loc_18016787A;
}
