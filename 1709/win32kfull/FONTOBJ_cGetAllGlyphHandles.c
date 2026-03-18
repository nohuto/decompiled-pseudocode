/*
 * XREFs of FONTOBJ_cGetAllGlyphHandles @ 0x1C026FCB0
 * Callers:
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C028F2A0 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?chglyGetAllHandles@RFONTOBJ@@QEAAKPEAK@Z @ 0x1C02A0814 (-chglyGetAllHandles@RFONTOBJ@@QEAAKPEAK@Z.c)
 */

ULONG __stdcall FONTOBJ_cGetAllGlyphHandles(FONTOBJ *pfo, HGLYPH *phg)
{
  unsigned int AllHandles; // eax
  ULONG v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  FONTOBJ *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = pfo;
  AllHandles = RFONTOBJ::chglyGetAllHandles((RFONTOBJ *)&v7, phg);
  v7 = 0LL;
  v3 = AllHandles;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v7, v4, v5);
  return v3;
}
