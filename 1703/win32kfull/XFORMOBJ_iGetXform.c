/*
 * XREFs of XFORMOBJ_iGetXform @ 0x1C009B3A0
 * Callers:
 *     NtGdiXFORMOBJ_iGetXform @ 0x1C009B2A0 (NtGdiXFORMOBJ_iGetXform.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C009BD74 (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     bNewXform @ 0x1C0230B3C (bNewXform.c)
 *     ulGetRotate @ 0x1C02355B0 (ulGetRotate.c)
 *     bInitXform @ 0x1C02387D0 (bInitXform.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall XFORMOBJ_iGetXform(XFORMOBJ *pxo, XFORML *pxform)
{
  if ( !pxo )
    return -1;
  if ( pxform )
    EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)pxo, pxform);
  switch ( *(_DWORD *)(*(_QWORD *)&pxo->ulReserved + 32LL) & 0x43 )
  {
    case 1:
      return 2;
    case 3:
      return 1;
    case 67:
      return 0;
  }
  return 3;
}
