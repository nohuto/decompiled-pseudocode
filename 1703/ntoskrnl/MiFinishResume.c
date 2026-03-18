/*
 * XREFs of MiFinishResume @ 0x140138A60
 * Callers:
 *     <none>
 * Callees:
 *     MiDereferencePageRuns @ 0x1400252E4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140025380 (MiReferencePageRuns.c)
 *     MmGetNextPartition @ 0x14003A82C (MmGetNextPartition.c)
 *     MiPurgeZeroList @ 0x140138B04 (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x140138E54 (MiPurgePartitionStandby.c)
 */

LONG __fastcall MiFinishResume(unsigned int a1)
{
  __int64 v2; // rsi
  ULONG_PTR i; // rcx
  _QWORD *NextPartition; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdi

  v2 = MiReferencePageRuns((__int64)&MiSystemPartition, 0);
  for ( i = 0LL; ; i = (ULONG_PTR)v5 )
  {
    NextPartition = (_QWORD *)MmGetNextPartition(i);
    v5 = NextPartition;
    if ( !NextPartition )
      break;
    v6 = *NextPartition;
    if ( a1 )
    {
      MiPurgePartitionStandby(*NextPartition, a1);
      *(_BYTE *)(v6 + 4548) = 0;
    }
    MiPurgeZeroList(v6);
  }
  if ( v2 )
    MiDereferencePageRuns(v2);
  _InterlockedDecrement(&dword_14036CFD0);
  stru_14036C938.Parameter = (void *)-1LL;
  return KeSetEvent(&stru_14036C920, 0, 0);
}
