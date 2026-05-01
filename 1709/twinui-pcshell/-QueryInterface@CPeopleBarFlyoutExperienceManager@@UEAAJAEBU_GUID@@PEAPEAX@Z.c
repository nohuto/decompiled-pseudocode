/*
 * XREFs of ?QueryInterface@CPeopleBarFlyoutExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ACF70
 * Callers:
 *     ?QueryInterface@CPeopleBarFlyoutExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0BE0 (-QueryInterface@CPeopleBarFlyoutExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPeopleBarFlyoutExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0BF0 (-QueryInterface@CPeopleBarFlyoutExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPeopleBarFlyoutExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0C50 (-QueryInterface@CPeopleBarFlyoutExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPeopleBarFlyoutExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0CB0 (-QueryInterface@CPeopleBarFlyoutExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPeopleBarFlyoutExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0D40 (-QueryInterface@CPeopleBarFlyoutExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPeopleBarFlyoutExperienceManager::QueryInterface(
        CPeopleBarFlyoutExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarFlyoutExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::QueryInterface(
           this,
           a2,
           a3);
}
