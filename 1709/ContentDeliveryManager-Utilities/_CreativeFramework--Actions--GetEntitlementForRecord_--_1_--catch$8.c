/*
 * XREFs of _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$8 @ 0x1800B9B1A
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180044FEC (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NI@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEBQEB_W0AEA_N$$QEAI@Z @ 0x1800739F4 (--$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NI@ContentDeliveryManagerTelemetry@Back.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch_8(
        wil *a1,
        __int64 a2,
        unsigned int a3)
{
  *(_DWORD *)(a2 + 52) = wil::ResultFromCaughtException(a1, (void *)a2, a3);
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int>(
    *(const WCHAR ***)(a2 + 64),
    *(const WCHAR ***)(a2 + 56),
    a2 + 48,
    a2 + 52);
  *(_BYTE *)(a2 + 48) = 1;
  return &loc_180072598;
}
