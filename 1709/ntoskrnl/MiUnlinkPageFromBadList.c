/*
 * XREFs of MiUnlinkPageFromBadList @ 0x14022AA0C
 * Callers:
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiMoveEccPagesToFreeList @ 0x1402149CC (MiMoveEccPagesToFreeList.c)
 *     MiPurgeBadFileOnlyPages @ 0x140223684 (MiPurgeBadFileOnlyPages.c)
 *     MiTransferPartitionPageRun @ 0x140238208 (MiTransferPartitionPageRun.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     MiSetPfnBlink @ 0x1400C7514 (MiSetPfnBlink.c)
 */

signed __int64 __fastcall MiUnlinkPageFromBadList(_QWORD *a1, char a2)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rdx
  unsigned __int64 v6; // r9
  __int64 *v7; // rbx
  int v8; // r15d
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdx
  volatile signed __int32 *v13; // r8
  unsigned int v14; // eax
  int v15; // ebp
  unsigned __int64 v16; // rcx
  signed __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = (__int64)(a1 + 0xB000000000LL) / 48;
  v7 = &qword_140388220;
  if ( !(unsigned int)MiIsPfnFileOnly((__int64)a1) )
    v7 = (__int64 *)(v5 + 3968);
  v8 = a2 & 0x80;
  if ( !v8 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 4000);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v5 + 4000));
    v6 = 0xFFFFFA8000000000uLL;
  }
  v9 = *a1 & 0xFFFFFFFFFLL;
  v10 = a1[3] & 0xFFFFFFFFFLL;
  if ( v9 == 0xFFFFFFFFFLL )
    v7[3] = v10;
  else
    MiSetPfnBlink(v6 + 48 * v9, a1[3] & 0xFFFFFFFFFLL, 0);
  if ( v10 == 0xFFFFFFFFFLL )
    v7[2] = v9;
  else
    *(_QWORD *)(48 * v10 - 0x58000000000LL) = v9 | *(_QWORD *)(48 * v10 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
  if ( v7 != &qword_140388220 && dword_140388B14 == 1 )
  {
    v11 = v4 & 0x1F;
    LOBYTE(v12) = 1;
    v13 = (volatile signed __int32 *)stru_140388B68.Buffer + (v4 >> 5);
    if ( v11 + 1 <= 0x20 )
    {
      v14 = 1 << v11;
LABEL_21:
      _InterlockedOr(v13, v14);
      goto LABEL_22;
    }
    if ( (v4 & 0x1F) == 0 )
      goto LABEL_20;
    v15 = v4 & 0x1F;
    _InterlockedOr(v13++, ((1 << (32 - v15)) - 1) << v11);
    v12 = 1LL - (unsigned int)(32 - v15);
    if ( v12 >= 0x20 )
    {
      v16 = v12 >> 5;
      v12 += -32LL * (v12 >> 5);
      do
      {
        *v13++ = -1;
        --v16;
      }
      while ( v16 );
    }
    if ( v12 )
    {
LABEL_20:
      v14 = (1 << v12) - 1;
      goto LABEL_21;
    }
  }
LABEL_22:
  --*v7;
  if ( !v8 )
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  *a1 = 0LL;
  result = MiSetPfnBlink((__int64)a1, 0LL, 1);
  if ( v7 != &qword_140388220 )
    a1[1] = 0LL;
  return result;
}
