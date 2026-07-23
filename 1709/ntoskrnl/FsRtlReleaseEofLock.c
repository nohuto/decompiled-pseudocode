/*
 * XREFs of FsRtlReleaseEofLock @ 0x140100BE0
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400813D0 (PsBoostThreadIoEx.c)
 *     FsRtlReleaseHeaderMutex @ 0x140082C20 (FsRtlReleaseHeaderMutex.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExpReleaseFastMutexContended @ 0x1400A6FF0 (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1400BAC30 (ExpAcquireFastMutexContended.c)
 *     KeSetEventBoostPriorityEx @ 0x140100F90 (KeSetEventBoostPriorityEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14027AE7C (EtwTraceAutoBoostEntryExhaustion.c)
 */

_QWORD *__fastcall FsRtlReleaseEofLock(__int64 a1, volatile signed __int32 *a2)
{
  _QWORD *v3; // r14
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR v5; // rsi
  unsigned int AbEntrySummary; // ecx
  __int64 v7; // rax
  __int64 v8; // rbp
  int SessionId; // eax
  bool v10; // zf
  unsigned __int8 CurrentIrql; // bl
  __int64 v12; // rbx
  _QWORD *v13; // rcx
  ULONG_PTR v14; // rbx
  unsigned __int8 v15; // di
  signed __int32 v16; // eax
  _QWORD *v17; // rbx
  _QWORD *result; // rax
  _QWORD *v19; // rdx
  __int64 v20; // r8
  _QWORD *v21; // r8
  _QWORD *v22; // r9
  _QWORD *v23; // r8
  _QWORD *v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // r9
  _QWORD *v27; // r8
  unsigned __int8 AbOrphanedEntrySummary; // al
  _QWORD *v30; // [rsp+38h] [rbp-50h] BYREF
  _QWORD **v31; // [rsp+40h] [rbp-48h]
  unsigned int v32; // [rsp+90h] [rbp+8h] BYREF
  volatile signed __int32 *v33; // [rsp+98h] [rbp+10h]
  int v34; // [rsp+A0h] [rbp+18h] BYREF
  int v35; // [rsp+A8h] [rbp+20h]

  v33 = a2;
  v32 = 0;
  v31 = &v30;
  v3 = 0LL;
  v30 = &v30;
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
  v35 = v7;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
  v8 = (__int64)&CurrentThread->LockEntries[v7];
  if ( !v8 )
  {
LABEL_50:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( v5 >= 0xFFFF800000000000uLL && byte_1403899D0[((v5 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v8 + 40) = SessionId;
  *(_QWORD *)(v8 + 32) = v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5, &v32);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
    ExpAcquireFastMutexContended(v5, (PRTL_BALANCED_NODE)v8);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 48) = CurrentIrql;
  if ( a2 )
    _InterlockedIncrement(a2);
  v10 = (*(_WORD *)(a1 + 38))-- == 1;
  if ( !v10 )
    return (_QWORD *)FsRtlReleaseHeaderMutex(a1, v33);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  if ( *(_BYTE *)(a1 + 36) )
  {
    PsBoostThreadIoEx(*(_QWORD *)a1, 1, 0, 0LL);
    *(_BYTE *)(a1 + 36) = 0;
  }
  v13 = *(_QWORD **)(a1 + 8);
  if ( v13 == (_QWORD *)(a1 + 8) )
    goto LABEL_21;
  do
  {
    v19 = v13;
    v13 = (_QWORD *)*v13;
    v20 = v19[5];
    if ( v20 >= 0 && v20 <= v12 )
    {
      v25 = *v19;
      if ( *(_QWORD **)(*v19 + 8LL) != v19 || (v26 = (_QWORD *)v19[1], (_QWORD *)*v26 != v19) )
        __fastfail(3u);
      *v26 = v25;
      *(_QWORD *)(v25 + 8) = v26;
      v27 = v31;
      if ( *v31 != &v30 )
        __fastfail(3u);
      v19[1] = v31;
      *v19 = &v30;
      *v27 = v19;
      v31 = (_QWORD **)v19;
    }
    else if ( !v3 )
    {
      v21 = (_QWORD *)*v19;
      if ( *(_QWORD **)(*v19 + 8LL) != v19 || (v22 = (_QWORD *)v19[1], (_QWORD *)*v22 != v19) )
        __fastfail(3u);
      *v22 = v21;
      v21[1] = v22;
      v23 = v30;
      if ( (_QWORD **)v30[1] != &v30 )
        __fastfail(3u);
      *v19 = v30;
      v19[1] = &v30;
      v3 = v19;
      v23[1] = v19;
      v30 = v19;
    }
  }
  while ( v13 != (_QWORD *)(a1 + 8) );
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
  if ( v33 )
    _InterlockedIncrement(v33);
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v15 = *(_BYTE *)(v14 + 48);
  *(_QWORD *)(v14 + 8) = 0LL;
  v16 = _InterlockedCompareExchange((volatile signed __int32 *)v14, 1, 0);
  if ( v16 )
    ExpReleaseFastMutexContended(v14, v16);
  __writecr8(v15);
  KeAbPostRelease(v14);
  v17 = v30;
  for ( result = &v30; v17 != &v30; result = &v30 )
  {
    v24 = v17;
    v17 = (_QWORD *)*v17;
    v34 = *((_DWORD *)v24 + 14);
    KeSetEventBoostPriorityEx((_DWORD)v24 + 16, 0, (unsigned int)&v34, 0, 0);
  }
  return result;
}
