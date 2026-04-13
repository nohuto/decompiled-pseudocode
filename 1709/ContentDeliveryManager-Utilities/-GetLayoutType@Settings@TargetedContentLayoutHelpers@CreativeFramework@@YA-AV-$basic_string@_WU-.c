/*
 * XREFs of ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x18008AEB0
 * Callers:
 *     ?NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18008B4DC (-NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedC.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180061440 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z @ 0x180089568 (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z.c)
 *     ?GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z @ 0x18008AA28 (-GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z.c)
 *     ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x18008AC28 (-ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=3
CreativeFramework::Policy *__fastcall CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType(
        CreativeFramework::Policy *a1,
        HSTRING string,
        LPCWSTR lpValue)
{
  char ShouldUseInternal; // bl
  const WCHAR *StringRawBuffer; // rax
  const wchar_t *v8; // rdx
  LPCWCH AdUnitIdFromSubscriptionId; // rax
  int v10; // eax
  const wchar_t *v11; // r8
  WCHAR *v12; // rdi
  unsigned __int64 v13; // rbx
  int StringSetting; // eax
  void *v15; // r14
  char *v16; // rdx
  LPVOID pv; // [rsp+28h] [rbp-18h] BYREF
  __int64 v19; // [rsp+30h] [rbp-10h]
  __int64 v20; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  ShouldUseInternal = CreativeFramework::Policy::ShouldUseInternal(a1);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  LOBYTE(v8) = ShouldUseInternal;
  AdUnitIdFromSubscriptionId = CreativeFramework::TargetedContent::GetAdUnitIdFromSubscriptionId(StringRawBuffer, v8);
  pv = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&pv,
          (__int64)L"%s\\%s",
          L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
          AdUnitIdFromSubscriptionId,
          -2LL);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x90,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v12 = (WCHAR *)pv;
  pv = 0LL;
  v13 = -1LL;
  v19 = -1LL;
  v20 = -1LL;
  StringSetting = CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(v12, lpValue, v11, &pv);
  if ( StringSetting < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)StringSetting);
    __debugbreak();
  }
  v15 = pv;
  v16 = (char *)&Src;
  if ( pv )
    v16 = (char *)pv;
  *((_QWORD *)a1 + 3) = 7LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *(_WORD *)a1 = 0;
  if ( *(_WORD *)v16 )
  {
    do
      ++v13;
    while ( *(_WORD *)&v16[2 * v13] );
  }
  else
  {
    v13 = 0LL;
  }
  std::wstring::assign(a1, v16, v13);
  if ( v15 )
    CoTaskMemFree(v15);
  if ( v12 )
    CoTaskMemFree(v12);
  return a1;
}
