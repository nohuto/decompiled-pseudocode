/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@UIHolographicViewHostItemHistory@9Shell@Internal@Windows@@UIHolographicForegroundAssistant@9Shell@Internal@Windows@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@U?$CloakedIid@UIPrivilegedOperationsConsumer@@@23@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180104894
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@UIHolographicViewHostItemHistory@9Shell@Internal@Windows@@UIHolographicForegroundAssistant@9Shell@Internal@Windows@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@U?$CloakedIid@UIPrivilegedOperationsConsumer@@@23@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801012E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1801012E0.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@UIHolographicViewHostItemHistory@789Windows@@UIHolographicForegroundAssistant@789Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180104A04 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIHolographicViewManage.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource,Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>,Microsoft::WRL::CloakedIid<IPrivilegedOperationsConsumer>>>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v3; // r9d
  char v5; // cl
  char v6; // al
  _DWORD *v7; // rdx
  _QWORD *v8; // r8
  __int64 v9; // r10
  __int64 v10; // r10

  v3 = 0;
  v5 = 1;
  if ( *a2 == -2027141065
    && a2[1] == *(_DWORD *)&GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa.Data2
    && a2[2] == *(_DWORD *)GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa.Data4
    && a2[3] == *(_DWORD *)&GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa.Data4[4] )
  {
    *a3 = a1;
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  if ( !v6 )
  {
    if ( *a2 == 2065030143
      && a2[1] == *(_DWORD *)&GUID_7b15dbff_ce6e_40f2_b3fe_786ad8841ede.Data2
      && a2[2] == *(_DWORD *)GUID_7b15dbff_ce6e_40f2_b3fe_786ad8841ede.Data4
      && a2[3] == *(_DWORD *)&GUID_7b15dbff_ce6e_40f2_b3fe_786ad8841ede.Data4[4] )
    {
      *a3 = a1;
    }
    else
    {
      v5 = 0;
    }
    if ( !v5 )
    {
      if ( *a2 == -1010941077
        && a2[1] == *(_DWORD *)&GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775.Data2
        && a2[2] == *(_DWORD *)GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775.Data4
        && a2[3] == *(_DWORD *)&GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775.Data4[4] )
      {
        *a3 = a1 + 8;
      }
      else if ( (int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource,Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant>::CanCastTo(
                       a1 + 16,
                       a2,
                       a3,
                       0LL) < 0 )
      {
        v10 = v9 + 64;
        if ( *v7 == -301920745
          && v7[1] == *(_DWORD *)&GUID_ee010e17_919a_4068_868b_675acf787303.Data2
          && v7[2] == *(_DWORD *)GUID_ee010e17_919a_4068_868b_675acf787303.Data4
          && v7[3] == *(_DWORD *)&GUID_ee010e17_919a_4068_868b_675acf787303.Data4[4]
          || (v10 += 8LL, *v7 == 1920966295)
          && v7[1] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
          && v7[2] == *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
          && v7[3] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4] )
        {
          *v8 = v10;
        }
        else if ( *v7 == -1211751484
               && v7[1] == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
               && v7[2] == *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
               && v7[3] == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4] )
        {
          *v8 = v10 + 8;
        }
        else
        {
          v3 = -2147467262;
        }
        return (v3 >> 31) & 0x80004002;
      }
    }
  }
  return (unsigned int)v3;
}
