/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180009B38
 * Callers:
 *     _TestCommandHost::RegisterForTestCommandMessage_::_1_::catch$9 @ 0x1800CCA0B (_TestCommandHost--RegisterForTestCommandMessage_--_1_--catch$9.c)
 *     _TestCommandHost::OnCoreMessageStatic_::_1_::catch$0 @ 0x1800CCAA0 (_TestCommandHost--OnCoreMessageStatic_--_1_--catch$0.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_13d25de601502b3f3668de287f572ce2____::_1_::catch$1 @ 0x1800CFD29 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800CFD29.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDevice_::_1_::catch$2 @ 0x1800CFE08 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialInteractionDevice_--_1_--c.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::RemoveSpatialInteractionDevice_::_1_::catch$1 @ 0x1800CFF56 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--RemoveSpatialInteractionDevice_--_1_.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddTelemetryGuidMapping_::_1_::catch$5 @ 0x1800D1A52 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddTelemetryGuidMapping_--_1_--catch.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialNodeMapping_::_1_::catch$11 @ 0x1800D1A92 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialNodeMapping_--_1_--catch$1.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_879c2317d6bf6f0b2a32d99bde7a5ca8____::_1_::catch$12 @ 0x1800D1D7D (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800D1D7D.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_3f0123449741a7972872694de663f1a4____::_1_::catch$12 @ 0x1800D1DBA (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800D1DBA.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_655459d8a9278a35f42e190c767454a5____::_1_::catch$12 @ 0x1800D1E40 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800D1E40.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_5739becc0e2e945e4356c3e82057fc5a____::_1_::catch$12 @ 0x1800D1E7D (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800D1E7D.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_5564f7cc49d1c2a4f9643868ea1ba7e4____::_1_::catch$12 @ 0x1800D1EBA (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800D1EBA.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDeviceIdMapping_::_1_::catch$3 @ 0x1800D219B (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialInteractionDe_ea_1800D219B.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_c6949bcfd0c51953b572829791967b15____::_1_::catch$45 @ 0x1800D2359 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800D2359.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x180009AD0 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3, (__int64)a4, v5, retaddr, 2);
}
