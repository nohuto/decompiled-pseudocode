/*
 * XREFs of ??1?$ComPtr@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FA130
 * Callers:
 *     _CortanaSharedExperienceManager::_CreateShellExperienceView_::_1_::dtor$3 @ 0x18015E44C (_CortanaSharedExperienceManager--_CreateShellExperienceView_--_1_--dtor$3.c)
 *     _CortanaSharedExperienceManager::_CreateShellExperienceView_::_1_::dtor$4 @ 0x18015E458 (_CortanaSharedExperienceManager--_CreateShellExperienceView_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>(
        __int64 *a1)
{
  __int64 *result; // rax
  __int64 v2; // rcx
  __int64 (*v3)(void); // rax

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release )
      return (__int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
                          v2,
                          (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release);
    else
      return (__int64 *)v3();
  }
  return result;
}
