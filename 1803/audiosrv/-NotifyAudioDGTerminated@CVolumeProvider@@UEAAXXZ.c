/*
 * XREFs of ?NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ @ 0x180008200
 * Callers:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180008078 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 * Callees:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy_________lambda_352f1e6eefb5a5f8714c890088c3d035___ @ 0x1800633CC (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_IVolumeSt.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 */

void __fastcall CVolumeProvider::NotifyAudioDGTerminated(CVolumeProvider *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_47f4b705a74e3dc9170912854ed06807_Traceguids);
  }
  std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy_________lambda_352f1e6eefb5a5f8714c890088c3d035___(
    &v3,
    *((_QWORD *)this + 7),
    *((_QWORD *)this + 8));
  if ( v1 )
    LeaveCriticalSection(v1);
}
