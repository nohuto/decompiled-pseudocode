/*
 * XREFs of FONTOBJ_GetCachedGlyphAttrs @ 0x1C003F144
 * Callers:
 *     UmfdDestroyFont @ 0x1C003F0D0 (UmfdDestroyFont.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02B3710 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall FONTOBJ_GetCachedGlyphAttrs(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v3 = *(_QWORD *)(a1 + 8LL * (unsigned int)a2 + 896);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5, a2, a3);
  return v3;
}
