/*
 * XREFs of FsRtlAcquireEofLock @ 0x14011D010
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExpReleaseFastMutexContended @ 0x140111A5C (ExpReleaseFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x14011C88C (ExpAcquireFastMutexContended.c)
 *     FsRtlpWaitForIoAtEof @ 0x14011D258 (FsRtlpWaitForIoAtEof.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14025328C (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 __fastcall FsRtlAcquireEofLock(__int64 a1, volatile signed __int32 *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v4; // rdi
  unsigned int AbEntrySummary; // ecx
  __int64 v6; // rax
  __int64 v7; // rsi
  int SessionId; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int16 v11; // ax
  unsigned __int8 CurrentIrql; // bl
  ULONG_PTR v13; // rbx
  unsigned __int8 v14; // di
  signed __int32 v15; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF
  volatile signed __int32 *v19; // [rsp+78h] [rbp+10h]
  int v20; // [rsp+80h] [rbp+18h]
  volatile signed __int32 *v21; // [rsp+88h] [rbp+20h]

  v19 = a2;
  CurrentThread = KeGetCurrentThread();
  v18 = 0;
  v21 = a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v4, KeGetCurrentIrql(), 0LL);
  if ( !CurrentThread->AbEntrySummary )
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
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v6, AbEntrySummary);
  v20 = v6;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v6);
  v7 = (__int64)&CurrentThread->LockEntries[v6];
  if ( !v7 )
  {
LABEL_31:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( v4 >= 0xFFFF800000000000uLL && byte_14036D700[((v4 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v7 + 40) = SessionId;
  *(_QWORD *)(v7 + 32) = v4 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&CurrentThread->Header.Lock, v4, &v18);
  v11 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v11;
  if ( !v11 && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v9);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
    ExpAcquireFastMutexContended(v4, v7, v10);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v4 + 48) = CurrentIrql;
  if ( v21 )
    _InterlockedIncrement(v21);
  if ( *(struct _KTHREAD **)a1 == CurrentThread )
  {
    ++*(_WORD *)(a1 + 38);
  }
  else if ( *(_QWORD *)a1 )
  {
    FsRtlpWaitForIoAtEof(a1, v19, -1LL);
  }
  else
  {
    *(_QWORD *)a1 = CurrentThread;
    *(_WORD *)(a1 + 38) = 1;
  }
  if ( v19 )
    _InterlockedIncrement(v19);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v14 = *(_BYTE *)(v13 + 48);
  *(_QWORD *)(v13 + 8) = 0LL;
  v15 = _InterlockedCompareExchange((volatile signed __int32 *)v13, 1, 0);
  if ( v15 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v13, v15);
  __writecr8(v14);
  return KeAbPostRelease(v13);
}
