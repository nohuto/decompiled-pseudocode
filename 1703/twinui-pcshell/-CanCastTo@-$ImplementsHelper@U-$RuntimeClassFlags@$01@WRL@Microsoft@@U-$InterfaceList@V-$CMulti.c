/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@U?$InterfaceList@UIXamlViewHost@@U?$InterfaceList@UIAllUpViewHostInternal@@U?$InterfaceList@UITabletModeChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$0A@$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180131324
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@U?$InterfaceList@UIXamlViewHost@@U?$InterfaceList@UIAllUpViewHostInternal@@U?$InterfaceList@UITabletModeChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18012F3E0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@V-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<CMultitaskingViewHostBase<IAllUpViewHost>,Microsoft::WRL::Details::InterfaceList<IXamlViewHost,Microsoft::WRL::Details::InterfaceList<IAllUpViewHostInternal,Microsoft::WRL::Details::InterfaceList<ITabletModeChangeListener,Microsoft::WRL::Details::Nil>>>>,0,1>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // r9d
  char v4; // r10
  char v5; // al

  v3 = 0;
  v4 = 1;
  if ( *a2 == 949100983
    && a2[1] == *(_DWORD *)&GUID_389221b7_bf28_4d25_9501_b4491d822be1.Data2
    && a2[2] == *(_DWORD *)GUID_389221b7_bf28_4d25_9501_b4491d822be1.Data4
    && a2[3] == *(_DWORD *)&GUID_389221b7_bf28_4d25_9501_b4491d822be1.Data4[4] )
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
    if ( *a2 == 1229475324
      && a2[1] == *(_DWORD *)&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data2
      && a2[2] == *(_DWORD *)GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data4
      && a2[3] == *(_DWORD *)&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data4[4] )
    {
      *a3 = a1;
    }
    else
    {
      v4 = 0;
    }
    if ( !v4 )
    {
      if ( *a2 != -1811144131
        || a2[1] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
        || a2[2] != *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
        || a2[3] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
      {
        a1 += 112LL;
        if ( *a2 == -239769734
          && a2[1] == *(_DWORD *)&GUID_f1b5677a_51f5_46d9_9108_3d9c8201199b.Data2
          && a2[2] == *(_DWORD *)GUID_f1b5677a_51f5_46d9_9108_3d9c8201199b.Data4
          && a2[3] == *(_DWORD *)&GUID_f1b5677a_51f5_46d9_9108_3d9c8201199b.Data4[4]
          || (a1 += 8LL, *a2 == 618013551)
          && a2[1] == *(_DWORD *)&GUID_24d6236f_83b7_4abc_b7a9_082c901b9839.Data2
          && a2[2] == *(_DWORD *)GUID_24d6236f_83b7_4abc_b7a9_082c901b9839.Data4
          && a2[3] == *(_DWORD *)&GUID_24d6236f_83b7_4abc_b7a9_082c901b9839.Data4[4] )
        {
          *a3 = a1;
          return v3;
        }
        if ( *a2 != -2030348378
          || a2[1] != *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data2
          || a2[2] != *(_DWORD *)GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4
          || a2[3] != *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4[4] )
        {
          return (unsigned int)-2147467262;
        }
      }
      *a3 = a1 + 8;
    }
  }
  return v3;
}
