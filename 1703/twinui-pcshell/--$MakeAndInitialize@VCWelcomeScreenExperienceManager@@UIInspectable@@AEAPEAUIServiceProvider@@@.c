/*
 * XREFs of ??$MakeAndInitialize@VCWelcomeScreenExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800B4E7C
 * Callers:
 *     ?GetExperienceManager@WelcomeScreenExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800B39F0 (-GetExperienceManager@WelcomeScreenExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUI.c)
 * Callees:
 *     ??0CWelcomeScreenExperienceManager@@QEAA@XZ @ 0x1800B28D8 (--0CWelcomeScreenExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CWelcomeScreenExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B2A9C (-RuntimeClassInitialize@CWelcomeScreenExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWelcomeScreenExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIClosable@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B3AB0 (-Release@-$RuntimeClass@U-$InterfaceList@UIWelcomeScreenExperienceManager@Experience@Shell@Inter.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIWelcomeScreenExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIClosable@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3B50 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIWelcomeScreenExperienceManager@Experience@Shel.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CWelcomeScreenExperienceManager,IInspectable,IServiceProvider * &>(
        void **a1,
        struct IServiceProvider **a2)
{
  CWelcomeScreenExperienceManager *v4; // rbx
  CWelcomeScreenExperienceManager *v5; // rax
  int Interface; // edi
  const unsigned __int16 *v7; // r8
  int v8; // r9d

  *a1 = 0LL;
  v4 = 0LL;
  v5 = (CWelcomeScreenExperienceManager *)operator new(0x150uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v4 = CWelcomeScreenExperienceManager::CWelcomeScreenExperienceManager(v5);
    Interface = CWelcomeScreenExperienceManager::RuntimeClassInitialize(v4, *a2, v7, v8);
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IWelcomeScreenExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                    (char *)v4,
                    (__int64)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                    a1);
  }
  else
  {
    Interface = -2147024882;
  }
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IWelcomeScreenExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)v4);
  return (unsigned int)Interface;
}
