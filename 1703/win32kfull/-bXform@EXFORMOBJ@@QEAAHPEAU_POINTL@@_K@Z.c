/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009556C
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00762B0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreGetAppClipBox @ 0x1C009499C (GreGetAppClipBox.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00954C4 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C00955FC (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0095824 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00A6188 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreGradientFill @ 0x1C00A9038 (GreGradientFill.c)
 *     GreGetBoundsRect @ 0x1C00E0588 (GreGetBoundsRect.c)
 *     GreSetBoundsRect @ 0x1C00F805C (GreSetBoundsRect.c)
 *     NtGdiExtFloodFill @ 0x1C012BE60 (NtGdiExtFloodFill.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0273AF4 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 *     NtGdiPtVisible @ 0x1C027DF10 (NtGdiPtVisible.c)
 *     XFORMOBJ_bApplyXform @ 0x1C029B110 (XFORMOBJ_bApplyXform.c)
 * Callees:
 *     bCvtPts1 @ 0x1C0084E98 (bCvtPts1.c)
 */

__int64 __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _POINTL *a2, __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned int v4; // ecx
  int v6; // eax

  v3 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v3 + 32) & 0x43) == 0x43 )
    return 1;
  v6 = bCvtPts1(v3, a2, a3);
  v4 = 0;
  if ( v6 )
    return 1;
  return v4;
}
