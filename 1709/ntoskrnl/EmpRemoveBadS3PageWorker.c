/*
 * XREFs of EmpRemoveBadS3PageWorker @ 0x1406AF670
 * Callers:
 *     <none>
 * Callees:
 *     WheaPersistOfflinedPage @ 0x1402898F4 (WheaPersistOfflinedPage.c)
 */

__int64 EmpRemoveBadS3PageWorker()
{
  return WheaPersistOfflinedPage((UNICODE_STRING *)(unsigned int)EmpBadS3Page);
}
