/*
 * XREFs of MiDereferencePageRunsEx @ 0x1400C4510
 * Callers:
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiDereferencePageRuns @ 0x14014C808 (MiDereferencePageRuns.c)
 *     MiFinishResume @ 0x14014F670 (MiFinishResume.c)
 *     MiZeroBootLargePages @ 0x140185ED4 (MiZeroBootLargePages.c)
 *     MiRebuildLargePage @ 0x14026D668 (MiRebuildLargePage.c)
 *     MiDeletePartitionResources @ 0x14026E874 (MiDeletePartitionResources.c)
 *     MiUpdatePartitionMemory @ 0x140270148 (MiUpdatePartitionMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageRunsEx(__int64 a1, int a2)
{
  _QWORD *v2; // rsi
  __int64 v3; // r15
  _QWORD *v5; // rdi
  volatile LONG *v6; // rbp
  KIRQL v7; // al
  bool v8; // zf
  KIRQL v9; // r14
  _QWORD *v10; // rbx

  v2 = (_QWORD *)(a1 - 16);
  v3 = *(_QWORD *)(a1 - 16);
  v5 = 0LL;
  v6 = (volatile LONG *)(v3 + 192);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 192));
  v8 = v2[1]-- == 1LL;
  v9 = v7;
  if ( !v8 )
    v2 = 0LL;
  if ( a2 )
  {
    if ( (ULONG_PTR *)v3 != &MiSystemPartition )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 192));
      __writecr8(v9);
      v9 = ExAcquireSpinLockExclusive(&dword_1403CE000);
    }
    if ( !--qword_1403CDF68 )
    {
      v5 = (_QWORD *)qword_1403CDF98;
      qword_1403CDF98 = 0LL;
    }
    v6 = &dword_1403CE000;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  __writecr8(v9);
  if ( v5 )
  {
    do
    {
      v10 = (_QWORD *)*v5;
      KeSignalGate((__int64)(v5 + 1), 1);
      v5 = v10;
    }
    while ( v10 );
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
