/*
 * XREFs of ??_GCPeopleTestExperienceManager@@UEAAPEAXI@Z @ 0x18016FC80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleTestExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800EFC48 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleTestExperienceMa.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180306D10 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 */

CWinRTApplicationView **__fastcall CPeopleTestExperienceManager::`scalar deleting destructor'(
        CWinRTApplicationView **this,
        char a2)
{
  volatile int *v4; // rdx

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(this + 35);
  CSingleViewShellExperience::~CSingleViewShellExperience((CSingleViewShellExperience *)(this + 10));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Windows::Foundation::IClosable,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Windows::Foundation::IClosable,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x120);
  return this;
}
