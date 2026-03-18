/*
 * XREFs of ?RecordImageBrushInfo@CDrawingContext@@AEAAXPEAVCResource@@@Z @ 0x1800A5ED0
 * Callers:
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x1800A8F7C (-FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 * Callees:
 *     ?IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004BCD0 (-IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007BA70 (-IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawingContext::RecordImageBrushInfo(CDrawingContext *this, struct CResource *a2)
{
  __int64 (__fastcall *v4)(struct CResource *, __int64); // rax
  char v5; // al

  v4 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v4 == (char *)CSolidColorLegacyMilBrush::IsOfType )
  {
    v5 = CSolidColorLegacyMilBrush::IsOfType((__int64)a2, 80);
  }
  else if ( (char *)v4 == (char *)CImageLegacyMilBrush::IsOfType )
  {
    v5 = CImageLegacyMilBrush::IsOfType((__int64)a2, 80);
  }
  else
  {
    v5 = v4(a2, 80LL);
  }
  if ( v5 )
  {
    if ( *((_BYTE *)a2 + 380) )
      *((_BYTE *)this + 6776) = 1;
    if ( *((_BYTE *)a2 + 381) )
      *((_BYTE *)this + 6778) = 1;
  }
}
