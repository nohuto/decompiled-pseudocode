/*
 * XREFs of ?OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@34567@@Z @ 0x18005FD70
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x18005E2EC (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x18005F0B0 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpectrumListener::OnPhraseDetected(
        SpectrumListener *this,
        struct Windows::UI::Input::Spatial::Internal::IInputPriv *a2,
        struct Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *a3)
{
  int v5; // r9d
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v10[286]; // [rsp+30h] [rbp-6E8h] BYREF
  _BYTE v11[8]; // [rsp+4A8h] [rbp-270h] BYREF
  _BYTE v12[592]; // [rsp+4B0h] [rbp-268h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+718h] [rbp+0h]

  memset_0(v10, 0, 0x6C8uLL);
  v5 = *((_DWORD *)this + 6);
  v10[6] = 1736;
  v6 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 7, 512, v5, (__int64)v10);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x18005FE77LL);
  }
  v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *, _BYTE *))(*(_QWORD *)a3 + 48LL))(
         a3,
         v11);
  if ( v7 < 0
    || (v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *, _BYTE *))(*(_QWORD *)a3 + 56LL))(
               a3,
               v12),
        v7 < 0) )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = MPCRawInputProvider::QueueInput(*((MPCRawInputProvider **)this + 2), (struct InputInfo *)v10);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  return 0LL;
}
