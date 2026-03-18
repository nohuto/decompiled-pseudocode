/*
 * XREFs of ?DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@AEBVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18002C980
 * Callers:
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18003FE70 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 * Callees:
 *     ?AddBounds@CSwRenderTargetGetBounds@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCAliasedClip@@@Z @ 0x18002C8B0 (-AddBounds@CSwRenderTargetGetBounds@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180047C30 (-GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::DrawPath(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  int TightBoundsNoBadNumber; // eax
  _BYTE v13[16]; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0;
  if ( a8 || a7 )
  {
    TightBoundsNoBadNumber = CShape::GetTightBoundsNoBadNumber(a6, v13, a4 + 212);
    v8 = TightBoundsNoBadNumber;
    if ( TightBoundsNoBadNumber < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBoundsNoBadNumber, 0xB7u);
    else
      CSwRenderTargetGetBounds::AddBounds(a1 - 16, (__int64)v13, a4 + 72);
  }
  return v8;
}
