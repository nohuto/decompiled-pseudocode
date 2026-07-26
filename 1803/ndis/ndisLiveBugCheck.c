/*
 * XREFs of ndisLiveBugCheck @ 0x1C004FE2C
 * Callers:
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1C00FC560 (ndisReportTimeoutWaitingForExternalDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisLiveBugCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return DbgkWerCaptureLiveKernelDump(L"NDIS", 350LL, 37LL, a2, a3, a4, 0LL, 0LL, 0);
}
