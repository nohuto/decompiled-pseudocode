/*
 * XREFs of ?ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800865EC
 * Callers:
 *     ?ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x180085FB0 (-ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180061440 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@$$QEAV21@@Z @ 0x1800867B4 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@U-$less@V-$basic_s.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1800B3BA4 (__report_rangecheckfailure.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::ResolveRatingImage(
        CreativeFramework::NotificationManager::ToastHelpers *this,
        const wchar_t *a2)
{
  unsigned int v3; // r8d
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  char *v9; // rsi
  _QWORD *v10; // rax
  LPVOID pv; // [rsp+38h] [rbp-19h] BYREF
  LPVOID v12[4]; // [rsp+40h] [rbp-11h] BYREF
  void *v13[3]; // [rsp+60h] [rbp+Fh] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp+27h]
  _WORD v15[4]; // [rsp+80h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v12[3] = (LPVOID)-2LL;
  v15[0] = *a2;
  v3 = 1;
  v4 = -1LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  if ( v5 > 2 && a2[1] == 46 )
  {
    v15[1] = a2[2];
    v3 = 2;
  }
  if ( 2 * (unsigned __int64)v3 >= 6 )
    _report_rangecheckfailure();
  v15[v3] = 0;
  memset(v12, 0, 24);
  v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)v12,
         (__int64)L"ms-resource://Microsoft.Windows.ContentDeliveryManager/Files/Ratings/RatingStars%s.png",
         v15);
  if ( v6 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x199,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v6);
  v7 = *((_QWORD *)this + 7);
  pv = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, LPVOID, LPVOID *))(*(_QWORD *)v7 + 64LL))(
         v7,
         *((_QWORD *)this + 8),
         v12[0],
         &pv);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x19C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v14 = 7LL;
  v13[2] = 0LL;
  LOWORD(v13[0]) = 0;
  std::wstring::assign(v13, (char *)L"rating_image", aRatingImage[0] != 0 ? 0xC : 0);
  v9 = (char *)pv;
  v10 = (_QWORD *)std::map<std::wstring,std::wstring>::operator[]((char *)this + 32, v13);
  if ( *(_WORD *)v9 )
  {
    do
      ++v4;
    while ( *(_WORD *)&v9[2 * v4] );
  }
  else
  {
    v4 = 0LL;
  }
  std::wstring::assign(v10, v9, v4);
  if ( v14 >= 8 )
    operator delete(v13[0]);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v12[0] )
    CoTaskMemFree(v12[0]);
}
