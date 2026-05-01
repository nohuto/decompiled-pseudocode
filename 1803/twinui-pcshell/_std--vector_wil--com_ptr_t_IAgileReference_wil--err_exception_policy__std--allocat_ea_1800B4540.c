/*
 * XREFs of _std::vector_wil::com_ptr_t_IAgileReference_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IAgileReference_wil::err_exception_policy_____::_Reallocate_exactly_::_1_::catch$55 @ 0x1800B4540
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IAgileReference_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IAgileReference_wil::err_exception_policy_____::_Reallocate_exactly_::_1_::catch_55(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate(*(char **)(a2 + 112), *(_QWORD *)(a2 + 120), 8uLL);
  throw;
}
