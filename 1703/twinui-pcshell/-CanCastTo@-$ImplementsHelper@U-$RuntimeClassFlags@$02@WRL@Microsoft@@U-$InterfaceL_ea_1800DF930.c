/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@UIHolographicViewHostItemHistory@9Shell@Internal@Windows@@UIHolographicForegroundAssistant@9Shell@Internal@Windows@@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@U?$CloakedIid@UIPrivilegedOperationsConsumer@@@23@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@$00$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800DF930
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@UIHolographicViewHostItemHistory@9Shell@Internal@Windows@@UIHolographicForegroundAssistant@9Shell@Internal@Windows@@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@U?$CloakedIid@UIPrivilegedOperationsConsumer@@@23@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DCA60 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithGITSit_ea_1800DCA60.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@UIHolographicViewManager@@U?$InterfaceList@UIHolographicViewTransitionNotificationService@@U?$InterfaceList@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@U?$InterfaceList@UIHolographicViewHostItemHistory@Holographic@Shell@Internal@Windows@@U?$InterfaceList@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800DFA88 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$InterfaceList@UIHologra.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource,Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>,Microsoft::WRL::CloakedIid<IPrivilegedOperationsConsumer>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>,1,1>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  char v4; // cl
  char v5; // al
  __int64 result; // rax
  _DWORD *v7; // rdx
  _QWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // r9

  v4 = 1;
  if ( *a2 == -2027141065
    && a2[1] == *(_DWORD *)&GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa.Data2
    && a2[2] == *(_DWORD *)GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa.Data4
    && a2[3] == *(_DWORD *)&GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa.Data4[4] )
  {
    v5 = 1;
    *a3 = a1;
  }
  else
  {
    v5 = 0;
  }
  if ( v5 )
    return 0LL;
  if ( *a2 == 1195451618
    && a2[1] == *(_DWORD *)&GUID_474124e2_17d8_4eaa_b9b7_08baf8878ae7.Data2
    && a2[2] == *(_DWORD *)GUID_474124e2_17d8_4eaa_b9b7_08baf8878ae7.Data4
    && a2[3] == *(_DWORD *)&GUID_474124e2_17d8_4eaa_b9b7_08baf8878ae7.Data4[4] )
  {
    *a3 = a1;
  }
  else
  {
    v4 = 0;
  }
  if ( v4 )
    return 0LL;
  if ( *a2 == -1010941077
    && a2[1] == *(_DWORD *)&GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775.Data2
    && a2[2] == *(_DWORD *)GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775.Data4
    && a2[3] == *(_DWORD *)&GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IHolographicViewManager,Microsoft::WRL::Details::InterfaceList<IHolographicViewTransitionNotificationService,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant,Microsoft::WRL::Details::Nil>>>>>,1,0>::CanCastTo(a1 + 16);
  if ( (int)result < 0 )
  {
    v10 = v9 + 56;
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
    else
    {
      if ( *v7 != -1211751484
        || v7[1] != *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
        || v7[2] != *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
        || v7[3] != *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4] )
      {
        return 2147500034LL;
      }
      *v8 = v10 + 8;
    }
    return 0LL;
  }
  return result;
}
