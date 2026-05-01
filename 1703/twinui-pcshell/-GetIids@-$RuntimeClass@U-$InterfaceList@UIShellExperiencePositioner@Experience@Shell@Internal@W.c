/*
 * XREFs of ?GetIids@?$RuntimeClass@U?$InterfaceList@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@U?$InterfaceList@VICortanaDesktopNotifications@Cortana@TwinUI@@U?$InterfaceList@VICortanaExperienceView@Cortana@TwinUI@@U?$InterfaceList@UILightDismissNotification@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@UIInputHostLayoutChanges@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@U?$InterfaceList@VICortanaWNFNotification@Cortana@TwinUI@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C8B50
 * Callers:
 *     ?GetIids@?$RuntimeClass@U?$InterfaceList@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@U?$InterfaceList@VICortanaDesktopNotifications@Cortana@TwinUI@@U?$InterfaceList@VICortanaExperienceView@Cortana@TwinUI@@U?$InterfaceList@UILightDismissNotification@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@UIInputHostLayoutChanges@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@U?$InterfaceList@VICortanaWNFNotification@Cortana@TwinUI@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WEI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C9480 (-GetIids@-$RuntimeClass@U-$InterfaceList@UIShellExperiencePositioner@Experience@She_ea_1800C9480.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IShellExperiencePositioner,Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::ICortanaDesktopNotifications,Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::ICortanaExperienceView,Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<IInputHostLayoutChanges,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::ICortanaWNFNotification,Microsoft::WRL::Details::Nil>>>>>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0xB0uLL);
  if ( v6 )
  {
    *v6 = GUID_c6ff146a_7f1d_492e_8981_e95cda605ef7;
    v6[1] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    v6[2] = GUID_99f6b4c8_3fa6_4b31_b246_6527a04e1086;
    v6[3] = GUID_c2f00e7e_94c0_4da2_8530_103a4f231f12;
    v6[4] = GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb;
    v6[5] = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
    v6[6] = GUID_a24745fc_7a2e_4b7c_b092_8cb224694bbf;
    v6[7] = GUID_2754a354_56cd_4a4a_a0ed_ec256a88d6b7;
    v6[8] = GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e;
    v6[9] = GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2;
    v6[10] = GUID_e6e2291b_f74e_407c_b9d6_6dc4c69cacf9;
    *a2 = 11;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
