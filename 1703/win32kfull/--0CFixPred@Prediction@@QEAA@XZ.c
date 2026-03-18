/*
 * XREFs of ??0CFixPred@Prediction@@QEAA@XZ @ 0x1C011D530
 * Callers:
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C008F0B8 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     NtGdiGetFontFileInfo @ 0x1C010BB10 (NtGdiGetFontFileInfo.c)
 *     NtGdiGetFontFileData @ 0x1C0297E30 (NtGdiGetFontFileData.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02999E8 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

Prediction::CFixPred *__fastcall Prediction::CFixPred::CFixPred(Prediction::CFixPred *this)
{
  *(_QWORD *)this = 0LL;
  return this;
}
