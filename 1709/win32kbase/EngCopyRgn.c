/*
 * XREFs of EngCopyRgn @ 0x1C00FC4B0
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineRgn @ 0x1C0043CC0 (GreCombineRgn.c)
 *     GreGetObjectOwner @ 0x1C0073C80 (GreGetObjectOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00AA27C (--0EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngCopyRgn(HANDLE hrgnDst, HANDLE hrgnSrc)
{
  INT v4; // ecx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v6);
  if ( (unsigned int)GreGetObjectOwner((unsigned int)hrgnDst, 4)
    || (unsigned int)GreGetObjectOwner((unsigned int)hrgnSrc, 4) )
  {
    v4 = 0;
  }
  else
  {
    v4 = GreCombineRgn((HRGN)hrgnDst, (HRGN)hrgnSrc, 0LL, 5);
  }
  if ( v6 )
    *(_BYTE *)(v6 + 331) = 0;
  return v4;
}
