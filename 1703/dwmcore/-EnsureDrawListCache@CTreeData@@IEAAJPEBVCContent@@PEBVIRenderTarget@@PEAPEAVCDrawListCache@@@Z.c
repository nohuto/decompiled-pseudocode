/*
 * XREFs of ?EnsureDrawListCache@CTreeData@@IEAAJPEBVCContent@@PEBVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180134698
 * Callers:
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180160ED8 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800AED48 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureCacheRenderTargetEntry@CDrawListCacheSet@@AEAAJPEBVCContent@@PEBVIRenderTarget@@PEAPEAUDrawListCacheRenderTargetEntry@1@@Z @ 0x18013370C (-EnsureCacheRenderTargetEntry@CDrawListCacheSet@@AEAAJPEBVCContent@@PEBVIRenderTarget@@PEAPEAUDr.c)
 */

__int64 __fastcall CTreeData::EnsureDrawListCache(
        CTreeData *this,
        const struct CContent *a2,
        const struct IRenderTarget *a3,
        struct CDrawListCache **a4)
{
  int v5; // eax
  int v6; // ebx
  struct CDrawListCacheSet::DrawListCacheRenderTargetEntry *v7; // rdi
  int v8; // eax
  struct CDrawListCache *v9; // rcx
  struct CDrawListCacheSet::DrawListCacheRenderTargetEntry *v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = CDrawListCacheSet::EnsureCacheRenderTargetEntry((CTreeData *)((char *)this + 128), a2, a3, &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x14Fu);
  }
  else
  {
    v7 = v11;
    if ( *((_QWORD *)v11 + 2) || (v8 = CDrawListCache::Create((struct CDrawListCache **)v11 + 2), v6 = v8, v8 >= 0) )
    {
      v9 = (struct CDrawListCache *)*((_QWORD *)v7 + 2);
      *a4 = v9;
      (**(void (__fastcall ***)(struct CDrawListCache *))v9)(v9);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x153u);
    }
  }
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x7Fu);
  return (unsigned int)v6;
}
