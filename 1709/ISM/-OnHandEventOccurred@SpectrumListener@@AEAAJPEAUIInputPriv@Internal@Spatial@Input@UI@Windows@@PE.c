/*
 * XREFs of ?OnHandEventOccurred@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivHandEventArgs@34567@@Z @ 0x180068310
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180049870 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x180067040 (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180067D8C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpectrumListener::OnHandEventOccurred(
        SpectrumListener *this,
        struct Windows::UI::Input::Spatial::Internal::IInputPriv *a2,
        struct Windows::UI::Input::Spatial::Internal::IPrivHandEventArgs *a3)
{
  const char *v6; // r9
  int v7; // eax
  const char *v8; // r9
  DWORD v9; // edx
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r9d
  int v15; // eax
  struct Windows::Foundation::Numerics::float4x4 *v16; // r8
  int v17; // eax
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v20[4]; // [rsp+34h] [rbp-CCh] BYREF
  _OWORD v21[4]; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER v22[356]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C18h] [rbp+B18h]

  memset(v22, 0, sizeof(v22));
  v19 = 0;
  if ( !a3 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x49,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      v6);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::IPrivHandEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v19);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x4B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  if ( v19 )
  {
    switch ( v19 )
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
          (void *)0x60,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
          v8);
        __debugbreak();
    }
  }
  else
  {
    v9 = 5;
  }
  v10 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, v9, *((_DWORD *)this + 6), v22, 1);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x64,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v10);
    JUMPOUT(0x18006855BLL);
  }
  v11 = *(_QWORD *)a3;
  BYTE4(v22[84].QuadPart) = 1;
  v12 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::IPrivHandEventArgs *, LARGE_INTEGER *))(v11 + 56))(
          a3,
          &v22[165]);
  if ( v12 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_21;
    v14 = 48;
    goto LABEL_20;
  }
  v12 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::IPrivHandEventArgs *, LARGE_INTEGER *))(*(_QWORD *)a3 + 64LL))(
          a3,
          &v22[175]);
  if ( v12 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_21;
    v14 = 49;
LABEL_20:
    McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, v14, v12);
LABEL_21:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  memset(v21, 0, sizeof(v21));
  v15 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::IInputPriv *, _OWORD *))(*(_QWORD *)a2 + 96LL))(
          a2,
          v21);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x6A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  v20[0] = v21[0];
  v20[1] = v21[1];
  v20[2] = v21[2];
  v20[3] = v21[3];
  Windows::Foundation::Numerics::invert(
    (Windows::Foundation::Numerics *)v20,
    (const struct Windows::Foundation::Numerics::float4x4 *)&v22[229],
    v16);
  v17 = MPCRawInputProvider::QueueInput(*((MPCRawInputProvider **)this + 2), (struct InputInfo *)v22);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x6D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v17);
    JUMPOUT(0x1800685B7LL);
  }
  return 0LL;
}
