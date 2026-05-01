/*
 * XREFs of ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@@012@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x18005BAA4
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x1800578EC (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIPeopleTestExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIClosable@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005D7D0 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIPeopleTestExperienceManager@Experience@Shell@Internal@.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISplashScreen@Activation@ApplicationModel@Windows@@U?$InterfaceList@UISplashScreen@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005EA00 (-Release@-$RuntimeClass@U-$InterfaceList@UISplashScreen@Activation@ApplicationModel@Windows@@U-$.c)
 *     ??0CSplashScreen@@QEAA@XZ @ 0x18006F058 (--0CSplashScreen@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSplashScreen@@QEAAJPEAUHWND__@@_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Z @ 0x18006F218 (-RuntimeClassInitialize@CSplashScreen@@QEAAJPEAUHWND__@@_NPEAUIApplicationPresentationLayer@@PEA.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSplashScreen,CSplashScreen,HWND__ * &,bool &,IApplicationPresentationLayer *,IInspectable *>(
        CSplashScreen **a1,
        HWND *a2,
        bool *a3,
        struct IApplicationPresentationLayer **a4,
        struct IInspectable **a5)
{
  CSplashScreen *v7; // rcx
  CSplashScreen *v10; // rax
  int v11; // esi
  CSplashScreen *v12; // rdi

  v7 = *a1;
  if ( v7 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ISplashScreen,Microsoft::WRL::Details::InterfaceList<ISplashScreen,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v7);
  }
  *a1 = 0LL;
  v10 = (CSplashScreen *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = CSplashScreen::CSplashScreen(v10);
    v11 = CSplashScreen::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5);
    if ( v11 >= 0 )
    {
      if ( v12 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(v12);
      *a1 = v12;
      if ( v12 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ISplashScreen,Microsoft::WRL::Details::InterfaceList<ISplashScreen,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v12);
      return 0;
    }
    else if ( v12 )
    {
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ISplashScreen,Microsoft::WRL::Details::InterfaceList<ISplashScreen,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v12);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
