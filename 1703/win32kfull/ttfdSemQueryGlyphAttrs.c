/*
 * XREFs of ttfdSemQueryGlyphAttrs @ 0x1C0225820
 * Callers:
 *     <none>
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00FCCB0 (EngUnmapFontFileFD.c)
 *     bttfdMapFontFileFD @ 0x1C022528C (bttfdMapFontFileFD.c)
 *     vMarkFontGone @ 0x1C0225AE8 (vMarkFontGone.c)
 *     ttfdQueryGlyphAttrs @ 0x1C022ED78 (ttfdQueryGlyphAttrs.c)
 */

__int64 __fastcall ttfdSemQueryGlyphAttrs(__int64 a1, int a2)
{
  __int64 GlyphAttrs; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx

  GlyphAttrs = 0LL;
  if ( a2 == 1 )
  {
    v4 = a1 + 24;
    v5 = *(_QWORD *)(a1 + 24);
    GlyphAttrs = *(_QWORD *)(v5 + 32);
    if ( !GlyphAttrs )
    {
      if ( (unsigned int)bttfdMapFontFileFD(v5) )
      {
        EngAcquireSemaphore(ghsemTTFD);
        GlyphAttrs = ttfdQueryGlyphAttrs(a1);
        EngReleaseSemaphore(ghsemTTFD);
        EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 48LL) + 56LL));
      }
    }
  }
  return GlyphAttrs;
}
