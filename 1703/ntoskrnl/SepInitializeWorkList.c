/*
 * XREFs of SepInitializeWorkList @ 0x14081AF9C
 * Callers:
 *     SepInitializationPhase0 @ 0x14081A294 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_14036F020);
  qword_14036F088 = 0LL;
  qword_14036F008 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_14036F0D8 = (__int64)ExFreePool;
  qword_14036F018 = (__int64)&qword_14036F010;
  qword_14036F010 = (__int64)&qword_14036F010;
  qword_14036F0D0 = (__int64)SepAdtDetermineInsertQueue;
  word_14036F0E0 = 3;
  ExInitializeResourceLite(&stru_14036EEF0);
  qword_14036EFA8 = (__int64)ExFreePool;
  qword_14036EED8 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_14036EFB0 = 1;
  return result;
}
