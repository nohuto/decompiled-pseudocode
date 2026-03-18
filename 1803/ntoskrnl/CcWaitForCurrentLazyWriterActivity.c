/*
 * XREFs of CcWaitForCurrentLazyWriterActivity @ 0x14014D7B0
 * Callers:
 *     PopGracefulShutdown @ 0x140485D40 (PopGracefulShutdown.c)
 * Callees:
 *     CcForEachPartition @ 0x140004490 (CcForEachPartition.c)
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
