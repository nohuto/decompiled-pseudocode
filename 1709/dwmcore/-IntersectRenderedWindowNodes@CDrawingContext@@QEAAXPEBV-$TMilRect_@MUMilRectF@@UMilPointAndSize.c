/*
 * XREFs of ?IntersectRenderedWindowNodes@CDrawingContext@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003B1AC
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180099748 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800983A4 (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18017709C (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 */

void __fastcall CDrawingContext::IntersectRenderedWindowNodes(__int64 a1)
{
  unsigned int v1; // ebx
  __int128 *v3; // r11
  const struct CMILMatrix *TopByReference; // rax
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[16]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 6828) )
  {
    if ( qword_18026EEA8 )
    {
      if ( CDisplaySet::NeedsDesktopMoves(qword_18026EEA8) )
      {
        v5 = *v3;
        TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 480));
        CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, &v5, v6);
        if ( *(_DWORD *)(a1 + 6696) )
        {
          do
            CVisual::ExcludeFromVisibleRegion(*(_QWORD *)(*(_QWORD *)(a1 + 6672) + 8LL * v1++), v6, a1);
          while ( v1 < *(_DWORD *)(a1 + 6696) );
        }
      }
    }
  }
}
