/*
 * XREFs of ?GetIids@CPeopleBarFlyoutExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800ACF60
 * Callers:
 *     ?GetIids@CPeopleBarFlyoutExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B0C40 (-GetIids@CPeopleBarFlyoutExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPeopleBarFlyoutExperienceManager::GetIids(
        CPeopleBarFlyoutExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarFlyoutExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::GetIids(
           this,
           a2,
           a3);
}
