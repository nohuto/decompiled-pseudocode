/*
 * XREFs of ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAVIImageSource@@_K12PEAPEAVCResource@@2M@Z @ 0x18000F1BC
 * Callers:
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18000F298 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180005BBC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageSource@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x180009990 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageS.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800A7AC0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800AED48 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawPrivateCompositorBufferAsDrawList(
        CDrawingContext *this,
        struct ID2D1PrivateCompositorBuffer *a2,
        struct ID2D1PrivateCompositorBuffer *a3,
        struct IImageSource **a4,
        CPrimitiveGroupDrawListGenerator *a5)
{
  __int64 v5; // rax
  int v7; // eax
  CPrimitiveGroupDrawListGenerator *v8; // rbx
  unsigned int v9; // edi
  int v10; // eax
  int DrawList; // eax
  int v12; // eax
  struct CDrawListCache *v14; // [rsp+60h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 4);
  a5 = 0LL;
  v14 = 0LL;
  v7 = CPrimitiveGroupDrawListGenerator::Create(*(_QWORD *)(v5 + 400), a2, a3, a4, 1uLL, 0LL, 0LL, 0LL, 0LL, &a5);
  v8 = a5;
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x95Eu);
  }
  else
  {
    v10 = CDrawListCache::Create(&v14);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x960u);
    }
    else
    {
      DrawList = CPrimitiveGroupDrawListGenerator::GenerateDrawList(v8, this, 0LL, v14);
      v9 = DrawList;
      if ( DrawList < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawList, 0x961u);
      }
      else
      {
        v12 = CDrawingContext::EmitDrawListCache(this, v14);
        v9 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x962u);
      }
    }
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v14);
  if ( v8 )
    (*(void (__fastcall **)(CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v8 + 8LL))(v8);
  return v9;
}
