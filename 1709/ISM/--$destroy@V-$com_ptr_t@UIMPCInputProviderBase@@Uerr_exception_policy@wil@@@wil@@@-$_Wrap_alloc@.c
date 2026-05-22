/*
 * XREFs of ??$destroy@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXPEAV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005BC44
 * Callers:
 *     _std::vector_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy_____::emplace_back_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy__const_&___ptr64__::_1_::catch$107 @ 0x1800CF240 (_std--vector_wil--com_ptr_t_IMPCInputProviderBase_wil--err_exception_policy__std--allocator_wil-.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Wrap_alloc<std::allocator<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>>::destroy<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  if ( *a2 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return result;
}
