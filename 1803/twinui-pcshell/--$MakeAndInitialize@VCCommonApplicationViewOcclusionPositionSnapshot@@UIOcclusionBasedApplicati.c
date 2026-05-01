/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPositionSnapshot@@UIOcclusionBasedApplicationViewPosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAPEAUHWND__@@@Z @ 0x1802BE468
 * Callers:
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x1802C1418 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800287F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800F3DC0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCCommonApplicationViewOcclusionPositi.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCCommonApplicationViewOcclusionPositionImpl@@@Details@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F3E74 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VC.c)
 *     ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPositionSnapshot@@QEAAJPEAUHWND__@@@Z @ 0x1802C0090 (-RuntimeClassInitialize@CCommonApplicationViewOcclusionPositionSnapshot@@QEAAJPEAUHWND__@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPositionSnapshot,IOcclusionBasedApplicationViewPosition,HWND__ * &>(
        void **a1,
        HWND *a2)
{
  CCommonApplicationViewOcclusionPositionSnapshot *v4; // rax
  CCommonApplicationViewOcclusionPositionSnapshot *v5; // rbx
  int CanCastTo; // edi
  volatile int *v7; // rdx
  __int64 v8; // rcx

  *a1 = 0LL;
  v4 = (CCommonApplicationViewOcclusionPositionSnapshot *)operator new(
                                                            0x90uLL,
                                                            (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>((__int64)v4);
    *(_QWORD *)v5 = &CCommonApplicationViewOcclusionPositionSnapshot::`vftable'{for `Microsoft::WRL::Details::Selector<CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewOcclusionPositionImpl>,Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v5 + 13) = &CCommonApplicationViewOcclusionPositionSnapshot::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewOcclusionPositionImpl>,Microsoft::WRL::FtmBase>>'};
    CanCastTo = CCommonApplicationViewOcclusionPositionSnapshot::RuntimeClassInitialize(v5, *a2);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v5;
        (*(void (__fastcall **)(CCommonApplicationViewOcclusionPositionSnapshot *))(*(_QWORD *)v5 + 8LL))(v5);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewOcclusionPositionImpl>,Microsoft::WRL::FtmBase>::CanCastTo(
                      (__int64)v5,
                      v8,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(
        (__int64)v5,
        v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
