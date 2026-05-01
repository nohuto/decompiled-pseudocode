/*
 * XREFs of _ThumbnailInteropDevice::RemoveThumbnailEventHandler_::_1_::catch$37 @ 0x1801A478C
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180025434 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ThumbnailInteropDevice::RemoveThumbnailEventHandler_::_1_::catch_37(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x70,
                           (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\device.cpp",
                           a4);
  return &loc_180166D16;
}
