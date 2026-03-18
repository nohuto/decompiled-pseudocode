/*
 * XREFs of ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C
 * Callers:
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C000B808 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     GreGetAppClipBox @ 0x1C000DDFC (GreGetAppClipBox.c)
 *     GreStretchDIBitsInternal @ 0x1C0019D78 (GreStretchDIBitsInternal.c)
 *     GreStretchBltInternal @ 0x1C001AF30 (GreStretchBltInternal.c)
 *     NtGdiPatBlt @ 0x1C001D870 (NtGdiPatBlt.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0029360 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x1C002C48C (-bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002D4A0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z @ 0x1C003308C (-ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C003320C (-bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C003BCB0 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C003C960 (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C003ED38 (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C006B8C8 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     GreSetViewportOrg @ 0x1C0080E74 (GreSetViewportOrg.c)
 *     GreSetWindowOrg @ 0x1C008178C (GreSetWindowOrg.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C00ADA24 (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C00ADCB4 (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 *     GreGradientFill @ 0x1C00B54F8 (GreGradientFill.c)
 *     GreExcludeClipRect @ 0x1C00E3BEC (GreExcludeClipRect.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00E7D30 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00E9190 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     GreGetBoundsRect @ 0x1C00F2548 (GreGetBoundsRect.c)
 *     GreTransformPoints @ 0x1C00F5EFC (GreTransformPoints.c)
 *     GreRectVisible @ 0x1C00F7654 (GreRectVisible.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0101358 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     GreMaskBlt @ 0x1C01023EC (GreMaskBlt.c)
 *     NtGdiComputeXformCoefficients @ 0x1C01034E0 (NtGdiComputeXformCoefficients.c)
 *     GreSetBoundsRect @ 0x1C010359C (GreSetBoundsRect.c)
 *     GreRectangle @ 0x1C01057D0 (GreRectangle.c)
 *     GreGetTextExtentW @ 0x1C0108E28 (GreGetTextExtentW.c)
 *     NtGdiOffsetClipRgn @ 0x1C0113A70 (NtGdiOffsetClipRgn.c)
 *     NtGdiExtFloodFill @ 0x1C01294D0 (NtGdiExtFloodFill.c)
 *     NtGdiFrameRgn @ 0x1C012A6A0 (NtGdiFrameRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C012B6D0 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     GrePolylineTo @ 0x1C012BB00 (GrePolylineTo.c)
 *     GrePolyBezierTo @ 0x1C012BD60 (GrePolyBezierTo.c)
 *     NtGdiFillRgn @ 0x1C012C5F0 (NtGdiFillRgn.c)
 *     NtGdiTransparentBlt @ 0x1C012CEF0 (NtGdiTransparentBlt.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1C01303D4 (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
 *     GrePolyPolygonInternal @ 0x1C0132894 (GrePolyPolygonInternal.c)
 *     NtGdiFastPolyPolyline @ 0x1C0135E10 (NtGdiFastPolyPolyline.c)
 *     GrePolyPolylineInternal @ 0x1C01392B4 (GrePolyPolylineInternal.c)
 *     GreGetTransform @ 0x1C0144F40 (GreGetTransform.c)
 *     GreGetTextExtentExW @ 0x1C0145118 (GreGetTextExtentExW.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C0274058 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 *     NtGdiPtVisible @ 0x1C027AA20 (NtGdiPtVisible.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C027AB84 (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C027AD98 (GreAngleArc.c)
 *     GreMoveTo @ 0x1C027B284 (GreMoveTo.c)
 *     GrePolyDraw @ 0x1C027B4C8 (GrePolyDraw.c)
 *     NtGdiEllipse @ 0x1C027B930 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C027BB70 (NtGdiRoundRect.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C028366C (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     NtGdiGetPath @ 0x1C0289090 (NtGdiGetPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02893F0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C0289550 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C0289680 (NtGdiWidenPath.c)
 *     NtGdiArcInternal @ 0x1C028C580 (NtGdiArcInternal.c)
 *     NtGdiConvertMetafileRect @ 0x1C0291C00 (NtGdiConvertMetafileRect.c)
 * Callees:
 *     <none>
 */

void __fastcall EXFORMOBJ::vQuickInit(EXFORMOBJ *this, struct XDCOBJ *a2, int a3)
{
  unsigned int v4; // r8d

  *((_DWORD *)this + 2) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 68LL);
  *((_DWORD *)this + 3) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 312LL) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL) & 0x1E000) == 0 && a3 == 516 )
  {
    *(_QWORD *)this = *(_QWORD *)a2 + 336LL;
  }
  else
  {
    v4 = a3 & 0x7FFFFFFF;
    if ( a3 >= 0 )
      v4 = a3;
    EXFORMOBJ::vInit(this, a2, v4, a3 & 0x80000000);
  }
}
