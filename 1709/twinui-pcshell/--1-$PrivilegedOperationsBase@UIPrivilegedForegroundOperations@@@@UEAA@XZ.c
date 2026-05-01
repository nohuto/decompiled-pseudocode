/*
 * XREFs of ??1?$PrivilegedOperationsBase@UIPrivilegedForegroundOperations@@@@UEAA@XZ @ 0x1800F6A34
 * Callers:
 *     ??_GCPrivilegedTabletModeOperations@@UEAAPEAXI@Z @ 0x1800F6A00 (--_GCPrivilegedTabletModeOperations@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PrivilegedOperationsBase<IPrivilegedForegroundOperations>::~PrivilegedOperationsBase<IPrivilegedForegroundOperations>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v4 = *(volatile signed __int32 **)(a1 + 56);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 56) = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v4 + 11, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 72LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        result = (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  *(_DWORD *)(a1 + 52) = -1073741823;
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
