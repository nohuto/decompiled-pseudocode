/*
 * XREFs of ?SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ @ 0x18004AD20
 * Callers:
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x18004CAE0 (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBG@Z @ 0x18004A3C4 (-WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@DU-$char_tr.c)
 *     ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18004AF60 (-GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA-AV-$com_ptr_t@UIUserActivityPay.c)
 *     ??$GetActivationFactory@UIJsonObjectStatics@Json@Data@Windows@@@wil@@YA?AV?$com_ptr_t@UIJsonObjectStatics@Json@Data@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004EC4C (--$GetActivationFactory@UIJsonObjectStatics@Json@Data@Windows@@@wil@@YA-AV-$com_ptr_t@UIJsonObje.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MobilityExperience::ActivityWrapper::SetActivityComplete(MobilityExperience::ActivityWrapper *this)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  char *StringRawBuffer; // rax
  void **v11; // rdx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  HSTRING string; // [rsp+28h] [rbp-29h] BYREF
  __int64 v15; // [rsp+30h] [rbp-21h] BYREF
  __int64 v16; // [rsp+38h] [rbp-19h] BYREF
  __int64 v17; // [rsp+40h] [rbp-11h] BYREF
  const WCHAR *v18[2]; // [rsp+48h] [rbp-9h] BYREF
  void *v19[3]; // [rsp+58h] [rbp+7h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp+1Fh]
  _BYTE v21[32]; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v18[1] = (const WCHAR *)-2LL;
  v18[0] = L"{ \"complete\": true }";
  MobilityExperience::ActivityWrapper::GetUserActivityPayload(this, &v16);
  wil::GetActivationFactory<Windows::Data::Json::IJsonObjectStatics>(&v17);
  v2 = v17;
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v21, v18);
  v15 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, *(_QWORD *)(v3 + 24), &v15);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x272,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v4);
    goto LABEL_17;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 232LL))(v16, v15);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x274,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v5);
    goto LABEL_18;
  }
  v7 = v16;
  WindowsDeleteString(0LL);
  string = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v7 + 256LL))(v7, &string);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x277,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v8);
    goto LABEL_19;
  }
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
  CreativeFramework::CommonHelper::StringUtils::WStringToUtf8String((__int64)v19, StringRawBuffer);
  v11 = v19;
  if ( v20 >= 0x10 )
    v11 = (void **)v19[0];
  v12 = (*(__int64 (__fastcall **)(_QWORD, void **))(**((_QWORD **)this + 1) + 168LL))(*((_QWORD *)this + 1), v11);
  v13 = retaddr;
  if ( v12 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x279,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v12);
    JUMPOUT(0x18004AF5CLL);
  }
  if ( v20 >= 0x10 )
    operator delete(v19[0]);
  v20 = 15LL;
  v19[2] = 0LL;
  LOBYTE(v19[0]) = 0;
  WindowsDeleteString(string);
  string = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
}
