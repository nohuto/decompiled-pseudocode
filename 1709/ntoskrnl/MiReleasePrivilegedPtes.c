/*
 * XREFs of MiReleasePrivilegedPtes @ 0x14059F1D8
 * Callers:
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140542BF0 (MiGetSystemAddressForImage.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x140202724 (KeReservePrivilegedPages.c)
 */

__int64 MiReleasePrivilegedPtes()
{
  __int64 result; // rax

  if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  return result;
}
