/*
 * XREFs of ?GetIids@CQuickConnectExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AB820
 * Callers:
 *     ?GetIids@CQuickConnectExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B0E50 (-GetIids@CQuickConnectExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CQuickConnectExperienceManager::GetIids(
        CQuickConnectExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IQuickConnectExperienceManager,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
