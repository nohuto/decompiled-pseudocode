/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@YAXPEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@0AEAU?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@0@@Z @ 0x18006FA88
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy______ptr64_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy______ptr64_std::allocator_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy______::_1_::catch$4 @ 0x18003A036 (_std--_Uninitialized_move_al_unchecked_wil--com_ptr_t_IAudioProcess_wil--err_returncode_policy__.c)
 *     _std::_Uninitialized_move_al_unchecked_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______ptr64_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______ptr64_std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______::_1_::catch$4 @ 0x18006E447 (_std--_Uninitialized_move_al_unchecked_wil--com_ptr_t_IProcessSubmixProxy_wil--err_returncode_po.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>,wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy> *>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v3++);
    while ( v3 != a2 );
  }
}
