/*
 * XREFs of ?Reset@COverlayContext@@IEAAXXZ @ 0x18007B564
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18005FFB0 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180079180 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180079C9C (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 *     ?UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18007A14C (-UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ??1COverlayContext@@MEAA@XZ @ 0x1800DA3AC (--1COverlayContext@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x18007A658 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?ResetOverlayPlanesList@COverlayContext@@AEAAXXZ @ 0x18007A678 (-ResetOverlayPlanesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18007A6B4 (-ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18007A6F0 (-ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x180165CB0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x1801AD124 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

void __fastcall COverlayContext::Reset(COverlayContext *this)
{
  unsigned int i; // esi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF

  if ( CCommonRegistryData::m_dwOverlayTestMode < 3 )
  {
    for ( i = 0; i < *((_DWORD *)this + 70); *((_BYTE *)this + 1194) = 1 )
    {
      v3 = 248LL * i;
      COverlayContext::EnsureIndependentFlipState(
        this,
        (struct COverlayContext::OverlayPlaneInfo *)(v3 + *((_QWORD *)this + 32)),
        0,
        0);
      v4 = *(_QWORD *)(*((_QWORD *)this + 32) + v3 + 24);
      if ( *(_BYTE *)(v4 + 220) )
        CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(v4 + 48));
      ++i;
    }
  }
  COverlayContext::ResetOverlayCandidatesList(this);
  COverlayContext::ResetPreviousOverlayCandidatesList(this);
  COverlayContext::ResetOverlayPlanesList(this);
  *((_DWORD *)this + 78) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 288, 0x78u);
  *((_WORD *)this + 328) = 32085;
  *((_OWORD *)this + 37) = _xmm;
  *((_OWORD *)this + 38) = _xmm;
  *((_OWORD *)this + 39) = _xmm;
  *((_OWORD *)this + 40) = _xmm;
  *((_WORD *)this + 396) = 32085;
  *(_OWORD *)((char *)this + 728) = _xmm;
  *(_OWORD *)((char *)this + 744) = _xmm;
  *(_OWORD *)((char *)this + 760) = _xmm;
  *(_OWORD *)((char *)this + 776) = _xmm;
  v5 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 1195) = 0;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 320LL))(v5, 0LL);
  *((_BYTE *)this + 1197) = 0;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 116) + 8LL))((char *)this + 928);
  COverlayContext::ClearDirectFlip(this);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2))
    && *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                     *((_QWORD *)this + 2),
                     v6)
                 + 4) != *((_DWORD *)this + 26) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 144LL))(*((_QWORD *)this + 2));
  }
  *((_BYTE *)this + 1188) = 0;
}
