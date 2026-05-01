/*
 * XREFs of ??1?$ComPtr@VCActionCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18009CE60
 * Callers:
 *     _ActionCenterExperienceManagerFactory::GetExperienceManager_::_1_::dtor$2 @ 0x1801EACD3 (_ActionCenterExperienceManagerFactory--GetExperienceManager_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@UIHolographicExperienceExtension@Holographic@789@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009AEE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNoti.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CActionCenterExperienceManager>::~ComPtr<CActionCenterExperienceManager>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension>::Release(result);
  }
  return result;
}
