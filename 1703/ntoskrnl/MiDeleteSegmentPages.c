/*
 * XREFs of MiDeleteSegmentPages @ 0x1401190A4
 * Callers:
 *     MiSegmentDelete @ 0x14054A42C (MiSegmentDelete.c)
 *     MiCopyDirectMapHeader @ 0x1406B74BC (MiCopyDirectMapHeader.c)
 *     MiInitializeImageExtents @ 0x1406B76C8 (MiInitializeImageExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetCommittedPages @ 0x140098EC8 (MiGetCommittedPages.c)
 *     MiDeleteSubsectionPages @ 0x1400C4590 (MiDeleteSubsectionPages.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 */

__int64 __fastcall MiDeleteSegmentPages(_QWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // r12
  __int64 v3; // rdx
  __int64 v4; // r15
  __int64 v6; // rsi
  int v7; // ebx
  __int64 v8; // rax
  KIRQL v9; // bp
  __int64 CommittedPages; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1 + 16;
  v2 = 0LL;
  v3 = *((_WORD *)a1 + 30) & 0x3FF;
  v14 = 0LL;
  v4 = 0LL;
  v6 = *(_QWORD *)(qword_14036C8F8 + 8 * v3);
  v7 = *(_DWORD *)(*a1 + 12LL);
  if ( a1 != (_QWORD *)-128LL )
  {
    do
    {
      v8 = MiDeleteSubsectionPages(v1, &v14);
      v1 = (_QWORD *)v1[2];
      v4 += v8;
    }
    while ( v1 );
    v2 = v14;
  }
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1 + 18);
  while ( a1[4] )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)a1 + 18);
    __writecr8(v9);
    _mm_pause();
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1 + 18);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)a1 + 18);
  __writecr8(v9);
  CommittedPages = MiGetCommittedPages(a1);
  v11 = CommittedPages;
  if ( CommittedPages )
  {
    v12 = CommittedPages - v2;
    MiReturnCommit(v6, CommittedPages - v2);
    if ( (v7 & 0x1000) != 0 )
    {
      if ( (ULONG_PTR *)v6 == &MiSystemPartition )
        MiReturnResidentAvailable(v12);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 5824), v12);
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 6280), -v11);
  }
  return v4;
}
