/*
 * XREFs of ?Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z @ 0x1800CB3BC
 * Callers:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180041704 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x1800A1F10 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap@@@Z @ 0x1801329E8 (-GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap.c)
 * Callees:
 *     ??0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z @ 0x180054358 (--0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILBrushBitmap::Create(
        struct CMILFactory *a1,
        struct IBitmapSource *a2,
        struct CMILBrushBitmap **a3)
{
  unsigned int v4; // ebx
  CMILBrushBitmap *v5; // rax
  struct CMILFactory *v6; // rdx
  CMILBrushBitmap *v7; // rax
  struct CMILBrushBitmap *v8; // rdi
  int v9; // eax
  struct CMILBrushBitmap *v10; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v5 = (CMILBrushBitmap *)HeapAlloc(WPF::g_processHeap, 0, 0x108uLL);
  if ( !v5 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v7 = CMILBrushBitmap::CMILBrushBitmap(v5, v6);
  v8 = v7;
  if ( v7 )
  {
    (*(void (__fastcall **)(CMILBrushBitmap *))(*(_QWORD *)v7 + 8LL))(v7);
    v9 = 0;
    *((_QWORD *)v8 + 24) = 0LL;
    *a3 = v8;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x37u);
    v9 = -2147024882;
  }
  v10 = 0LL;
  if ( v9 < 0 )
    v10 = v8;
  if ( v10 )
    (*(void (__fastcall **)(struct CMILBrushBitmap *))(*(_QWORD *)v10 + 16LL))(v10);
  return v4;
}
