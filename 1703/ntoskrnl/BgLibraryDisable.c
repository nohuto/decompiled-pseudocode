/*
 * XREFs of BgLibraryDisable @ 0x140758A34
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140140280 (BgkNotifyDisplayOwnershipChange.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x140140410 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x1401406CC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140140710 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDisable @ 0x140758B48 (BgpFwLibraryDisable.c)
 */

__int64 BgLibraryDisable()
{
  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140341A30 & 1) != 0 )
    BgpFwLibraryDisable();
  BgpFwReleaseLock();
  return 0LL;
}
