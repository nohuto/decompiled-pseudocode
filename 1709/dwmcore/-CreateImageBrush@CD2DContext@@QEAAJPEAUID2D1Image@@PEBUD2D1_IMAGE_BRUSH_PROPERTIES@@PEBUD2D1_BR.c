/*
 * XREFs of ?CreateImageBrush@CD2DContext@@QEAAJPEAUID2D1Image@@PEBUD2D1_IMAGE_BRUSH_PROPERTIES@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1ImageBrush@@@Z @ 0x1801A9824
 * Callers:
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1800862E0 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateImageBrush(
        CD2DContext *this,
        struct ID2D1Image *a2,
        const struct D2D1_IMAGE_BRUSH_PROPERTIES *a3,
        const struct D2D1_BRUSH_PROPERTIES *a4,
        struct ID2D1ImageBrush **a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Image *, const struct D2D1_IMAGE_BRUSH_PROPERTIES *, const struct D2D1_BRUSH_PROPERTIES *, struct ID2D1ImageBrush **))(**((_QWORD **)this + 22) + 520LL))(
           *((_QWORD *)this + 22),
           a2,
           a3,
           a4,
           a5);
}
