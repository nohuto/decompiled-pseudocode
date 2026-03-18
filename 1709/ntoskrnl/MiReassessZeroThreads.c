/*
 * XREFs of MiReassessZeroThreads @ 0x140134E24
 * Callers:
 *     MiZeroLargePages @ 0x140135010 (MiZeroLargePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReduceZeroingThreads @ 0x140157A34 (MiReduceZeroingThreads.c)
 *     MiAddZeroingThreads @ 0x14015C650 (MiAddZeroingThreads.c)
 */

void __fastcall MiReassessZeroThreads(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  signed __int32 v4; // eax
  int v5; // ecx
  unsigned __int64 v6; // rax
  unsigned int v7; // r8d
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  int v12; // ecx
  unsigned int i; // edx
  __int64 v14; // rcx
  int v15; // eax
  signed __int32 v16[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !a2 )
    return;
  v2 = *(_QWORD *)(a1 + 224);
  if ( (*(_DWORD *)(v2 + 88) & 0xFFFFFFFB) == 0 )
    return;
  if ( _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(v2 + 96) + 16LL * *(unsigned int *)(a1 + 232)), a2) )
    return;
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 92), 1u);
  v5 = *(_DWORD *)(v2 + 112);
  if ( v4 + 1 != v5 )
    return;
  v6 = 0LL;
  v7 = 0;
  if ( v5 )
  {
    do
    {
      v8 = v7++;
      v6 += *(_QWORD *)(*(_QWORD *)(v2 + 96) + 16 * v8);
    }
    while ( v7 < *(_DWORD *)(v2 + 112) );
  }
  v9 = 8 * *(_DWORD *)(v2 + 112);
  v10 = v6 % v9;
  v11 = v6 / v9;
  if ( !(v6 / v9) )
    v11 = 1LL;
  if ( *(_DWORD *)(v2 + 88) == 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
    if ( *(_DWORD *)(v2 + 88) == 4 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      return;
    }
    *(_DWORD *)(v2 + 88) = 2;
    *(_QWORD *)(v2 + 104) = v11 + 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  v12 = 0;
  if ( v11 >= *(_QWORD *)(v2 + 104) )
  {
    if ( ++*(_DWORD *)(v2 + 136) < 8u )
      goto LABEL_17;
    if ( *(int *)(v2 + 88) >= 3 )
    {
      *(_DWORD *)(v2 + 116) = 1;
      v15 = MiReduceZeroingThreads(a1, 1LL);
    }
    else
    {
      *(_DWORD *)(v2 + 136) = 0;
      *(_DWORD *)(v2 + 88) = 3;
      v15 = MiAddZeroingThreads(a1, v10);
    }
LABEL_22:
    v12 = v15;
LABEL_17:
    *(_DWORD *)(v2 + 132) = 0;
    if ( v12 == 1 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
      KeSetEvent((PRKEVENT)(v2 + 64), 0, 0);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    goto LABEL_13;
  }
  ++*(_DWORD *)(v2 + 132);
  *(_DWORD *)(v2 + 136) = 0;
  if ( *(_DWORD *)(v2 + 132) >= 8u )
  {
    if ( *(_DWORD *)(v2 + 88) == 2 )
      v15 = MiReduceZeroingThreads(a1, 0LL);
    else
      v15 = MiAddZeroingThreads(a1, v10);
    *(_QWORD *)(v2 + 104) = v11;
    goto LABEL_22;
  }
LABEL_13:
  *(_DWORD *)(v2 + 92) = 0;
  _InterlockedOr(v16, 0);
  for ( i = 0; i < *(_DWORD *)(v2 + 112); ++i )
  {
    v14 = 16LL * i;
    _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(v2 + 96) + v14), 0LL);
  }
}
