/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180078080
 * Callers:
 *     _SpatialInteractionDevice::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x1800CFD01 (_SpatialInteractionDevice--_scalar_deleting_destructor__--_1_--dtor$1.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$0 @ 0x1800D0B1C (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryProperties_--_1.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$1 @ 0x1800D0B2C (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1800D0B2C.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$2 @ 0x1800D0B3C (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1800D0B3C.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$3 @ 0x1800D0B4C (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1800D0B4C.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$4 @ 0x1800D0B5C (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1800D0B5C.c)
 *     _EnumerateDevices_::_1_::dtor$2 @ 0x1800D0BA8 (_EnumerateDevices_--_1_--dtor$2.c)
 *     _SpatialInputControllerCollection::SpatialInputControllerCollection_::_1_::dtor$9 @ 0x1800D0CF7 (_SpatialInputControllerCollection--SpatialInputControllerCollection_--_1_--dtor$9.c)
 *     _SpatialInputControllerCollection::OnDisplayChanged_::_1_::dtor$0 @ 0x1800D0F2F (_SpatialInputControllerCollection--OnDisplayChanged_--_1_--dtor$0.c)
 *     _SpatialInputControllerCollection::OnDisplayChanged_::_1_::dtor$1 @ 0x1800D0F3B (_SpatialInputControllerCollection--OnDisplayChanged_--_1_--dtor$1.c)
 *     _SpatialInputControllerCollection::TryUpdateControllerNodeReference_::_1_::dtor$2 @ 0x1800D0FE3 (_SpatialInputControllerCollection--TryUpdateControllerNodeReference_--_1_--dtor$2.c)
 *     _GetUInt64KeyFromUInt64Value_::_1_::dtor$6 @ 0x1800D1551 (_GetUInt64KeyFromUInt64Value_--_1_--dtor$6.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::SpatialGraphDriverHandleWrapper_::_1_::dtor$3 @ 0x1800D1BB8 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--SpatialGraphDriverHandleWrappe.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReferenceWithState_::_1_::dtor$2 @ 0x1800D1CC4 (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--CreateDynamicNod_ea_1800D1CC4.c)
 *     _SpatialInteractionDevices::SpatialInteractionController::_SpatialInteractionController_::_1_::dtor$2 @ 0x1800D2233 (_SpatialInteractionDevices--SpatialInteractionController--_SpatialInteractionContro_ea_1800D2233.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
