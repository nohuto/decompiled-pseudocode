/*
 * XREFs of EngCombineRgn @ 0x1C00FBEB0
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineRgn @ 0x1C003DDE0 (GreCombineRgn.c)
 *     GreGetObjectOwner @ 0x1C007B630 (GreGetObjectOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00A09A4 (--0EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngCombineRgn(HANDLE hrgnTrg, HANDLE hrgnSrc1, HANDLE hrgnSrc2, INT iMode)
{
  INT v8; // ecx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  EngModeState::EngModeState((EngModeState *)v10);
  if ( (unsigned int)GreGetObjectOwner((unsigned int)hrgnTrg, 4)
    || (unsigned int)GreGetObjectOwner((unsigned int)hrgnSrc1, 4)
    || (unsigned int)GreGetObjectOwner((unsigned int)hrgnSrc2, 4) )
  {
    v8 = 0;
  }
  else
  {
    v8 = GreCombineRgn((HRGN)hrgnTrg, (HRGN)hrgnSrc1, (HRGN)hrgnSrc2, iMode);
  }
  if ( v10[0] )
    *(_BYTE *)(v10[0] + 331LL) = 0;
  return v8;
}
