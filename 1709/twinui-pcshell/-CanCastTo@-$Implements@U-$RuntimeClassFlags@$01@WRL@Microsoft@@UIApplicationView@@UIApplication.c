/*
 * XREFs of ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationView@@UIApplicationViewBase@@UIApplicationViewWithEnterpriseId@@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081F2C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081FC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180081FC0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800843E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800843E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationView,IApplicationViewBase,IApplicationViewWithEnterpriseId>::CanCastTo(
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
