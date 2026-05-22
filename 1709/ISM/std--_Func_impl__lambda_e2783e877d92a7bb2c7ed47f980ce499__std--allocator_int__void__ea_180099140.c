/*
 * XREFs of std::_Func_impl__lambda_e2783e877d92a7bb2c7ed47f980ce499__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_&___ptr64_::_Do_call @ 0x180099140
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckIfHmdNodeIsNeeded@SpatialInputControllerCollection@@AEAAXAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180091F7C (-CheckIfHmdNodeIsNeeded@SpatialInputControllerCollection@@AEAAXAEBVSyncLockCriticalSection@Detai.c)
 *     ?StopTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAXW4StopTrackingReason@12@@Z @ 0x1800C6690 (-StopTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAXW4StopTrackingReason@.c)
 */

void __fastcall std::_Func_impl__lambda_e2783e877d92a7bb2c7ed47f980ce499__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_____ptr64_::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v4; // rdx

  SpatialInteractionDevices::SpatialInteractionController::StopTracking(*a2, 0LL);
  v3 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 8) + 2816LL);
  EnterCriticalSection(v3);
  SpatialInputControllerCollection::CheckIfHmdNodeIsNeeded(*(SpatialInputControllerCollection **)(a1 + 8), v4);
  if ( v3 )
    LeaveCriticalSection(v3);
}
