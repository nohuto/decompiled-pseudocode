/*
 * XREFs of EmpRemoveBadS3PageWorker @ 0x140713E20
 * Callers:
 *     <none>
 * Callees:
 *     WheaPersistOfflinedPage @ 0x1402BEE64 (WheaPersistOfflinedPage.c)
 */

__int64 EmpRemoveBadS3PageWorker()
{
  return WheaPersistOfflinedPage((UNICODE_STRING *)(unsigned int)EmpBadS3Page);
}
