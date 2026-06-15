/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800A822C
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy______ptr64_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy______ptr64_std::allocator_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy______::_1_::catch$2 @ 0x180067D8A (_std--_Uninitialized_move_al_unchecked_wil--com_ptr_t_IAudioProcess_wil--err_returncode_policy__.c)
 *     _std::_Uninitialized_move_al_unchecked_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______ptr64_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______ptr64_std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______::_1_::catch$2 @ 0x1800CBF72 (_std--_Uninitialized_move_al_unchecked_wil--com_ptr_t_IProcessSubmixProxy_wil--err_returncode_po.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
