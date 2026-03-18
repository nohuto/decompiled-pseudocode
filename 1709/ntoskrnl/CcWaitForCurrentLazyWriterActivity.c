/*
 * XREFs of CcWaitForCurrentLazyWriterActivity @ 0x14015D140
 * Callers:
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 * Callees:
 *     CcForEachPartition @ 0x14011BF90 (CcForEachPartition.c)
 */

NTSTATUS CcWaitForCurrentLazyWriterActivity(void)
{
  NTSTATUS v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  CcForEachPartition(
    (__int64 (__fastcall *)(__int64, __int64))CcWaitForCurrentLazyWriterActivityHelper,
    (__int64)&v1,
    0);
  return v1;
}
