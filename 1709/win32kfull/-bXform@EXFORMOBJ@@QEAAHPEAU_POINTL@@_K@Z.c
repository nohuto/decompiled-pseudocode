/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C001B914
 * Callers:
 *     GreGetAppClipBox @ 0x1C000DDFC (GreGetAppClipBox.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C001B860 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C001B9DC (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C001BC08 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002D4A0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreGradientFill @ 0x1C00B54F8 (GreGradientFill.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00E7D30 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreGetBoundsRect @ 0x1C00F2548 (GreGetBoundsRect.c)
 *     GreSetBoundsRect @ 0x1C010359C (GreSetBoundsRect.c)
 *     NtGdiExtFloodFill @ 0x1C01294D0 (NtGdiExtFloodFill.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C02702C8 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 *     NtGdiPtVisible @ 0x1C027AA20 (NtGdiPtVisible.c)
 *     XFORMOBJ_bApplyXform @ 0x1C0297870 (XFORMOBJ_bApplyXform.c)
 * Callees:
 *     bCvtPts1 @ 0x1C000F444 (bCvtPts1.c)
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
