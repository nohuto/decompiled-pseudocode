/*
 * XREFs of FONTOBJ_GetCachedGlyphAttrs @ 0x1C00F4BCC
 * Callers:
 *     UmfdDestroyFont @ 0x1C00F4B40 (UmfdDestroyFont.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02B98F0 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall FONTOBJ_GetCachedGlyphAttrs(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = *(_QWORD *)(a1 + 8LL * a2 + 896);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
  return v2;
}
