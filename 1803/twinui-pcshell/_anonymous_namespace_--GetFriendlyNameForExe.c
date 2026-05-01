/*
 * XREFs of _anonymous_namespace_::GetFriendlyNameForExe @ 0x1802656D4
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x180265E54 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HString@Wrappers@WRL@Microsoft@@QEAAJAEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x1801B54EC (--$Set@V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HString@Wrappe.c)
 *     ?DecodeRelativePath@@YAJPEA_W_KPEB_W@Z @ 0x1802652DC (-DecodeRelativePath@@YAJPEA_W_KPEB_W@Z.c)
 */

// Hidden C++ exception states: #wind=3
wchar_t *__fastcall anonymous_namespace_::GetFriendlyNameForExe(wchar_t *this, wchar_t *a2)
{
  int v3; // eax
  void *v4; // rcx
  int v5; // eax
  int v6; // eax
  LPVOID pv; // [rsp+30h] [rbp-D8h] BYREF
  void *ppv; // [rsp+38h] [rbp-D0h] BYREF
  const wchar_t *v10[3]; // [rsp+40h] [rbp-C8h] BYREF
  WCHAR pszPath[264]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+280h] [rbp+178h]

  v10[1] = (const wchar_t *)-2LL;
  v10[2] = this;
  v3 = DecodeRelativePath(pszPath, (__int64)a2, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      87LL,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  *(_QWORD *)this = 0LL;
  ppv = 0LL;
  if ( SHCreateItemFromParsingName(pszPath, 0LL, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, &ppv) >= 0 )
  {
    pv = 0LL;
    (*(void (__fastcall **)(void *, const PROPERTYKEY *, LPVOID *))(*(_QWORD *)ppv + 136LL))(
      ppv,
      &PKEY_FileDescription,
      &pv);
    v4 = pv;
    if ( pv )
    {
      v10[0] = (const wchar_t *)pv;
      v5 = Microsoft::WRL::Wrappers::HString::Set<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>(
             (HSTRING *)this,
             v10);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          100LL,
          (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
          (const char *)(unsigned int)v5);
        __debugbreak();
      }
      v4 = pv;
    }
    if ( v4 )
      CoTaskMemFree(v4);
  }
  if ( !*(_QWORD *)this )
  {
    v10[0] = PathFindFileNameW(pszPath);
    v6 = Microsoft::WRL::Wrappers::HString::Set<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>(
           (HSTRING *)this,
           v10);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        106LL,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)v6);
  }
  if ( ppv )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
  return this;
}
