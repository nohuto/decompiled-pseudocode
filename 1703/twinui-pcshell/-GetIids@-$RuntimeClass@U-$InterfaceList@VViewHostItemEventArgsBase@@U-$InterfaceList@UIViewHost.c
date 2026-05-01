/*
 * XREFs of ?GetIids@?$RuntimeClass@U?$InterfaceList@VViewHostItemEventArgsBase@@U?$InterfaceList@UIViewHostItemPropertyChangedArgs@Holographic@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800DCC90
 * Callers:
 *     ?GetIids@?$RuntimeClass@U?$InterfaceList@VViewHostItemEventArgsBase@@U?$InterfaceList@UIViewHostItemPropertyChangedArgs@Holographic@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800E1B10 (-GetIids@-$RuntimeClass@U-$InterfaceList@VViewHostItemEventArgsBase@@U-$InterfaceLi_ea_1800E1B10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewHostItemEventArgsBase,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_fd9e009a_061f_45df_a623_54eb80d770a5;
    v6[1] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    v6[2] = GUID_9e9bf7a6_7bfc_48e0_87e5_259b27939cd4;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
