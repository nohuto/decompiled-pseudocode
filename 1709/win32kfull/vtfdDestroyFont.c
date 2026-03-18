/*
 * XREFs of vtfdDestroyFont @ 0x1C023A010
 * Callers:
 *     <none>
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C010CBB0 (EngUnmapFontFileFD.c)
 */

void __fastcall vtfdDestroyFont(__int64 a1)
{
  __int64 *v2; // rbx
  int v3; // eax
  __int64 v4; // rcx

  EngAcquireSemaphore(ghsemVTFD);
  v2 = *(__int64 **)(a1 + 56);
  if ( v2 )
  {
    v3 = *(_DWORD *)(*v2 + 32);
    if ( v3 )
    {
      *(_DWORD *)(*v2 + 32) = v3 - 1;
      v4 = *v2;
      if ( !*(_DWORD *)(*v2 + 32) )
      {
        if ( (*(_DWORD *)(v4 + 28) & 1) == 0 || (unsigned int)(*(_DWORD *)v4 - 1) > 1 )
          EngUnmapFontFileFD(*(_QWORD *)(v4 + 8));
        *(_DWORD *)(*v2 + 28) &= ~1u;
      }
      EngFreeMem(v2);
    }
  }
  EngReleaseSemaphore(ghsemVTFD);
}
