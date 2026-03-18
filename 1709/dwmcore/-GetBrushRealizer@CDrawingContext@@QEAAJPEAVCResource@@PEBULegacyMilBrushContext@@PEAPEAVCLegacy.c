/*
 * XREFs of ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x180037528
 * Callers:
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJ_NAEBVCShape@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2PEAVCResource@@@Z @ 0x18003FFA8 (-FillOrStrokeShape@CDrawingContext@@AEAAJ_NAEBVCShape@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180036C7C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x18007DAF0 (-GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::GetBrushRealizer(
        CDrawingContext *this,
        struct CResource *a2,
        const struct LegacyMilBrushContext *a3,
        struct CLegacyMilBrushRealizer **a4)
{
  struct CLegacyMilBrushRealizer *v4; // rbx
  unsigned int v6; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int Realizer; // eax
  struct CLegacyMilBrushRealizer *v13; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  v6 = 0;
  v13 = 0LL;
  if ( CDrawingContext::IsBounding(this) )
  {
    if ( !a2 )
      goto LABEL_6;
LABEL_9:
    v4 = *(struct CLegacyMilBrushRealizer **)(v10 + 3144);
    (**(void (__fastcall ***)(struct CLegacyMilBrushRealizer *))v4)(v4);
    goto LABEL_6;
  }
  if ( !v9 )
    goto LABEL_9;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v9 + 48LL))(a2, 80LL) )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x32u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x2284u);
    return v6;
  }
  Realizer = CLegacyMilBrush::GetRealizer(a2, a3, &v13);
  v6 = Realizer;
  if ( Realizer < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Realizer, 0x2286u);
    return v6;
  }
  v4 = v13;
LABEL_6:
  *a4 = v4;
  return v6;
}
