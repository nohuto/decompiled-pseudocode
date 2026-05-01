/*
 * XREFs of ?Release@CTaskContinuityActivitiesExperienceManager@@UEAAKXZ @ 0x1800AADE0
 * Callers:
 *     ?Release@CPeopleBarJumpViewExperienceManager@@WBA@EAAKXZ @ 0x1800ABF60 (-Release@CPeopleBarJumpViewExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ @ 0x1800ABFA0 (-Release@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CTaskContinuityActivitiesExperienceManager@@W7EAAKXZ @ 0x1800AC000 (-Release@CTaskContinuityActivitiesExperienceManager@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CTaskContinuityActivitiesExperienceManager::Release(
        CTaskContinuityActivitiesExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::Release(this);
}
