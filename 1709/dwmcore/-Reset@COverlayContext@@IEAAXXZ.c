/*
 * XREFs of ?Reset@COverlayContext@@IEAAXXZ @ 0x18006737C
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180017A00 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180067654 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 *     ?UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180067888 (-UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180068110 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-.c)
 *     ??1COverlayContext@@MEAA@XZ @ 0x18013FA20 (--1COverlayContext@@MEAA@XZ.c)
 * Callees:
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x180066ECC (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ @ 0x180066EEC (-SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?ResetOverlayPlanesList@COverlayContext@@AEAAXXZ @ 0x180066F10 (-ResetOverlayPlanesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x180066F4C (-ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x180066F88 (-ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x180066FC4 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801428A8 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x18017CD64 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

void __fastcall COverlayContext::Reset(COverlayContext *this)
{
  unsigned int i; // esi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF

  if ( CCommonRegistryData::m_dwOverlayTestMode < 3 )
  {
    for ( i = 0; i < *((_DWORD *)this + 68); *((_BYTE *)this + 1182) = 1 )
    {
      v4 = 248LL * i;
      COverlayContext::EnsureIndependentFlipState(
        this,
        (struct COverlayContext::OverlayPlaneInfo *)(v4 + *((_QWORD *)this + 31)),
        0,
        0);
      v5 = *(_QWORD *)(*((_QWORD *)this + 31) + v4 + 24);
      if ( *(_BYTE *)(v5 + 220) )
        CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(v5 + 48));
      ++i;
    }
  }
  COverlayContext::ResetOverlayCandidatesList(this);
  COverlayContext::ResetPreviousOverlayCandidatesList(this);
  COverlayContext::ResetOverlayPlanesList(this);
  *((_DWORD *)this + 76) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 280, 120LL);
  *((_WORD *)this + 324) = 32085;
  *(_OWORD *)((char *)this + 584) = _xmm;
  *(_OWORD *)((char *)this + 600) = _xmm;
  *(_OWORD *)((char *)this + 616) = _xmm;
  *(_OWORD *)((char *)this + 632) = _xmm;
  *((_WORD *)this + 392) = 32085;
  *((_OWORD *)this + 45) = _xmm;
  *((_OWORD *)this + 46) = _xmm;
  *((_OWORD *)this + 47) = _xmm;
  *((_OWORD *)this + 48) = _xmm;
  v3 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 1183) = 0;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 272LL))(v3, 0LL);
  *((_BYTE *)this + 1185) = 0;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 115) + 8LL))((char *)this + 920);
  COverlayContext::ClearDirectFlip(this);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2))
    && *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                     *((_QWORD *)this + 2),
                     v6)
                 + 4) != *((_DWORD *)this + 25) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 136LL))(*((_QWORD *)this + 2));
  }
  COverlayContext::SetMultiplaneOverlayPresentInfo(this);
  COverlayContext::SetDirectFlipPresentInfo((CDirectFlipInfo **)this);
  *((_BYTE *)this + 1176) = 0;
}
