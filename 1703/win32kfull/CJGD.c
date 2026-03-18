/*
 * XREFs of CJGD @ 0x1C022C564
 * Callers:
 *     lGetGlyphBitmap @ 0x1C022D6AC (lGetGlyphBitmap.c)
 *     lGetGlyphBitmapErrRecover @ 0x1C022D9E4 (lGetGlyphBitmapErrRecover.c)
 *     lGetSingularGlyphBitmap @ 0x1C022DBA8 (lGetSingularGlyphBitmap.c)
 *     lQueryDEVICEMETRICS @ 0x1C022DC8C (lQueryDEVICEMETRICS.c)
 *     bComputeMaxGlyph @ 0x1C0230120 (bComputeMaxGlyph.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CJGD(unsigned int a1, int a2, __int64 a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(a3 + 40);
  if ( (v3 & 0x10000) != 0 )
  {
    if ( (v3 & 0x10000000) != 0 )
    {
      if ( (v3 & 0x20000000) != 0 )
        a2 *= 5;
    }
    else
    {
      a1 = (a1 + 1) >> 1;
    }
  }
  else
  {
    a1 = (a1 + 7) >> 3;
  }
  return ((a1 * a2 + 3) & 0xFFFFFFFC) + 16;
}
