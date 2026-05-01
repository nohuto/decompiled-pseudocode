/*
 * XREFs of ?GetIids@CStartExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B5A80
 * Callers:
 *     ?GetIids@CStartExperienceManager@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800BA780 (-GetIids@CStartExperienceManager@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CStartExperienceManager@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800BA8C0 (-GetIids@CStartExperienceManager@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CStartExperienceManager::GetIids(CStartExperienceManager *this, unsigned int *a2, struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IStartSizingFrameCallback,IDWMStoryboardListener>::GetIids(
           this,
           a2,
           a3);
}
