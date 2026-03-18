/*
 * XREFs of ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C014320C
 * Callers:
 *     NtGdiFONTOBJ_pifi @ 0x1C00B8040 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiEngTextOut @ 0x1C00B84F0 (NtGdiEngTextOut.c)
 *     NtGdiAddEmbFontToDC @ 0x1C02579D0 (NtGdiAddEmbFontToDC.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C028F3B0 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C028F5F0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     <none>
 */

PUBLIC_PFTOBJ *__fastcall PUBLIC_PFTOBJ::PUBLIC_PFTOBJ(PUBLIC_PFTOBJ *this, struct PFT *a2)
{
  *(_QWORD *)this = a2;
  return this;
}
