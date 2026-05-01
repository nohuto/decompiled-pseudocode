/*
 * XREFs of ?GetExperienceManager@ActionCenterExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180095060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CActionCenterExperienceManager@@QEAA@XZ @ 0x180090E78 (--0CActionCenterExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180091414 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UILightDismissNotification@@U?$InterfaceList@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIEdgeUiInvocation@@U?$InterfaceList@UIEdgeUiTouchInvocation@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180095400 (-Release@-$RuntimeClass@U-$InterfaceList@UILightDismissNotification@@U-$InterfaceList@UIActionCe.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UILightDismissNotification@@U?$InterfaceList@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIEdgeUiInvocation@@U?$InterfaceList@UIEdgeUiTouchInvocation@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180095510 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UILightDismissNotification@@U-$InterfaceList@UIA.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ActionCenterExperienceManagerFactory::GetExperienceManager(
        ActionCenterExperienceManagerFactory *this,
        struct IServiceProvider *a2,
        struct IInspectable **a3)
{
  __int64 v5; // rax
  CActionCenterExperienceManager *v6; // rax
  int Interface; // edi
  CActionCenterExperienceManager *v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = 2LL;
  do
  {
    *a3 = 0LL;
    --v5;
  }
  while ( v5 );
  v6 = (CActionCenterExperienceManager *)operator new(0x260uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 )
  {
    Interface = -2147024882;
LABEL_10:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x685,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)Interface);
    return (unsigned int)Interface;
  }
  v8 = CActionCenterExperienceManager::CActionCenterExperienceManager(v6);
  Interface = CActionCenterExperienceManager::RuntimeClassInitialize(v8, a2);
  if ( Interface >= 0 )
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IActionCenterExperienceManager,Microsoft::WRL::Details::InterfaceList<IEdgeUiInvocation,Microsoft::WRL::Details::InterfaceList<IEdgeUiTouchInvocation,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                  v8,
                  &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  (void **)a3);
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IActionCenterExperienceManager,Microsoft::WRL::Details::InterfaceList<IEdgeUiInvocation,Microsoft::WRL::Details::InterfaceList<IEdgeUiTouchInvocation,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v8);
  if ( Interface < 0 )
    goto LABEL_10;
  return 0LL;
}
