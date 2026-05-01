/*
 * XREFs of ?QueryInterface@CActionCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180090E50
 * Callers:
 *     ?QueryInterface@CActionCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800976E0 (-QueryInterface@CActionCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180097720 (-QueryInterface@CActionCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180097800 (-QueryInterface@CActionCenterExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180097830 (-QueryInterface@CActionCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180097930 (-QueryInterface@CActionCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180097970 (-QueryInterface@CActionCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180097A20 (-QueryInterface@CActionCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180097A50 (-QueryInterface@CActionCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180097A70 (-QueryInterface@CActionCenterExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CActionCenterExperienceManager::QueryInterface(
        CActionCenterExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IActionCenterExperienceManager,Microsoft::WRL::Details::InterfaceList<IEdgeUiInvocation,Microsoft::WRL::Details::InterfaceList<IEdgeUiTouchInvocation,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
