/*
 * XREFs of MiUpdatePageAttributeStamp @ 0x14012A1B0
 * Callers:
 *     MiCopyHeaderIfResident @ 0x1400B6F80 (MiCopyHeaderIfResident.c)
 * Callees:
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
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
    v3 = *(_QWORD *)(qword_140388AF0 + 8 * ((v2 >> 40) & 0x3FF));
    v4 = *(_BYTE *)(a1 + 34);
    v5 = *(_QWORD *)(v3 + 8LL * (v4 & 7) + 4088);
    if ( (v4 & 7) == 2 )
    {
      v6 = 5LL * (unsigned int)MiGetPfnPriority(a1) + 288;
    }
    else
    {
      if ( *(_DWORD *)(v5 + 8) != 3 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
        goto LABEL_5;
      v6 = (v2 >> 58) + 4 * ((v2 >> 58) + 104);
    }
    v5 = v3 + 8 * v6;
LABEL_5:
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 32);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v5 + 32));
    _InterlockedOr(v7, 0);
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
