/*
 * XREFs of KeReservePrivilegedPages @ 0x1401FC9DC
 * Callers:
 *     MiGetSystemAddressForImage @ 0x1404B1048 (MiGetSystemAddressForImage.c)
 *     MiReservePrivilegedPtes @ 0x1404B1224 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x1406B5CE8 (MiReleasePrivilegedPtes.c)
 *     MiUnlockHotPatchPages @ 0x1406B5D94 (MiUnlockHotPatchPages.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
