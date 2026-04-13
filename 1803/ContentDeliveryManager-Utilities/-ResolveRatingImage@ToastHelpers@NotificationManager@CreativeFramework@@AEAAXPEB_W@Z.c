/*
 * XREFs of ?ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800930A0
 * Callers:
 *     ?ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x180092A30 (-ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800169AC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180062D20 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@$$QEAV21@@Z @ 0x180093270 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@U-$less@V-$basic_s.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1800C0BF4 (__report_rangecheckfailure.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
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
  wil::details::in1diag3 *v9; // rcx
  char *v10; // rsi
  _QWORD *v11; // rax
  LPVOID pv; // [rsp+38h] [rbp-19h] BYREF
  LPVOID v13[4]; // [rsp+40h] [rbp-11h] BYREF
  void *v14[3]; // [rsp+60h] [rbp+Fh] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+27h]
  _WORD v16[4]; // [rsp+80h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v13[3] = (LPVOID)-2LL;
  v16[0] = *a2;
  v3 = 1;
  v4 = -1LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  if ( v5 > 2 && a2[1] == 46 )
  {
    v16[1] = a2[2];
    v3 = 2;
  }
  if ( 2 * (unsigned __int64)v3 >= 6 )
LABEL_21:
    _report_rangecheckfailure();
  v16[v3] = 0;
  memset(v13, 0, 24);
  v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)v13,
         L"ms-resource://Microsoft.Windows.ContentDeliveryManager/Files/Ratings/RatingStars%s.png",
         v16);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1A9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_20;
  }
  v7 = *((_QWORD *)this + 7);
  pv = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, LPVOID, LPVOID *))(*(_QWORD *)v7 + 64LL))(
         v7,
         *((_QWORD *)this + 8),
         v13[0],
         &pv);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x1AC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_21;
  }
  v15 = 7LL;
  v14[2] = 0LL;
  LOWORD(v14[0]) = 0;
  std::wstring::assign(v14, (char *)L"rating_image", aRatingImage[0] != 0 ? 0xC : 0);
  v10 = (char *)pv;
  v11 = (_QWORD *)std::map<std::wstring,std::wstring>::operator[]((char *)this + 32, v14);
  if ( *(_WORD *)v10 )
  {
    do
      ++v4;
    while ( *(_WORD *)&v10[2 * v4] );
  }
  else
  {
    v4 = 0LL;
  }
  std::wstring::assign(v11, v10, v4);
  if ( v15 >= 8 )
    operator delete(v14[0]);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v13[0] )
    CoTaskMemFree(v13[0]);
}
