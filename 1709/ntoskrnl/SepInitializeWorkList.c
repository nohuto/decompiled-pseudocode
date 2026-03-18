/*
 * XREFs of SepInitializeWorkList @ 0x14084B91C
 * Callers:
 *     SepInitializationPhase0 @ 0x14084AA68 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_14038D730);
  qword_14038D798 = 0LL;
  qword_14038D718 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_14038D7E8 = (__int64)ExFreePool;
  qword_14038D728 = (__int64)&qword_14038D720;
  qword_14038D720 = (__int64)&qword_14038D720;
  qword_14038D7E0 = (__int64)SepAdtDetermineInsertQueue;
  word_14038D7F0 = 3;
  ExInitializeResourceLite(&stru_14038D5F0);
  qword_14038D6A8 = (__int64)ExFreePool;
  qword_14038D5D8 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_14038D6B0 = 1;
  return result;
}
