/*
 * XREFs of MiReleaseNewAddressForBootImage @ 0x1408E0B9C
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1408AD7F4 (MiReloadBootLoadedDrivers.c)
 *     MiGetNewAddressForBootImage @ 0x1408AE02C (MiGetNewAddressForBootImage.c)
 * Callees:
 *     MiReleaseDriverPtes @ 0x1405F6694 (MiReleaseDriverPtes.c)
 *     MiReleasePrivilegedPtes @ 0x140605F60 (MiReleasePrivilegedPtes.c)
 */

void __fastcall MiReleaseNewAddressForBootImage(unsigned __int64 a1, int a2)
{
  unsigned __int64 v3; // rdi

  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiReleasePrivilegedPtes();
  MiReleaseDriverPtes(0, v3, a2);
}
