/*
 * XREFs of _SpatialInteractionDevices::PrepareSpatialInteractionDeviceParsing_::_1_::catch$105 @ 0x1800E8CA9
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180082ECC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall SpatialInteractionDevices::PrepareSpatialInteractionDeviceParsing_::_1_::catch_105(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 240) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 232),
                            (void *)0x494,
                            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                            a4);
  return &loc_18009F1DD;
}
