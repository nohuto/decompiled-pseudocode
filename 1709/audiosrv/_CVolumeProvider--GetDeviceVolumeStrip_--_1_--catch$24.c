/*
 * XREFs of _CVolumeProvider::GetDeviceVolumeStrip_::_1_::catch$24 @ 0x180037C38
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18006F1C8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CVolumeProvider::GetDeviceVolumeStrip_::_1_::catch_24(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 128) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 120),
                            (void *)0xAB,
                            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
                            a4);
  return &loc_1800093A8;
}
