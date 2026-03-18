/*
 * XREFs of MiReservePrivilegedPtes @ 0x1404B1224
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     <none>
 */

__int64 MiReservePrivilegedPtes()
{
  if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  else
    return 0LL;
}
