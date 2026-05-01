/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@UIClassicWindowManager@@U?$InterfaceList@UIClassicWindowPresentation@@U?$InterfaceList@UIClassicWindowCollectionRefresh@@U?$InterfaceList@UITaskListChangeListener@@U?$InterfaceList@UIClassicWindowOwnershipQuery@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180038690
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@VCWRLObjectWithGITSite@@U?$InterfaceList@UIClassicWindowManagerPrivate@@U?$InterfaceList@UIApplicationActivationHistory@@U?$InterfaceList@UIClassicWindowManager@@U?$InterfaceList@UIClassicWindowPresentation@@U?$InterfaceList@UIClassicWindowCollectionRefresh@@U?$InterfaceList@UITaskListChangeListener@@U?$InterfaceList@UIClassicWindowOwnershipQuery@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037A40 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$Interfac_ea_180037A40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IClassicWindowManager,Microsoft::WRL::Details::InterfaceList<IClassicWindowPresentation,Microsoft::WRL::Details::InterfaceList<IClassicWindowCollectionRefresh,Microsoft::WRL::Details::InterfaceList<ITaskListChangeListener,Microsoft::WRL::Details::InterfaceList<IClassicWindowOwnershipQuery,Microsoft::WRL::Details::Nil>>>>>,1,0>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == 1819065021
    && a2[1] == *(_DWORD *)&GUID_6c6cbabd_6e36_4f9d_a349_c8852d0e7ee5.Data2
    && a2[2] == *(_DWORD *)GUID_6c6cbabd_6e36_4f9d_a349_c8852d0e7ee5.Data4
    && a2[3] == *(_DWORD *)&GUID_6c6cbabd_6e36_4f9d_a349_c8852d0e7ee5.Data4[4]
    || (a1 += 8LL, *a2 == -1049873362)
    && a2[1] == *(_DWORD *)&GUID_c16c342e_f6f2_4a8e_86c6_74a6ae2a8a84.Data2
    && a2[2] == *(_DWORD *)GUID_c16c342e_f6f2_4a8e_86c6_74a6ae2a8a84.Data4
    && a2[3] == *(_DWORD *)&GUID_c16c342e_f6f2_4a8e_86c6_74a6ae2a8a84.Data4[4]
    || (a1 += 8LL, *a2 == 742802500)
    && a2[1] == *(_DWORD *)&GUID_2c464444_1696_4977_b07c_617cf0de9c17.Data2
    && a2[2] == *(_DWORD *)GUID_2c464444_1696_4977_b07c_617cf0de9c17.Data4
    && a2[3] == *(_DWORD *)&GUID_2c464444_1696_4977_b07c_617cf0de9c17.Data4[4]
    || (a1 += 8LL, *a2 == -662823169)
    && a2[1] == *(_DWORD *)&GUID_d87e1eff_10a6_41e5_a77b_e2dfd1b4c5d3.Data2
    && a2[2] == *(_DWORD *)GUID_d87e1eff_10a6_41e5_a77b_e2dfd1b4c5d3.Data4
    && a2[3] == *(_DWORD *)&GUID_d87e1eff_10a6_41e5_a77b_e2dfd1b4c5d3.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == -1878739959
    && a2[1] == *(_DWORD *)&GUID_9004b409_618f_4892_959c_26fcf2cbafa3.Data2
    && a2[2] == *(_DWORD *)GUID_9004b409_618f_4892_959c_26fcf2cbafa3.Data4
    && a2[3] == *(_DWORD *)&GUID_9004b409_618f_4892_959c_26fcf2cbafa3.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}
