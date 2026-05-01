/*
 * XREFs of _ThumbnailInteropDevice::AddThumbnailEventHandler_::_1_::catch$19 @ 0x1801A4759
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180025434 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ThumbnailInteropDevice::AddThumbnailEventHandler_::_1_::catch_19(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 72) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x68,
                           (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\device.cpp",
                           a4);
  return &loc_180166BF0;
}
