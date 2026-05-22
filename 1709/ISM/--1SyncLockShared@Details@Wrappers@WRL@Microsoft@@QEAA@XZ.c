/*
 * XREFs of ??1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18009960C
 * Callers:
 *     _SpatialInteractionDevices::SpatialInteractionController::TryUpdatePose_::_1_::dtor$0 @ 0x1800D22C9 (_SpatialInteractionDevices--SpatialInteractionController--TryUpdatePose_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockShared::~SyncLockShared(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockShared(v2);
    *this = 0LL;
  }
}
