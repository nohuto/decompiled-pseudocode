/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000781C
 * Callers:
 *     _Register3DCompositor_::_1_::dtor$0 @ 0x1800CC60B (_Register3DCompositor_--_1_--dtor$0.c)
 *     _MPC3DStateHelper::On3DCompositorStateChanged_::_1_::dtor$0 @ 0x1800CC732 (_MPC3DStateHelper--On3DCompositorStateChanged_--_1_--dtor$0.c)
 *     _MPC3DStateHelper::FireEventsOnInputThread_::_1_::dtor$2 @ 0x1800CC756 (_MPC3DStateHelper--FireEventsOnInputThread_--_1_--dtor$2.c)
 *     _MPC3DStateHelper::RegisterFor3DCompositorRunningChanged_::_1_::dtor$1 @ 0x1800CC76E (_MPC3DStateHelper--RegisterFor3DCompositorRunningChanged_--_1_--dtor$1.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$83 @ 0x1800CEF8E (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$83.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_13d25de601502b3f3668de287f572ce2____::_1_::dtor$0 @ 0x1800CFD1D (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal--Holographic.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDevice_::_1_::dtor$0 @ 0x1800CFDFC (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialInteractionDevice_--_1_--d.c)
 *     _InputDeliveryServer::Create_::_1_::dtor$0 @ 0x1800D015C (_InputDeliveryServer--Create_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddTelemetryGuidMapping_::_1_::dtor$0 @ 0x1800D1A3A (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddTelemetryGuidMapping_--_1_--dtor$.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialNodeMapping_::_1_::dtor$0 @ 0x1800D1A86 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialNodeMapping_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_879c2317d6bf6f0b2a32d99bde7a5ca8____::_1_::dtor$0 @ 0x1800D1D71 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800D1D71.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_3f0123449741a7972872694de663f1a4____::_1_::dtor$0 @ 0x1800D1DAE (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800D1DAE.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_655459d8a9278a35f42e190c767454a5____::_1_::dtor$0 @ 0x1800D1E34 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800D1E34.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_5739becc0e2e945e4356c3e82057fc5a____::_1_::dtor$0 @ 0x1800D1E71 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800D1E71.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_5564f7cc49d1c2a4f9643868ea1ba7e4____::_1_::dtor$0 @ 0x1800D1EAE (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800D1EAE.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDeviceIdMapping_::_1_::dtor$0 @ 0x1800D218F (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialInteractionDeviceIdMapping.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_c6949bcfd0c51953b572829791967b15____::_1_::dtor$0 @ 0x1800D234D (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800D234D.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
