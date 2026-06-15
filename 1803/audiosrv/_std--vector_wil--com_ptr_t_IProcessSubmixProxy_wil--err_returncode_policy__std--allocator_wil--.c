/*
 * XREFs of _std::vector_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy_____::emplace_back_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____::_1_::catch$65 @ 0x1800CC1DA
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _CxxThrowException_0 @ 0x1800657A3 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy_____::emplace_back_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____::_1_::catch_65(
        __int64 a1,
        unsigned __int64 *a2)
{
  _QWORD *v3; // rbx

  v3 = (_QWORD *)a2[16];
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v3[a2[17]]);
  std::_Deallocate(v3, a2[14], 8uLL);
  throw;
}
