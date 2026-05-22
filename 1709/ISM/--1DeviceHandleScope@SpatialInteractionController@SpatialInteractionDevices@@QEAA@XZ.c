/*
 * XREFs of ??1DeviceHandleScope@SpatialInteractionController@SpatialInteractionDevices@@QEAA@XZ @ 0x1800C6CAC
 * Callers:
 *     ?EndPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ @ 0x1800C4510 (-EndPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ.c)
 *     ?SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z @ 0x1800C685C (-SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z.c)
 *     ?StopHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800C6B54 (-StopHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@AEAAJAEBVSyncLockCr.c)
 *     _SpatialInteractionDevices::SpatialInteractionController::EndPrepareParsing_::_1_::dtor$1 @ 0x1800D22B1 (_SpatialInteractionDevices--SpatialInteractionController--EndPrepareParsing_--_1_--dtor$1.c)
 *     _SpatialInteractionDevices::SpatialInteractionController::SetHapticsFeedback_::_1_::dtor$2 @ 0x1800D2305 (_SpatialInteractionDevices--SpatialInteractionController--SetHapticsFeedback_--_1_--dtor$2.c)
 *     _SpatialInteractionDevices::SpatialInteractionController::StopHapticsFeedback_::_1_::dtor$0 @ 0x1800D2311 (_SpatialInteractionDevices--SpatialInteractionController--StopHapticsFeedback_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpatialInteractionDevices::SpatialInteractionController::DeviceHandleScope::~DeviceHandleScope(
        SpatialInteractionDevices::SpatialInteractionController::DeviceHandleScope *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 160LL))(v2);
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
