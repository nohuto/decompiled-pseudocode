/*
 * XREFs of ?GetIids@CQuickConnectExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C4340
 * Callers:
 *     ?GetIids@CQuickConnectExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C9660 (-GetIids@CQuickConnectExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CQuickConnectExperienceManager::GetIids(
        CQuickConnectExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager>::GetIids(
           this,
           a2,
           a3);
}
