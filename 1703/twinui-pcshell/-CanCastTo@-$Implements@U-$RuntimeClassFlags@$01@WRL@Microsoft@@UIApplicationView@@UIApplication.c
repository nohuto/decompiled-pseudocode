/*
 * XREFs of ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationView@@UIApplicationViewBase@@UIApplicationViewWithEnterpriseId@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007F004
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCApplicationViewBase@@U?$InterfaceList@UIWin32ApplicationView@@U?$InterfaceList@UIAppSizeConstraintsCallback@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007F0A0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCApplicationViewBase@@U-$Interface_ea_18007F0A0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCApplicationViewBase@@U?$InterfaceList@UIWinRTApplicationView@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800814A0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCApplicationViewBase@@U-$Interface_ea_1800814A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationView,IApplicationViewBase,IApplicationViewWithEnterpriseId,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == -1698646584
    && a2[1] == *(_DWORD *)&GUID_9ac0b5c8_1484_4c5b_9533_4134a0f97cea.Data2
    && a2[2] == *(_DWORD *)GUID_9ac0b5c8_1484_4c5b_9533_4134a0f97cea.Data4
    && a2[3] == *(_DWORD *)&GUID_9ac0b5c8_1484_4c5b_9533_4134a0f97cea.Data4[4]
    || (a1 += 8LL, *a2 == -1751327192)
    && a2[1] == *(_DWORD *)&GUID_979cde28_2164_437c_b963_55e5d4ac1d02.Data2
    && a2[2] == *(_DWORD *)GUID_979cde28_2164_437c_b963_55e5d4ac1d02.Data4
    && a2[3] == *(_DWORD *)&GUID_979cde28_2164_437c_b963_55e5d4ac1d02.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == 480212245
    && a2[1] == *(_DWORD *)&GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data2
    && a2[2] == *(_DWORD *)GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data4
    && a2[3] == *(_DWORD *)&GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}
