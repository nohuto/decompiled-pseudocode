/*
 * XREFs of ?QueryInterface@CPeopleBarFlyoutExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A1790
 * Callers:
 *     ?QueryInterface@CPeopleBarFlyoutExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4310 (-QueryInterface@CPeopleBarFlyoutExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPeopleBarFlyoutExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4340 (-QueryInterface@CPeopleBarFlyoutExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPeopleBarFlyoutExperienceManager::QueryInterface(
        CPeopleBarFlyoutExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IPeopleBarFlyoutExperienceManager,Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
