/*
 * XREFs of ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18003EA78
 * Callers:
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x18001D858 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18001E590 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180152418 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::EmitDrawListCache(CDrawingContext *this, struct CDrawListCache *a2)
{
  int v2; // eax
  float v3; // xmm2_4

  v2 = *((_DWORD *)this + 776);
  if ( v2 )
    v3 = *(float *)(*((_QWORD *)this + 390) + 4LL * (unsigned int)(v2 - 1));
  else
    v3 = FLOAT_1_0;
  return CDrawingContext::EmitDrawListCache((__int64)this, (__int64)a2, v3);
}
