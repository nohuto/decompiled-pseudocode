/*
 * XREFs of _lambda_03cd8f9c11c3b75e9e31d9155b53654a_::__lambda_03cd8f9c11c3b75e9e31d9155b53654a_ @ 0x18007C104
 * Callers:
 *     _NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a____::_1_::dtor$0 @ 0x1801E9B47 (_NotificationDispatcher--RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a____--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_03cd8f9c11c3b75e9e31d9155b53654a_::__lambda_03cd8f9c11c3b75e9e31d9155b53654a_(
        volatile signed __int32 **a1)
{
  __int64 result; // rax
  volatile signed __int32 *v2; // rcx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)result = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 19, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 56LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
