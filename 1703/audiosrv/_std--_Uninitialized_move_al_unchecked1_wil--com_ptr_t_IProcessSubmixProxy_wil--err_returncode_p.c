/*
 * XREFs of _std::_Uninitialized_move_al_unchecked1_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______ptr64_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______ptr64_std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______::_1_::catch$4 @ 0x1800A8097
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180057F94 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@YAXPEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@0AEAU?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@0@@Z @ 0x1800A7CF8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked1_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______ptr64_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______ptr64_std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy> *>(
    *(__int64 **)(a2 + 88),
    *(__int64 **)(a2 + 80));
  throw;
}
