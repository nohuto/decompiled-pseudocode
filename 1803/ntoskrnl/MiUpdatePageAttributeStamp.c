/*
 * XREFs of MiUpdatePageAttributeStamp @ 0x1400C95F8
 * Callers:
 *     MiCopyHeaderIfResident @ 0x14004D648 (MiCopyHeaderIfResident.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 */

void __fastcall MiUpdatePageAttributeStamp(__int64 a1)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  char v4; // al
  __int64 v5; // rcx
  __int64 v6; // rcx
  signed __int32 v7[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_WORD *)(a1 + 32) )
  {
    v2 = *(_QWORD *)(a1 + 40);
    v3 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v2 >> 40) & 0x3FF));
    v4 = *(_BYTE *)(a1 + 34);
    v5 = *(_QWORD *)(v3 + 8LL * (v4 & 7) + 4152);
    if ( (v4 & 7) == 2 )
    {
      v6 = 5LL * (unsigned int)MiGetPfnPriority(a1) + 296;
    }
    else
    {
      if ( *(_DWORD *)(v5 + 8) != 3 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
        goto LABEL_5;
      v6 = (v2 >> 58) + 4 * ((v2 >> 58) + 106);
    }
    v5 = v3 + 8 * v6;
LABEL_5:
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 32);
    KxAcquireQueuedSpinLock(&LockHandle, v5 + 32);
    _InterlockedOr(v7, 0);
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
