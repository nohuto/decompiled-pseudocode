/*
 * XREFs of ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180144C4C
 * Callers:
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801401F0 (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV-$TMilRect_@.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180140340 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800894CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800896B4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall COverlayContext::UpdateVisitedContentRegion(COverlayContext *this)
{
  signed int v1; // ebx
  unsigned int v3; // esi
  signed int v4; // eax
  int *v6; // [rsp+38h] [rbp-59h] BYREF
  int v7; // [rsp+40h] [rbp-51h] BYREF
  void *v8[10]; // [rsp+88h] [rbp-9h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 288) )
  {
    v7 = 0;
    v3 = 0;
    v6 = &v7;
    do
    {
      FastRegion::CRegion::CRegion(
        (FastRegion::CRegion *)v8,
        (const struct tagRECT *)(*((_QWORD *)this + 141) + 16LL * v3));
      v1 = FastRegion::CRegion::Union(
             (const struct FastRegion::Internal::CRgnData **)&v6,
             (const struct FastRegion::Internal::CRgnData **)v8);
      FastRegion::CRegion::FreeMemory(v8);
      if ( v1 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v1, 0xFE6u);
        goto LABEL_9;
      }
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 288) );
    v4 = FastRegion::CRegion::Union(
           (const struct FastRegion::Internal::CRgnData **)this + 132,
           (const struct FastRegion::Internal::CRgnData **)&v6);
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0xFECu);
    }
    else
    {
      *((_DWORD *)this + 288) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)this + 1128, 0x10u);
    }
LABEL_9:
    FastRegion::CRegion::FreeMemory((void **)&v6);
  }
  return (unsigned int)v1;
}
