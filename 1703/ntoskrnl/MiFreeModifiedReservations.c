/*
 * XREFs of MiFreeModifiedReservations @ 0x14021A050
 * Callers:
 *     MiModifiedPageWriter @ 0x140162A30 (MiModifiedPageWriter.c)
 *     MiPageFileNoFreeSpace @ 0x14021A3F4 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 */

__int64 __fastcall MiFreeModifiedReservations(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  unsigned __int64 i; // rbp
  __int64 v9; // rdi
  unsigned __int8 v10; // al
  unsigned __int64 v11; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 v13; // [rsp+70h] [rbp+8h]

  result = *(unsigned __int16 *)(a1 + 204);
  if ( (result & 0x40) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 256);
    v5 = 5 * ((result & 0xF) + 64);
    v6 = *(_QWORD *)(v4 + 40 * ((result & 0xF) + 64) + 16);
    result = 0xFFFFFFFFFLL;
    v7 = 0LL;
    for ( i = a2 == 0 ? 0x10000 : 0; v6 != 0xFFFFFFFFFLL; result = 0xFFFFFFFFFLL )
    {
      v9 = 48 * v6 - 0x58000000000LL;
      v10 = MiLockPageInline(v9);
      LockHandle.LockQueue.Next = 0LL;
      v13 = v10;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v4 + 6176);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v4 + 6176));
      if ( v6 == *(_QWORD *)(v4 + 8 * v5 + 16) )
      {
        MiUnlinkPageFromList(48 * v6 - 0x58000000000LL, 1);
        v11 = *(_QWORD *)(v9 + 16);
        *(_QWORD *)(v9 + 16) = v11 & 0xFFFFFFFFFFFFFFFDuLL;
        MiInsertPageInList(v9, 0x88u);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiReleasePageFileInfo((struct _KEVENT *)v4, v11, 1);
        result = v13;
        __writecr8(v13);
        ++v7;
        if ( !a2 && v7 >= i )
          return result;
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v13);
      }
      v6 = *(_QWORD *)(v4 + 8 * v5 + 16);
    }
  }
  return result;
}
