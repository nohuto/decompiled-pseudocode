/*
 * XREFs of MiIncreaseAvailablePages @ 0x1400B6F40
 * Callers:
 *     MiReplenishPageSlist @ 0x1400756C0 (MiReplenishPageSlist.c)
 *     MiInsertProtectedStandbyPage @ 0x1400AA270 (MiInsertProtectedStandbyPage.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400B7240 (MiInsertLargePageInNodeListHelper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     MiUpdateAvailableEvents @ 0x1401548AC (MiUpdateAvailableEvents.c)
 */

void __fastcall MiIncreaseAvailablePages(__int64 a1, unsigned __int64 a2)
{
  signed int v3; // r15d
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  int v6; // ebp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  struct _KEVENT *v12; // r13
  __int64 v13; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 != 1 )
  {
    v3 = 0;
    v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5760), a2);
    v5 = a2 + v4;
    v6 = 0;
    if ( v4 < 0xA0 && v5 >= 0xA0 )
      v6 = 2;
    if ( v4 < 0x22 && v5 >= 0x22 )
      v6 |= 1u;
    if ( v4 < 0x420 && v5 >= 0x420 )
      v6 |= 4u;
    if ( v6 )
    {
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4672);
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 4672));
      v12 = (struct _KEVENT *)(a1 + 4704);
      do
      {
        if ( _bittest(&v6, v3) )
        {
          KeSetEvent(v12 - 1, 0, 0);
          ++v12->Header.LockNV;
        }
        ++v3;
        v12 = (struct _KEVENT *)((char *)v12 + 32);
      }
      while ( v3 < 3 );
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    v7 = *(_QWORD *)(a1 + 4848);
    if ( v4 <= v7 && v5 > v7 )
      goto LABEL_34;
    v8 = *(_QWORD *)(a1 + 4840);
    if ( v4 <= v8 && v5 > v8 )
      goto LABEL_34;
    return;
  }
  v9 = 1;
  v10 = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5760));
  if ( v10 <= 0x420 )
  {
    if ( v10 != 160 )
    {
      if ( v10 == 1056 )
      {
        v9 = 2;
      }
      else
      {
        if ( v10 != 34 )
          goto LABEL_10;
        v9 = 0;
      }
    }
    v13 = 32LL * v9;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4672);
    LockHandle.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 4672));
    KeSetEvent((PRKEVENT)(v13 + a1 + 4680), 0, 0);
    ++*(_DWORD *)(v13 + a1 + 4704);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
LABEL_10:
  v11 = v10 - 1;
  if ( v11 == *(_QWORD *)(a1 + 4840) || v11 == *(_QWORD *)(a1 + 4848) )
LABEL_34:
    MiUpdateAvailableEvents(a1);
}
