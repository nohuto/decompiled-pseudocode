/*
 * XREFs of _lambda_ec2760f202b80fe0ecce5a590d38ad00_::__lambda_ec2760f202b80fe0ecce5a590d38ad00_ @ 0x180152A80
 * Callers:
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ec2760f202b80fe0ecce5a590d38ad00____::_1_::dtor$0 @ 0x1801F0AFE (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ec2760f202b80fe0ecce5a590d38ad0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_ec2760f202b80fe0ecce5a590d38ad00_::__lambda_ec2760f202b80fe0ecce5a590d38ad00_(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v2; // rcx

  result = a1;
  v2 = *(volatile signed __int32 **)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(result + 8) = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 13, 0xFFFFFFFF);
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
