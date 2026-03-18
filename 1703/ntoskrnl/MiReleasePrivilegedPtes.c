/*
 * XREFs of MiReleasePrivilegedPtes @ 0x1406B5CE8
 * Callers:
 *     MiGetSystemAddressForImage @ 0x1404B1048 (MiGetSystemAddressForImage.c)
 *     MiReleasePrivilegedDriverState @ 0x140585D78 (MiReleasePrivilegedDriverState.c)
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1401FC9DC (KeReservePrivilegedPages.c)
 */

__int64 MiReleasePrivilegedPtes()
{
  __int64 result; // rax

  if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  return result;
}
