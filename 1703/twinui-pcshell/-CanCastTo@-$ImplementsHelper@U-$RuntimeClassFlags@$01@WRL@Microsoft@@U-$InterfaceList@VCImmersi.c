/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@VNil@Details@23@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@$00$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180076FA0
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@VNil@Details@23@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800770A0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$Interfac_ea_1800770A0.c)
 * Callees:
 *     ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@VCImmersiveShellComponent@@VNil@Details@23@V6723@V6723@V6723@V6723@V6723@V6723@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001A760 (-CanCastTo@-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@VCImmers.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>,1,1>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 result; // rax
  _DWORD *v4; // rdx
  _QWORD *v5; // r8
  __int64 v6; // r11
  __int64 v7; // r9
  char v8; // cl
  char v9; // al

  result = Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,CImmersiveShellComponent,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
             a1,
             a2,
             a3);
  if ( (int)result < 0 )
  {
    v7 = v6 + 80;
    v8 = 1;
    if ( *v4 == -1236992355
      && v4[1] == *(_DWORD *)&GUID_b644fe9d_3090_4a41_9f18_465a5f445272.Data2
      && v4[2] == *(_DWORD *)GUID_b644fe9d_3090_4a41_9f18_465a5f445272.Data4
      && v4[3] == *(_DWORD *)&GUID_b644fe9d_3090_4a41_9f18_465a5f445272.Data4[4] )
    {
      v9 = 1;
      *v5 = v7;
    }
    else
    {
      v9 = 0;
    }
    if ( !v9 )
    {
      if ( *v4 == 738766320
        && v4[1] == *(_DWORD *)&GUID_2c08adf0_a386_4b35_9250_0fe183476fcc.Data2
        && v4[2] == *(_DWORD *)GUID_2c08adf0_a386_4b35_9250_0fe183476fcc.Data4
        && v4[3] == *(_DWORD *)&GUID_2c08adf0_a386_4b35_9250_0fe183476fcc.Data4[4] )
      {
        *v5 = v7;
      }
      else
      {
        v8 = 0;
      }
      if ( !v8 )
      {
        if ( *v4 == 184376270
          && v4[1] == *(_DWORD *)&GUID_0afd5bce_d688_4973_ad54_ad0ce775f26b.Data2
          && v4[2] == *(_DWORD *)GUID_0afd5bce_d688_4973_ad54_ad0ce775f26b.Data4
          && v4[3] == *(_DWORD *)&GUID_0afd5bce_d688_4973_ad54_ad0ce775f26b.Data4[4] )
        {
          *v5 = v6 + 88;
        }
        else
        {
          if ( *v4 != -520195196
            || v4[1] != *(_DWORD *)&GUID_e0fe7384_5482_4659_ab2c_4ff038948779.Data2
            || v4[2] != *(_DWORD *)GUID_e0fe7384_5482_4659_ab2c_4ff038948779.Data4
            || v4[3] != *(_DWORD *)&GUID_e0fe7384_5482_4659_ab2c_4ff038948779.Data4[4] )
          {
            return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IApplicationViewFlashingNotification,Microsoft::WRL::Details::InterfaceList<IPrivilegedOperationsConsumer,Microsoft::WRL::Details::InterfaceList<IWindowManagementConstraintsEvents,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationNotification,Microsoft::WRL::Details::InterfaceList<IEnterpriseIdChangeNotification,Microsoft::WRL::Details::Nil>>>>>,1,0>::CanCastTo(
                     v6 + 104,
                     v4,
                     v5);
          }
          *v5 = v6 + 96;
        }
      }
    }
    return 0LL;
  }
  return result;
}
