/*
 * XREFs of MiFreeModifiedReservations @ 0x14025F79C
 * Callers:
 *     MiModifiedPageWriter @ 0x14017CFC0 (MiModifiedPageWriter.c)
 *     MiPageFileNoFreeSpace @ 0x14025FBA0 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 */

void __fastcall MiFreeModifiedReservations(__int64 a1, int a2)
{
  __int16 v2; // r8
  __int64 v4; // r14
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rdi
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  __int64 v12; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+70h] [rbp+8h]

  v2 = *(_WORD *)(a1 + 204);
  if ( (v2 & 0x40) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 256);
    v5 = 0LL;
    v6 = a2 == 0 ? 0x10000 : 0;
    v7 = 5LL * (v2 & 0xF);
    while ( 1 )
    {
      v12 = *(_QWORD *)(v4 + 8 * v7 + 2768);
      if ( v12 == 0xFFFFFFFFFLL )
        break;
      v8 = 48 * v12 - 0x58000000000LL;
      v9 = MiLockPageInline(v8);
      LockHandle.LockQueue.Next = 0LL;
      v10 = v9;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v4 + 7456);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v4 + 7456));
      v14 = v10;
      if ( v12 == *(_QWORD *)(v4 + 8 * v7 + 2768) )
      {
        MiUnlinkPageFromList(48 * v12 - 0x58000000000LL, 1uLL);
        v11 = *(_QWORD *)(v8 + 16);
        *(_QWORD *)(v8 + 16) = v11 & 0xFFFFFFFFFFFFFFFDuLL;
        MiInsertPageInList(48 * v12 - 0x58000000000LL, 0x88u);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiReleasePageFileInfo((struct _KEVENT *)v4, v11, 1);
        __writecr8(v14);
        ++v5;
        if ( !a2 && v5 >= v6 )
          return;
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v10);
      }
    }
  }
}
