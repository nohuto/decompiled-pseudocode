/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VXamlExplorerHostShellComponent@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180146B40
 * Callers:
 *     <none>
 * Callees:
 *     ?RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ @ 0x180146318 (-RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIXamlExplorerHost@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801468F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1801468F0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIXamlExplorerHost@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801469B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1801469B0.c)
 *     ??0XamlExplorerHostShellComponent@@QEAA@XZ @ 0x180146D28 (--0XamlExplorerHostShellComponent@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<XamlExplorerHostShellComponent,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v7; // rbx
  XamlExplorerHostShellComponent *v8; // rax
  int v9; // edi
  XamlExplorerHostShellComponent *v10; // rsi
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

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
    v8 = (XamlExplorerHostShellComponent *)operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
    {
      v10 = XamlExplorerHostShellComponent::XamlExplorerHostShellComponent(v8);
      v9 = XamlExplorerHostShellComponent::RuntimeClassInitialize(v10);
      if ( v9 >= 0 )
      {
        v9 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,Microsoft::WRL::FtmBase>::QueryInterface(
               (__int64)v10,
               &GUID_00000000_0000_0000_c000_000000000046,
               &v11);
        if ( v10 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,Microsoft::WRL::FtmBase>::Release((__int64)v10);
        v7 = v11;
      }
      else if ( v10 )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,Microsoft::WRL::FtmBase>::Release((__int64)v10);
      }
      if ( v9 >= 0 )
        v9 = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v7)(v7, a3, a4);
    }
    else
    {
      v9 = -2147024882;
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    return (unsigned int)v9;
  }
}
