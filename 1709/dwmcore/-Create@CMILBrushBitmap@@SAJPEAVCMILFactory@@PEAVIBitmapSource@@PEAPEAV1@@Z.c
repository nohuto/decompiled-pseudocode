/*
 * XREFs of ?Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z @ 0x1801CEA80
 * Callers:
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180036D60 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?GetScratchMilBitmapBrush@CD3DDeviceLevel1@@QEAAJPEAPEAVCMILBrushBitmap@@@Z @ 0x18011B4DC (-GetScratchMilBitmapBrush@CD3DDeviceLevel1@@QEAAJPEAPEAVCMILBrushBitmap@@@Z.c)
 *     ?GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap@@@Z @ 0x1801AF5F8 (-GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap.c)
 * Callees:
 *     ??0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z @ 0x180045F60 (--0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILBrushBitmap::Create(
        struct CMILFactory *a1,
        struct IBitmapSource *a2,
        struct CMILBrushBitmap **a3)
{
  CMILBrushBitmap *v4; // rax
  struct CMILFactory *v5; // rdx
  CMILBrushBitmap *v6; // rax
  struct CMILBrushBitmap *v7; // rdi
  int v8; // ebx
  struct CMILBrushBitmap *v9; // rcx
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CMILBrushBitmap *)HeapAlloc(WPF::g_processHeap, 0, 0x108uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v6 = CMILBrushBitmap::CMILBrushBitmap(v4, v5);
  v7 = v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(CMILBrushBitmap *))(*(_QWORD *)v6 + 8LL))(v6);
    v8 = 0;
    *((_QWORD *)v7 + 24) = 0LL;
    *a3 = v7;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x37u);
  }
  v9 = 0LL;
  if ( v8 < 0 )
    v9 = v7;
  if ( v9 )
    (*(void (__fastcall **)(struct CMILBrushBitmap *))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v8;
}
