/*
 * XREFs of ?OnHandEventOccurred@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivHandEventArgs@34567@@Z @ 0x18005F890
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180051AD0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x18005E2EC (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x18005F0B0 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpectrumListener::OnHandEventOccurred(
        SpectrumListener *this,
        struct Windows::UI::Input::Spatial::Internal::IInputPriv *a2,
        struct Windows::UI::Input::Spatial::Internal::IPrivHandEventArgs *a3)
{
  const char *v6; // r9
  int v7; // eax
  const char *v8; // r9
  int v9; // edx
  int v10; // eax
  __int64 v11; // rax
  int v12; // edi
  int v13; // eax
  struct Windows::Foundation::Numerics::float4x4 *v14; // r8
  int v15; // eax
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v18[4]; // [rsp+34h] [rbp-CCh] BYREF
  _OWORD v19[4]; // [rsp+80h] [rbp-80h] BYREF
  int v20[125]; // [rsp+C0h] [rbp-40h] BYREF
  char v21; // [rsp+2B4h] [rbp+1B4h]
  _BYTE v22[80]; // [rsp+538h] [rbp+438h] BYREF
  _BYTE v23[432]; // [rsp+588h] [rbp+488h] BYREF
  _BYTE v24[88]; // [rsp+738h] [rbp+638h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+7C8h] [rbp+6C8h]

  memset_0(v20, 0, 0x6C8uLL);
  v17 = 0;
  v20[6] = 1736;
  if ( !a3 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x55,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      v6);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::IPrivHandEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v17);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  if ( v17 )
  {
    switch ( v17 )
    {
      case 1:
        v9 = 4;
        break;
      case 2:
        v9 = 6;
        break;
      case 3:
        v9 = 2;
        break;
      case 4:
        v9 = 3;
        break;
      default:
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x6C,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
          v8);
        __debugbreak();
    }
  }
  else
  {
    v9 = 5;
  }
  v10 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, v9, 512, *((_DWORD *)this + 6), (__int64)v20);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v10);
    JUMPOUT(0x18005FAB3LL);
  }
  v11 = *(_QWORD *)a3;
  v21 = 1;
  v12 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::IPrivHandEventArgs *, _BYTE *))(v11 + 56))(
          a3,
          v22);
  if ( v12 < 0
    || (v12 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::IPrivHandEventArgs *, _BYTE *))(*(_QWORD *)a3 + 64LL))(
                a3,
                v23),
        v12 < 0) )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x72,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  memset_0(v19, 0, sizeof(v19));
  v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::IInputPriv *, _OWORD *))(*(_QWORD *)a2 + 96LL))(
          a2,
          v19);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x76,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  v18[0] = v19[0];
  v18[1] = v19[1];
  v18[2] = v19[2];
  v18[3] = v19[3];
  Windows::Foundation::Numerics::invert(
    (Windows::Foundation::Numerics *)v18,
    (const struct Windows::Foundation::Numerics::float4x4 *)v24,
    v14);
  v15 = MPCRawInputProvider::QueueInput(*((MPCRawInputProvider **)this + 2), (struct InputInfo *)v20);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x79,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v15);
    JUMPOUT(0x18005FB15LL);
  }
  return 0LL;
}
