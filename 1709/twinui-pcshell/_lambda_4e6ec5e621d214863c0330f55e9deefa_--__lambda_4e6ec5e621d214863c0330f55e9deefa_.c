/*
 * XREFs of _lambda_4e6ec5e621d214863c0330f55e9deefa_::__lambda_4e6ec5e621d214863c0330f55e9deefa_ @ 0x180154214
 * Callers:
 *     _CreationThreadDispatcher::RunAsync__lambda_e5d643bc643c8a09454132ff8d011188____::_1_::dtor$2 @ 0x1801F0BBA (_CreationThreadDispatcher--RunAsync__lambda_e5d643bc643c8a09454132ff8d011188____--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_4e6ec5e621d214863c0330f55e9deefa_::__lambda_4e6ec5e621d214863c0330f55e9deefa_(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( _InterlockedExchangeAdd(v2 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 72LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return lambda_e5d643bc643c8a09454132ff8d011188_::__lambda_e5d643bc643c8a09454132ff8d011188_(a1);
}
