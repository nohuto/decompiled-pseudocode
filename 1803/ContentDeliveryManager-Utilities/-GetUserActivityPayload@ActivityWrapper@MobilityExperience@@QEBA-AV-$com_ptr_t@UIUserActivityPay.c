/*
 * XREFs of ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18004AF60
 * Callers:
 *     ?SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ @ 0x18004AD20 (-SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ.c)
 *     ?GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAPEAUHSTRING__@@1@Z @ 0x18004C5D8 (-GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x1800180A4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@UEAA@XZ @ 0x18004D558 (--1-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@@std.c)
 *     ??0?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA@XZ @ 0x18004D5F0 (--0-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@@std.c)
 *     ?from_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBD0@Z @ 0x18004E55C (-from_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator.c)
 *     ??$GetActivationFactory@UIUserActivityPayloadFactory@UserActivities@Internal@ApplicationModel@Windows@@@wil@@YA?AV?$com_ptr_t@UIUserActivityPayloadFactory@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004EE0C (--$GetActivationFactory@UIUserActivityPayloadFactory@UserActivities@Internal@ApplicationModel@Wi.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
const WCHAR *__fastcall MobilityExperience::ActivityWrapper::GetUserActivityPayload(__int64 a1, const WCHAR *a2)
{
  char *v4; // rax
  size_t v5; // r8
  void **v6; // r8
  const WCHAR *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-D8h] BYREF
  const WCHAR *v14[3]; // [rsp+38h] [rbp-D0h] BYREF
  void *v15[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v17; // [rsp+68h] [rbp-A0h]
  void *v18[3]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp-80h]
  _BYTE v20[112]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]

  v14[1] = (const WCHAR *)-2LL;
  v14[2] = a2;
  wil::GetActivationFactory<Windows::ApplicationModel::Internal::UserActivities::IUserActivityPayloadFactory>(&v13);
  v4 = (char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 160LL))(*(_QWORD *)(a1 + 8));
  v17 = 15LL;
  v16 = 0LL;
  LOBYTE(v15[0]) = 0;
  if ( *v4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v4[v5] );
  }
  else
  {
    v5 = 0LL;
  }
  std::string::assign(v15, v4, v5);
  std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>(v20);
  v6 = v15;
  if ( v17 >= 0x10 )
    v6 = (void **)v15[0];
  std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::from_bytes(
    v20,
    v18,
    v6,
    (char *)v6 + v16);
  std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::~wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>(v20);
  if ( v17 >= 0x10 )
    operator delete(v15[0]);
  *(_QWORD *)a2 = 0LL;
  v7 = (const WCHAR *)v18;
  if ( v19 >= 8 )
    v7 = (const WCHAR *)v18[0];
  v14[0] = v7;
  v8 = v13;
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v15, v14);
  v10 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, const WCHAR *))(*(_QWORD *)v8 + 56LL))(v8, *(_QWORD *)(v9 + 24), a2);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x28A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x18004B130LL);
  }
  if ( v19 >= 8 )
    operator delete(v18[0]);
  v19 = 7LL;
  v18[2] = 0LL;
  LOWORD(v18[0]) = 0;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return a2;
}
