/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@VCIAMSpecialWindowBase@@U?$InterfaceList@UIFallbackWindow@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@UIRawElementProviderSimple@@U?$InterfaceList@UIInvokeProvider@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18002DE34
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@VCIAMSpecialWindowBase@@U?$InterfaceList@UIFallbackWindow@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@UIRawElementProviderSimple@@U?$InterfaceList@UIInvokeProvider@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002DBE0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithSite@@U-$InterfaceList@VCIAMSpeci.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<CIAMSpecialWindowBase,Microsoft::WRL::Details::InterfaceList<IFallbackWindow,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<IRawElementProviderSimple,Microsoft::WRL::Details::InterfaceList<IInvokeProvider,Microsoft::WRL::Details::Nil>>>>>,1,1>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // ecx
  __int64 result; // rax
  __int64 v6; // rcx

  if ( *a2 == -36702113
    && a2[1] == *(_DWORD *)&GUID_fdcff85f_e2e4_4465_a2c5_810d6ec0ffee.Data2
    && a2[2] == *(_DWORD *)GUID_fdcff85f_e2e4_4465_a2c5_810d6ec0ffee.Data4
    && a2[3] == *(_DWORD *)&GUID_fdcff85f_e2e4_4465_a2c5_810d6ec0ffee.Data4[4] )
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
    v6 = a1 + 40;
    if ( *a2 == 1950073021
      && a2[1] == *(_DWORD *)&GUID_743bc0bd_69f0_4f28_8401_047ae0c0ffee.Data2
      && a2[2] == *(_DWORD *)GUID_743bc0bd_69f0_4f28_8401_047ae0c0ffee.Data4
      && a2[3] == *(_DWORD *)&GUID_743bc0bd_69f0_4f28_8401_047ae0c0ffee.Data4[4]
      || (v6 = a1 + 48, *a2 == -1811144131)
      && a2[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
      && a2[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
      && a2[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4]
      || (v6 = a1 + 56, *a2 == -690132783)
      && a2[1] == *(_DWORD *)&GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c.Data2
      && a2[2] == *(_DWORD *)GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c.Data4
      && a2[3] == *(_DWORD *)&GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c.Data4[4] )
    {
      *a3 = v6;
      return 0LL;
    }
    if ( *a2 == 1425846859
      && a2[1] == *(_DWORD *)&GUID_54fcb24b_e18e_47a2_b4d3_eccbe77599a2.Data2
      && a2[2] == *(_DWORD *)GUID_54fcb24b_e18e_47a2_b4d3_eccbe77599a2.Data4
      && a2[3] == *(_DWORD *)&GUID_54fcb24b_e18e_47a2_b4d3_eccbe77599a2.Data4[4] )
    {
      *a3 = a1 + 64;
      return 0LL;
    }
    return 2147500034LL;
  }
  return result;
}
