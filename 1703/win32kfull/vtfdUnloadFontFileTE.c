/*
 * XREFs of vtfdUnloadFontFileTE @ 0x1C0236E20
 * Callers:
 *     <none>
 * Callees:
 *     vUnloadGlyphset @ 0x1C02B8458 (vUnloadGlyphset.c)
 */

__int64 __fastcall vtfdUnloadFontFileTE(_QWORD *pv)
{
  unsigned int v2; // ebx

  EngAcquireSemaphore(ghsemVTFD);
  v2 = 0;
  if ( pv )
  {
    while ( v2 < *((_DWORD *)pv + 9) )
      vUnloadGlyphset(&gpcpVTFD, pv[6 * v2++ + 9]);
    EngFreeMem(pv);
    v2 = 1;
  }
  EngReleaseSemaphore(ghsemVTFD);
  return v2;
}
