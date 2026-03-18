/*
 * XREFs of ?IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z @ 0x180048924
 * Callers:
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180025250 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180028FA0 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180046EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 * Callees:
 *     ?IsStereoContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028F80 (-IsStereoContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDrawListBitmap::IsSwapChain(CDrawListBitmap *this, bool *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, CCompositionSurfaceBitmap **); // rcx
  int v4; // eax
  CCompositionSurfaceBitmap *v5; // rbx
  bool (__fastcall *v6)(CCompositionSurfaceBitmap *); // rax
  bool IsStereoContent; // al
  char v8; // di
  CCompositionSurfaceBitmap *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(__int64 (__fastcall ****)(_QWORD, GUID *, CCompositionSurfaceBitmap **))this;
  v10 = 0LL;
  *a2 = 0;
  v4 = (**v2)(v2, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v10);
  v5 = v10;
  if ( v4 < 0 )
  {
    v8 = 0;
  }
  else
  {
    v6 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v10 + 96LL);
    if ( v6 == CCompositionSurfaceBitmap::IsStereoContent )
    {
      IsStereoContent = CCompositionSurfaceBitmap::IsStereoContent(v10);
    }
    else
    {
      IsStereoContent = v6(v10);
      v5 = v10;
    }
    *a2 = IsStereoContent;
    v8 = 1;
  }
  if ( v5 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v8;
}
