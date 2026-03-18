/*
 * XREFs of ?GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap@@@Z @ 0x1801E9E30
 * Callers:
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1801EC940 (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     ??0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z @ 0x18001DAD4 (--0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTargetSharedData::GetScratchDrawBitmapBrushNoAddRef(
        CHwSurfaceRenderTargetSharedData *this,
        struct CMILBrushBitmap **a2)
{
  struct CMILBrushBitmap *v2; // rdi
  unsigned int v3; // ebx
  CMILBrushBitmap *v6; // rax
  struct CMILFactory *v7; // rdx
  CMILBrushBitmap *v8; // rax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct CMILBrushBitmap *)*((_QWORD *)this + 4);
  v3 = 0;
  if ( v2 )
    goto LABEL_7;
  v6 = (CMILBrushBitmap *)HeapAlloc(WPF::g_processHeap, 0, 0x108uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v8 = CMILBrushBitmap::CMILBrushBitmap(v6, v7);
  v2 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(CMILBrushBitmap *))(*(_QWORD *)v8 + 8LL))(v8);
    *((_QWORD *)v2 + 24) = 0LL;
    *((_QWORD *)this + 4) = v2;
LABEL_7:
    *a2 = v2;
    return v3;
  }
  v3 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x37u);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xFCu);
  return v3;
}
