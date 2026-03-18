/*
 * XREFs of FONTOBJ_pQueryGlyphAttrs @ 0x1C026FD60
 * Callers:
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C028F5F0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z @ 0x1C0299960 (-QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
PFD_GLYPHATTR __stdcall FONTOBJ_pQueryGlyphAttrs(FONTOBJ *pfo, ULONG iMode)
{
  __int64 v2; // r8
  ULONG_PTR iTTUniq; // rax
  struct _FD_GLYPHATTR *GlyphAttrs; // rbx
  PVOID v6[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  if ( pfo && (iTTUniq = pfo[1].iTTUniq) != 0 && *(_QWORD *)(iTTUniq + 3392) )
  {
    v6[0] = pfo[1].pvProducer;
    GlyphAttrs = PFFOBJ::QueryGlyphAttrs((PFFOBJ *)v6, pfo, iMode);
  }
  else
  {
    GlyphAttrs = 0LL;
  }
  v7 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v7, *(__int64 *)&iMode, v2);
  return GlyphAttrs;
}
