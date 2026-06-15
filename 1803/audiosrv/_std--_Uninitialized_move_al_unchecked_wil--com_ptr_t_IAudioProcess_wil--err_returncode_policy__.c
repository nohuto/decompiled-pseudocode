/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy______ptr64_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy______ptr64_std::allocator_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy______::_1_::catch$2 @ 0x180067D8A
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800657A3 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800A822C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy______ptr64_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy______ptr64_std::allocator_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy______::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>(
    *(_QWORD *)(a2 + 88),
    *(_QWORD *)(a2 + 80));
  throw;
}
