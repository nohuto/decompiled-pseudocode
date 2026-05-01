/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopDataSourceComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18025B324
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VVirtualDesktopDataSourceComponent@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18025B6E0 (-CreateInstance@-$SimpleClassFactory@VVirtualDesktopDataSourceComponent@@$0A@@WRL@Microsoft@@UEA.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0VirtualDesktopDataSourceComponent@@QEAA@XZ @ 0x18025B4D8 (--0VirtualDesktopDataSourceComponent@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18025B610 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_18025B610.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18025B7C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_18025B7C0.c)
 *     ?RuntimeClassInitialize@VirtualDesktopDataSourceComponent@@QEAAJXZ @ 0x18025B818 (-RuntimeClassInitialize@VirtualDesktopDataSourceComponent@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopDataSourceComponent,IUnknown,>(
        VirtualDesktopDataSourceComponent **a1)
{
  VirtualDesktopDataSourceComponent *v2; // rax
  int CanCastTo; // edi
  VirtualDesktopDataSourceComponent *v4; // rbx
  __int64 v5; // rdx

  *a1 = 0LL;
  v2 = (VirtualDesktopDataSourceComponent *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = VirtualDesktopDataSourceComponent::VirtualDesktopDataSourceComponent(v2);
    CanCastTo = VirtualDesktopDataSourceComponent::RuntimeClassInitialize(v4);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v4;
        (*(void (__fastcall **)(VirtualDesktopDataSourceComponent *))(*(_QWORD *)v4 + 8LL))(v4);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,Microsoft::WRL::FtmBase>::CanCastTo(
                      v4,
                      v5,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(VirtualDesktopDataSourceComponent *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::Release(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
