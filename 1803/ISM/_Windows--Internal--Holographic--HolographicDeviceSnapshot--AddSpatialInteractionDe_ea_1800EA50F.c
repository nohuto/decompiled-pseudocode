/*
 * XREFs of _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDeviceIdMapping_::_1_::catch$4 @ 0x1800EA50F
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180009860 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDeviceIdMapping_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x124,
    (__int64)"onecoreuap\\analog\\input\\common\\inc\\holographicdevicesnapshot.h",
    a4);
  return &loc_1800D323A;
}
