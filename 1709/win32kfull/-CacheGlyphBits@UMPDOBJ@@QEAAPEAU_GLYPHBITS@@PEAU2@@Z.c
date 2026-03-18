/*
 * XREFs of ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C0270070
 * Callers:
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C028F3B0 (NtGdiFONTOBJ_cGetGlyphs.c)
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00B9754 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

struct _GLYPHBITS *__fastcall UMPDOBJ::CacheGlyphBits(UMPDOBJ *this, struct _GLYPHBITS *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  void *v7; // rbx
  void *v8; // rax

  v6 = a2->sizlBitmap.cy * ((unsigned int)(a2->sizlBitmap.cx + 7) >> 3) + 16;
  if ( v6 > *((_DWORD *)this + 88) )
  {
    v8 = UMPDOBJ::_AllocUserMem(this, v6, 0LL, a4);
    v7 = v8;
    if ( !v8 )
      return (struct _GLYPHBITS *)v7;
    *((_QWORD *)this + 43) = v8;
    *((_DWORD *)this + 88) = v6;
  }
  else
  {
    v7 = (void *)*((_QWORD *)this + 43);
  }
  if ( v7 )
    memmove(v7, a2, v6);
  return (struct _GLYPHBITS *)v7;
}
