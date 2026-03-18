/*
 * XREFs of MiDeleteSegmentPages @ 0x14004B184
 * Callers:
 *     MiSegmentDelete @ 0x1404BC75C (MiSegmentDelete.c)
 *     MiCopyDirectMapHeader @ 0x14074E4AC (MiCopyDirectMapHeader.c)
 *     MiInitializeImageExtents @ 0x14074E70C (MiInitializeImageExtents.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiDeleteSubsectionPages @ 0x140016E90 (MiDeleteSubsectionPages.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetCommittedPages @ 0x1400E7A14 (MiGetCommittedPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 */

__int64 __fastcall MiDeleteSegmentPages(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v6; // rsi
  int v7; // ebx
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  volatile LONG *v10; // rcx
  __int64 CommittedPages; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1 + 128;
  v2 = *(_WORD *)(a1 + 60) & 0x3FF;
  v3 = 0LL;
  v4 = 0LL;
  v16 = 0LL;
  v6 = *(_QWORD *)(qword_1403CBD88 + 8 * v2);
  v7 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  if ( a1 != -128 )
  {
    do
    {
      v8 = MiDeleteSubsectionPages((__int64 **)v1, &v16);
      v1 = *(_QWORD *)(v1 + 16);
      v4 += v8;
    }
    while ( v1 );
    v3 = v16;
  }
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  while ( 1 )
  {
    v10 = (volatile LONG *)(a1 + 72);
    if ( !*(_QWORD *)(a1 + 32) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    __writecr8(v9);
    _mm_pause();
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  __writecr8(v9);
  CommittedPages = MiGetCommittedPages(a1);
  v12 = CommittedPages;
  if ( CommittedPages )
  {
    v13 = CommittedPages - v3;
    MiReturnCommit(v6, CommittedPages - v3);
    if ( (v7 & 0x1000) != 0 )
    {
      if ( (ULONG_PTR *)v6 == &MiSystemPartition )
        MiReturnResidentAvailable(v13, v14);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 7104), v13);
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 7560), -v12);
  }
  return v4;
}
