/*
 * XREFs of ??$destroy@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXPEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800247E8
 * Callers:
 *     _std::vector_wil::com_ptr_t_IAgileReference_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IAgileReference_wil::err_exception_policy_____::emplace_back_wil::com_ptr_t_IAgileReference_wil::err_exception_policy__const_&___ptr64__::_1_::catch$69 @ 0x180198D78 (_std--vector_wil--com_ptr_t_IAgileReference_wil--err_exception_policy__std--allocat_ea_180198D78.c)
 *     _std::vector_wil::com_ptr_t_IThumbnailEvents_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IThumbnailEvents_wil::err_exception_policy_____::emplace_back_IThumbnailEvents_____ptr64_&___ptr64__::_1_::catch$102 @ 0x1801A47F0 (_std--vector_wil--com_ptr_t_IThumbnailEvents_wil--err_exception_policy__std--allocator_wil--com_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Wrap_alloc<std::allocator<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>>::destroy<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  if ( *a2 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return result;
}
