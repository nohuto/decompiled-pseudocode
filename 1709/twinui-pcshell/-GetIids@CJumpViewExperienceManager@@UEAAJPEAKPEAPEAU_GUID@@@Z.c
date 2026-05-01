/*
 * XREFs of ?GetIids@CJumpViewExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800BC9B0
 * Callers:
 *     ?GetIids@CJumpViewExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C0CC0 (-GetIids@CJumpViewExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CJumpViewExperienceManager::GetIids(
        CJumpViewExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::GetIids(
           this,
           a2,
           a3);
}
