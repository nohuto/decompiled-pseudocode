/*
 * XREFs of ??0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z @ 0x180037440
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x180164248 (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCommandListBitmapRepresentation@@IEAA@XZ @ 0x1800C2C30 (--0CCommandListBitmapRepresentation@@IEAA@XZ.c)
 */

CCompositionSurfaceBitmap *__fastcall CCompositionSurfaceBitmap::CCompositionSurfaceBitmap(
        CCompositionSurfaceBitmap *this,
        struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 7) = &ISwapChainContent::`vftable';
  *((_QWORD *)this + 8) = &IImageSource::`vftable';
  *((_QWORD *)this + 10) = &IDirtyRectSource::`vftable';
  CCommandListBitmapRepresentation::CCommandListBitmapRepresentation((CCompositionSurfaceBitmap *)((char *)this + 88));
  *(_QWORD *)this = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CCompositionSurfaceBitmap::`vftable'{for `ISwapChainContent'};
  *((_QWORD *)this + 8) = &CCompositionSurfaceBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 9) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
  *((_QWORD *)this + 10) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
  *((_QWORD *)this + 11) = &CCompositionSurfaceBitmap::`vftable'{for `CCommandListBitmapRepresentation'};
  return this;
}
