/*
 * XREFs of _lambda_c8f139337debe2b729bef753b5cc5547_::__lambda_c8f139337debe2b729bef753b5cc5547_ @ 0x1800867AC
 * Callers:
 *     _DesktopBlueLightReductionManager::OnMessage_::_1_::dtor$1 @ 0x1801EA0AF (_DesktopBlueLightReductionManager--OnMessage_--_1_--dtor$1.c)
 *     _DesktopBlueLightReductionManager::OnIdleStateFlagsChanged_::_1_::dtor$2 @ 0x1801EA1A0 (_DesktopBlueLightReductionManager--OnIdleStateFlagsChanged_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_c8f139337debe2b729bef753b5cc5547_::__lambda_c8f139337debe2b729bef753b5cc5547_(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 172), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v1 + 40) + 64LL))(v1 + 40, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
