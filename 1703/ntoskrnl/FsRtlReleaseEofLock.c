/*
 * XREFs of FsRtlReleaseEofLock @ 0x14011C930
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x14008D210 (PsBoostThreadIoEx.c)
 *     FsRtlReleaseHeaderMutex @ 0x1400EEA90 (FsRtlReleaseHeaderMutex.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExpReleaseFastMutexContended @ 0x140111A5C (ExpReleaseFastMutexContended.c)
 *     KeSetEventBoostPriorityEx @ 0x140111AC4 (KeSetEventBoostPriorityEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x14011C88C (ExpAcquireFastMutexContended.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14025328C (EtwTraceAutoBoostEntryExhaustion.c)
 */

_QWORD *__fastcall FsRtlReleaseEofLock(__int64 a1, volatile signed __int32 *a2)
{
  _QWORD *v3; // r14
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v5; // rsi
  unsigned int AbEntrySummary; // ecx
  __int64 v7; // rax
  __int64 v8; // rbp
  int SessionId; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int16 v12; // ax
  unsigned __int8 CurrentIrql; // di
  __int64 v15; // rdi
  _QWORD *v16; // rcx
  ULONG_PTR v17; // rbx
  unsigned __int8 v18; // di
  signed __int32 v19; // eax
  _QWORD *v20; // rbx
  _QWORD *result; // rax
  _QWORD *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // r8
  _QWORD *v26; // r8
  _QWORD *v27; // rcx
  __int64 v28; // r9
  _QWORD *v29; // r8
  _QWORD *v30; // r8
  unsigned __int8 AbOrphanedEntrySummary; // al
  _QWORD *v33; // [rsp+38h] [rbp-50h] BYREF
  _QWORD **v34; // [rsp+40h] [rbp-48h]
  unsigned int v35; // [rsp+90h] [rbp+8h] BYREF
  volatile signed __int32 *v36; // [rsp+98h] [rbp+10h]
  unsigned int v37; // [rsp+A0h] [rbp+18h] BYREF
  int v38; // [rsp+A8h] [rbp+20h]

  v36 = a2;
  v35 = 0;
  v34 = &v33;
  v3 = 0LL;
  v33 = &v33;
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v5, KeGetCurrentIrql(), 0LL);
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v8 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v5);
      goto LABEL_50;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v7, AbEntrySummary);
  v38 = v7;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
  v8 = (__int64)&CurrentThread->LockEntries[v7];
  if ( !v8 )
  {
LABEL_50:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( v5 >= 0xFFFF800000000000uLL && byte_14036D700[((v5 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v8 + 40) = SessionId;
  *(_QWORD *)(v8 + 32) = v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&CurrentThread->Header.Lock, v5, &v35);
  v12 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v12;
  if ( !v12 && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v10);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
    ExpAcquireFastMutexContended(v5, v8, v11);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 48) = CurrentIrql;
  if ( a2 )
    _InterlockedIncrement(a2);
  if ( (*(_WORD *)(a1 + 38))-- != 1 )
    return (_QWORD *)FsRtlReleaseHeaderMutex(a1, v36);
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  if ( *(_BYTE *)(a1 + 36) )
  {
    PsBoostThreadIoEx(*(_QWORD *)a1, 1, 0, 0LL);
    *(_BYTE *)(a1 + 36) = 0;
  }
  v16 = *(_QWORD **)(a1 + 8);
  if ( v16 == (_QWORD *)(a1 + 8) )
    goto LABEL_21;
  do
  {
    v22 = v16;
    v16 = (_QWORD *)*v16;
    v23 = v22[5];
    if ( v23 < 0 || v23 > v15 )
    {
      if ( !v3 )
      {
        v24 = *v22;
        v25 = (_QWORD *)v22[1];
        if ( *(_QWORD **)(*v22 + 8LL) != v22 || (_QWORD *)*v25 != v22 )
          __fastfail(3u);
        *v25 = v24;
        *(_QWORD *)(v24 + 8) = v25;
        v26 = v33;
        if ( (_QWORD **)v33[1] != &v33 )
          __fastfail(3u);
        *v22 = v33;
        v22[1] = &v33;
        v3 = v22;
        v26[1] = v22;
        v33 = v22;
      }
    }
    else
    {
      v28 = *v22;
      v29 = (_QWORD *)v22[1];
      if ( *(_QWORD **)(*v22 + 8LL) != v22 || (_QWORD *)*v29 != v22 )
        __fastfail(3u);
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
      v30 = v34;
      if ( *v34 != &v33 )
        __fastfail(3u);
      v22[1] = v34;
      *v22 = &v33;
      *v30 = v22;
      v34 = (_QWORD **)v22;
    }
  }
  while ( v16 != (_QWORD *)(a1 + 8) );
  if ( !v3 )
  {
LABEL_21:
    *(_QWORD *)a1 = 0LL;
    *(_WORD *)(a1 + 38) = 0;
    *(_DWORD *)(a1 + 32) = 0;
  }
  else
  {
    *(_QWORD *)a1 = v3[6];
    *(_WORD *)(a1 + 38) = 1;
    *(_DWORD *)(a1 + 32) = *((_DWORD *)v3 + 14);
  }
  if ( v36 )
    _InterlockedIncrement(v36);
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v18 = *(_BYTE *)(v17 + 48);
  *(_QWORD *)(v17 + 8) = 0LL;
  v19 = _InterlockedCompareExchange((volatile signed __int32 *)v17, 1, 0);
  if ( v19 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v17, v19);
  __writecr8(v18);
  KeAbPostRelease(v17);
  v20 = v33;
  for ( result = &v33; v20 != &v33; result = &v33 )
  {
    v27 = v20;
    v20 = (_QWORD *)*v20;
    v37 = *((_DWORD *)v27 + 14);
    KeSetEventBoostPriorityEx((__int64)(v27 + 2), 0LL, &v37, 0LL, 0);
  }
  return result;
}
