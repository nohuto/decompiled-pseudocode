/*
 * XREFs of ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C00F1F20
 * Callers:
 *     ?UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00F19D4 (-UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C028D930 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C028F730 (NtGdiFONTOBJ_pfdg.c)
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall WriteFD_GLYPHSET(struct _FD_GLYPHSET *a1, struct _FD_GLYPHSET *a2, ULONG a3)
{
  ULONG cRuns; // r14d
  ULONG i; // ecx
  __int64 v8; // rax

  cRuns = a2->cRuns;
  memmove(a1, a2, a3);
  a1->cjThis = a3;
  for ( i = 0; i < cRuns; ++i )
  {
    if ( a2->awcrun[i].phg )
    {
      v8 = (unsigned int)(LODWORD(a2->awcrun[i].phg) - (_DWORD)a2);
      if ( (unsigned int)v8 >= a3 )
        return 0LL;
      a1->awcrun[i].phg = (ULONG *)((char *)&a1->cjThis + v8);
    }
  }
  return 1LL;
}
