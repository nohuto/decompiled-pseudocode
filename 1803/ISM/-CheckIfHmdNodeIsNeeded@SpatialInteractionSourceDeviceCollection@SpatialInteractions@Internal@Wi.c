/*
 * XREFs of ?CheckIfHmdNodeIsNeeded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800A8D1C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0bc706ec02677b88b1bea7627a07e2d6__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800ABBC0 (std--_Func_impl_no_alloc__lambda_0bc706ec02677b88b1bea7627a07e2d6__void_std--shared_ea_1800ABBC0.c)
 *     std::_Func_impl_no_alloc__lambda_2254076c84d5f2b88d219f61ff38471c__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800ABCC0 (std--_Func_impl_no_alloc__lambda_2254076c84d5f2b88d219f61ff38471c__void_std--shared_ea_1800ABCC0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::CheckIfHmdNodeIsNeeded(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2)
{
  __int64 *v2; // rdi
  __int64 *j; // rbx
  __int64 **v5; // rax
  __int64 *v6; // rcx
  __int64 *i; // rax
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  char *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rdi
  bool v13; // zf
  char v14; // [rsp+38h] [rbp+10h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 58);
  j = (__int64 *)*v2;
  while ( j != v2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)j[5] + 8LL))(j[5]) )
      return;
    if ( !*((_BYTE *)j + 25) )
    {
      v5 = (__int64 **)j[2];
      if ( *((_BYTE *)v5 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v6 = *v5;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v6 + 25); v6 = (__int64 *)*v6 )
          j = v6;
      }
    }
  }
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 344);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
  v9 = (char *)this + 416;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( &v14 != v9 )
  {
    v10 = *(_QWORD *)v9;
    *(_QWORD *)v9 = 0LL;
    v11 = v10;
    v12 = v10;
  }
  v13 = v8 == 0LL;
  if ( v8 )
  {
    LeaveCriticalSection(v8);
    v13 = v8 == 0LL;
  }
  if ( v13 )
    v12 = v11;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
}
