/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180009350
 * Callers:
 *     _Register3DCompositor_::_1_::dtor$0 @ 0x1800E34B7 (_Register3DCompositor_--_1_--dtor$0.c)
 *     _MPC3DStateHelper::On3DCompositorStateChanged_::_1_::dtor$0 @ 0x1800E35E7 (_MPC3DStateHelper--On3DCompositorStateChanged_--_1_--dtor$0.c)
 *     _MPC3DStateHelper::FireEventsOnInputThread_::_1_::dtor$2 @ 0x1800E360B (_MPC3DStateHelper--FireEventsOnInputThread_--_1_--dtor$2.c)
 *     _MPC3DStateHelper::RegisterFor3DCompositorRunningChanged_::_1_::dtor$1 @ 0x1800E36C8 (_MPC3DStateHelper--RegisterFor3DCompositorRunningChanged_--_1_--dtor$1.c)
 *     _NonBamoInputDeliveryServer::Create_::_1_::dtor$0 @ 0x1800E43D4 (_NonBamoInputDeliveryServer--Create_--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$72 @ 0x1800E6318 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$72.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddTelemetryGuidMapping_::_1_::dtor$0 @ 0x1800E97CB (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddTelemetryGuidMapping_--_1_--dtor$.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialNodeMapping_::_1_::dtor$0 @ 0x1800E9817 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialNodeMapping_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle_::_1_::dtor$0 @ 0x1800E9854 (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--OpenDriverHandle_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::PropertyCache::SetValue_::_1_::dtor$0 @ 0x1800E9884 (_Windows--Internal--Holographic--PropertyCache--SetValue_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::NodePropertyCache::SetValue_::_1_::dtor$0 @ 0x1800E98A8 (_Windows--Internal--Holographic--NodePropertyCache--SetValue_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2_::_1_::dtor$40 @ 0x1800E99E8 (_Windows--Internal--Holographic--SpatialGraphDriverClient--PropertyUpdatedListenerT_ea_1800E99E8.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2_::_1_::dtor$5 @ 0x1800E9A00 (_Windows--Internal--Holographic--SpatialGraphDriverClient--PropertyUpdatedListenerT_ea_1800E9A00.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2_::_1_::dtor$255 @ 0x1800E9A24 (_Windows--Internal--Holographic--SpatialGraphDriverClient--PropertyUpdatedListenerT_ea_1800E9A24.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_879c2317d6bf6f0b2a32d99bde7a5ca8____::_1_::dtor$0 @ 0x1800E9D14 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal--Holographic.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_3f0123449741a7972872694de663f1a4____::_1_::dtor$0 @ 0x1800E9D51 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800E9D51.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_2be7d4712709608587fff75dfc19c285____::_1_::dtor$0 @ 0x1800E9D8E (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800E9D8E.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_5739becc0e2e945e4356c3e82057fc5a____::_1_::dtor$0 @ 0x1800E9DCB (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800E9DCB.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_a73491eff03976fcb51e086819273d5b____::_1_::dtor$0 @ 0x1800E9E08 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800E9E08.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDeviceIdMapping_::_1_::dtor$0 @ 0x1800EA503 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialInteractionDeviceIdMapping.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786____::_1_::dtor$0 @ 0x1800EA721 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1800EA721.c)
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
