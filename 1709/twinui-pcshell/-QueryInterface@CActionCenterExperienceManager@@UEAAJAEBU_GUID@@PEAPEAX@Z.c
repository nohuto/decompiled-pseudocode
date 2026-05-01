/*
 * XREFs of ?QueryInterface@CActionCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180094FA0
 * Callers:
 *     ?QueryInterface@CActionCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D550 (-QueryInterface@CActionCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D580 (-QueryInterface@CActionCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D590 (-QueryInterface@CActionCenterExperienceManager@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D680 (-QueryInterface@CActionCenterExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D6B0 (-QueryInterface@CActionCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D7C0 (-QueryInterface@CActionCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D7E0 (-QueryInterface@CActionCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D8B0 (-QueryInterface@CActionCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D8D0 (-QueryInterface@CActionCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D8E0 (-QueryInterface@CActionCenterExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CActionCenterExperienceManager::QueryInterface(
        CActionCenterExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension>::QueryInterface(
           this,
           a2,
           a3);
}
