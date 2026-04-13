/*
 * XREFs of ?SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0@Z @ 0x180098150
 * Callers:
 *     ?SetBoundedLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0@Z @ 0x180098248 (-SetBoundedLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@.c)
 *     ?SetChosenLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0@Z @ 0x180098274 (-SetChosenLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00@Z @ 0x18000C57C (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800169AC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z @ 0x180097E14 (-GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z.c)
 *     ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x18009801C (-ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::Settings::SetLayoutType(
        CreativeFramework::Policy *string,
        const WCHAR *lpValueName,
        HSTRING a3,
        HSTRING a4)
{
  char ShouldUseInternal; // di
  const WCHAR *StringRawBuffer; // rax
  const wchar_t *v9; // rdx
  LPCWCH AdUnitIdFromSubscriptionId; // rax
  int v11; // eax
  WCHAR *v12; // rbx
  WCHAR *v13; // rax
  const unsigned __int16 *v14; // r9
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  LPVOID pv[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  ShouldUseInternal = CreativeFramework::Policy::ShouldUseInternal(string);
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)string, 0LL);
  LOBYTE(v9) = ShouldUseInternal;
  AdUnitIdFromSubscriptionId = CreativeFramework::TargetedContent::GetAdUnitIdFromSubscriptionId(StringRawBuffer, v9);
  memset(pv, 0, 24);
  v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)pv,
          L"%s\\%s",
          L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
          AdUnitIdFromSubscriptionId,
          -2LL);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x92,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
      (const char *)(unsigned int)v11);
    goto LABEL_7;
  }
  v12 = (WCHAR *)pv[0];
  v13 = (WCHAR *)WindowsGetStringRawBuffer(a3, 0LL);
  v15 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(v12, lpValueName, v13, v14);
  v16 = retaddr;
  if ( v15 < 0 )
  {
LABEL_7:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x35,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v15);
    JUMPOUT(0x180098246LL);
  }
  if ( v12 )
    CoTaskMemFree(v12);
}
