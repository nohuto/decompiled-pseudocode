/*
 * XREFs of ?PopulateSwitchAsyncPropertySet@@YAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180121310
 * Callers:
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x18012596C (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180127904 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x18006D050 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall PopulateSwitchAsyncPropertySet(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // r8
  int v8; // eax
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v14[2]; // [rsp+20h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  HSTRING v16; // [rsp+48h] [rbp-18h]

  v14[1] = -2LL;
  v14[0] = a4;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v14);
  v16 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ClientRequestedNavigationType",
    0x1Eu,
    0x1Du);
  v8 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)v14,
         v16,
         v7,
         1u);
  v9 = v8;
  if ( a1 && v8 >= 0 )
  {
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdFrom", 0x13u, 0x12u);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)v14,
           v16,
           v10,
           a1);
  }
  if ( a2 )
  {
    if ( v9 < 0 )
      goto LABEL_9;
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)v14,
           v16,
           v11,
           a2);
  }
  if ( v9 >= 0 )
  {
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_vsp", 0x10u, 0xFu);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)v14,
           v16,
           v12,
           a3);
  }
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  return (unsigned int)v9;
}
