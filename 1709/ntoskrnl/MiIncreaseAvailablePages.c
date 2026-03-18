/*
 * XREFs of MiIncreaseAvailablePages @ 0x1400C72C0
 * Callers:
 *     MiReplenishPageSlist @ 0x1400C53D0 (MiReplenishPageSlist.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400C68C0 (MiUnlinkNodeLargePageHelper.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400C6B30 (MiInsertLargePageInNodeListHelper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MiUpdateAvailableEvents @ 0x140137060 (MiUpdateAvailableEvents.c)
 */

void __fastcall MiIncreaseAvailablePages(__int64 a1, unsigned __int64 a2)
{
  signed int v3; // r15d
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  int v6; // ebp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  struct _KEVENT *v9; // r13
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  struct _KEVENT *v12; // rbx
  unsigned __int64 v13; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 != 1 )
  {
    v3 = 0;
    v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5952), a2);
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
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4800);
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 4800));
      v9 = (struct _KEVENT *)(a1 + 4832);
      do
      {
        if ( _bittest(&v6, v3) )
        {
          KeSetEvent(v9 - 1, 0, 0);
          ++v9->Header.LockNV;
        }
        ++v3;
        v9 = (struct _KEVENT *)((char *)v9 + 32);
      }
      while ( v3 < 3 );
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    v7 = *(_QWORD *)(a1 + 4976);
    if ( v4 <= v7 && v5 > v7 )
      goto LABEL_34;
    v8 = *(_QWORD *)(a1 + 4968);
    if ( v4 <= v8 && v5 > v8 )
      goto LABEL_34;
    return;
  }
  v10 = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5952));
  if ( v10 <= 0x420 )
  {
    switch ( v10 )
    {
      case 0xA0uLL:
        v11 = 4840LL;
LABEL_23:
        v12 = (struct _KEVENT *)(a1 + v11);
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4800);
        LockHandle.LockQueue.Next = 0LL;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 4800));
        KeSetEvent(v12, 0, 0);
        ++v12[1].Header.LockNV;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        break;
      case 0x420uLL:
        v11 = 4872LL;
        goto LABEL_23;
      case 0x22uLL:
        v11 = 4808LL;
        goto LABEL_23;
    }
  }
  v13 = v10 - 1;
  if ( v13 == *(_QWORD *)(a1 + 4968) || v13 == *(_QWORD *)(a1 + 4976) )
LABEL_34:
    MiUpdateAvailableEvents(a1, a2);
}
