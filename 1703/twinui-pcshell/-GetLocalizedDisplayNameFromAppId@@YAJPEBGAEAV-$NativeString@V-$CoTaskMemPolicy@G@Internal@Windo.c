/*
 * XREFs of ?GetLocalizedDisplayNameFromAppId@@YAJPEBGAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x180050214
 * Callers:
 *     ?GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x1800515E0 (-GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180038114 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ??$GetActivationFactory@UIApplicationStatics@StateRepository@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIApplicationStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18005B048 (--$GetActivationFactory@UIApplicationStatics@StateRepository@Internal@Windows@@@wil@@YA-AV-$com_.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetActivationFactory@UIApplicationResourceResolverStatics@StateRepository@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIApplicationResourceResolverStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18005B19C (--$GetActivationFactory@UIApplicationResourceResolverStatics@StateRepository@Internal@Windows@@@.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall GetLocalizedDisplayNameFromAppId(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  const unsigned __int16 *StringRawBuffer; // rax
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  HSTRING string; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+38h] [rbp-60h] BYREF
  __int64 v15; // [rsp+40h] [rbp-58h] BYREF
  __int64 v16; // [rsp+48h] [rbp-50h] BYREF
  __int64 v17; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-40h] BYREF
  _BYTE v19[32]; // [rsp+68h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v18[1] = -2LL;
  v18[0] = a1;
  try
  {
    wil::GetActivationFactory<Windows::Internal::StateRepository::IApplicationStatics>(&v17);
    v3 = v17;
    v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v19, v18);
    v14 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v3 + 240LL))(
           v3,
           0LL,
           *(_QWORD *)(v4 + 24),
           &v14);
    if ( v5 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xB0,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v5);
    wil::GetActivationFactory<Windows::Internal::StateRepository::IApplicationResourceResolverStatics>(&v16);
    v15 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v16 + 48LL))(v16, v14, &v15);
    if ( v6 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xB5,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v6);
    v7 = v15;
    WindowsDeleteString(0LL);
    string = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v7 + 48LL))(v7, &string);
    if ( v8 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xB8,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v8);
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
            a2,
            StringRawBuffer,
            0xFFFFFFFFFFFFFFFFuLL);
    if ( v10 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xBA,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v10);
    WindowsDeleteString(string);
    string = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBD,
                           (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
                           v11);
  }
  return result;
}
