/*
 * XREFs of ?QueryInterface@CJumpViewExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BC9C0
 * Callers:
 *     ?QueryInterface@CJumpViewExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0B70 (-QueryInterface@CJumpViewExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0BE0 (-QueryInterface@CJumpViewExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0C40 (-QueryInterface@CJumpViewExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0C50 (-QueryInterface@CJumpViewExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0CE0 (-QueryInterface@CJumpViewExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CJumpViewExperienceManager::QueryInterface(
        CJumpViewExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::QueryInterface(
           this,
           a2,
           a3);
}
