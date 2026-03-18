/*
 * XREFs of MiFreeListPageContentsChanged @ 0x140264F48
 * Callers:
 *     MiZeroPage @ 0x1400299B0 (MiZeroPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 */

void __fastcall MiFreeListPageContentsChanged(unsigned __int64 a1)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r10
  unsigned __int64 v6; // rdx
  volatile signed __int32 *v7; // r8
  int v8; // ebx
  unsigned __int64 v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(48 * a1 - 0x57FFFFFFFD8LL);
  v3 = (unsigned int)a1 & dword_1403CB6D8 | (((v2 >> 36) & 3) << byte_1403CB69A) | ((unsigned __int16)(v2 >> 58) << byte_1403CB699);
  v4 = *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8 * ((v2 >> 40) & 0x3FF)) + 2120LL);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v4 + 8 * (v3 + 4 * (v3 + 1)));
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
  if ( dword_1403CBDAC == 1 )
  {
    v5 = a1 & 0x1F;
    LOBYTE(v6) = 1;
    v7 = (volatile signed __int32 *)(qword_1403CBE08 + 4 * (a1 >> 5));
    if ( (unsigned __int64)(v5 + 1) > 0x20 )
    {
      if ( (a1 & 0x1F) == 0 )
        goto LABEL_9;
      v8 = a1 & 0x1F;
      _InterlockedOr(v7++, ((1 << (32 - v8)) - 1) << v5);
      v6 = 1LL - (unsigned int)(32 - v8);
      if ( v6 >= 0x20 )
      {
        v9 = v6 >> 5;
        v6 += -32LL * (v6 >> 5);
        do
        {
          *v7++ = -1;
          --v9;
        }
        while ( v9 );
      }
      if ( v6 )
LABEL_9:
        _InterlockedOr(v7, (1 << v6) - 1);
    }
    else
    {
      _InterlockedOr(v7, 1 << v5);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
