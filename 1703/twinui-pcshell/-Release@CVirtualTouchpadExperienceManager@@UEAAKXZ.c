/*
 * XREFs of ?Release@CVirtualTouchpadExperienceManager@@UEAAKXZ @ 0x1800B61C0
 * Callers:
 *     ?Release@CVirtualTouchpadExperienceManager@@WBA@EAAKXZ @ 0x1800B9FB0 (-Release@CVirtualTouchpadExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CVirtualTouchpadExperienceManager@@WBI@EAAKXZ @ 0x1800B9FE0 (-Release@CVirtualTouchpadExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CVirtualTouchpadExperienceManager@@W7EAAKXZ @ 0x1800BA080 (-Release@CVirtualTouchpadExperienceManager@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CVirtualTouchpadExperienceManager::Release(CVirtualTouchpadExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,Microsoft::WRL::Details::InterfaceList<IApplicationFrameEventHandler,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
