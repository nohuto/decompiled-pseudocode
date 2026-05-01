/*
 * XREFs of _ThumbnailInteropDevice::OnThumbnailSourceSizeChange_::_1_::catch$12 @ 0x1801A47BF
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800711B8 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ThumbnailInteropDevice::OnThumbnailSourceSizeChange_::_1_::catch_12(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0xC8,
    (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\device.cpp",
    a4);
  return &loc_180166F4F;
}
