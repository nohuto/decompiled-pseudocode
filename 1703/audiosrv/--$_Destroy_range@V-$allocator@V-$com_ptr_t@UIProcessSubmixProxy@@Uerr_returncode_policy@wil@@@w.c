/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@YAXPEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@0AEAU?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@0@@Z @ 0x1800A7CF8
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked1_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______ptr64_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______ptr64_std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______::_1_::catch$4 @ 0x1800A8097 (_std--_Uninitialized_move_al_unchecked1_wil--com_ptr_t_IProcessSubmixProxy_wil--err_returncode_p.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy> *>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
