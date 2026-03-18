/*
 * XREFs of ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C006DDF0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0087620 (NtGdiAlphaBlend.c)
 *     GreExtTextOutWInternal @ 0x1C0090298 (GreExtTextOutWInternal.c)
 *     NtGdiPatBlt @ 0x1C00903D0 (NtGdiPatBlt.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0092270 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     GreExtTextOutRect @ 0x1C0092F90 (GreExtTextOutRect.c)
 *     GreStretchDIBitsInternal @ 0x1C0093B84 (GreStretchDIBitsInternal.c)
 *     GreGetAppClipBox @ 0x1C009499C (GreGetAppClipBox.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00A6188 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreGradientFill @ 0x1C00A9038 (GreGradientFill.c)
 *     GreGetBoundsRect @ 0x1C00E0588 (GreGetBoundsRect.c)
 *     GrePolyTextOutW @ 0x1C00E0E9C (GrePolyTextOutW.c)
 *     GreMaskBlt @ 0x1C00F1F6C (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00F997C (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiFrameRgn @ 0x1C011E410 (NtGdiFrameRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0120E28 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFastPolyPolyline @ 0x1C0121530 (NtGdiFastPolyPolyline.c)
 *     NtGdiFillRgn @ 0x1C0122720 (NtGdiFillRgn.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0123DBC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0126860 (NtGdiTransparentBlt.c)
 *     NtGdiExtFloodFill @ 0x1C012BE60 (NtGdiExtFloodFill.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0254FCC (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C0255A14 (GreDrawEscape.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C025C9AC (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     GrePlgBlt @ 0x1C026DEAC (GrePlgBlt.c)
 *     NtGdiUpdateColors @ 0x1C02965B0 (NtGdiUpdateColors.c)
 *     NtGdiSwapBuffers @ 0x1C0298CD0 (NtGdiSwapBuffers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bFullScreen(XDCOBJ *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *(_QWORD *)this;
  v2 = 0;
  if ( !*(_QWORD *)(v1 + 512) || (*(_DWORD *)(v1 + 36) & 0x5000) == 0x1000 )
    return 1;
  return v2;
}
