/*
 * XREFs of ?QueryInterface@CControlCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801586E0
 * Callers:
 *     ?QueryInterface@CControlCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4C80 (-QueryInterface@CControlCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4C90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800A4C90.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4CA0 (-QueryInterface@CControlCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4CB0 (-QueryInterface@CControlCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4CC0 (-QueryInterface@CControlCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4CD0 (-QueryInterface@CControlCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4CE0 (-QueryInterface@CControlCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4CF0 (-QueryInterface@CControlCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CControlCenterExperienceManager::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>>(
           this,
           a2,
           a3);
}
