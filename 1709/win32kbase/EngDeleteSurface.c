/*
 * XREFs of EngDeleteSurface @ 0x1C0094E80
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteSurface @ 0x1C001F690 (bDeleteSurface.c)
 */

BOOL __stdcall EngDeleteSurface(HSURF hsurf)
{
  BOOL result; // eax

  result = 1;
  if ( hsurf )
    return bDeleteSurface((struct HOBJ__ *)hsurf);
  return result;
}
