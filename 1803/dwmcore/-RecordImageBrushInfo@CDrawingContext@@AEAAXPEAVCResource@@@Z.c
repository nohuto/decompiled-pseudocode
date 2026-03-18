/*
 * XREFs of ?RecordImageBrushInfo@CDrawingContext@@AEAAXPEAVCResource@@@Z @ 0x1801626FC
 * Callers:
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJ_NAEBVCShape@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2PEAVCResource@@@Z @ 0x180161344 (-FillOrStrokeShape@CDrawingContext@@AEAAJ_NAEBVCShape@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawingContext::RecordImageBrushInfo(CDrawingContext *this, struct CResource *a2)
{
  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 77LL) )
  {
    if ( *((_BYTE *)a2 + 380) )
      *((_BYTE *)this + 6834) = 1;
    if ( *((_BYTE *)a2 + 381) )
      *((_BYTE *)this + 6836) = 1;
  }
}
