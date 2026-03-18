/*
 * XREFs of ?CreateBitmapBrush@CD2DContext@@QEAAJPEAUID2D1Bitmap@@PEBUD2D1_BITMAP_BRUSH_PROPERTIES1@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1BitmapBrush1@@@Z @ 0x1801E1948
 * Callers:
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1801F4AB0 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateBitmapBrush(
        CD2DContext *this,
        struct ID2D1Bitmap *a2,
        const struct D2D1_BITMAP_BRUSH_PROPERTIES1 *a3,
        const struct D2D1_BRUSH_PROPERTIES *a4,
        struct ID2D1BitmapBrush1 **a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Bitmap *, const struct D2D1_BITMAP_BRUSH_PROPERTIES1 *, const struct D2D1_BRUSH_PROPERTIES *, struct ID2D1BitmapBrush1 **))(**((_QWORD **)this + 22) + 528LL))(
           *((_QWORD *)this + 22),
           a2,
           a3,
           a4,
           a5);
}
