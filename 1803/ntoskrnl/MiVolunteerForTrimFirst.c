/*
 * XREFs of MiVolunteerForTrimFirst @ 0x1400C4778
 * Callers:
 *     MiAgePteWorker @ 0x140013050 (MiAgePteWorker.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400141A0 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiClearPteAccessed @ 0x140128A30 (MiClearPteAccessed.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 */

void __fastcall MiVolunteerForTrimFirst(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  __int64 *v4; // rbx
  int v5; // ebp
  __int64 v6; // rax
  __int64 **v7; // rcx
  __int64 **v8; // rax
  __int64 *v9; // rcx
  __int64 **v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD **)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v3 = v2[846];
  if ( *(_QWORD *)(a1 + 96) >= *(_QWORD *)(v3 + 64) )
  {
    if ( a2 < 0 )
      return;
    v4 = (__int64 *)(a1 + 24);
    if ( !*(_QWORD *)(a1 + 24) || (__int64 *)v2[847] == v4 )
      return;
    v5 = 1;
  }
  else
  {
    if ( a2 > 0 )
      return;
    v4 = (__int64 *)(a1 + 24);
    if ( !*(_QWORD *)(a1 + 24) || (__int64 *)v2[848] == v4 )
      return;
    v5 = 2;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &qword_1403CC4C0;
  KxAcquireQueuedSpinLock(&LockHandle, &qword_1403CC4C0);
  if ( *(_BYTE *)(v3 + 53) || (v6 = *v4) == 0 )
  {
    *(_BYTE *)(v3 + 54) = 1;
  }
  else
  {
    if ( *(__int64 **)(v6 + 8) != v4 || (v7 = (__int64 **)v4[1], *v7 != v4) )
      __fastfail(3u);
    *v7 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    v8 = (__int64 **)(v2 + 847);
    if ( v5 == 1 )
    {
      v9 = *v8;
      if ( (__int64 **)(*v8)[1] != v8 )
        __fastfail(3u);
      *v4 = (__int64)v9;
      v4[1] = (__int64)v8;
      v9[1] = (__int64)v4;
      *v8 = v4;
    }
    else
    {
      v10 = (__int64 **)v2[848];
      if ( *v10 != (__int64 *)v8 )
        __fastfail(3u);
      *v4 = (__int64)v8;
      v4[1] = (__int64)v10;
      *v10 = v4;
      v2[848] = v4;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
