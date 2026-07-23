/*
 * XREFs of EmpRemoveBadS3PageWorker @ 0x140684270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EmpRemoveBadS3PageWorker(__int64 a1, BCD_OPEN_FLAGS a2)
{
  return WheaPersistOfflinedPage((UNICODE_STRING *)(unsigned int)EmpBadS3Page, a2);
}
