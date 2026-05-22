/*
 * XREFs of std::_Func_impl__lambda_a9ec697dfd51dd949e2095da24ee3cc3__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_&___ptr64_::_Do_call @ 0x180099220
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableHeadEventHandler@SpatialInputControllerCollection@@AEAAXXZ @ 0x180091E54 (-DisableHeadEventHandler@SpatialInputControllerCollection@@AEAAXXZ.c)
 *     ?CheckIfHmdNodeIsNeeded@SpatialInputControllerCollection@@AEAAXAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180091F7C (-CheckIfHmdNodeIsNeeded@SpatialInputControllerCollection@@AEAAXAEBVSyncLockCriticalSection@Detai.c)
 *     ?HasDynamicNode@SpatialInteractionController@SpatialInteractionDevices@@QEBA_NXZ @ 0x1800C43BC (-HasDynamicNode@SpatialInteractionController@SpatialInteractionDevices@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Func_impl__lambda_a9ec697dfd51dd949e2095da24ee3cc3__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_____ptr64_::_Do_call(
        __int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // r15
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v4; // rdx
  __int64 *OwningThread; // rdi
  __int64 *v6; // rbx
  SpatialInteractionDevices::SpatialInteractionController *v7; // rcx
  __int64 *v8; // rax
  __int64 *i; // rax

  v2 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 8) + 2816LL);
  EnterCriticalSection(v2);
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 8);
  EnterCriticalSection(v3 + 69);
  OwningThread = (__int64 *)v3[71].OwningThread;
  v6 = (__int64 *)*OwningThread;
  while ( v6 != OwningThread )
  {
    v7 = (SpatialInteractionDevices::SpatialInteractionController *)v6[5];
    if ( !*((_BYTE *)v7 + 1088)
      && (*((_BYTE *)v7 + 800) || SpatialInteractionDevices::SpatialInteractionController::HasDynamicNode(v7)) )
    {
      goto LABEL_16;
    }
    if ( !*((_BYTE *)v6 + 25) )
    {
      v8 = (__int64 *)v6[2];
      if ( *((_BYTE *)v8 + 25) )
      {
        for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v6 = i;
        v6 = i;
      }
      else
      {
        do
        {
          v6 = v8;
          v8 = (__int64 *)*v8;
        }
        while ( !*((_BYTE *)v8 + 25) );
      }
    }
  }
  SpatialInputControllerCollection::DisableHeadEventHandler(v3);
LABEL_16:
  if ( v3 != (struct _RTL_CRITICAL_SECTION *)-2760LL )
    LeaveCriticalSection(v3 + 69);
  SpatialInputControllerCollection::CheckIfHmdNodeIsNeeded(*(SpatialInputControllerCollection **)(a1 + 8), v4);
  if ( v2 )
    LeaveCriticalSection(v2);
}
