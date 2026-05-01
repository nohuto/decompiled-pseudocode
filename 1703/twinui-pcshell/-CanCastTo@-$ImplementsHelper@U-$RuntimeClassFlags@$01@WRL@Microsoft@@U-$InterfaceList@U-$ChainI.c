/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@U?$ChainInterfaces@UIAppViewManagerInternal@@UIAppViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@UIProjectionViewHelper@@U?$InterfaceList@UIImmersiveApplicationNotification@@U?$InterfaceList@UIDragViewEventHandler@@U?$InterfaceList@UIAppSwitcherNotification@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18004514C
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@U?$ChainInterfaces@UIAppViewManagerInternal@@UIAppViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@UIProjectionViewHelper@@U?$InterfaceList@UIImmersiveApplicationNotification@@U?$InterfaceList@UIDragViewEventHandler@@U?$InterfaceList@UIAppSwitcherNotification@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180043A20 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@U-$Chai.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IAppViewManagerInternal,IAppViewManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<IProjectionViewHelper,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationNotification,Microsoft::WRL::Details::InterfaceList<IDragViewEventHandler,Microsoft::WRL::Details::InterfaceList<IAppSwitcherNotification,Microsoft::WRL::Details::Nil>>>>>,1,0>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // r9d
  char v4; // r10
  char v5; // al
  __int64 v6; // rcx

  v3 = 0;
  v4 = 1;
  if ( *a2 == -124057211
    && a2[1] == *(_DWORD *)&GUID_f89b0985_7620_4f91_ad6d_a2ab45c0ffee.Data2
    && a2[2] == *(_DWORD *)GUID_f89b0985_7620_4f91_ad6d_a2ab45c0ffee.Data4
    && a2[3] == *(_DWORD *)&GUID_f89b0985_7620_4f91_ad6d_a2ab45c0ffee.Data4[4] )
  {
    v5 = 1;
    *a3 = a1;
  }
  else
  {
    v5 = 0;
  }
  if ( !v5 )
  {
    if ( *a2 == 620623468
      && a2[1] == *(_DWORD *)&GUID_24fdf66c_aad4_4512_b94b_3480c0ffee84.Data2
      && a2[2] == *(_DWORD *)GUID_24fdf66c_aad4_4512_b94b_3480c0ffee84.Data4
      && a2[3] == *(_DWORD *)&GUID_24fdf66c_aad4_4512_b94b_3480c0ffee84.Data4[4] )
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
      if ( *a2 == 179198059
        && a2[1] == *(_DWORD *)&GUID_0aae586b_12be_4521_9e84_624c4833ff79.Data2
        && a2[2] == *(_DWORD *)GUID_0aae586b_12be_4521_9e84_624c4833ff79.Data4
        && a2[3] == *(_DWORD *)&GUID_0aae586b_12be_4521_9e84_624c4833ff79.Data4[4]
        || (v6 += 8LL, *a2 == -499699522)
        && a2[1] == *(_DWORD *)&GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7.Data2
        && a2[2] == *(_DWORD *)GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7.Data4
        && a2[3] == *(_DWORD *)&GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7.Data4[4]
        || (v6 += 8LL, *a2 == -842968014)
        && a2[1] == *(_DWORD *)&GUID_cdc15432_c344_4d81_a416_b5fdeec8cb04.Data2
        && a2[2] == *(_DWORD *)GUID_cdc15432_c344_4d81_a416_b5fdeec8cb04.Data4
        && a2[3] == *(_DWORD *)&GUID_cdc15432_c344_4d81_a416_b5fdeec8cb04.Data4[4] )
      {
        *a3 = v6;
      }
      else if ( *a2 == 1639578286
             && a2[1] == *(_DWORD *)&GUID_61b9faae_6abc_4c4b_9bdf_77c52e795bf6.Data2
             && a2[2] == *(_DWORD *)GUID_61b9faae_6abc_4c4b_9bdf_77c52e795bf6.Data4
             && a2[3] == *(_DWORD *)&GUID_61b9faae_6abc_4c4b_9bdf_77c52e795bf6.Data4[4] )
      {
        *a3 = v6 + 8;
      }
      else
      {
        return (unsigned int)-2147467262;
      }
    }
  }
  return v3;
}
