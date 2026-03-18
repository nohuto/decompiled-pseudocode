/*
 * XREFs of MiComputeCommitThresholds @ 0x14014FE60
 * Callers:
 *     MiIncreaseCommitLimits @ 0x14014FD74 (MiIncreaseCommitLimits.c)
 *     MiReduceCommitLimits @ 0x1402223B4 (MiReduceCommitLimits.c)
 *     MiInsertPartitionPages @ 0x140237794 (MiInsertPartitionPages.c)
 * Callees:
 *     MiSyncCommitSignals @ 0x14014FEC8 (MiSyncCommitSignals.c)
 */

__int64 __fastcall MiComputeCommitThresholds(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // r8

  v4 = a1[805];
  v5 = v4 / 0xA;
  if ( v4 / 0xA > 0x10000 )
    v5 = 0x10000LL;
  a1[636] = v4 - v5;
  v6 = v4 >> 2;
  if ( v4 >> 2 > 0x100000 )
    v6 = 0x100000LL;
  v7 = v4 - v6;
  a1[635] = v7;
  return MiSyncCommitSignals(a1, 1LL, v7, a4);
}
