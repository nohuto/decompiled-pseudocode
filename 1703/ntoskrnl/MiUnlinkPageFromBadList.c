/*
 * XREFs of MiUnlinkPageFromBadList @ 0x14021F3D4
 * Callers:
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiMoveEccPagesToFreeList @ 0x14020D91C (MiMoveEccPagesToFreeList.c)
 *     MiTransferPartitionPageRun @ 0x14021EA0C (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140075C3C (MiSetPfnBlink.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 */

signed __int64 __fastcall MiUnlinkPageFromBadList(_QWORD *a1)
{
  unsigned __int64 v2; // rbp
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rdx
  volatile signed __int32 *v8; // r8
  unsigned int v9; // eax
  int v10; // ebp
  unsigned __int64 v11; // rcx
  signed __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = (__int64)(a1 + 0xB000000000LL) / 48;
  v3 = *(_QWORD **)(qword_14036C8F8 + 8 * ((a1[5] >> 40) & 0x3FFLL));
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v3 + 484;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, v3 + 484);
  v4 = *a1 & 0xFFFFFFFFFLL;
  v5 = a1[3] & 0xFFFFFFFFFLL;
  if ( v4 == 0xFFFFFFFFFLL )
    v3[483] = v5;
  else
    MiSetPfnBlink(48 * v4 - 0x58000000000LL, a1[3] & 0xFFFFFFFFFLL, 0);
  if ( v5 == 0xFFFFFFFFFLL )
    v3[482] = v4;
  else
    *(_QWORD *)(48 * v5 - 0x58000000000LL) ^= (v4 ^ *(_QWORD *)(48 * v5 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
  if ( dword_14036C91C == 1 )
  {
    v6 = v2 & 0x1F;
    LOBYTE(v7) = 1;
    v8 = (volatile signed __int32 *)stru_14036C970.Buffer + (v2 >> 5);
    if ( v6 + 1 <= 0x20 )
    {
      v9 = 1 << v6;
LABEL_16:
      _InterlockedOr(v8, v9);
      goto LABEL_17;
    }
    if ( (v2 & 0x1F) == 0 )
      goto LABEL_15;
    v10 = v2 & 0x1F;
    _InterlockedOr(v8++, ((1 << (32 - v10)) - 1) << v6);
    v7 = 1LL - (unsigned int)(32 - v10);
    if ( v7 >= 0x20 )
    {
      v11 = v7 >> 5;
      v7 += -32LL * (v7 >> 5);
      do
      {
        *v8++ = -1;
        --v11;
      }
      while ( v11 );
    }
    if ( v7 )
    {
LABEL_15:
      v9 = (1 << v7) - 1;
      goto LABEL_16;
    }
  }
LABEL_17:
  --v3[480];
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  *a1 = 0LL;
  result = MiSetPfnBlink((__int64)a1, 0LL, 1);
  a1[1] = 0LL;
  return result;
}
