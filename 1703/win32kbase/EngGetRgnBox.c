/*
 * XREFs of EngGetRgnBox @ 0x1C00FC170
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRgnBox @ 0x1C0041B20 (GreGetRgnBox.c)
 *     GreGetObjectOwner @ 0x1C007B630 (GreGetObjectOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00A09A4 (--0EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngGetRgnBox(HANDLE hrgn, LPRECT prcl)
{
  INT result; // eax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v5);
  if ( (unsigned int)GreGetObjectOwner((unsigned int)hrgn, 4) )
    result = 0;
  else
    result = GreGetRgnBox((HRGN)hrgn, (__int64)prcl);
  if ( v5 )
    *(_BYTE *)(v5 + 331) = 0;
  return result;
}
