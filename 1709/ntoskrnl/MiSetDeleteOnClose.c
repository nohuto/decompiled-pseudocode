/*
 * XREFs of MiSetDeleteOnClose @ 0x140211B84
 * Callers:
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MiRelocateImage @ 0x1404F8070 (MiRelocateImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertUnusedSegment @ 0x1400676AC (MiInsertUnusedSegment.c)
 *     MiRemoveUnusedSegment @ 0x1400A48A8 (MiRemoveUnusedSegment.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiSetDeleteOnClose(__int64 a1, int a2)
{
  __int64 inserted; // rdi
  KIRQL v5; // r14
  int v6; // eax
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
      inserted = MiInsertUnusedSegment(a1);
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
             *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)),
             1LL,
             inserted);
  return result;
}
