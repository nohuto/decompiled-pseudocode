/*
 * XREFs of ??$MakeAndInitialize@VCPeopleBarJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800A5CD4
 * Callers:
 *     ?GetExperienceManager@PeopleBarJumpViewExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800A5820 (-GetExperienceManager@PeopleBarJumpViewExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAP.c)
 * Callees:
 *     ??0CPeopleBarJumpViewExperienceManager@@QEAA@XZ @ 0x1800A44E8 (--0CPeopleBarJumpViewExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800A4714 (-RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIPeopleBarJumpViewExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UILightDismissNotification@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A5A20 (-Release@-$RuntimeClass@U-$InterfaceList@UIPeopleBarJumpViewExperienceManager@Experience@Shell@I.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIPeopleBarJumpViewExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UILightDismissNotification@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A5B30 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIPeopleBarJumpViewExperienceManager@Experience@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPeopleBarJumpViewExperienceManager,IInspectable,IServiceProvider * &>(
        _QWORD *a1,
        struct IServiceProvider **a2)
{
  CPeopleBarJumpViewExperienceManager *v4; // rbx
  CPeopleBarJumpViewExperienceManager *v5; // rax
  int Interface; // edi

  *a1 = 0LL;
  v4 = 0LL;
  v5 = (CPeopleBarJumpViewExperienceManager *)operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v4 = CPeopleBarJumpViewExperienceManager::CPeopleBarJumpViewExperienceManager(v5);
    Interface = CPeopleBarJumpViewExperienceManager::RuntimeClassInitialize(v4, *a2);
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                    (__int64)v4,
                    &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                    a1);
  }
  else
  {
    Interface = -2147024882;
  }
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)v4);
  return (unsigned int)Interface;
}
