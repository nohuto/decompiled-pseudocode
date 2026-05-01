/*
 * XREFs of ?Release@CVirtualTouchpadExperienceManager@@UEAAKXZ @ 0x1801824F0
 * Callers:
 *     ?Release@CVirtualTouchpadExperienceManager@@W7EAAKXZ @ 0x1800A5A80 (-Release@CVirtualTouchpadExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CVirtualTouchpadExperienceManager@@WBA@EAAKXZ @ 0x1800A5A90 (-Release@CVirtualTouchpadExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CVirtualTouchpadExperienceManager@@WBI@EAAKXZ @ 0x1800A5AA0 (-Release@CVirtualTouchpadExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CVirtualTouchpadExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,Windows::Foundation::IClosable>::Release(this);
}
