/*
 * XREFs of IoUpdateIrpIoAttributionHandle @ 0x140004CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IoUpdateIrpIoAttributionHandle()
{
  return IopSetDiskIoAttributionExtension();
}
