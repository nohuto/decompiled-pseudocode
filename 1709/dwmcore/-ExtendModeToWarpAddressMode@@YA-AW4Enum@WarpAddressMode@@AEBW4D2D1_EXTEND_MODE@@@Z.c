/*
 * XREFs of ?ExtendModeToWarpAddressMode@@YA?AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z @ 0x1801D81FC
 * Callers:
 *     ?Render@CWARPCallbackRenderer@@UEAAJXZ @ 0x1801D8220 (-Render@CWARPCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExtendModeToWarpAddressMode(_DWORD *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *a1 )
  {
    if ( *a1 == 1 )
    {
      return 1;
    }
    else if ( *a1 == 2 )
    {
      return 2;
    }
  }
  return v1;
}
