/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy_________lambda_a45adb58a71a9efc4ef55ba94c1c84bd___ @ 0x1800354E8
 * Callers:
 *     ?NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ @ 0x180009160 (-NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 */

__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy_________lambda_a45adb58a71a9efc4ef55ba94c1c84bd___(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *i; // rdi
  __int64 v6; // rax

  for ( i = a2; i != a3; ++i )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_d150c8ede9573e33824fdb490ef726ad_Traceguids, v6);
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 272LL))(*i);
  }
  return a1;
}
