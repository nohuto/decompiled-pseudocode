/*
 * XREFs of ?FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ @ 0x18004ADB0
 * Callers:
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x1800A8F7C (-FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushResourceRealizer::FreeRealizationResources(CBrushResourceRealizer *this)
{
  __int64 v2; // rcx
  CImageLegacyMilBrush *v3; // rcx
  void (*v4)(void); // rax

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 11) = 0LL;
  }
  v3 = (CImageLegacyMilBrush *)*((_QWORD *)this + 12);
  v4 = *(void (**)(void))(*(_QWORD *)v3 + 184LL);
  if ( (char *)v4 == (char *)CImageLegacyMilBrush::FreeRealizationResources )
    CImageLegacyMilBrush::FreeRealizationResources(v3);
  else
    v4();
}
