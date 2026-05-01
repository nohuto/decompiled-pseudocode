/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@UIHolographicViewManager@@U?$InterfaceList@UIHolographicViewTransitionNotificationService@@U?$InterfaceList@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@U?$InterfaceList@UIHolographicViewHostItemHistory@Holographic@Shell@Internal@Windows@@U?$InterfaceList@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800DFA88
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@UIHolographicViewHostItemHistory@9Shell@Internal@Windows@@UIHolographicForegroundAssistant@9Shell@Internal@Windows@@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@U?$CloakedIid@UIPrivilegedOperationsConsumer@@@23@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@$00$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800DF930 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceL_ea_1800DF930.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IHolographicViewManager,Microsoft::WRL::Details::InterfaceList<IHolographicViewTransitionNotificationService,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant,Microsoft::WRL::Details::Nil>>>>>,1,0>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == 1401100229
    && a2[1] == *(_DWORD *)&GUID_538317c5_5bad_4847_962d_42da294f5e0a.Data2
    && a2[2] == *(_DWORD *)GUID_538317c5_5bad_4847_962d_42da294f5e0a.Data4
    && a2[3] == *(_DWORD *)&GUID_538317c5_5bad_4847_962d_42da294f5e0a.Data4[4]
    || (a1 += 8LL, *a2 == 1351671349)
    && a2[1] == *(_DWORD *)&GUID_5090de35_ed23_43be_9714_586c5041026a.Data2
    && a2[2] == *(_DWORD *)GUID_5090de35_ed23_43be_9714_586c5041026a.Data4
    && a2[3] == *(_DWORD *)&GUID_5090de35_ed23_43be_9714_586c5041026a.Data4[4]
    || (a1 += 8LL, *a2 == 860524149)
    && a2[1] == *(_DWORD *)&GUID_334a8e75_f9cf_4161_9035_68246f9ea21d.Data2
    && a2[2] == *(_DWORD *)GUID_334a8e75_f9cf_4161_9035_68246f9ea21d.Data4
    && a2[3] == *(_DWORD *)&GUID_334a8e75_f9cf_4161_9035_68246f9ea21d.Data4[4]
    || (a1 += 8LL, *a2 == 840768133)
    && a2[1] == *(_DWORD *)&GUID_321d1a85_14d5_4a15_bfec_edf12b00f03f.Data2
    && a2[2] == *(_DWORD *)GUID_321d1a85_14d5_4a15_bfec_edf12b00f03f.Data4
    && a2[3] == *(_DWORD *)&GUID_321d1a85_14d5_4a15_bfec_edf12b00f03f.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == 38389872
    && a2[1] == *(_DWORD *)&GUID_0249c870_f630_4a75_8d01_b316c814157a.Data2
    && a2[2] == *(_DWORD *)GUID_0249c870_f630_4a75_8d01_b316c814157a.Data4
    && a2[3] == *(_DWORD *)&GUID_0249c870_f630_4a75_8d01_b316c814157a.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}
