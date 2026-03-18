/*
 * XREFs of MiFinishResume @ 0x14014F670
 * Callers:
 *     <none>
 * Callees:
 *     PsGetNextPartition @ 0x1400043F8 (PsGetNextPartition.c)
 *     MiDereferencePageRunsEx @ 0x1400C4510 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x1400C4678 (MiReferencePageRuns.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiPurgeZeroList @ 0x14014F71C (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x14014FB3C (MiPurgePartitionStandby.c)
 */

LONG __fastcall MiFinishResume(unsigned int a1)
{
  __int64 v2; // rsi
  void *i; // rcx
  _QWORD *NextPartition; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdi

  v2 = MiReferencePageRuns((__int64)&MiSystemPartition, 0);
  for ( i = 0LL; ; i = v5 )
  {
    NextPartition = PsGetNextPartition(i);
    v5 = NextPartition;
    if ( !NextPartition )
      break;
    v6 = *NextPartition;
    if ( a1 )
    {
      MiPurgePartitionStandby(*NextPartition, a1);
      *(_BYTE *)(v6 + 4764) = 0;
    }
    MiPurgeZeroList(v6);
  }
  if ( v2 )
    MiDereferencePageRunsEx(v2, 1);
  _InterlockedDecrement(&dword_1403CC510);
  stru_1403CBDC8.Parameter = (void *)-1LL;
  return KeSetEvent(&stru_1403CBDB0, 0, 0);
}
