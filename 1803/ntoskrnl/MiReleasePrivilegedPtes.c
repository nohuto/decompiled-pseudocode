/*
 * XREFs of MiReleasePrivilegedPtes @ 0x140605F60
 * Callers:
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x1405F8C24 (MiGetSystemAddressForImage.c)
 *     MiReleaseNewAddressForBootImage @ 0x1408E0B9C (MiReleaseNewAddressForBootImage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x14023FC9C (KeReservePrivilegedPages.c)
 */

__int64 MiReleasePrivilegedPtes()
{
  __int64 result; // rax

  if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  return result;
}
