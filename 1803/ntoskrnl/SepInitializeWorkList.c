/*
 * XREFs of SepInitializeWorkList @ 0x1408BD584
 * Callers:
 *     SepInitializationPhase0 @ 0x1408BC6F0 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_1403D16A0);
  qword_1403D1708 = 0LL;
  qword_1403D1688 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_1403D1758 = (__int64)ExFreePool;
  qword_1403D1698 = (__int64)&qword_1403D1690;
  qword_1403D1690 = (__int64)&qword_1403D1690;
  qword_1403D1750 = (__int64)SepAdtDetermineInsertQueue;
  word_1403D1760 = 3;
  ExInitializeResourceLite(&stru_1403D1580);
  qword_1403D1638 = (__int64)ExFreePool;
  qword_1403D1568 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_1403D1640 = 1;
  return result;
}
