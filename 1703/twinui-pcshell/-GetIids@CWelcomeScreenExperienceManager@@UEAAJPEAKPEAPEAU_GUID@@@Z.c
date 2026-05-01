/*
 * XREFs of ?GetIids@CWelcomeScreenExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B28B0
 * Callers:
 *     ?GetIids@CWelcomeScreenExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B5190 (-GetIids@CWelcomeScreenExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CWelcomeScreenExperienceManager::GetIids(
        CWelcomeScreenExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IWelcomeScreenExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
