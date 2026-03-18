/*
 * XREFs of FsRtlpCancelOplockRHIrp @ 0x1400B6F7C
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140067600 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockRHIrpCancelRoutine @ 0x1400B6F60 (FsRtlpOplockRHIrpCancelRoutine.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140065408 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x140067F00 (FsRtlpComputeShareableOplockState.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400B7088 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 */

void __fastcall FsRtlpCancelOplockRHIrp(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // r14
  __int64 *v10; // rsi
  __int64 *i; // rbx

  v5 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  v9 = 0;
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v5 + 152));
  v10 = (__int64 *)(v5 + 56);
  for ( i = *(__int64 **)(v5 + 56); i != v10; i = (__int64 *)*i )
  {
    if ( !i[7] )
    {
      if ( *(_BYTE *)(i[2] + 68) )
      {
        i = (__int64 *)i[1];
        FsRtlpRemoveAndBreakRHIrp(*i, v5, 1, -1073741536, 0, 0, 0, 0);
        v9 = 1;
      }
    }
  }
  if ( v9 )
  {
    if ( a3 )
      FsRtlpReleaseIrpsWaitingForRH(v5, v6, v7, v8);
    if ( (__int64 *)*v10 == v10 )
      FsRtlpComputeShareableOplockState(v5);
  }
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 152));
}
