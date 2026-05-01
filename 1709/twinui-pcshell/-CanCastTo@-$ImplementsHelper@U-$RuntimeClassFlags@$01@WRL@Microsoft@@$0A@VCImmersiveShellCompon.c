/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@VCImmersiveShellComponentWithSite@@UIPeoplePaneViewManager@@UIPeopleExperienceHostManager@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801176C4
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIPeoplePaneViewManager@@UIPeopleExperienceHostManager@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180115C20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180115C20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,CImmersiveShellComponentWithSite,IPeoplePaneViewManager,IPeopleExperienceHostManager,IApplicationViewChangeListener,ITabletModeChangeListener>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // r9d
  int v4; // eax

  v3 = 0;
  if ( *a2 == -62389853
    && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
LABEL_5:
    *a3 = a1;
    return v3;
  }
  if ( *a2 == -428157847
    && a2[1] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
    && a2[2] == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
    && a2[3] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
  {
    *a3 = a1 + 24;
LABEL_11:
    v4 = 0;
    goto LABEL_18;
  }
  if ( *a2 == 1834041537
    && a2[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
    && a2[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
    && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
  {
    *a3 = a1 + 32;
    goto LABEL_11;
  }
  v4 = -2147467262;
LABEL_18:
  if ( v4 >= 0 )
    return v3;
  a1 += 88LL;
  if ( *a2 == 1777843752
    && a2[1] == *(_DWORD *)&GUID_69f7be28_e794_47d3_8ec4_e9386520c172.Data2
    && a2[2] == *(_DWORD *)GUID_69f7be28_e794_47d3_8ec4_e9386520c172.Data4
    && a2[3] == *(_DWORD *)&GUID_69f7be28_e794_47d3_8ec4_e9386520c172.Data4[4] )
  {
    goto LABEL_5;
  }
  a1 += 8LL;
  if ( *a2 == -783571975
    && a2[1] == *(_DWORD *)&GUID_d14ba3f9_b24e_442f_967f_32f973d9e870.Data2
    && a2[2] == *(_DWORD *)GUID_d14ba3f9_b24e_442f_967f_32f973d9e870.Data4
    && a2[3] == *(_DWORD *)&GUID_d14ba3f9_b24e_442f_967f_32f973d9e870.Data4[4] )
  {
    goto LABEL_5;
  }
  a1 += 8LL;
  if ( *a2 == 1920966295
    && a2[1] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
    && a2[2] == *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
    && a2[3] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4] )
  {
    goto LABEL_5;
  }
  if ( *a2 == -2030348378
    && a2[1] == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data2
    && a2[2] == *(_DWORD *)GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4
    && a2[3] == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4[4] )
  {
    *a3 = a1 + 8;
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}
