/*
 * XREFs of FONTOBJ_SetCachedGlyphAttrs @ 0x1C0283EA4
 * Callers:
 *     UmfdDestroyFont @ 0x1C003F0D0 (UmfdDestroyFont.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02B3710 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall FONTOBJ_SetCachedGlyphAttrs(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  *(_QWORD *)(a1 + 8LL * (unsigned int)a2 + 896) = a3;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v3, a2, a3);
}
