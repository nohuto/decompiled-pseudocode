/*
 * XREFs of _std::vector_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy_____::emplace_back_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy____::_1_::catch$96 @ 0x180039FF5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x180036B83 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy_____::emplace_back_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy____::_1_::catch_96(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx

  v3 = (_QWORD *)a2[14];
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v3[a2[16]]);
  std::_Deallocate(v3, a2[17], 8uLL);
  throw;
}
