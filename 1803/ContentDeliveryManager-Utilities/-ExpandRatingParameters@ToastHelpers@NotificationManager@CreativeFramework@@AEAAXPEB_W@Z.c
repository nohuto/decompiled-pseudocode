/*
 * XREFs of ?ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x180092A30
 * Callers:
 *     ?EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x180091E94 (-EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800169AC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180062D20 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?EnsureMrtResourceMapInitialized@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x180092BB4 (-EnsureMrtResourceMapInitialized@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 *     ?ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800930A0 (-ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@$$QEAV21@@Z @ 0x180093270 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@U-$less@V-$basic_s.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::ExpandRatingParameters(
        CreativeFramework::NotificationManager::ToastHelpers *this,
        const wchar_t *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  _QWORD *v8; // rax
  void *v9; // rbx
  unsigned __int64 v10; // r8
  LPVOID v11; // [rsp+30h] [rbp-50h] BYREF
  LPVOID pv[4]; // [rsp+38h] [rbp-48h] BYREF
  void *v13[3]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  pv[3] = (LPVOID)-2LL;
  CreativeFramework::NotificationManager::ToastHelpers::EnsureMrtResourceMapInitialized(this);
  v4 = *((_QWORD *)this + 7);
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, const wchar_t *, LPVOID *))(*(_QWORD *)v4 + 48LL))(
         v4,
         *((_QWORD *)this + 8),
         L"ms-resource://Microsoft.Windows.ContentDeliveryManager/Ratings/Rating_AccessibilityString",
         &v11);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x195,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_13;
  }
  memset(pv, 0, 24);
  v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)pv,
         (const wchar_t *)v11,
         a2);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_13:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x198,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x180092BB2LL);
  }
  v14 = 7LL;
  v13[2] = 0LL;
  LOWORD(v13[0]) = 0;
  std::wstring::assign(v13, (char *)L"rating_accessible", aRatingAccessib[0] != 0 ? 0x11 : 0);
  v8 = (_QWORD *)std::map<std::wstring,std::wstring>::operator[]((char *)this + 32, v13);
  v9 = pv[0];
  if ( *(_WORD *)pv[0] )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *((_WORD *)pv[0] + v10) );
  }
  else
  {
    v10 = 0LL;
  }
  std::wstring::assign(v8, (char *)pv[0], v10);
  if ( v14 >= 8 )
    operator delete(v13[0]);
  CoTaskMemFree(v9);
  if ( v11 )
    CoTaskMemFree(v11);
  CreativeFramework::NotificationManager::ToastHelpers::ResolveRatingImage(this, a2);
}
