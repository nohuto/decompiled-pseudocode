/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18005D880
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandler_::_1_::dtor$0 @ 0x1800E6A9F (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--ReleaseNodeProperty.c)
 *     __lambda_d0d2654579e51c48938f80222ded4916_::_lambda_invoker_cdecl__::_1_::dtor$2 @ 0x1800E737A (__lambda_d0d2654579e51c48938f80222ded4916_--_lambda_invoker_cdecl__--_1_--dtor$2.c)
 *     _SpatialRimDeviceCollection::DisableHeadEventHandler_::_1_::dtor$0 @ 0x1800E7386 (_SpatialRimDeviceCollection--DisableHeadEventHandler_--_1_--dtor$0.c)
 *     _WGIRawInputProvider::OnRawGameControllerAdded_::_1_::dtor$0 @ 0x1800E74EC (_WGIRawInputProvider--OnRawGameControllerAdded_--_1_--dtor$0.c)
 *     __lambda_df3ea2b2c6b3ab40825ce20637938084_::operator()_::_1_::dtor$0 @ 0x1800E757A (__lambda_df3ea2b2c6b3ab40825ce20637938084_--operator()_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EnsureDynamicNodeForDevice_::_1_::dtor$0 @ 0x1800E7586 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--EnsureDynamicNodeFo.c)
 *     _WGIRawInputProvider::StartRawGameControllerWatcher_::_1_::dtor$4 @ 0x1800E75C2 (_WGIRawInputProvider--StartRawGameControllerWatcher_--_1_--dtor$4.c)
 *     _ButtonProcessor::QueueWorkItem_::_1_::dtor$1 @ 0x1800E8288 (_ButtonProcessor--QueueWorkItem_--_1_--dtor$1.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddDeviceToCache_::_1_::dtor$0 @ 0x1800E8E8F (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--AddDeviceToCa.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem_::_1_::dtor$1 @ 0x1800E8EDA (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E8EDA.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged_::_1_::dtor$10 @ 0x1800E8FBA (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E8FBA.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureHmdNode_::_1_::dtor$0 @ 0x1800E8FC6 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--EnsureHmdNode.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState_::_1_::dtor$3 @ 0x1800E9002 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E9002.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState_::_1_::dtor$4 @ 0x1800E900E (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E900E.c)
 *     _Windows::Internal::SpatialInteractions::HapticsEngine::StartFeedback_::_1_::dtor$0 @ 0x1800EA62E (_Windows--Internal--SpatialInteractions--HapticsEngine--StartFeedback_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetHapticsFeedback_::_1_::dtor$0 @ 0x1800EA6CD (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--SetHapticsFeedback_.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::StopHapticsFeedback_::_1_::dtor$0 @ 0x1800EA6E5 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--StopHapticsFeedback.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::StopHapticsFeedback_::_1_::dtor$1 @ 0x1800EA6F1 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--StopHa_ea_1800EA6F1.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
