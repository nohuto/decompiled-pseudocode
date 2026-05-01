/*
 * XREFs of ?GetIids@CTaskContinuityActivitiesExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AADC0
 * Callers:
 *     ?GetIids@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800ABF30 (-GetIids@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::GetIids(
        CTaskContinuityActivitiesExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::GetIids(
           this,
           a2,
           a3);
}
