/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@VCImmersiveShellComponentWithSite@@U?$InterfaceList@UIPeoplePaneViewManager@@U?$InterfaceList@UIPeopleExperienceHostManager@@U?$InterfaceList@UIApplicationViewChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$0A@$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800ECC70
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithSite@@U?$InterfaceList@UIPeoplePaneViewManager@@U?$InterfaceList@UIPeopleExperienceHostManager@@U?$InterfaceList@UIApplicationViewChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EBDD0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithSite@@U-$InterfaceL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithSite,Microsoft::WRL::Details::InterfaceList<IPeoplePaneViewManager,Microsoft::WRL::Details::InterfaceList<IPeopleExperienceHostManager,Microsoft::WRL::Details::InterfaceList<IApplicationViewChangeListener,Microsoft::WRL::Details::Nil>>>>,0,1>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // ecx
  __int64 result; // rax
  __int64 v6; // rcx

  if ( *a2 == -62389853
    && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    v4 = 1;
    *a3 = a1;
  }
  else
  {
    v4 = 0;
  }
  result = v4 == 0 ? 0x80004002 : 0;
  if ( !v4 )
  {
    if ( *a2 == -428157847
      && a2[1] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
      && a2[2] == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
      && a2[3] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
    {
      *a3 = a1 + 16;
LABEL_13:
      result = 0LL;
      goto LABEL_20;
    }
    if ( *a2 == 1834041537
      && a2[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
      && a2[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
      && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
    {
      *a3 = a1 + 24;
      goto LABEL_13;
    }
    result = 2147500034LL;
  }
LABEL_20:
  if ( (int)result >= 0 )
    return result;
  v6 = a1 + 64;
  if ( *a2 == -1582419101
    && a2[1] == *(_DWORD *)&GUID_a1ae3363_f729_466f_b0f2_2ed6e5bfaa68.Data2
    && a2[2] == *(_DWORD *)GUID_a1ae3363_f729_466f_b0f2_2ed6e5bfaa68.Data4
    && a2[3] == *(_DWORD *)&GUID_a1ae3363_f729_466f_b0f2_2ed6e5bfaa68.Data4[4]
    || (v6 = a1 + 72, *a2 == 721774557)
    && a2[1] == *(_DWORD *)&GUID_2b0567dd_ad35_4ae3_8079_c01d99593d8a.Data2
    && a2[2] == *(_DWORD *)GUID_2b0567dd_ad35_4ae3_8079_c01d99593d8a.Data4
    && a2[3] == *(_DWORD *)&GUID_2b0567dd_ad35_4ae3_8079_c01d99593d8a.Data4[4] )
  {
    *a3 = v6;
    return 0LL;
  }
  if ( *a2 == 1920966295
    && a2[1] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
    && a2[2] == *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
    && a2[3] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4] )
  {
    *a3 = a1 + 80;
    return 0LL;
  }
  return 2147500034LL;
}
