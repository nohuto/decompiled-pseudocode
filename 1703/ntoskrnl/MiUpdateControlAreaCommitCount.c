/*
 * XREFs of MiUpdateControlAreaCommitCount @ 0x140119798
 * Callers:
 *     MiSetPagesModified @ 0x140210F54 (MiSetPagesModified.c)
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 *     MiChargeSegmentCommit @ 0x14054A0F0 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x14054A5D0 (MiCreatePagingFileMap.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiUpdateControlAreaCommitCount(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned int v6; // ebx

  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)) + 6280LL),
    a2);
  if ( *(_QWORD *)(a1 + 64) )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 16LL) += a2;
    return 0LL;
  }
  else
  {
    v4 = (volatile LONG *)(a1 + 72);
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    *(_QWORD *)(a1 + 120) ^= (*(_QWORD *)(a1 + 120) ^ (*(_QWORD *)(a1 + 120) + a2)) & 0xFFFFFFFFFLL;
    v6 = *(_DWORD *)(a1 + 176) & 0x3FFFFFFF;
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    __writecr8(v5);
    return v6;
  }
}
