/*
 * XREFs of ?GetIids@CVirtualTouchpadExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800CA410
 * Callers:
 *     ?GetIids@CVirtualTouchpadExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800CE1C0 (-GetIids@CVirtualTouchpadExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CVirtualTouchpadExperienceManager::GetIids(
        CVirtualTouchpadExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,Windows::Foundation::IClosable>::GetIids(
           this,
           a2,
           a3);
}
