/*
 * XREFs of FsRtlUninitializeOplock @ 0x140029950
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140019A38 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpClearOwner @ 0x140019BCC (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x140019D84 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockDequeueRH @ 0x14004FB70 (FsRtlpOplockDequeueRH.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeOplock(POPLOCK Oplock)
{
  char *v1; // rdi
  _QWORD **v2; // rax
  __int64 **v3; // rax
  _QWORD *v4; // rbx
  PVOID **v5; // rbx
  PFAST_MUTEX v6; // rsi
  _QWORD *v7; // rsi
  _QWORD *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // rbx
  _QWORD *v15; // r10
  __int64 v16; // rcx
  _QWORD *v17; // rax
  PVOID *v18; // rbx
  __int64 v19; // rbx
  _QWORD *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx

  v1 = (char *)*Oplock;
  if ( *Oplock )
  {
    *Oplock = 0LL;
    ExAcquireFastMutexUnsafe(*((PFAST_MUTEX *)v1 + 19));
    while ( 1 )
    {
      v2 = (_QWORD **)(v1 + 88);
      if ( *v2 == v2 )
        break;
      v7 = *v2;
      v8 = (_QWORD *)**v2;
      if ( (_QWORD **)(*v2)[1] != v2 || (_QWORD *)v8[1] != v7 )
        __fastfail(3u);
      *v2 = v8;
      v8[1] = v2;
      v9 = v7[2];
      *(_BYTE *)(v9 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v9 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v9 + 69));
      *(_QWORD *)(v9 + 56) = 0LL;
      ((void (__fastcall *)(_QWORD, _QWORD))v7[3])(v7[4], v7[2]);
      ExFreePoolWithTag(v7, 0);
    }
    while ( 1 )
    {
      v3 = (__int64 **)(v1 + 40);
      if ( *v3 == (__int64 *)v3 )
        break;
      v10 = (__int64)(*v3 - 21);
      v11 = *(_QWORD *)(v10 + 184);
      v12 = **v3;
      if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v12 + 8) != *v3 )
        __fastfail(3u);
      *v3 = (__int64 *)v12;
      *(_QWORD *)(v12 + 8) = v3;
      *(_BYTE *)(v10 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v10 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v10 + 69));
      ObfDereferenceObjectWithTag(*(PVOID *)(v11 + 48), 0x746C6644u);
      if ( *(_DWORD *)(v11 + 24) == 590400 )
      {
        v13 = *(_QWORD **)(v10 + 24);
        *v13 = 0LL;
        v13[1] = 0LL;
        v13[2] = 0LL;
        *(_DWORD *)v13 = 1572865;
        *(_QWORD *)((char *)v13 + 4) = (*((_DWORD *)v1 + 36) >> 12) & 7;
        *(_QWORD *)(v10 + 56) = 24LL;
      }
      else
      {
        *(_QWORD *)(v10 + 56) = 8LL;
      }
      *(_DWORD *)(v10 + 48) = 0;
      IofCompleteRequest((PIRP)v10, 1);
    }
    while ( 1 )
    {
      v4 = v1 + 56;
      if ( (_QWORD *)*v4 == v4 )
        break;
      v14 = (_QWORD *)*v4;
      if ( (*((_DWORD *)v1 + 36) & 0x10000) != 0 && v14[7] )
      {
        FsRtlpOplockDequeueRH(v14);
        v16 = *v15;
        v17 = (_QWORD *)v15[1];
        if ( *(_QWORD **)(*v15 + 8LL) != v15 || (_QWORD *)*v17 != v15 )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        if ( *((char **)v1 + 15) == v1 + 120 )
          *((_DWORD *)v1 + 36) &= 0xFFFCFFFF;
        if ( v14[5] )
          FsRtlpClearOwner((__int64)v1, (__int64)v14);
        ExFreePoolWithTag(v14, 0);
      }
      else
      {
        FsRtlpRemoveAndBreakRHIrp(v14, (__int64)v1, 1, 0, 0, 0, 0, 0);
      }
    }
    while ( 1 )
    {
      v5 = (PVOID **)(v1 + 72);
      if ( *v5 == (PVOID *)v5 )
        break;
      v18 = *v5;
      FsRtlpOplockDequeueRH(v18);
      FsRtlpModifyThreadPriorities((__int64)v1, (__int64)v18, 0LL);
      ObfDereferenceObjectWithTag(v18[3], 0x746C6644u);
      FsRtlpClearOwner((__int64)v1, (__int64)v18);
      ExFreePoolWithTag(v18, 0);
    }
    v6 = *(PFAST_MUTEX *)v1;
    if ( *(_QWORD *)v1 )
    {
      v19 = *(_QWORD *)&v6[3].Contention;
      BYTE5(v6[1].Owner) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)&v6[1].OldIrql, 0LL);
      KeReleaseQueuedSpinLock(7uLL, BYTE5(v6[1].Owner));
      if ( *(_DWORD *)(v19 + 24) == 590400 )
      {
        v20 = *(_QWORD **)&v6->Event.Header.Lock;
        *v20 = 0LL;
        v20[1] = 0LL;
        v20[2] = 0LL;
        *(_DWORD *)v20 = 1572865;
        *(_QWORD *)((char *)v20 + 4) = (*((_DWORD *)v1 + 36) >> 12) & 7;
        *(_QWORD *)&v6[1].Count = 24LL;
      }
      else
      {
        *(_QWORD *)&v6[1].Count = 8LL;
      }
      v6->OldIrql = 0;
      IofCompleteRequest((PIRP)v6, 1);
      *(_QWORD *)v1 = 0LL;
      v21 = (void *)*((_QWORD *)v1 + 1);
      if ( v21 )
        ObfDereferenceObjectWithTag(v21, 0x746C6644u);
      FsRtlpModifyThreadPriorities((__int64)v1, 0LL, 0LL);
      FsRtlpClearOwner((__int64)v1, 0LL);
    }
    ExReleaseFastMutexUnsafe(*((PFAST_MUTEX *)v1 + 19));
    v22 = (void *)*((_QWORD *)v1 + 17);
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    ExFreePoolWithTag(*((PVOID *)v1 + 19), 0);
    ExFreePoolWithTag(v1, 0);
  }
}
