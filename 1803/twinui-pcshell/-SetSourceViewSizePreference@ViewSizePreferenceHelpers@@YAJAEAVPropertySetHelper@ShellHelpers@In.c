/*
 * XREFs of ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x1801217D4
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@@Z @ 0x18000A1F8 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_K.c)
 *     ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x18011FB60 (-DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z.c)
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802B49B8 (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x18006D050 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewSizePreferenceHelpers::SetSourceViewSizePreference(
        Windows::Internal::ShellHelpers::PropertySetHelper *a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // rax
  __int64 v12; // r8
  _BYTE v13[32]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v13, (const WCHAR **)&off_18034C330);
  v8 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a1, *(HSTRING *)(v6 + 24), v7, a3);
  if ( v8 < 0 )
  {
    v9 = 206LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"internal\\onecoreuapshell\\inc\\viewsizepreference.h",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v13, (const WCHAR **)off_18034C328);
  v8 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a1, *(HSTRING *)(v11 + 24), v12, a2);
  if ( v8 < 0 )
  {
    v9 = 207LL;
    goto LABEL_3;
  }
  return 0LL;
}
