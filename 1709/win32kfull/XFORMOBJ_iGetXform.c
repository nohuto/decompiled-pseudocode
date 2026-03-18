/*
 * XREFs of XFORMOBJ_iGetXform @ 0x1C00B8450
 * Callers:
 *     NtGdiXFORMOBJ_iGetXform @ 0x1C00B82B0 (NtGdiXFORMOBJ_iGetXform.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00B83AC (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     bNewXform @ 0x1C02320A8 (bNewXform.c)
 *     ulGetRotate @ 0x1C0236B40 (ulGetRotate.c)
 *     bInitXform @ 0x1C0239D80 (bInitXform.c)
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
