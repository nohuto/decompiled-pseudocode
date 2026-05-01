/*
 * XREFs of ?Release@CActionCenterExperienceManager@@UEAAKXZ @ 0x180090E60
 * Callers:
 *     ?Release@CActionCenterExperienceManager@@WCA@EAAKXZ @ 0x180097750 (-Release@CActionCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WEA@EAAKXZ @ 0x180097770 (-Release@CActionCenterExperienceManager@@WEA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@W7EAAKXZ @ 0x180097850 (-Release@CActionCenterExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WCI@EAAKXZ @ 0x180097860 (-Release@CActionCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WEI@EAAKXZ @ 0x180097880 (-Release@CActionCenterExperienceManager@@WEI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WBA@EAAKXZ @ 0x180097990 (-Release@CActionCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WDA@EAAKXZ @ 0x1800979A0 (-Release@CActionCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WBI@EAAKXZ @ 0x180097A90 (-Release@CActionCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WDI@EAAKXZ @ 0x180097AA0 (-Release@CActionCenterExperienceManager@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CActionCenterExperienceManager::Release(CActionCenterExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IActionCenterExperienceManager,Microsoft::WRL::Details::InterfaceList<IEdgeUiInvocation,Microsoft::WRL::Details::InterfaceList<IEdgeUiTouchInvocation,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
