/*
 * XREFs of ?ReleaseNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x1800D920C
 * Callers:
 *     ??1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800D5E1C (--1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ?StopTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJW4StopTrackingReason@234@PEAUISpatialLocatorStaticsInternal@3Spatial@Perception@4@@Z @ 0x1800D8790 (-StopTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJW4St.c)
 * Callees:
 *     ?ReleaseNodePropertyChangedHandlerUnderLock@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800D925C (-ReleaseNodePropertyChangedHandlerUnderLock@SpatialInteractionSourceController@SpatialInteractio.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandler(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v3; // rdx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 888);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 888));
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandlerUnderLock(
    this,
    v3);
  if ( v2 )
    LeaveCriticalSection(v2);
}
