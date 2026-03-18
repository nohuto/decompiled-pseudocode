/*
 * XREFs of KeQueryTimeIncrement @ 0x1400B5AF0
 * Callers:
 *     ExpTimeRefreshWork @ 0x140428DB0 (ExpTimeRefreshWork.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1404F46A0 (ExpGenuinePolicyCacheProvider.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1404F4CA0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     SPCallServerHandleQueryPolicy @ 0x140536700 (SPCallServerHandleQueryPolicy.c)
 *     PfTInitialize @ 0x1405DC060 (PfTInitialize.c)
 *     EtwpProcessThreadImageRundown @ 0x14074E288 (EtwpProcessThreadImageRundown.c)
 *     sub_14076B714 @ 0x14076B714 (sub_14076B714.c)
 *     sub_14083D98C @ 0x14083D98C (sub_14083D98C.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
