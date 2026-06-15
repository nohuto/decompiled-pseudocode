/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______ptr64_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______ptr64_std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______::_1_::catch$4 @ 0x18006E447
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180036B83 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@YAXPEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@0AEAU?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@0@@Z @ 0x18006FA88 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@st.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______ptr64_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______ptr64_std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>,wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy> *>(*(void **)(a2 + 88));
  throw;
}
