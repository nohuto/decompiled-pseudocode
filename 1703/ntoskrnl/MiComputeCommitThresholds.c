/*
 * XREFs of MiComputeCommitThresholds @ 0x140159CC0
 * Callers:
 *     MiIncreaseCommitLimits @ 0x140159BD4 (MiIncreaseCommitLimits.c)
 *     MiReduceCommitLimits @ 0x1402180F8 (MiReduceCommitLimits.c)
 *     MiInsertPartitionPages @ 0x14021E090 (MiInsertPartitionPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeCommitThresholds(_QWORD *a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rdx
  __int64 v3; // rax

  v1 = a1[781];
  v2 = v1 / 0xA;
  if ( v1 / 0xA > 0x10000 )
    v2 = 0x10000LL;
  a1[620] = v1 - v2;
  v3 = v1 >> 2;
  if ( v1 >> 2 > 0x100000 )
    v3 = 0x100000LL;
  a1[619] = v1 - v3;
  return MiSyncCommitSignals(a1, 1LL);
}
