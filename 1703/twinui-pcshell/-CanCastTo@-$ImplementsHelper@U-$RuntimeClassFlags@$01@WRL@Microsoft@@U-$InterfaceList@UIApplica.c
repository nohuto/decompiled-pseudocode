/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@UIApplicationViewFlashingNotification@@U?$InterfaceList@UIPrivilegedOperationsConsumer@@U?$InterfaceList@UIWindowManagementConstraintsEvents@@U?$InterfaceList@UIImmersiveApplicationNotification@@U?$InterfaceList@UIEnterpriseIdChangeNotification@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180076EAC
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@VNil@Details@23@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@$00$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180076FA0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$InterfaceList@VCImmersi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IApplicationViewFlashingNotification,Microsoft::WRL::Details::InterfaceList<IPrivilegedOperationsConsumer,Microsoft::WRL::Details::InterfaceList<IWindowManagementConstraintsEvents,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationNotification,Microsoft::WRL::Details::InterfaceList<IEnterpriseIdChangeNotification,Microsoft::WRL::Details::Nil>>>>>,1,0>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == 1830563296
    && a2[1] == *(_DWORD *)&GUID_6d1c2de0_833b_4edb_89a3_4a79a8a02b88.Data2
    && a2[2] == *(_DWORD *)GUID_6d1c2de0_833b_4edb_89a3_4a79a8a02b88.Data4
    && a2[3] == *(_DWORD *)&GUID_6d1c2de0_833b_4edb_89a3_4a79a8a02b88.Data4[4]
    || (a1 += 8LL, *a2 == -1211751484)
    && a2[1] == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
    && a2[2] == *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
    && a2[3] == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4]
    || (a1 += 8LL, *a2 == 794127247)
    && a2[1] == *(_DWORD *)&GUID_2f556b8f_7278_41ef_b868_3152588db186.Data2
    && a2[2] == *(_DWORD *)GUID_2f556b8f_7278_41ef_b868_3152588db186.Data4
    && a2[3] == *(_DWORD *)&GUID_2f556b8f_7278_41ef_b868_3152588db186.Data4[4]
    || (a1 += 8LL, *a2 == -499699522)
    && a2[1] == *(_DWORD *)&GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7.Data2
    && a2[2] == *(_DWORD *)GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7.Data4
    && a2[3] == *(_DWORD *)&GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == 927980921
    && a2[1] == *(_DWORD *)&GUID_374fdd79_cca2_4be4_a49d_0508c29743bc.Data2
    && a2[2] == *(_DWORD *)GUID_374fdd79_cca2_4be4_a49d_0508c29743bc.Data4
    && a2[3] == *(_DWORD *)&GUID_374fdd79_cca2_4be4_a49d_0508c29743bc.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}
