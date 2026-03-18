/*
 * XREFs of KeReservePrivilegedPages @ 0x140202724
 * Callers:
 *     MiReservePrivilegedPtes @ 0x140542DC8 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x14059F1D8 (MiReleasePrivilegedPtes.c)
 *     MiUnlockHotPatchPages @ 0x1406E1FA8 (MiUnlockHotPatchPages.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x1406B40C0 (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
