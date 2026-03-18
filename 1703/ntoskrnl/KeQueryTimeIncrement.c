/*
 * XREFs of KeQueryTimeIncrement @ 0x14006B3C0
 * Callers:
 *     ExpTimeRefreshWork @ 0x14041A8E0 (ExpTimeRefreshWork.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1404AE480 (ExpGenuinePolicyCacheProvider.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1404AE9B0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     EtwpProcessThreadImageRundown @ 0x1404B01BC (EtwpProcessThreadImageRundown.c)
 *     PfTInitialize @ 0x1405C8078 (PfTInitialize.c)
 *     sub_140808C5C @ 0x140808C5C (sub_140808C5C.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
