/*
 * XREFs of ?Release@CJumpViewExperienceManager@@UEAAKXZ @ 0x1800BC9D0
 * Callers:
 *     ?Release@CJumpViewExperienceManager@@WBI@EAAKXZ @ 0x1800C0B80 (-Release@CJumpViewExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@WCA@EAAKXZ @ 0x1800C0C00 (-Release@CJumpViewExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@W7EAAKXZ @ 0x1800C0C60 (-Release@CJumpViewExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@WCI@EAAKXZ @ 0x1800C0C70 (-Release@CJumpViewExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@WBA@EAAKXZ @ 0x1800C0CF0 (-Release@CJumpViewExperienceManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CJumpViewExperienceManager::Release(CJumpViewExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::Release(this);
}
