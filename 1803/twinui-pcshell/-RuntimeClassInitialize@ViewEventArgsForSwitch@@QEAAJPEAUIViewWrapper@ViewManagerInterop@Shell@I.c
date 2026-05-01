/*
 * XREFs of ?RuntimeClassInitialize@ViewEventArgsForSwitch@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ApplicationViewSwitchingOptions@ViewManagement@UI@6@PEAUIAsyncCallback@@@Z @ 0x1801CCF2C
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@@Z @ 0x1801D1768 (--$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@.c)
 * Callees:
 *     ??4?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180004C50 (--4-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ??4?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAsyncCallback@@@Z @ 0x1800082D0 (--4-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAsyncCallback@@@Z.c)
 *     ??4?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18008F428 (--4-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrope.c)
 */

__int64 __fastcall ViewEventArgsForSwitch::RuntimeClassInitialize(__int64 a1, __int64 a2, __int64 a3, int a4, void *a5)
{
  *(_DWORD *)(a1 + 48) = 13;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::operator=((__int64 *)(a1 + 56), 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::operator=(
    (__int64 *)(a1 + 96),
    a2);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::operator=(
    (__int64 *)(a1 + 104),
    a3);
  *(_DWORD *)(a1 + 112) = a4;
  Microsoft::WRL::ComPtr<IAsyncCallback>::operator=((void **)(a1 + 120), a5);
  return 0LL;
}
