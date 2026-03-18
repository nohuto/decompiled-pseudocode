/*
 * XREFs of ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x1801618B4
 * Callers:
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJ_NAEBVCShape@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2PEAVCResource@@@Z @ 0x180161344 (-FillOrStrokeShape@CDrawingContext@@AEAAJ_NAEBVCShape@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800665E4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x1801B0500 (-GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z.c)
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
    if ( !v9 )
    {
LABEL_10:
      *a4 = v4;
      return v6;
    }
LABEL_5:
    v4 = *(struct CLegacyMilBrushRealizer **)(v10 + 3144);
    (**(void (__fastcall ***)(struct CLegacyMilBrushRealizer *))v4)(v4);
    goto LABEL_10;
  }
  if ( !a2 )
    goto LABEL_5;
  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v9 + 48LL))(a2, 86LL) )
  {
    Realizer = CLegacyMilBrush::GetRealizer(a2, a3, &v13);
    v6 = Realizer;
    if ( Realizer < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Realizer, 0x23C2u);
      return v6;
    }
    v4 = v13;
    goto LABEL_10;
  }
  v6 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x32u);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x23C0u);
  return v6;
}
