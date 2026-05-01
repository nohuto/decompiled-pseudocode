/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@UIImmersiveWindowManager@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@UIImmersiveWindowManagerInternal@@U?$InterfaceList@UIObjectProvider@@U?$InterfaceList@UIPresentedWindowOverride@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18002F9E4
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationActivationHistory@@UIImmersiveWindowManager@@UIImmersiveMonitorNotification@@UIImmersiveWindowManagerInternal@@UIObjectProvider@@UIPresentedWindowOverride@@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002F7A0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$Interfac_ea_18002F7A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowManager,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowManagerInternal,Microsoft::WRL::Details::InterfaceList<IObjectProvider,Microsoft::WRL::Details::InterfaceList<IPresentedWindowOverride,Microsoft::WRL::Details::Nil>>>>>,1,0>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == 1629137150
    && a2[1] == *(_DWORD *)&GUID_611aa8fe_b694_4129_86af_2c2553fff785.Data2
    && a2[2] == *(_DWORD *)GUID_611aa8fe_b694_4129_86af_2c2553fff785.Data4
    && a2[3] == *(_DWORD *)&GUID_611aa8fe_b694_4129_86af_2c2553fff785.Data4[4]
    || (a1 += 8LL, *a2 == -1811144131)
    && a2[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
    && a2[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
    && a2[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4]
    || (a1 += 8LL, *a2 == -1850735350)
    && a2[1] == *(_DWORD *)&GUID_91b0050a_78af_434e_ae0c_89943ac0ffee.Data2
    && a2[2] == *(_DWORD *)GUID_91b0050a_78af_434e_ae0c_89943ac0ffee.Data4
    && a2[3] == *(_DWORD *)&GUID_91b0050a_78af_434e_ae0c_89943ac0ffee.Data4[4]
    || (a1 += 8LL, *a2 == -1509395416)
    && a2[1] == *(_DWORD *)&GUID_a6087428_3be3_4d73_b308_7c04a540bf1a.Data2
    && a2[2] == *(_DWORD *)GUID_a6087428_3be3_4d73_b308_7c04a540bf1a.Data4
    && a2[3] == *(_DWORD *)&GUID_a6087428_3be3_4d73_b308_7c04a540bf1a.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == -1350618835
    && a2[1] == *(_DWORD *)&GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee.Data2
    && a2[2] == *(_DWORD *)GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee.Data4
    && a2[3] == *(_DWORD *)&GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}
