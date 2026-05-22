/*
 * XREFs of ?HasDynamicNode@SpatialInteractionController@SpatialInteractionDevices@@QEBA_NXZ @ 0x1800C43BC
 * Callers:
 *     ?CheckIfHmdNodeIsNeeded@SpatialInputControllerCollection@@AEAAXAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180091F7C (-CheckIfHmdNodeIsNeeded@SpatialInputControllerCollection@@AEAAXAEBVSyncLockCriticalSection@Detai.c)
 *     ?DoDeviceRemoval@SpatialInputControllerCollection@@IEAAJK@Z @ 0x1800936F8 (-DoDeviceRemoval@SpatialInputControllerCollection@@IEAAJK@Z.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialInputControllerCollection@@QEAAJK@Z @ 0x180095AA8 (-OnTrackingRequestedHeartbeat@SpatialInputControllerCollection@@QEAAJK@Z.c)
 *     std::_Func_impl__lambda_cb1880b0b6d135697f69bd79e9e60569__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_&___ptr64_::_Do_call @ 0x1800990C0 (std--_Func_impl__lambda_cb1880b0b6d135697f69bd79e9e60569__std--allocator_int__void__ea_1800990C0.c)
 *     std::_Func_impl__lambda_a9ec697dfd51dd949e2095da24ee3cc3__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_&___ptr64_::_Do_call @ 0x180099220 (std--_Func_impl__lambda_a9ec697dfd51dd949e2095da24ee3cc3__std--allocator_int__void__ea_180099220.c)
 * Callees:
 *     <none>
 */

bool __fastcall SpatialInteractionDevices::SpatialInteractionController::HasDynamicNode(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rcx
  bool v3; // bl

  v2 = (RTL_SRWLOCK *)((unsigned __int64)&this[132] & -(__int64)(TryAcquireSRWLockShared(this + 132) != 0));
  v3 = v2 && this[111].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v3;
}
