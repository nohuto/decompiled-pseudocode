/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800280C0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B6D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrappe.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VViewWrapperBase@@@Details@23@UIWeakReferenceSource@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180092FEC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ImplementsMarker@VVi.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VWindowWrapperBase@@@Details@23@UIWeakReferenceSource@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801D51D8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ImplementsMarker@VWi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::CanCastTo(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  int v3; // r9d

  v3 = *a2;
  if ( *a2 == 56
    && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4]
    || (a1 += 8LL, v3 == -1523623013)
    && a2[1] == *(_DWORD *)&GUID_a52f5b9b_ee55_4add_b559_55f1c012e15f.Data2
    && a2[2] == *(_DWORD *)GUID_a52f5b9b_ee55_4add_b559_55f1c012e15f.Data4
    && a2[3] == *(_DWORD *)&GUID_a52f5b9b_ee55_4add_b559_55f1c012e15f.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else if ( v3 == 753092029
         && a2[1] == *(_DWORD *)&GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67.Data2
         && a2[2] == *(_DWORD *)GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67.Data4
         && a2[3] == *(_DWORD *)&GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  else
  {
    return 2147500034LL;
  }
}
