/*
 * XREFs of MiFinishResume @ 0x140218680
 * Callers:
 *     <none>
 * Callees:
 *     PsGetNextPartition @ 0x140001044 (PsGetNextPartition.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MiDereferencePageRunsEx @ 0x14011CA98 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14011CB5C (MiReferencePageRuns.c)
 *     MiPurgeZeroList @ 0x14022A7B0 (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x14022B540 (MiPurgePartitionStandby.c)
 */

LONG __fastcall MiFinishResume(unsigned int a1)
{
  __int64 v2; // rsi
  volatile signed __int64 *i; // rcx
  volatile signed __int64 v4; // rdi
  volatile signed __int64 *NextPartition; // rax
  volatile signed __int64 *v6; // rbx

  v2 = MiReferencePageRuns((__int64)&MiSystemPartition, 0);
  for ( i = 0LL; ; i = v6 )
  {
    NextPartition = PsGetNextPartition(i);
    v6 = NextPartition;
    if ( !NextPartition )
      break;
    v4 = *NextPartition;
    if ( a1 )
    {
      MiPurgePartitionStandby(*NextPartition, a1);
      *(_BYTE *)(v4 + 4676) = 0;
    }
    MiPurgeZeroList(v4);
  }
  if ( v2 )
    MiDereferencePageRunsEx(v2, 1);
  _InterlockedDecrement(&dword_140389290);
  stru_140388B30.Parameter = (void *)-1LL;
  return KeSetEvent(&stru_140388B18, 0, 0);
}
