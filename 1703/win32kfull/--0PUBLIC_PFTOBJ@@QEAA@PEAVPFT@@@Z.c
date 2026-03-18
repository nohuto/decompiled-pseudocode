/*
 * XREFs of ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C013C384
 * Callers:
 *     NtGdiEngTextOut @ 0x1C009ABE0 (NtGdiEngTextOut.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C009B810 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiAddEmbFontToDC @ 0x1C0255ED0 (NtGdiAddEmbFontToDC.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C0292C90 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C0292ED0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     <none>
 */

PUBLIC_PFTOBJ *__fastcall PUBLIC_PFTOBJ::PUBLIC_PFTOBJ(PUBLIC_PFTOBJ *this, struct PFT *a2)
{
  *(_QWORD *)this = a2;
  return this;
}
