/*
 * XREFs of ?QueryInterface@CQuickConnectExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C4350
 * Callers:
 *     ?QueryInterface@CQuickConnectExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C9690 (-QueryInterface@CQuickConnectExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CQuickConnectExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C96E0 (-QueryInterface@CQuickConnectExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CQuickConnectExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C9700 (-QueryInterface@CQuickConnectExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CQuickConnectExperienceManager::QueryInterface(
        CQuickConnectExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager>::QueryInterface(
           this,
           a2,
           a3);
}
