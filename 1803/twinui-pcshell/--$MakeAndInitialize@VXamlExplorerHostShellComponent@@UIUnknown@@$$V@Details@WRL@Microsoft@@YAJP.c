/*
 * XREFs of ??$MakeAndInitialize@VXamlExplorerHostShellComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801F70FC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VXamlExplorerHostShellComponent@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801F7DF0 (-CreateInstance@-$SimpleClassFactory@VXamlExplorerHostShellComponent@@$0A@@WRL@Microsoft@@UEAAJP.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIXamlExplorerHost@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009FFC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18009FFC0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0XamlExplorerHostShellComponent@@QEAA@XZ @ 0x1801F776C (--0XamlExplorerHostShellComponent@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWeakReferenceSource@@UIPrivilegedOperationsConsumer@@UIXamlExplorerHost@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801F7C90 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$Impleme_ea_1801F7C90.c)
 *     ?RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ @ 0x1801F9234 (-RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlExplorerHostShellComponent,IUnknown,>(
        XamlExplorerHostShellComponent **a1)
{
  XamlExplorerHostShellComponent *v2; // rax
  int CanCastTo; // edi
  XamlExplorerHostShellComponent *v4; // rbx
  _DWORD *v5; // rcx
  __int64 v6; // r9

  *a1 = 0LL;
  v2 = (XamlExplorerHostShellComponent *)operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = XamlExplorerHostShellComponent::XamlExplorerHostShellComponent(v2);
    CanCastTo = XamlExplorerHostShellComponent::RuntimeClassInitialize(v4);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v4;
        (*(void (__fastcall **)(XamlExplorerHostShellComponent *))(*(_QWORD *)v4 + 8LL))(v4);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IPrivilegedOperationsConsumer,IXamlExplorerHost,Microsoft::WRL::FtmBase>::CanCastTo(
                      (char *)v4 + 8,
                      v6,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(XamlExplorerHostShellComponent *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,Microsoft::WRL::FtmBase>::Release((__int64)v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
