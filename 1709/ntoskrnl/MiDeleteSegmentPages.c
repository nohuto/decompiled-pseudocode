/*
 * XREFs of MiDeleteSegmentPages @ 0x14001F644
 * Callers:
 *     MiSegmentDelete @ 0x14048D574 (MiSegmentDelete.c)
 *     MiCopyDirectMapHeader @ 0x1406E40C0 (MiCopyDirectMapHeader.c)
 *     MiInitializeImageExtents @ 0x1406E430C (MiInitializeImageExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiDeleteSubsectionPages @ 0x14004C770 (MiDeleteSubsectionPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetCommittedPages @ 0x1400A2BFC (MiGetCommittedPages.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 */

__int64 __fastcall MiDeleteSegmentPages(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 v2; // r15
  __int64 v4; // rsi
  int v5; // ebx
  __int64 v6; // rax
  KIRQL v7; // bp
  __int64 CommittedPages; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rbp

  v1 = a1 + 128;
  v2 = 0LL;
  v4 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  if ( a1 != -128 )
  {
    do
    {
      v6 = MiDeleteSubsectionPages(v1);
      v1 = *(_QWORD *)(v1 + 16);
      v2 += v6;
    }
    while ( v1 );
  }
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  while ( *(_QWORD *)(a1 + 32) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(v7);
    _mm_pause();
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  __writecr8(v7);
  CommittedPages = MiGetCommittedPages(a1);
  v9 = CommittedPages;
  if ( CommittedPages )
  {
    v10 = CommittedPages;
    MiReturnCommit(v4, CommittedPages);
    if ( (v5 & 0x1000) != 0 )
    {
      if ( (ULONG_PTR *)v4 == &MiSystemPartition )
        MiReturnResidentAvailable(v10);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 6016), v10);
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 6472), -v9);
  }
  return v2;
}
