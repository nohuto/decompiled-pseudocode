/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x1802BE364
 * Callers:
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x1800224FC (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800287F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CCommonApplicationViewOcclusionPosition@@QEAA@XZ @ 0x1800F3D94 (--0CCommonApplicationViewOcclusionPosition@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCCommonApplicationViewOcclusionPositionImpl@@@Details@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F3E74 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VC.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewOcclusionPosition@@@Z @ 0x1800FB200 (-Attach@-$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonAppli.c)
 *     ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJUtagWINDOWPLACEMENT@@@Z @ 0x1802BFFD8 (-RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJUtagWINDOWPLACEMENT@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(
        void **a1,
        __int128 *a2)
{
  CCommonApplicationViewOcclusionPosition *v4; // rax
  int CanCastTo; // edi
  volatile int *v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  CCommonApplicationViewOcclusionPosition *v9; // rbx
  volatile int *v10; // rdx
  __int64 v11; // rcx
  struct tagWINDOWPLACEMENT v13; // [rsp+20h] [rbp-38h] BYREF
  CCommonApplicationViewOcclusionPosition *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (CCommonApplicationViewOcclusionPosition *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = (volatile int *)CCommonApplicationViewOcclusionPosition::CCommonApplicationViewOcclusionPosition(v4);
    v14 = 0LL;
    Microsoft::WRL::ComPtr<CCommonApplicationViewOcclusionPosition>::Attach((__int64 *)&v14, v6);
    v7 = *a2;
    v8 = a2[1];
    v13.rcNormalPosition.bottom = *((_DWORD *)a2 + 10);
    *(_OWORD *)&v13.length = v7;
    *(_QWORD *)&v7 = *((_QWORD *)a2 + 4);
    v9 = v14;
    *(_OWORD *)&v13.ptMinPosition.y = v8;
    *(_QWORD *)&v13.rcNormalPosition.top = v7;
    CanCastTo = CCommonApplicationViewOcclusionPosition::RuntimeClassInitialize(v14, &v13);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v9;
        (*(void (__fastcall **)(CCommonApplicationViewOcclusionPosition *))(*(_QWORD *)v9 + 8LL))(v9);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewOcclusionPositionImpl>,Microsoft::WRL::FtmBase>::CanCastTo(
                      (__int64)v9,
                      v11,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(
        (__int64)v9,
        v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
