/*
 * XREFs of MiReassessZeroThreads @ 0x14015C5D8
 * Callers:
 *     MiZeroLargePages @ 0x14015C30C (MiZeroLargePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     MiReduceZeroingThreads @ 0x140152834 (MiReduceZeroingThreads.c)
 *     MiAddZeroingThreads @ 0x14015D0DC (MiAddZeroingThreads.c)
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
  v2 = *(_QWORD *)(a1 + 144);
  if ( (*(_DWORD *)(v2 + 80) & 0xFFFFFFFB) == 0 )
    return;
  if ( _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(v2 + 88) + 16LL * *(unsigned int *)(a1 + 152)), a2) )
    return;
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 84), 1u);
  v5 = *(_DWORD *)(v2 + 104);
  if ( v4 + 1 != v5 )
    return;
  v6 = 0LL;
  v7 = 0;
  if ( v5 )
  {
    do
    {
      v8 = v7++;
      v6 += *(_QWORD *)(*(_QWORD *)(v2 + 88) + 16 * v8);
    }
    while ( v7 < *(_DWORD *)(v2 + 104) );
  }
  v9 = 8 * *(_DWORD *)(v2 + 104);
  v10 = v6 % v9;
  v11 = v6 / v9;
  if ( !(v6 / v9) )
    v11 = 1LL;
  if ( *(_DWORD *)(v2 + 80) == 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
    if ( *(_DWORD *)(v2 + 80) == 4 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      return;
    }
    *(_DWORD *)(v2 + 80) = 2;
    *(_QWORD *)(v2 + 96) = v11 + 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  v12 = 0;
  if ( v11 >= *(_QWORD *)(v2 + 96) )
  {
    if ( ++*(_DWORD *)(v2 + 128) < 8u )
      goto LABEL_17;
    if ( *(int *)(v2 + 80) >= 3 )
    {
      *(_DWORD *)(v2 + 108) = 1;
      v15 = MiReduceZeroingThreads(a1, 1);
    }
    else
    {
      *(_DWORD *)(v2 + 128) = 0;
      *(_DWORD *)(v2 + 80) = 3;
      v15 = MiAddZeroingThreads(a1, v10);
    }
LABEL_24:
    v12 = v15;
LABEL_17:
    *(_DWORD *)(v2 + 124) = 0;
    if ( v12 == 1 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
      KeSetEvent((PRKEVENT)(v2 + 56), 0, 0);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    goto LABEL_13;
  }
  ++*(_DWORD *)(v2 + 124);
  *(_DWORD *)(v2 + 128) = 0;
  if ( *(_DWORD *)(v2 + 124) >= 8u )
  {
    if ( *(_DWORD *)(v2 + 80) == 2 )
      v15 = MiReduceZeroingThreads(a1, 0);
    else
      v15 = MiAddZeroingThreads(a1, v10);
    *(_QWORD *)(v2 + 96) = v11;
    goto LABEL_24;
  }
LABEL_13:
  *(_DWORD *)(v2 + 84) = 0;
  _InterlockedOr(v16, 0);
  for ( i = 0; i < *(_DWORD *)(v2 + 104); ++i )
  {
    v14 = 16LL * i;
    _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(v2 + 88) + v14), 0LL);
  }
}
