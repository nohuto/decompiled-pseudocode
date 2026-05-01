/*
 * XREFs of ?GetIids@CVirtualTouchpadExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B61A0
 * Callers:
 *     ?GetIids@CVirtualTouchpadExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800BA060 (-GetIids@CVirtualTouchpadExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CVirtualTouchpadExperienceManager::GetIids(
        CVirtualTouchpadExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,Microsoft::WRL::Details::InterfaceList<IApplicationFrameEventHandler,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
