/*
 * XREFs of ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z @ 0x180131DDC
 * Callers:
 *     ?IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z @ 0x18000CE14 (-IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z.c)
 * Callees:
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180151FA8 (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
 */

char __fastcall COverlayContext::IsOverlayAssigned(
        COverlayContext *this,
        const struct CVisual *a2,
        struct ISwapChainContent *a3,
        bool *a4)
{
  unsigned int v4; // edi
  char v5; // r11
  unsigned int v6; // r10d
  __int64 v7; // rbx
  __int64 v8; // rcx
  bool v9; // al
  bool *v10; // r9

  v4 = *((_DWORD *)this + 66);
  v5 = 0;
  v6 = 0;
  if ( v4 )
  {
    v7 = *((_QWORD *)this + 30);
    while ( 1 )
    {
      v8 = 240LL * v6;
      if ( *(const struct CVisual **)(v8 + v7 + 8) == a2 && *(struct ISwapChainContent **)(v8 + v7 + 16) == a3 )
        break;
      if ( ++v6 >= v4 )
        return v5;
    }
    if ( v6 != -1 )
    {
      v5 = 1;
      if ( a4 )
      {
        v9 = COverlayContext::RequiresFrontPlane((struct COverlayContext::OverlayPlaneInfo *)(v7 + 240LL * v6));
        *v10 = v9;
      }
    }
  }
  return v5;
}
