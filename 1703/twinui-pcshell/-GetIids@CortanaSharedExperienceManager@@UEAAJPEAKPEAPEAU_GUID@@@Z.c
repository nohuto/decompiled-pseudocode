/*
 * XREFs of ?GetIids@CortanaSharedExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800BA110
 * Callers:
 *     ?GetIids@CortanaSharedExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C0580 (-GetIids@CortanaSharedExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CortanaSharedExperienceManager::GetIids(
        CortanaSharedExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::ICortanaExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<IInitializeTrustedComponentForegroundControl,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
