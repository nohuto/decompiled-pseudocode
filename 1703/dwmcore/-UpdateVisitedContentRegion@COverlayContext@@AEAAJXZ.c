/*
 * XREFs of ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180152254
 * Callers:
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014EC64 (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV-$TMilRect_@.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x18014EDA8 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180025694 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180075C28 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall COverlayContext::UpdateVisitedContentRegion(COverlayContext *this)
{
  int v1; // ebx
  unsigned int v3; // esi
  int v4; // eax
  int *v6; // [rsp+38h] [rbp-59h] BYREF
  int v7; // [rsp+40h] [rbp-51h] BYREF
  void *v8[10]; // [rsp+88h] [rbp-9h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 268) )
  {
    v7 = 0;
    v3 = 0;
    v6 = &v7;
    do
    {
      FastRegion::CRegion::CRegion(
        (FastRegion::CRegion *)v8,
        (const struct tagRECT *)(*((_QWORD *)this + 131) + 16LL * v3));
      v1 = FastRegion::CRegion::Union(
             (const struct FastRegion::Internal::CRgnData **)&v6,
             (const struct FastRegion::Internal::CRgnData **)v8);
      FastRegion::CRegion::FreeMemory(v8);
      if ( v1 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0xEABu);
        goto LABEL_9;
      }
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 268) );
    v4 = FastRegion::CRegion::Union(
           (const struct FastRegion::Internal::CRgnData **)this + 122,
           (const struct FastRegion::Internal::CRgnData **)&v6);
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xEB1u);
    }
    else
    {
      *((_DWORD *)this + 268) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)this + 1048, 0x10u);
    }
LABEL_9:
    FastRegion::CRegion::FreeMemory((void **)&v6);
  }
  return (unsigned int)v1;
}
