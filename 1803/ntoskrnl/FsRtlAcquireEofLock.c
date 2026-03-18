/*
 * XREFs of FsRtlAcquireEofLock @ 0x14007C1F0
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140007DA0 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     FsRtlpWaitForIoAtEof @ 0x14007C42C (FsRtlpWaitForIoAtEof.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854 (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 __fastcall FsRtlAcquireEofLock(__int64 a1, volatile signed __int32 *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v4; // rdi
  unsigned __int8 AbEntrySummary; // cl
  __int64 v6; // rax
  __int64 v7; // rsi
  int SessionId; // eax
  bool v9; // zf
  unsigned __int8 CurrentIrql; // bl
  ULONG_PTR v11; // rbx
  unsigned __int8 v12; // di
  signed __int32 v13; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v16; // [rsp+70h] [rbp+8h] BYREF
  volatile signed __int32 *v17; // [rsp+78h] [rbp+10h]
  int v18; // [rsp+80h] [rbp+18h]
  volatile signed __int32 *v19; // [rsp+88h] [rbp+20h]

  v17 = a2;
  CurrentThread = KeGetCurrentThread();
  v16 = 0;
  v19 = a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v4, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v7 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v4);
      goto LABEL_31;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
    CurrentThread->AbEntrySummary = AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v6, AbEntrySummary);
  v18 = v6;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v6);
  v7 = (__int64)&CurrentThread->LockEntries[v6];
  if ( !v7 )
  {
LABEL_31:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( v4 >= 0xFFFF800000000000uLL && byte_1403CCF90[((v4 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v7 + 40) = SessionId;
  *(_QWORD *)(v7 + 32) = v4 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, v4, &v16);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
    ExpAcquireFastMutexContended(v4, v7);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v4 + 48) = CurrentIrql;
  if ( v19 )
    _InterlockedIncrement(v19);
  if ( *(struct _KTHREAD **)a1 == CurrentThread )
  {
    ++*(_WORD *)(a1 + 38);
  }
  else if ( *(_QWORD *)a1 )
  {
    FsRtlpWaitForIoAtEof(a1, v17, -1LL);
  }
  else
  {
    *(_QWORD *)a1 = CurrentThread;
    *(_WORD *)(a1 + 38) = 1;
  }
  if ( v17 )
    _InterlockedIncrement(v17);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v12 = *(_BYTE *)(v11 + 48);
  *(_QWORD *)(v11 + 8) = 0LL;
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)v11, 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended(v11, v13);
  __writecr8(v12);
  return KeAbPostRelease(v11);
}
