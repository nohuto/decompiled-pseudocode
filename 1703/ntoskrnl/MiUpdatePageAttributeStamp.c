/*
 * XREFs of MiUpdatePageAttributeStamp @ 0x140032700
 * Callers:
 *     MiCopyHeaderIfResident @ 0x14005DFD4 (MiCopyHeaderIfResident.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 */

void __fastcall MiUpdatePageAttributeStamp(__int64 a1)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  char v4; // al
  __int64 v5; // rcx
  unsigned int PfnPriority; // eax
  __int64 v7; // r9
  signed __int32 v8[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_WORD *)(a1 + 32) )
  {
    v2 = *(_QWORD *)(a1 + 40);
    v3 = *(_QWORD *)(qword_14036C8F8 + 8 * ((v2 >> 40) & 0x3FF));
    v4 = *(_BYTE *)(a1 + 34);
    v5 = *(_QWORD *)(v3 + 8LL * (v4 & 7) + 3960);
    if ( (v4 & 7) == 2 )
    {
      PfnPriority = MiGetPfnPriority(a1);
      v5 = v7 + 8 * (5LL * PfnPriority + 272);
    }
    else if ( *(_DWORD *)(v5 + 8) == 3 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
    {
      v5 = v3 + 40 * ((v2 >> 58) + 80);
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 32);
    KxAcquireQueuedSpinLock(&LockHandle);
    _InterlockedOr(v8, 0);
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
