/*
 * XREFs of ?DrawShape@CDrawingContext@@QEAAJAEBVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x18006E054
 * Callers:
 *     ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x18006E0C0 (-DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0HF@@@@Z @ 0x18006E170 (-DrawRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z @ 0x1801A9FF4 (-RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800665E4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18006DF14 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18008C1A4 (-GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJ_NAEBVCShape@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2PEAVCResource@@@Z @ 0x180161344 (-FillOrStrokeShape@CDrawingContext@@AEAAJ_NAEBVCShape@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 */

__int64 __fastcall CDrawingContext::DrawShape(
        CDrawingContext *this,
        const struct CShape *a2,
        struct CLegacyMilBrush *a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebx
  const struct CShape *v8; // rdx
  CDrawingContext *v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  int TightBoundsNoBadNumber; // eax
  int v14; // eax
  __int64 v15[2]; // [rsp+30h] [rbp-48h] BYREF

  v3 = 0;
  v5 = 0;
  if ( CDrawingContext::IsBounding(this) )
  {
    v11 = CDrawingContext::FillShapeForBounds(v9, v8);
    v5 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x50Cu);
  }
  else
  {
    if ( !a3 )
      goto LABEL_4;
    if ( (*(unsigned __int8 (__fastcall **)(struct CLegacyMilBrush *, __int64))(*(_QWORD *)v10 + 192LL))(
           a3,
           (__int64)v9 + 3552) )
    {
      TightBoundsNoBadNumber = CShape::GetTightBoundsNoBadNumber(a2, v15, 0LL);
      v5 = TightBoundsNoBadNumber;
      if ( TightBoundsNoBadNumber < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBoundsNoBadNumber, 0x518u);
        goto LABEL_4;
      }
    }
    else
    {
      *(_OWORD *)v15 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    }
    v14 = CDrawingContext::FillOrStrokeShape(this, (__int64)v15, a3);
    v5 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x524u);
  }
LABEL_4:
  if ( v5 != -2003304438 )
    return v5;
  return v3;
}
