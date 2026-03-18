/*
 * XREFs of FsRtlpCancelOplockRHIrp @ 0x140019134
 * Callers:
 *     FsRtlpOplockRHIrpCancelRoutine @ 0x140019120 (FsRtlpOplockRHIrpCancelRoutine.c)
 *     FsRtlpRequestShareableOplock @ 0x140051EF4 (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140019240 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140019A38 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x140052820 (FsRtlpComputeShareableOplockState.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 */

void __fastcall FsRtlpCancelOplockRHIrp(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  int v6; // r8d
  char v7; // r14
  _QWORD *v8; // rsi
  _QWORD *i; // rbx

  v5 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  v7 = 0;
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v5 + 152));
  v8 = (_QWORD *)(v5 + 56);
  for ( i = *(_QWORD **)(v5 + 56); i != v8; i = (_QWORD *)*i )
  {
    if ( !i[7] )
    {
      if ( *(_BYTE *)(i[2] + 68LL) )
      {
        i = (_QWORD *)i[1];
        LOBYTE(v6) = 1;
        FsRtlpRemoveAndBreakRHIrp((PVOID)*i, v5, v6, -1073741536, 0);
        v7 = 1;
      }
    }
  }
  if ( v7 )
  {
    if ( a3 )
      FsRtlpReleaseIrpsWaitingForRH(v5);
    if ( (_QWORD *)*v8 == v8 )
      FsRtlpComputeShareableOplockState(v5);
  }
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 152));
}
