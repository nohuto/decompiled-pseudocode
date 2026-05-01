/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIShoulderTapExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@UEAA@XZ @ 0x1800B3F58
 * Callers:
 *     _CShoulderTapExperienceManager::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1801EB2CD (_CShoulderTapExperienceManager--_scalar_deleting_destructor__--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShoulderTapExperienceManager>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShoulderTapExperienceManager>(
        __int64 a1)
{
  __int64 v1; // rcx
  volatile signed __int32 *v2; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 < 0 )
  {
    v2 = (volatile signed __int32 *)(2 * v1);
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      if ( v2 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
