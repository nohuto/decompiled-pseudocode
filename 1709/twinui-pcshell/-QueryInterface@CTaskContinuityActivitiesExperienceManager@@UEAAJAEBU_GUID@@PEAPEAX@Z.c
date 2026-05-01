/*
 * XREFs of ?QueryInterface@CTaskContinuityActivitiesExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AADD0
 * Callers:
 *     ?QueryInterface@CTaskContinuityActivitiesExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ABF70 (-QueryInterface@CTaskContinuityActivitiesExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ABFB0 (-QueryInterface@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CTaskContinuityActivitiesExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ABFD0 (-QueryInterface@CTaskContinuityActivitiesExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::QueryInterface(
        CTaskContinuityActivitiesExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::QueryInterface(
           this,
           a2,
           a3);
}
