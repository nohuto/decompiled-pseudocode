/*
 * XREFs of ?Attach@?$ComPtr@VWindowWrapper@@@WRL@Microsoft@@QEAAXPEAVWindowWrapper@@@Z @ 0x1801D5020
 * Callers:
 *     ??$MakeAndInitialize@VWindowWrapper@@UIWindowWrapperInternal@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@AEAY0DF@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAUIWindowWrapperInternal@@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@AEAY0DF@$$CBG@Z @ 0x1801D1A44 (--$MakeAndInitialize@VWindowWrapper@@UIWindowWrapperInternal@@PEAVWindowEventDispatcher@@PEAUIAp.c)
 *     ??$MakeAndInitialize@VWindowWrapper@@UIWindowWrapperInternal@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEBG@Details@WRL@Microsoft@@YAJPEAPEAUIWindowWrapperInternal@@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@$$QEAPEBG@Z @ 0x1801D1B58 (--$MakeAndInitialize@VWindowWrapper@@UIWindowWrapperInternal@@PEAVWindowEventDispat_ea_1801D1B58.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D8260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_1801D8260.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<WindowWrapper>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(v4);
  *a1 = a2;
  return result;
}
