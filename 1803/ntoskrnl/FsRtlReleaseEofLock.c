/*
 * XREFs of FsRtlReleaseEofLock @ 0x14007B940
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140007DA0 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     KeSetEventBoostPriorityEx @ 0x14007BCF4 (KeSetEventBoostPriorityEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     PsBoostThreadIoEx @ 0x1400FE2D0 (PsBoostThreadIoEx.c)
 *     FsRtlReleaseHeaderMutex @ 0x1400FEA00 (FsRtlReleaseHeaderMutex.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854 (EtwTraceAutoBoostEntryExhaustion.c)
 */

_QWORD *__fastcall FsRtlReleaseEofLock(__int64 a1, volatile signed __int32 *a2)
{
  _QWORD *v3; // r14
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR v5; // rsi
  unsigned __int8 AbEntrySummary; // cl
  __int64 v7; // rax
  __int64 v8; // rbp
  int SessionId; // eax
  bool v10; // zf
  unsigned __int8 CurrentIrql; // bl
  __int64 v12; // rbx
  _QWORD *v13; // rcx
  int v14; // eax
  ULONG_PTR v15; // rbx
  unsigned __int8 v16; // di
  signed __int32 v17; // eax
  _QWORD *v18; // rbx
  _QWORD *result; // rax
  _QWORD *v20; // rdx
  __int64 v21; // r8
  _QWORD *v22; // r8
  _QWORD *v23; // r8
  _QWORD *v24; // rcx
  _QWORD *v25; // r8
  _QWORD *v26; // r8
  unsigned __int8 AbOrphanedEntrySummary; // al
  _QWORD *v29; // [rsp+38h] [rbp-50h] BYREF
  _QWORD **v30; // [rsp+40h] [rbp-48h]
  int v31; // [rsp+90h] [rbp+8h] BYREF
  volatile signed __int32 *v32; // [rsp+98h] [rbp+10h]
  int v33; // [rsp+A0h] [rbp+18h] BYREF
  int v34; // [rsp+A8h] [rbp+20h]

  v32 = a2;
  v31 = 0;
  v30 = &v29;
  v3 = 0LL;
  v29 = &v29;
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v5, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v8 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v5);
      goto LABEL_51;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
    CurrentThread->AbEntrySummary = AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v7, AbEntrySummary);
  v34 = v7;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
  v8 = (__int64)&CurrentThread->LockEntries[v7];
  if ( !v8 )
  {
LABEL_51:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( v5 >= 0xFFFF800000000000uLL && byte_1403CCF90[((v5 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v8 + 40) = SessionId;
  *(_QWORD *)(v8 + 32) = v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, v5, &v31);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
    ExpAcquireFastMutexContended(v5, v8);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 48) = CurrentIrql;
  if ( a2 )
    _InterlockedIncrement(a2);
  v10 = (*(_WORD *)(a1 + 38))-- == 1;
  if ( !v10 )
    return (_QWORD *)FsRtlReleaseHeaderMutex(a1, v32);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  if ( *(_BYTE *)(a1 + 36) )
  {
    PsBoostThreadIoEx(*(_QWORD *)a1, 1LL, 0LL, 0LL);
    *(_BYTE *)(a1 + 36) = 0;
  }
  v13 = *(_QWORD **)(a1 + 8);
  while ( v13 != (_QWORD *)(a1 + 8) )
  {
    v20 = v13;
    v13 = (_QWORD *)*v13;
    v21 = v20[5];
    if ( v21 < 0 || v21 > v12 )
    {
      if ( !v3 )
      {
        if ( (_QWORD *)v13[1] != v20 || (v22 = (_QWORD *)v20[1], (_QWORD *)*v22 != v20) )
          __fastfail(3u);
        *v22 = v13;
        v13[1] = v22;
        v23 = v29;
        if ( (_QWORD **)v29[1] != &v29 )
          __fastfail(3u);
        *v20 = v29;
        v20[1] = &v29;
        v3 = v20;
        v23[1] = v20;
        v29 = v20;
      }
    }
    else
    {
      if ( (_QWORD *)v13[1] != v20 || (v25 = (_QWORD *)v20[1], (_QWORD *)*v25 != v20) )
        __fastfail(3u);
      *v25 = v13;
      v13[1] = v25;
      v26 = v30;
      if ( *v30 != &v29 )
        __fastfail(3u);
      v20[1] = v30;
      *v20 = &v29;
      *v26 = v20;
      v30 = (_QWORD **)v20;
    }
  }
  if ( v3 )
  {
    *(_QWORD *)a1 = v3[6];
    *(_WORD *)(a1 + 38) = 1;
    v14 = *((_DWORD *)v3 + 14);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    v14 = 0;
    *(_WORD *)(a1 + 38) = 0;
  }
  *(_DWORD *)(a1 + 32) = v14;
  if ( v32 )
    _InterlockedIncrement(v32);
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v16 = *(_BYTE *)(v15 + 48);
  *(_QWORD *)(v15 + 8) = 0LL;
  v17 = _InterlockedCompareExchange((volatile signed __int32 *)v15, 1, 0);
  if ( v17 )
    ExpReleaseFastMutexContended(v15, v17);
  __writecr8(v16);
  KeAbPostRelease(v15);
  v18 = v29;
  for ( result = &v29; v18 != &v29; result = &v29 )
  {
    v24 = v18;
    v18 = (_QWORD *)*v18;
    v33 = *((_DWORD *)v24 + 14);
    KeSetEventBoostPriorityEx((_DWORD)v24 + 16, 0, (unsigned int)&v33, 0, 0);
  }
  return result;
}
