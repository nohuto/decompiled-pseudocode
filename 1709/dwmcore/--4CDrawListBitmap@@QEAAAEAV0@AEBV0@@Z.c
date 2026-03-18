/*
 * XREFs of ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180048580
 * Callers:
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x18001FD04 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180046EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@V?$span@$$CBUSamplerMode@@@gsl@@@Z @ 0x18006CEDC (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@V-$span@$$CBUSamplerMod.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18006F088 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18006FB80 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180070080 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180151EA0 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ??4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z @ 0x180154B6C (--4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z.c)
 * Callees:
 *     ?AddRef@CArrayBasedCoverageSet@@UEAAKXZ @ 0x1800903B0 (-AddRef@CArrayBasedCoverageSet@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CArrayBasedCoverageSet **__fastcall CDrawListBitmap::operator=(CArrayBasedCoverageSet **a1, __int64 a2)
{
  CArrayBasedCoverageSet *v2; // rdi
  unsigned int (__fastcall *v5)(CArrayBasedCoverageSet *__hidden); // rax
  CArrayBasedCoverageSet *v6; // rcx
  CArrayBasedCoverageSet *v7; // rcx
  CArrayBasedCoverageSet *v8; // rdi
  CArrayBasedCoverageSet *v9; // rcx

  v2 = *(CArrayBasedCoverageSet **)a2;
  if ( *a1 != *(CArrayBasedCoverageSet **)a2 )
  {
    if ( v2 )
    {
      v5 = *(unsigned int (__fastcall **)(CArrayBasedCoverageSet *__hidden))(*(_QWORD *)v2 + 8LL);
      v6 = *(CArrayBasedCoverageSet **)a2;
      if ( v5 == CArrayBasedCoverageSet::AddRef )
        CArrayBasedCoverageSet::AddRef(v6);
      else
        v5(v6);
    }
    v7 = *a1;
    *a1 = v2;
    if ( v7 )
      (*(void (__fastcall **)(CArrayBasedCoverageSet *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *(CArrayBasedCoverageSet **)(a2 + 8);
  if ( a1[1] != v8 )
  {
    if ( v8 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)(a2 + 8));
    v9 = a1[1];
    a1[1] = v8;
    if ( v9 )
      (*(void (__fastcall **)(CArrayBasedCoverageSet *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  *((_BYTE *)a1 + 16) = *(_BYTE *)(a2 + 16);
  return a1;
}
