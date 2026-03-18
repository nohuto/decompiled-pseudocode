/*
 * XREFs of MiReservePrivilegedPtes @ 0x1405F8C00
 * Callers:
 *     MiGetSystemAddressForImage @ 0x1405F8C24 (MiGetSystemAddressForImage.c)
 *     MiGetNewAddressForBootImage @ 0x1408AE02C (MiGetNewAddressForBootImage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x14023FC9C (KeReservePrivilegedPages.c)
 */

__int64 MiReservePrivilegedPtes()
{
  if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  else
    return 0LL;
}
