/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180009860
 * Callers:
 *     _TestCommandHost::RegisterForTestCommandMessage_::_1_::catch$9 @ 0x1800E384E (_TestCommandHost--RegisterForTestCommandMessage_--_1_--catch$9.c)
 *     _TestCommandHost::OnCoreMessageStatic_::_1_::catch$0 @ 0x1800E38E3 (_TestCommandHost--OnCoreMessageStatic_--_1_--catch$0.c)
 *     _ButtonProcessor::OnCameraAccessToggle_::_1_::catch$5 @ 0x1800E8397 (_ButtonProcessor--OnCameraAccessToggle_--_1_--catch$5.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddTelemetryGuidMapping_::_1_::catch$6 @ 0x1800E97E3 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddTelemetryGuidMapping_--_1_--catch.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialNodeMapping_::_1_::catch$13 @ 0x1800E9823 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialNodeMapping_--_1_--catch$1.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_879c2317d6bf6f0b2a32d99bde7a5ca8____::_1_::catch$14 @ 0x1800E9D20 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800E9D20.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_3f0123449741a7972872694de663f1a4____::_1_::catch$14 @ 0x1800E9D5D (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800E9D5D.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_2be7d4712709608587fff75dfc19c285____::_1_::catch$14 @ 0x1800E9D9A (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800E9D9A.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_5739becc0e2e945e4356c3e82057fc5a____::_1_::catch$14 @ 0x1800E9DD7 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800E9DD7.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_a73491eff03976fcb51e086819273d5b____::_1_::catch$14 @ 0x1800E9E14 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800E9E14.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDeviceIdMapping_::_1_::catch$4 @ 0x1800EA50F (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialInteractionDe_ea_1800EA50F.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786____::_1_::catch$50 @ 0x1800EA72D (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800EA72D.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800097F8 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
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
