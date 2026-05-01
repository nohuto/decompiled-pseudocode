/*
 * XREFs of ??1?$ComPtr@VLockScreenDirectorServiceProviderImpl@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E354C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_LockScreenDirectorServiceProviderImpl_IUnknown__::_1_::dtor$2 @ 0x1801EC1C1 (_Microsoft--WRL--Details--MakeAndInitialize_LockScreenDirectorServiceProviderImpl_I_ea_1801EC1C1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<LockScreenDirectorServiceProviderImpl>::~ComPtr<LockScreenDirectorServiceProviderImpl>(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)result = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 124), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v2 + 48) + 64LL))(v2 + 48, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
