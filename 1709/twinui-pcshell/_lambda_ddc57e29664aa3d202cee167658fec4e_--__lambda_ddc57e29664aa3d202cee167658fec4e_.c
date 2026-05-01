/*
 * XREFs of _lambda_ddc57e29664aa3d202cee167658fec4e_::__lambda_ddc57e29664aa3d202cee167658fec4e_ @ 0x180152AD4
 * Callers:
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ddc57e29664aa3d202cee167658fec4e____::_1_::dtor$0 @ 0x1801F0B2A (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ddc57e29664aa3d202cee167658fec4.c)
 *     _Platform::Details::__abi_FunctorCapture__lambda_ddc57e29664aa3d202cee167658fec4e__void_::Invoke_::_1_::dtor$1 @ 0x1801F0BDE (_Platform--Details--__abi_FunctorCapture__lambda_ddc57e29664aa3d202cee167658fec4e___ea_1801F0BDE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_ddc57e29664aa3d202cee167658fec4e_::__lambda_ddc57e29664aa3d202cee167658fec4e_(
        volatile signed __int32 **a1)
{
  __int64 result; // rax
  volatile signed __int32 *v2; // rcx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)result = 0LL;
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
