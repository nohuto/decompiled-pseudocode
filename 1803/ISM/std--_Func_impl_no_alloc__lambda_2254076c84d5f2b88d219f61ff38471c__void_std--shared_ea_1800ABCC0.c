/*
 * XREFs of std::_Func_impl_no_alloc__lambda_2254076c84d5f2b88d219f61ff38471c__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800ABCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckIfHmdNodeIsNeeded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800A8D1C (-CheckIfHmdNodeIsNeeded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_2254076c84d5f2b88d219f61ff38471c__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_____ptr64_::_Do_call(
        __int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v3; // rdx

  v2 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 8) + 424LL);
  EnterCriticalSection(v2);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::CheckIfHmdNodeIsNeeded(
    *(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection **)(a1 + 8),
    v3);
  if ( v2 )
    LeaveCriticalSection(v2);
}
