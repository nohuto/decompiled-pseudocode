/*
 * XREFs of ??$MakeAndInitialize@VCPeopleTestExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800B3038
 * Callers:
 *     ?GetExperienceManager@PeopleTestExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800B2DD0 (-GetExperienceManager@PeopleTestExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIIns.c)
 * Callees:
 *     ??0CPeopleTestExperienceManager@@QEAA@XZ @ 0x1800B29A8 (--0CPeopleTestExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CPeopleTestExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B2AEC (-RuntimeClassInitialize@CPeopleTestExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIPresentationReadyChangedEventArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B2E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIPres.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleTestExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B2F00 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleTes.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPeopleTestExperienceManager,IInspectable,IServiceProvider * &>(
        void **a1,
        struct IServiceProvider **a2)
{
  CPeopleTestExperienceManager *v4; // rax
  int Interface; // edi
  CPeopleTestExperienceManager *v6; // rbx

  *a1 = 0LL;
  v4 = (CPeopleTestExperienceManager *)operator new(0x128uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CPeopleTestExperienceManager::CPeopleTestExperienceManager(v4);
    Interface = CPeopleTestExperienceManager::RuntimeClassInitialize(v6, *a2);
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Windows::Foundation::IClosable,Microsoft::WRL::FtmBase>::QueryInterface(
                    (char *)v6,
                    (__int64)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                    a1);
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>::Release((volatile signed __int64 *)v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)Interface;
}
