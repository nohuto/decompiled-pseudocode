/*
 * XREFs of KeQueryTimeIncrement @ 0x1400A18E0
 * Callers:
 *     ExpTimeRefreshWork @ 0x1404777B0 (ExpTimeRefreshWork.c)
 *     SPCallServerHandleQueryPolicy @ 0x1404AFD24 (SPCallServerHandleQueryPolicy.c)
 *     ExpGenuinePolicyCacheProvider @ 0x14054A090 (ExpGenuinePolicyCacheProvider.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14054B3E0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     EtwpProcessThreadImageRundown @ 0x140629158 (EtwpProcessThreadImageRundown.c)
 *     PfTInitialize @ 0x1406444B8 (PfTInitialize.c)
 *     sub_1407D2744 @ 0x1407D2744 (sub_1407D2744.c)
 *     sub_1408AFF10 @ 0x1408AFF10 (sub_1408AFF10.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
