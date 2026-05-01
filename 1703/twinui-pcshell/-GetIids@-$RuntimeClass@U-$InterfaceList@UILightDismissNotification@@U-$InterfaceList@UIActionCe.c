/*
 * XREFs of ?GetIids@?$RuntimeClass@U?$InterfaceList@UILightDismissNotification@@U?$InterfaceList@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIEdgeUiInvocation@@U?$InterfaceList@UIEdgeUiTouchInvocation@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180095330
 * Callers:
 *     ?GetIids@CActionCenterExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180090E40 (-GetIids@CActionCenterExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@?$RuntimeClass@U?$InterfaceList@UILightDismissNotification@@U?$InterfaceList@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIEdgeUiInvocation@@U?$InterfaceList@UIEdgeUiTouchInvocation@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WEI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800976C0 (-GetIids@-$RuntimeClass@U-$InterfaceList@UILightDismissNotification@@U-$InterfaceLi_ea_1800976C0.c)
 *     ?GetIids@?$RuntimeClass@U?$InterfaceList@UILightDismissNotification@@U?$InterfaceList@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIEdgeUiInvocation@@U?$InterfaceList@UIEdgeUiTouchInvocation@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800978D0 (-GetIids@-$RuntimeClass@U-$InterfaceList@UILightDismissNotification@@U-$InterfaceLi_ea_1800978D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IActionCenterExperienceManager,Microsoft::WRL::Details::InterfaceList<IEdgeUiInvocation,Microsoft::WRL::Details::InterfaceList<IEdgeUiTouchInvocation,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0xA0uLL);
  if ( v6 )
  {
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    v6[1] = GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb;
    v6[2] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    v6[3] = GUID_0204e158_c053_499b_811c_acd15ef07559;
    v6[4] = GUID_dec04b18_357e_41d8_9b71_b991243bea34;
    v6[5] = GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef;
    v6[6] = GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2;
    v6[7] = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
    v6[8] = GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270;
    v6[9] = _uuidof__AUIDisposable_Platform__;
    *a2 = 10;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
