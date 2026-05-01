/*
 * XREFs of ?QueryInterface@CVirtualTouchpadExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B61B0
 * Callers:
 *     ?QueryInterface@CVirtualTouchpadExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B9FC0 (-QueryInterface@CVirtualTouchpadExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CVirtualTouchpadExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B9FF0 (-QueryInterface@CVirtualTouchpadExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CVirtualTouchpadExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BA040 (-QueryInterface@CVirtualTouchpadExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CVirtualTouchpadExperienceManager::QueryInterface(
        CVirtualTouchpadExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,Microsoft::WRL::Details::InterfaceList<IApplicationFrameEventHandler,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
