/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180079BE4
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180079CE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180079CE0.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180079AEC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApplicationViewFlashi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification>>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int CanCastTo; // r9d
  char v4; // r10
  char v5; // al
  __int64 v6; // rcx

  CanCastTo = 0;
  v4 = 1;
  if ( *a2 == -1236992355
    && a2[1] == *(_DWORD *)&GUID_b644fe9d_3090_4a41_9f18_465a5f445272.Data2
    && a2[2] == *(_DWORD *)GUID_b644fe9d_3090_4a41_9f18_465a5f445272.Data4
    && a2[3] == *(_DWORD *)&GUID_b644fe9d_3090_4a41_9f18_465a5f445272.Data4[4] )
  {
    *a3 = a1;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  if ( !v5 )
  {
    if ( *a2 == 738766320
      && a2[1] == *(_DWORD *)&GUID_2c08adf0_a386_4b35_9250_0fe183476fcc.Data2
      && a2[2] == *(_DWORD *)GUID_2c08adf0_a386_4b35_9250_0fe183476fcc.Data4
      && a2[3] == *(_DWORD *)&GUID_2c08adf0_a386_4b35_9250_0fe183476fcc.Data4[4] )
    {
      *a3 = a1;
    }
    else
    {
      v4 = 0;
    }
    if ( !v4 )
    {
      v6 = a1 + 8;
      if ( *a2 == 184376270
        && a2[1] == *(_DWORD *)&GUID_0afd5bce_d688_4973_ad54_ad0ce775f26b.Data2
        && a2[2] == *(_DWORD *)GUID_0afd5bce_d688_4973_ad54_ad0ce775f26b.Data4
        && a2[3] == *(_DWORD *)&GUID_0afd5bce_d688_4973_ad54_ad0ce775f26b.Data4[4]
        || (v6 += 8LL, *a2 == -520195196)
        && a2[1] == *(_DWORD *)&GUID_e0fe7384_5482_4659_ab2c_4ff038948779.Data2
        && a2[2] == *(_DWORD *)GUID_e0fe7384_5482_4659_ab2c_4ff038948779.Data4
        && a2[3] == *(_DWORD *)&GUID_e0fe7384_5482_4659_ab2c_4ff038948779.Data4[4] )
      {
        *a3 = v6;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification>::CanCastTo(
                      v6 + 8,
                      a2,
                      a3);
      }
    }
  }
  return (CanCastTo >> 31) & 0x80004002;
}
