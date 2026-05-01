/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_wil::com_ptr_t_IAgileReference_wil::err_exception_policy______ptr64_wil::com_ptr_t_IAgileReference_wil::err_exception_policy______ptr64_std::allocator_wil::com_ptr_t_IAgileReference_wil::err_exception_policy______::_1_::catch$2 @ 0x1800B456A
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180103494 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_wil::com_ptr_t_IAgileReference_wil::err_exception_policy______ptr64_wil::com_ptr_t_IAgileReference_wil::err_exception_policy______ptr64_std::allocator_wil::com_ptr_t_IAgileReference_wil::err_exception_policy______::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>>(
    *(_QWORD *)(a2 + 88),
    *(_QWORD *)(a2 + 80));
  throw;
}
