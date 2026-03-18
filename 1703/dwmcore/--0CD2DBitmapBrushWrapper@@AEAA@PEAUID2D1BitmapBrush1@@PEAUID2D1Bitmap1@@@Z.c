/*
 * XREFs of ??0CD2DBitmapBrushWrapper@@AEAA@PEAUID2D1BitmapBrush1@@PEAUID2D1Bitmap1@@@Z @ 0x1800C832C
 * Callers:
 *     ?Create@CD2DBitmapBrushWrapper@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x1800C81B8 (-Create@CD2DBitmapBrushWrapper@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$SetInterface@UID2D1Bitmap1@@U1@@@YAXAEAPEAUID2D1Bitmap1@@PEAU0@@Z @ 0x18007B300 (--$SetInterface@UID2D1Bitmap1@@U1@@@YAXAEAPEAUID2D1Bitmap1@@PEAU0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  SetInterface<ID2D1Bitmap1,ID2D1Bitmap1>((_QWORD *)this + 3, (__int64)a3);
  return this;
}
