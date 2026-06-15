/*
 * XREFs of _std::vector_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy_____::emplace_back_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____::_1_::catch$73 @ 0x1800A845B
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x180057F94 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy_____::emplace_back_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____::_1_::catch_73(
        __int64 a1,
        unsigned __int64 *a2)
{
  _QWORD *v3; // rbx

  v3 = (_QWORD *)a2[16];
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v3[a2[17]]);
  std::_Deallocate(v3, a2[14], 8uLL);
  throw;
}
