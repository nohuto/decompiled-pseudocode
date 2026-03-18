/*
 * XREFs of MiFreeModifiedReservations @ 0x140225BB0
 * Callers:
 *     MiCheckFreeModifiedReservations @ 0x140224E24 (MiCheckFreeModifiedReservations.c)
 *     MiPageFileNoFreeSpace @ 0x140226984 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 */

void __fastcall MiFreeModifiedReservations(__int64 a1, int a2)
{
  __int16 v2; // r8
  __int64 v4; // rbp
  __int64 v5; // r8
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rsi
  __int64 v8; // r14
  __int64 i; // rbx
  __int64 v10; // rdi
  unsigned __int8 v11; // al
  unsigned __int64 v12; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 v14; // [rsp+70h] [rbp+8h]

  v2 = *(_WORD *)(a1 + 204);
  if ( (v2 & 0x40) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 256);
    v5 = v2 & 0xF;
    v6 = 0LL;
    v7 = a2 == 0 ? 0x10000 : 0;
    v8 = 5 * v5;
    for ( i = *(_QWORD *)(v4 + 40 * v5 + 2704); i != 0xFFFFFFFFFLL; i = *(_QWORD *)(v4 + 8 * v8 + 2704) )
    {
      v10 = 48 * i - 0x58000000000LL;
      v11 = MiLockPageInline(v10);
      LockHandle.LockQueue.Next = 0LL;
      v14 = v11;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v4 + 6368);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v4 + 6368));
      if ( i == *(_QWORD *)(v4 + 8 * v8 + 2704) )
      {
        MiUnlinkPageFromList(48 * i - 0x58000000000LL, 1LL);
        v12 = *(_QWORD *)(v10 + 16);
        *(_QWORD *)(v10 + 16) = v12 & 0xFFFFFFFFFFFFFFFDuLL;
        MiInsertPageInList(v10, 136);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiReleasePageFileInfo((struct _KEVENT *)v4, v12, 1);
        __writecr8(v14);
        ++v6;
        if ( !a2 && v6 >= v7 )
          return;
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v14);
      }
    }
  }
}
