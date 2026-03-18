/*
 * XREFs of ?AdjustWorldBounds@CVisual@@AEAAXPEAV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18004CF44
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180049C00 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 * Callees:
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800479A0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180099460 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::AdjustWorldBounds(__int64 a1, struct D2D_RECT_F *a2)
{
  __int64 v2; // rcx
  bool (__fastcall *v4)(__int64, int); // rax
  char v5; // al
  FLOAT v6; // xmm1_4
  FLOAT v7; // xmm0_4

  v2 = *(_QWORD *)(a1 + 248);
  if ( v2 )
  {
    v4 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v2 + 48LL);
    if ( v4 == CCompositionSurfaceBitmap::IsOfType )
    {
      v5 = CCompositionSurfaceBitmap::IsOfType(v2, 106);
    }
    else if ( (char *)v4 == (char *)CSurfaceBrush::IsOfType )
    {
      v5 = CSurfaceBrush::IsOfType(v2, 106LL);
    }
    else
    {
      v5 = v4(v2, 106);
    }
    if ( v5 )
    {
      if ( !IsEmpty(a2) )
      {
        v6 = a2->right + 0.5;
        a2->left = a2->left - 0.5;
        v7 = a2->top - 0.5;
        a2->right = v6;
        a2->top = v7;
        a2->bottom = a2->bottom + 0.5;
      }
    }
  }
}
