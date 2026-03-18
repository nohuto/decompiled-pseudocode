/*
 * XREFs of ??0CD2DBitmapBrushWrapper@@AEAA@PEAUID2D1BitmapBrush1@@PEAUID2D1Bitmap1@@@Z @ 0x1800D61B0
 * Callers:
 *     ?Create@CD2DBitmapBrushWrapper@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x1800D6074 (-Create@CD2DBitmapBrushWrapper@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z @ 0x180024D1C (--$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CD2DBitmapBrushWrapper *__fastcall CD2DBitmapBrushWrapper::CD2DBitmapBrushWrapper(
        CD2DBitmapBrushWrapper *this,
        struct ID2D1BitmapBrush1 *a2,
        struct ID2D1Bitmap1 *a3)
{
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *(_QWORD *)this = &CD2DBitmapBrushWrapper::`vftable';
  *((_DWORD *)this + 2) = 0;
  if ( a2 )
    (*(void (__fastcall **)(struct ID2D1BitmapBrush1 *))(*(_QWORD *)a2 + 8LL))(a2);
  SetInterface<IRenderTargetBitmap,IRenderTargetBitmap>((_QWORD *)this + 3, (__int64)a3);
  return this;
}
