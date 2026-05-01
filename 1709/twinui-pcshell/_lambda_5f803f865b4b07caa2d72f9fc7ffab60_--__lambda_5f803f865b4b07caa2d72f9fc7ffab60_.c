/*
 * XREFs of _lambda_5f803f865b4b07caa2d72f9fc7ffab60_::__lambda_5f803f865b4b07caa2d72f9fc7ffab60_ @ 0x18007C154
 * Callers:
 *     _ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications_::_1_::dtor$3 @ 0x1801E9A67 (_ApplicationViewManagerVisibilityDebouncer--ProcessPendingNotifications_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_5f803f865b4b07caa2d72f9fc7ffab60_::__lambda_5f803f865b4b07caa2d72f9fc7ffab60_(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v2; // rcx

  result = a1;
  v2 = *(volatile signed __int32 **)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(result + 8) = 0LL;
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
