/*
 * XREFs of ?SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ @ 0x18004701C
 * Callers:
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x180048F1C (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBG@Z @ 0x180046704 (-WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@DU-$char_tr.c)
 *     ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800472B8 (-GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA-AV-$com_ptr_t@UIUserActivityPay.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall MobilityExperience::ActivityWrapper::SetActivityComplete(MobilityExperience::ActivityWrapper *this)
{
  __int64 v2; // rbx
  int ActivationFactory; // eax
  __int64 v4; // rbx
  __int64 v5; // rdi
  int v6; // eax
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  char *StringRawBuffer; // rax
  void **v11; // rdx
  int v12; // eax
  HSTRING string; // [rsp+28h] [rbp-39h] BYREF
  __int64 v14; // [rsp+30h] [rbp-31h] BYREF
  __int64 v15; // [rsp+38h] [rbp-29h] BYREF
  int v16; // [rsp+40h] [rbp-21h]
  __int64 v17; // [rsp+48h] [rbp-19h] BYREF
  const WCHAR *v18; // [rsp+50h] [rbp-11h] BYREF
  const WCHAR *v19[2]; // [rsp+58h] [rbp-9h] BYREF
  void *v20[3]; // [rsp+68h] [rbp+7h] BYREF
  unsigned __int64 v21; // [rsp+80h] [rbp+1Fh]
  _BYTE v22[32]; // [rsp+88h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v19[1] = (const WCHAR *)-2LL;
  v19[0] = L"{ \"complete\": true }";
  MobilityExperience::ActivityWrapper::GetUserActivityPayload(this, &v17);
  v18 = L"Windows.Data.Json.JsonObject";
  v16 = 1;
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v22, &v18);
  v15 = 0LL;
  ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v2 + 24), &GUID_2289f159_54de_45d8_abcc_22603fa066a0, &v15);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x65E,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)ActivationFactory);
  v4 = v15;
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v22, v19);
  v14 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v4 + 48LL))(v4, *(_QWORD *)(v5 + 24), &v14);
  if ( v6 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x272,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v6);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 232LL))(v17, v14);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x274,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = v17;
  WindowsDeleteString(0LL);
  string = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v8 + 240LL))(v8, &string);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x277,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
  CreativeFramework::CommonHelper::StringUtils::WStringToUtf8String((__int64)v20, StringRawBuffer);
  v11 = v20;
  if ( v21 >= 0x10 )
    v11 = (void **)v20[0];
  v12 = (*(__int64 (__fastcall **)(_QWORD, void **))(**((_QWORD **)this + 1) + 168LL))(*((_QWORD *)this + 1), v11);
  if ( v12 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x279,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v12);
  if ( v21 >= 0x10 )
    operator delete(v20[0]);
  v21 = 15LL;
  v20[2] = 0LL;
  LOBYTE(v20[0]) = 0;
  WindowsDeleteString(string);
  string = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
}
