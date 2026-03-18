/*
 * XREFs of MiDereferencePageRunsEx @ 0x14011CA98
 * Callers:
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiDereferencePageRuns @ 0x14011CA7C (MiDereferencePageRuns.c)
 *     MiZeroBootLargePages @ 0x14015A634 (MiZeroBootLargePages.c)
 *     MiFinishResume @ 0x140218680 (MiFinishResume.c)
 *     MiRebuildLargePage @ 0x1402336B8 (MiRebuildLargePage.c)
 *     MiDeletePartitionResources @ 0x140236E78 (MiDeletePartitionResources.c)
 *     MiUpdatePartitionMemory @ 0x140238528 (MiUpdatePartitionMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageRunsEx(__int64 a1, int a2)
{
  _QWORD *v2; // rsi
  __int64 v3; // r15
  _QWORD *v5; // rdi
  KIRQL v6; // al
  bool v7; // zf
  KIRQL v8; // bp
  _QWORD *v9; // rbx

  v2 = (_QWORD *)(a1 - 16);
  v3 = *(_QWORD *)(a1 - 16);
  v5 = 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 192));
  v7 = v2[1]-- == 1LL;
  v8 = v6;
  if ( !v7 )
    v2 = 0LL;
  if ( a2 )
  {
    if ( (ULONG_PTR *)v3 != &MiSystemPartition )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 192));
      __writecr8(v8);
      v8 = ExAcquireSpinLockExclusive(&dword_14038A180);
    }
    if ( !--qword_14038A0E8 )
    {
      v5 = (_QWORD *)qword_14038A118;
      qword_14038A118 = 0LL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14038A180);
    __writecr8(v8);
    if ( v5 )
    {
      do
      {
        v9 = (_QWORD *)*v5;
        KeSignalGate(v5 + 1, 1LL);
        v5 = v9;
      }
      while ( v9 );
    }
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 192));
    __writecr8(v8);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
