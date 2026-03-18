/*
 * XREFs of EngDeleteSurface @ 0x1C008D9F0
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteSurface @ 0x1C003F890 (bDeleteSurface.c)
 */

BOOL __stdcall EngDeleteSurface(HSURF hsurf)
{
  BOOL result; // eax

  result = 1;
  if ( hsurf )
    return bDeleteSurface((unsigned int)hsurf);
  return result;
}
