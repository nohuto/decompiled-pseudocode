/*
 * XREFs of FsRtlpCancelOplockRHIrp @ 0x140108A6C
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140023680 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockRHIrpCancelRoutine @ 0x140108A50 (FsRtlpOplockRHIrpCancelRoutine.c)
 * Callees:
 *     FsRtlpComputeShareableOplockState @ 0x140023F70 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400246D8 (FsRtlpRemoveAndBreakRHIrp.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140108B78 (FsRtlpReleaseIrpsWaitingForRH.c)
 */

void __fastcall FsRtlpCancelOplockRHIrp(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  char v6; // r14
  _QWORD *v7; // rsi
  _QWORD *i; // rbx

  v5 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  v6 = 0;
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v5 + 152));
  v7 = (_QWORD *)(v5 + 56);
  for ( i = *(_QWORD **)(v5 + 56); i != v7; i = (_QWORD *)*i )
  {
    if ( !i[7] )
    {
      if ( *(_BYTE *)(i[2] + 68LL) )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndBreakRHIrp((_QWORD *)*i, v5, 1, -1073741536, 0, 0, 0, 0);
        v6 = 1;
      }
    }
  }
  if ( v6 )
  {
    if ( a3 )
      FsRtlpReleaseIrpsWaitingForRH(v5);
    if ( (_QWORD *)*v7 == v7 )
      FsRtlpComputeShareableOplockState(v5);
  }
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 152));
}
