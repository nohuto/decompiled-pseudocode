/*
 * XREFs of ?SetSizeHintWidth@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@M@Z @ 0x180121734
 * Callers:
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180127238 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??$SetValue@M@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJMPEAPEAUIInspectable@@@ZM@Z @ 0x18011CEA0 (--$SetValue@M@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewModePreferencesHelpers::SetSizeHintWidth(
        ViewModePreferencesHelpers *this,
        struct Windows::Internal::ShellHelpers::PropertySetHelper *a2,
        float a3)
{
  UAPViewWrapper *v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-40h] BYREF
  HSTRING v9; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ViewModePreferences.SizeHintWidth",
    0x22u,
    0x21u);
  v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<float>(this, v9, v4);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (__int64)"internal\\shell\\private\\inc\\viewmodepreferences_propertyset.h",
      (const char *)(unsigned int)v5);
  return v6;
}
