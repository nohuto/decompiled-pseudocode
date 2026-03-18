/*
 * XREFs of ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x1800A2898
 * Callers:
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x1800A8F7C (-FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 * Callees:
 *     ?GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x18004B100 (-GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z.c)
 *     ?IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004BCD0 (-IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007BA70 (-IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800A1D6C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::GetBrushRealizer(
        CDrawingContext *this,
        struct CResource *a2,
        const struct LegacyMilBrushContext *a3,
        struct CLegacyMilBrushRealizer **a4)
{
  struct CLegacyMilBrushRealizer *v4; // rbx
  unsigned int v6; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(struct CResource *, __int64); // rax
  char v12; // al
  int Realizer; // eax
  struct CLegacyMilBrushRealizer *v15; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  v6 = 0;
  v15 = 0LL;
  if ( (unsigned __int8)CDrawingContext::IsBounding(this) )
  {
    if ( !a2 )
      goto LABEL_8;
LABEL_14:
    v4 = *(struct CLegacyMilBrushRealizer **)(v10 + 3048);
    (**(void (__fastcall ***)(struct CLegacyMilBrushRealizer *))v4)(v4);
    goto LABEL_8;
  }
  if ( !v9 )
    goto LABEL_14;
  v11 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v9 + 48LL);
  if ( (char *)v11 == (char *)CSolidColorLegacyMilBrush::IsOfType )
  {
    v12 = CSolidColorLegacyMilBrush::IsOfType((__int64)a2, 75);
  }
  else if ( (char *)v11 == (char *)CImageLegacyMilBrush::IsOfType )
  {
    v12 = CImageLegacyMilBrush::IsOfType((__int64)a2, 75);
  }
  else
  {
    v12 = v11(a2, 75LL);
  }
  if ( !v12 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x24B1u);
    return v6;
  }
  Realizer = CLegacyMilBrush::GetRealizer(a2, a3, &v15);
  v6 = Realizer;
  if ( Realizer < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Realizer, 0x24B3u);
    return v6;
  }
  v4 = v15;
LABEL_8:
  *a4 = v4;
  return v6;
}
