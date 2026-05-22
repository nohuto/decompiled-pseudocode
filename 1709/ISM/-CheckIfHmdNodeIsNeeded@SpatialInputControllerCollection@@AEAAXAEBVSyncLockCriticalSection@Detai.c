/*
 * XREFs of ?CheckIfHmdNodeIsNeeded@SpatialInputControllerCollection@@AEAAXAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180091F7C
 * Callers:
 *     std::_Func_impl__lambda_e2783e877d92a7bb2c7ed47f980ce499__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_&___ptr64_::_Do_call @ 0x180099140 (std--_Func_impl__lambda_e2783e877d92a7bb2c7ed47f980ce499__std--allocator_int__void__ea_180099140.c)
 *     std::_Func_impl__lambda_a9ec697dfd51dd949e2095da24ee3cc3__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_&___ptr64_::_Do_call @ 0x180099220 (std--_Func_impl__lambda_a9ec697dfd51dd949e2095da24ee3cc3__std--allocator_int__void__ea_180099220.c)
 * Callees:
 *     ?HasDynamicNode@SpatialInteractionController@SpatialInteractionDevices@@QEBA_NXZ @ 0x1800C43BC (-HasDynamicNode@SpatialInteractionController@SpatialInteractionDevices@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SpatialInputControllerCollection::CheckIfHmdNodeIsNeeded(
        SpatialInputControllerCollection *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2)
{
  __int64 *v2; // rdi
  __int64 *v4; // rbx
  SpatialInteractionDevices::SpatialInteractionController *v5; // rcx
  __int64 *v6; // rax
  __int64 *i; // rax
  __int64 *v8; // rax
  __int64 v9; // rbx
  char v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 357);
  v4 = (__int64 *)*v2;
  while ( v4 != v2 )
  {
    v5 = (SpatialInteractionDevices::SpatialInteractionController *)v4[5];
    if ( !*((_BYTE *)v5 + 1088)
      && (*((_BYTE *)v5 + 800) || SpatialInteractionDevices::SpatialInteractionController::HasDynamicNode(v5)) )
    {
      return;
    }
    if ( !*((_BYTE *)v4 + 25) )
    {
      v6 = (__int64 *)v4[2];
      if ( *((_BYTE *)v6 + 25) )
      {
        for ( i = (__int64 *)v4[1]; !*((_BYTE *)i + 25) && v4 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v4 = i;
        v4 = i;
      }
      else
      {
        do
        {
          v4 = v6;
          v6 = (__int64 *)*v6;
        }
        while ( !*((_BYTE *)v6 + 25) );
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 3136));
  v8 = (__int64 *)((char *)this + 3208);
  v9 = 0LL;
  if ( &v10 != (char *)this + 3208 )
  {
    v9 = *v8;
    *v8 = 0LL;
  }
  if ( this != (SpatialInputControllerCollection *)-3136LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 3136));
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
