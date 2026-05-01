/*
 * XREFs of ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJPEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x18003D94C
 * Callers:
 *     ?DragEnter@CAppViewManager@@UEAAJU_GUID@@PEBGUtagPOINT@@@Z @ 0x18003F890 (-DragEnter@CAppViewManager@@UEAAJU_GUID@@PEBGUtagPOINT@@@Z.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_NW4ApplicationViewMode@ViewManagement@UI@Windows@@MM_KPEAUIPropertySet@Collections@Foundation@7@PEAUIAsyncCallback@@@Z @ 0x180041168 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_N.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z @ 0x18003D68C (-SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewSizePreferenceHelpers::SetSourceViewSizePreference(
        Windows::Internal::ShellHelpers::PropertySetHelper *a1,
        unsigned int a2,
        unsigned int a3)
{
  HRESULT v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  HRESULT v10; // eax
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-40h] BYREF
  HSTRING string; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  string = 0LL;
  v6 = WindowsCreateStringReference(L"ViewSizePreferences.SourceViewSizePreference", 0x2Cu, &hstringHeader, &string);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v7 = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(a1, string, a3);
  if ( v7 < 0 )
  {
    v8 = 26LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"internal\\shell\\private\\inc\\viewsizepreference_propertyset.h",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  string = 0LL;
  v10 = WindowsCreateStringReference(L"ViewSizePreferences.SourceWindow", 0x20u, &hstringHeader, &string);
  if ( v10 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
  v7 = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(a1, string, a2);
  if ( v7 < 0 )
  {
    v8 = 27LL;
    goto LABEL_5;
  }
  return 0LL;
}
