/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy_________lambda_352f1e6eefb5a5f8714c890088c3d035___ @ 0x1800633CC
 * Callers:
 *     ?NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ @ 0x180008200 (-NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 */

__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy_________lambda_352f1e6eefb5a5f8714c890088c3d035___(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *i; // rdi
  __int64 v6; // rax

  for ( i = a2; i != a3; ++i )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_47f4b705a74e3dc9170912854ed06807_Traceguids, v6);
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 272LL))(*i);
  }
  return a1;
}
