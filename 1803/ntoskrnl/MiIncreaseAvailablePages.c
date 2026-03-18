/*
 * XREFs of MiIncreaseAvailablePages @ 0x140122A90
 * Callers:
 *     MiReplenishPageSlist @ 0x1400D5110 (MiReplenishPageSlist.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400E7480 (MiUnlinkNodeLargePageHelper.c)
 *     MiInsertLargePageInNodeListHelper @ 0x140122680 (MiInsertLargePageInNodeListHelper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiUpdateAvailableEvents @ 0x1401700A4 (MiUpdateAvailableEvents.c)
 */

void __fastcall MiIncreaseAvailablePages(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  signed int v4; // r14d
  unsigned __int64 v5; // rbx
  int v6; // ebp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  struct _KEVENT *v11; // rbx
  unsigned __int64 v12; // rdi
  struct _KEVENT *v13; // r15
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 != 1 )
  {
    v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7040), a2);
    v4 = 0;
    v5 = a2 + v3;
    v6 = 0;
    if ( v3 < 0xA0 && v5 >= 0xA0 )
      v6 = 2;
    if ( v3 < 0x22 && v5 >= 0x22 )
      v6 |= 1u;
    if ( v3 < 0x420 && v5 >= 0x420 )
      v6 |= 4u;
    if ( v6 )
    {
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4864);
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 4864));
      v13 = (struct _KEVENT *)(a1 + 4896);
      do
      {
        if ( _bittest(&v6, v4) )
        {
          KeSetEvent(v13 - 1, 0, 0);
          ++v13->Header.LockNV;
        }
        ++v4;
        v13 = (struct _KEVENT *)((char *)v13 + 32);
      }
      while ( v4 < 3 );
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    v7 = *(_QWORD *)(a1 + 6128);
    if ( v3 <= v7 && v5 > v7 )
      goto LABEL_34;
    v8 = *(_QWORD *)(a1 + 6120);
    if ( v3 <= v8 && v5 > v8 )
      goto LABEL_34;
    return;
  }
  v9 = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 7040));
  if ( v9 <= 0x420 )
  {
    switch ( v9 )
    {
      case 0xA0uLL:
        v10 = 4904LL;
LABEL_16:
        v11 = (struct _KEVENT *)(a1 + v10);
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4864);
        LockHandle.LockQueue.Next = 0LL;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 4864));
        KeSetEvent(v11, 0, 0);
        ++v11[1].Header.LockNV;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        break;
      case 0x420uLL:
        v10 = 4936LL;
        goto LABEL_16;
      case 0x22uLL:
        v10 = 4872LL;
        goto LABEL_16;
    }
  }
  v12 = v9 - 1;
  if ( v12 == *(_QWORD *)(a1 + 6120) || v12 == *(_QWORD *)(a1 + 6128) )
LABEL_34:
    MiUpdateAvailableEvents(a1, a2);
}
