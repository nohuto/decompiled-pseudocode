/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIShellPositionerManager@@UIShellPositionerManagerInternal@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180027ED8
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIShellPositionerManager@@UIShellPositionerManagerInternal@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028BF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180028BF0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShellPositionerManager,IShellPositionerManagerInternal,IApplicationViewChangeListener,ITabletModeChangeListener,IShellPositionerActivationHandler,IShellPositionerFrameworkViewTypeChangedHandler>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ecx
  BOOL IsEqualGUID; // eax
  _QWORD *v7; // r8
  __int64 v8; // r10

  if ( *a2 != -10325654
    || a2[1] != *(_DWORD *)&GUID_ff62716a_0bd0_4105_a6ec_83b09d864267.Data2
    || a2[2] != *(_DWORD *)GUID_ff62716a_0bd0_4105_a6ec_83b09d864267.Data4
    || a2[3] != *(_DWORD *)&GUID_ff62716a_0bd0_4105_a6ec_83b09d864267.Data4[4] )
  {
    v3 = a1 + 8;
    if ( *a2 == -162289723
      && a2[1] == *(_DWORD *)&GUID_f653a7c5_4df3_41d7_b4c3_cf03747de20c.Data2
      && a2[2] == *(_DWORD *)GUID_f653a7c5_4df3_41d7_b4c3_cf03747de20c.Data4
      && a2[3] == *(_DWORD *)&GUID_f653a7c5_4df3_41d7_b4c3_cf03747de20c.Data4[4]
      || (v3 += 8LL, *a2 == 1920966295)
      && a2[1] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
      && a2[2] == *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
      && a2[3] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4]
      || (v3 += 8LL, *a2 == -2030348378)
      && a2[1] == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data2
      && a2[2] == *(_DWORD *)GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4
      && a2[3] == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4[4] )
    {
      *a3 = v3;
    }
    else
    {
      if ( *a2 != -6926506
        || a2[1] != *(_DWORD *)&GUID_ff964f56_8baf_4947_9c46_f227ec68ff34.Data2
        || a2[2] != *(_DWORD *)GUID_ff964f56_8baf_4947_9c46_f227ec68ff34.Data4
        || a2[3] != *(_DWORD *)&GUID_ff964f56_8baf_4947_9c46_f227ec68ff34.Data4[4] )
      {
        IsEqualGUID = InlineIsEqualGUID(a2, &GUID_d452bf19_b505_4b1c_8182_1cc821a13092);
        v4 = 0;
        if ( IsEqualGUID )
          *v7 = v8 + 8;
        else
          return (unsigned int)-2147467262;
        return v4;
      }
      *a3 = v3 + 8;
    }
    return 0;
  }
  *a3 = a1;
  return 0LL;
}
