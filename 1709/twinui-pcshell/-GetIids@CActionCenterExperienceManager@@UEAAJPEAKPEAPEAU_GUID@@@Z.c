/*
 * XREFs of ?GetIids@CActionCenterExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180094F90
 * Callers:
 *     ?GetIids@CActionCenterExperienceManager@@WEI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18009D5C0 (-GetIids@CActionCenterExperienceManager@@WEI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CActionCenterExperienceManager@@WFA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18009D6F0 (-GetIids@CActionCenterExperienceManager@@WFA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CActionCenterExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18009D7F0 (-GetIids@CActionCenterExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CActionCenterExperienceManager::GetIids(
        CActionCenterExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension>::GetIids(
           this,
           a2,
           a3);
}
