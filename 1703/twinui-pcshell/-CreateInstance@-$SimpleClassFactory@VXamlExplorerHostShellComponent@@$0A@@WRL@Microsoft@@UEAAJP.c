/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VXamlExplorerHostShellComponent@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18011CAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ @ 0x18011C020 (-RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@UIPrivilegedOperationsConsumer@@U?$InterfaceList@UIXamlExplorerHost@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18011C760 (-Release@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithGITSite@@U-$I_ea_18011C760.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@UIPrivilegedOperationsConsumer@@U?$InterfaceList@UIXamlExplorerHost@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011C880 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithGITSit_ea_18011C880.c)
 *     ??0XamlExplorerHostShellComponent@@QEAA@XZ @ 0x18011CBD0 (--0XamlExplorerHostShellComponent@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<XamlExplorerHostShellComponent,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  void *v7; // rbx
  XamlExplorerHostShellComponent *v8; // rax
  int v9; // edi
  XamlExplorerHostShellComponent *v10; // rsi
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    RoOriginateError(2147746064LL, 0LL);
    return 2147746064LL;
  }
  else
  {
    v7 = 0LL;
    v11 = 0LL;
    v8 = (XamlExplorerHostShellComponent *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
    {
      v10 = XamlExplorerHostShellComponent::XamlExplorerHostShellComponent(v8);
      v9 = XamlExplorerHostShellComponent::RuntimeClassInitialize(v10);
      if ( v9 >= 0 )
      {
        v9 = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IPrivilegedOperationsConsumer,Microsoft::WRL::Details::InterfaceList<IXamlExplorerHost,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
               v10,
               &GUID_00000000_0000_0000_c000_000000000046,
               &v11);
        if ( v10 )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IPrivilegedOperationsConsumer,Microsoft::WRL::Details::InterfaceList<IXamlExplorerHost,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((__int64)v10);
        v7 = v11;
      }
      else if ( v10 )
      {
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IPrivilegedOperationsConsumer,Microsoft::WRL::Details::InterfaceList<IXamlExplorerHost,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((__int64)v10);
      }
      if ( v9 >= 0 )
        v9 = (**(__int64 (__fastcall ***)(void *, __int64, _QWORD *))v7)(v7, a3, a4);
    }
    else
    {
      v9 = -2147024882;
    }
    if ( v7 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
    return (unsigned int)v9;
  }
}
