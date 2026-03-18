/*
 * XREFs of KeReservePrivilegedPages @ 0x14023FC9C
 * Callers:
 *     MiReservePrivilegedPtes @ 0x1405F8C00 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x140605F60 (MiReleasePrivilegedPtes.c)
 *     MiUnlockHotPatchPages @ 0x14074CD58 (MiUnlockHotPatchPages.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x140718CF0 (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
