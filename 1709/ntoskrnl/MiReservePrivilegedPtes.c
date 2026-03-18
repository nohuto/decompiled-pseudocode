/*
 * XREFs of MiReservePrivilegedPtes @ 0x140542DC8
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140542BF0 (MiGetSystemAddressForImage.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x140202724 (KeReservePrivilegedPages.c)
 */

__int64 MiReservePrivilegedPtes()
{
  if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  else
    return 0LL;
}
