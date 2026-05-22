/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180066518
 * Callers:
 *     _SpatialInputControllerHeadEventHandler::SetOwner_::_1_::dtor$0 @ 0x1800CF960 (_SpatialInputControllerHeadEventHandler--SetOwner_--_1_--dtor$0.c)
 *     __lambda_4a72313d4a7b8def72ed26018d805a27_::_lambda_invoker_cdecl__::_1_::dtor$2 @ 0x1800D0C2F (__lambda_4a72313d4a7b8def72ed26018d805a27_--_lambda_invoker_cdecl__--_1_--dtor$2.c)
 *     _SpatialInputControllerCollection::OnFinalRelease_::_1_::dtor$0 @ 0x1800D0DF3 (_SpatialInputControllerCollection--OnFinalRelease_--_1_--dtor$0.c)
 *     _SpatialInputControllerCollection::DoDeviceRemoval_::_1_::dtor$3 @ 0x1800D0E6B (_SpatialInputControllerCollection--DoDeviceRemoval_--_1_--dtor$3.c)
 *     _SpatialInputControllerCollection::AddDeviceToCache_::_1_::dtor$1 @ 0x1800D0E9B (_SpatialInputControllerCollection--AddDeviceToCache_--_1_--dtor$1.c)
 *     _SpatialInputControllerCollection::SendTrackedNodesUpdates_::_1_::dtor$2 @ 0x1800D0F23 (_SpatialInputControllerCollection--SendTrackedNodesUpdates_--_1_--dtor$2.c)
 *     _SpatialInputControllerCollection::OnDisplayChanged_::_1_::dtor$10 @ 0x1800D0FA7 (_SpatialInputControllerCollection--OnDisplayChanged_--_1_--dtor$10.c)
 *     _SpatialInputControllerCollection::EnsureHmdNode_::_1_::dtor$0 @ 0x1800D0FB3 (_SpatialInputControllerCollection--EnsureHmdNode_--_1_--dtor$0.c)
 *     _SpatialInputControllerCollection::TryUpdateControllerNodeReference_::_1_::dtor$3 @ 0x1800D0FEF (_SpatialInputControllerCollection--TryUpdateControllerNodeReference_--_1_--dtor$3.c)
 *     _SpatialInputControllerCollection::TryUpdateControllerNodeReference_::_1_::dtor$4 @ 0x1800D0FFB (_SpatialInputControllerCollection--TryUpdateControllerNodeReference_--_1_--dtor$4.c)
 *     _SpatialInputControllerCollection::SetInputDeviceHapticsFeedback_::_1_::dtor$6 @ 0x1800D101F (_SpatialInputControllerCollection--SetInputDeviceHapticsFeedback_--_1_--dtor$6.c)
 *     _SpatialInputControllerCollection::QueueWorkItem_::_1_::dtor$1 @ 0x1800D104F (_SpatialInputControllerCollection--QueueWorkItem_--_1_--dtor$1.c)
 *     _std::_Func_impl__lambda_a9ec697dfd51dd949e2095da24ee3cc3__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_&___ptr64_::_Do_call_::_1_::dtor$9 @ 0x1800D123C (_std--_Func_impl__lambda_a9ec697dfd51dd949e2095da24ee3cc3__std--allocator_int__void_std--shared_.c)
 *     _std::_Func_impl__lambda_a9ec697dfd51dd949e2095da24ee3cc3__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_&___ptr64_::_Do_call_::_1_::dtor$10 @ 0x1800D1248 (_std--_Func_impl__lambda_a9ec697dfd51dd949e2095da24ee3cc3__std--allocator_int__void_ea_1800D1248.c)
 *     _WGIRawInputProvider::OnRawGameControllerAdded_::_1_::dtor$0 @ 0x1800D136B (_WGIRawInputProvider--OnRawGameControllerAdded_--_1_--dtor$0.c)
 *     _WGIRawInputProvider::OnRawGameControllerRemoved_::_1_::dtor$0 @ 0x1800D13B6 (_WGIRawInputProvider--OnRawGameControllerRemoved_--_1_--dtor$0.c)
 *     _WGIRawInputProvider::OnUserProfileChanged_impl_::_1_::dtor$0 @ 0x1800D13C2 (_WGIRawInputProvider--OnUserProfileChanged_impl_--_1_--dtor$0.c)
 *     _WGIRawInputProvider::StartRawGameControllerWatcher_::_1_::dtor$4 @ 0x1800D13FE (_WGIRawInputProvider--StartRawGameControllerWatcher_--_1_--dtor$4.c)
 *     _SpatialInteractionDevices::SpatialInteractionController::SetHapticsFeedback_::_1_::dtor$0 @ 0x1800D22ED (_SpatialInteractionDevices--SpatialInteractionController--SetHapticsFeedback_--_1_--dtor$0.c)
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
