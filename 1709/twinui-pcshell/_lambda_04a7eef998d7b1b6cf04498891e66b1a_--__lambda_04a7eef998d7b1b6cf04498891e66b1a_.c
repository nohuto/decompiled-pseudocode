/*
 * XREFs of _lambda_04a7eef998d7b1b6cf04498891e66b1a_::__lambda_04a7eef998d7b1b6cf04498891e66b1a_ @ 0x180013270
 * Callers:
 *     _CApplicationManager::_HandleViewCreation_EnsureApplicationView_::_1_::dtor$3 @ 0x1801E6DEE (_CApplicationManager--_HandleViewCreation_EnsureApplicationView_--_1_--dtor$3.c)
 *     _CIAMGlobals::QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a____::_1_::dtor$0 @ 0x1801E73A6 (_CIAMGlobals--QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a____--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_04a7eef998d7b1b6cf04498891e66b1a_::__lambda_04a7eef998d7b1b6cf04498891e66b1a_(
        volatile signed __int32 **a1)
{
  __int64 result; // rax
  volatile signed __int32 *v2; // rcx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)result = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 11, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 72LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
