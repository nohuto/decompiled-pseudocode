/*
 * XREFs of ?Reset@COverlayContext@@IEAAXXZ @ 0x180071BB8
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x180070CA0 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@@Z.c)
 *     ??1COverlayContext@@MEAA@XZ @ 0x180071DDC (--1COverlayContext@@MEAA@XZ.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x180072420 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800715B0 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ @ 0x1800715D0 (-SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?ResetOverlayPlanesList@COverlayContext@@AEAAXXZ @ 0x1800715F4 (-ResetOverlayPlanesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x180071630 (-ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18007166C (-ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x1800716A8 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180150A14 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x180175D64 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

void __fastcall COverlayContext::Reset(COverlayContext *this)
{
  unsigned int i; // esi
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rbx
  __int64 v6; // rcx

  if ( CCommonRegistryData::m_dwOverlayTestMode < 3 )
  {
    for ( i = 0; i < *((_DWORD *)this + 66); *((_BYTE *)this + 1094) = 1 )
    {
      v5 = 240LL * i;
      COverlayContext::EnsureIndependentFlipState(
        this,
        (struct COverlayContext::OverlayPlaneInfo *)(v5 + *((_QWORD *)this + 30)),
        0,
        0);
      v6 = *(_QWORD *)(*((_QWORD *)this + 30) + v5 + 24);
      if ( *(_BYTE *)(v6 + 220) )
        CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(v6 + 48));
      ++i;
    }
  }
  COverlayContext::ResetOverlayCandidatesList(this);
  COverlayContext::ResetPreviousOverlayCandidatesList(this);
  COverlayContext::ResetOverlayPlanesList(this);
  *((_DWORD *)this + 74) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 272, 0x70u);
  *((_WORD *)this + 296) = 32085;
  *((_OWORD *)this + 33) = _xmm;
  *((_OWORD *)this + 34) = _xmm;
  *((_OWORD *)this + 35) = _xmm;
  *((_OWORD *)this + 36) = _xmm;
  *((_WORD *)this + 364) = 32085;
  *(_OWORD *)((char *)this + 664) = _xmm;
  *(_OWORD *)((char *)this + 680) = _xmm;
  *(_OWORD *)((char *)this + 696) = _xmm;
  *(_OWORD *)((char *)this + 712) = _xmm;
  v3 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 1097) = 0;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 264LL))(v3, 0LL);
  *((_BYTE *)this + 1099) = 0;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 108) + 8LL))((char *)this + 864);
  COverlayContext::ClearDirectFlip(this);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2)) )
  {
    v4 = *((_DWORD *)this + 22);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2)) != v4 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 152LL))(*((_QWORD *)this + 2), v4);
  }
  COverlayContext::SetMultiplaneOverlayPresentInfo(this);
  COverlayContext::SetDirectFlipPresentInfo((CDirectFlipInfo **)this);
  *((_BYTE *)this + 1088) = 0;
}
