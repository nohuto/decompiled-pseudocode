/*
 * XREFs of ?HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ @ 0x1801AC650
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180163F58 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x180165CB0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCompositionSurfaceInfo::HasSecondaryRepresentations(CCompositionSurfaceInfo *this)
{
  unsigned int v1; // esi
  bool result; // al
  unsigned int v3; // ebx
  __int64 v5; // rdi
  bool v6; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_DWORD *)this + 96);
  result = 0;
  v3 = 0;
  v7 = 0;
  v6 = 0;
  if ( v1 )
  {
    v5 = 0LL;
    do
    {
      (***(void (__fastcall ****)(_QWORD, char *, bool *))(v5 + *((_QWORD *)this + 45)))(
        *(_QWORD *)(v5 + *((_QWORD *)this + 45)),
        &v7,
        &v6);
      result = v6;
      if ( v6 )
        break;
      ++v3;
      v5 += 8LL;
    }
    while ( v3 < v1 );
  }
  return result;
}
