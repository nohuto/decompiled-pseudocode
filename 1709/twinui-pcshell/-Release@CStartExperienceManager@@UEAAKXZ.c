/*
 * XREFs of ?Release@CStartExperienceManager@@UEAAKXZ @ 0x1800B5AA0
 * Callers:
 *     ?Release@CStartExperienceManager@@WDI@EAAKXZ @ 0x1800BA6F0 (-Release@CStartExperienceManager@@WDI@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WCA@EAAKXZ @ 0x1800BA7C0 (-Release@CStartExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WEA@EAAKXZ @ 0x1800BA7D0 (-Release@CStartExperienceManager@@WEA@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@W7EAAKXZ @ 0x1800BA860 (-Release@CStartExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WCI@EAAKXZ @ 0x1800BA880 (-Release@CStartExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WEI@EAAKXZ @ 0x1800BA890 (-Release@CStartExperienceManager@@WEI@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WDA@EAAKXZ @ 0x1800BA910 (-Release@CStartExperienceManager@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CStartExperienceManager::Release(CStartExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAppViewDataSourceAdapter,IApplicationViewChangeListener,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::Release(this);
}
