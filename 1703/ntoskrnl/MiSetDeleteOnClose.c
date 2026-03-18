/*
 * XREFs of MiSetDeleteOnClose @ 0x14020AD08
 * Callers:
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x140096C90 (MiRemoveUnusedSegment.c)
 *     MiInsertUnusedSegment @ 0x140098DC0 (MiInsertUnusedSegment.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiSetDeleteOnClose(__int64 a1, int a2)
{
  __int64 inserted; // rdi
  KIRQL v5; // r14
  int v6; // eax
  __int64 v7; // rdx
  __int64 result; // rax

  inserted = 0LL;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = *(_DWORD *)(a1 + 56);
  if ( (v6 & 0x40000) == 0 )
  {
    if ( (v6 & 0x8000000) != 0 )
    {
      MiRemoveUnusedSegment(a1);
      *(_DWORD *)(a1 + 56) |= 0x40000u;
      inserted = MiInsertUnusedSegment(a1, v7);
    }
    else
    {
      *(_DWORD *)(a1 + 56) = v6 | 0x40000;
    }
  }
  if ( a2 == 1 )
    *(_DWORD *)(a1 + 56) |= 0x10u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  result = v5;
  __writecr8(v5);
  if ( inserted )
    return MiReturnCrossPartitionSectionCharges(
             *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)),
             1LL,
             inserted);
  return result;
}
