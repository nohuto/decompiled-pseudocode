/*
 * XREFs of ?Release@CTaskContinuityActivitiesExperienceManager@@UEAAKXZ @ 0x1801613F0
 * Callers:
 *     ?Release@CTaskContinuityActivitiesExperienceManager@@W7EAAKXZ @ 0x1800A5180 (-Release@CTaskContinuityActivitiesExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ @ 0x1800A5190 (-Release@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CPeopleBarJumpViewExperienceManager@@WBA@EAAKXZ @ 0x1800A5550 (-Release@CPeopleBarJumpViewExperienceManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::Release(this);
}
