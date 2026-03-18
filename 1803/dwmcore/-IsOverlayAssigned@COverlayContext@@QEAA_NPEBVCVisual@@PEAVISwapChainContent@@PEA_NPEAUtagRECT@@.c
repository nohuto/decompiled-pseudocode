/*
 * XREFs of ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_NPEAUtagRECT@@3@Z @ 0x18013E7E0
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180007DA8 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 * Callees:
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x180167810 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 */

char __fastcall COverlayContext::IsOverlayAssigned(
        COverlayContext *this,
        const struct CVisual *a2,
        struct ISwapChainContent *a3,
        bool *a4,
        struct tagRECT *a5,
        struct tagRECT *a6)
{
  char v6; // bl
  unsigned int v7; // r10d
  COverlayContext *v9; // r11
  __int64 v10; // rbp
  __int64 v11; // r9
  const struct CVisual **v12; // rcx

  v6 = 0;
  v7 = 0;
  v9 = this;
  if ( *((_DWORD *)this + 70) )
  {
    v10 = *((_QWORD *)this + 32);
    while ( 1 )
    {
      v11 = v7;
      v12 = (const struct CVisual **)(v10 + 248LL * v7);
      if ( v12[1] == a2 && v12[2] == a3 )
        break;
      if ( ++v7 >= *((_DWORD *)v9 + 70) )
        return v6;
    }
    if ( v7 != -1 )
    {
      v6 = 1;
      if ( a4 )
        *a4 = COverlayContext::OverlayPlaneInfo::RequiresFrontPlane((COverlayContext::OverlayPlaneInfo *)v12);
      if ( a5 )
        *a5 = *(struct tagRECT *)(248 * v11 + *((_QWORD *)v9 + 32) + 76);
      if ( a6 )
        *a6 = *(struct tagRECT *)(248 * v11 + *((_QWORD *)v9 + 32) + 60);
    }
  }
  return v6;
}
