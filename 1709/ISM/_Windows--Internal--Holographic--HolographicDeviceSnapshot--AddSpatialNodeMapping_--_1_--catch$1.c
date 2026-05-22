/*
 * XREFs of _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialNodeMapping_::_1_::catch$11 @ 0x1800D1A92
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180009B38 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialNodeMapping_::_1_::catch_11(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 104),
    (void *)0x10A,
    (__int64)"onecoreuap\\analog\\input\\common\\inc\\holographicdevicesnapshot.h",
    a4);
  return &loc_1800B381C;
}
