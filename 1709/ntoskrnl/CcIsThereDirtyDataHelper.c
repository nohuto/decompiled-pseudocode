/*
 * XREFs of CcIsThereDirtyDataHelper @ 0x1401E1120
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall CcIsThereDirtyDataHelper(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rbp
  __int64 *v4; // r15
  int v5; // edi
  __int64 i; // rbx
  int v7; // edx
  __int64 v8; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = (KSPIN_LOCK *)(a1 + 128);
  v4 = (__int64 *)(a1 + 48);
  v5 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  for ( i = *v4; ; i = *(_QWORD *)(v8 + 136) )
  {
    v8 = i - 136;
    if ( (__int64 *)(v8 + 136) == v4 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      return 1;
    }
    v7 = *(_DWORD *)(v8 + 152);
    if ( (v7 & 0x800) == 0
      && *(_QWORD *)((*(_QWORD *)(v8 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x10) == *(_QWORD *)a2
      && *(_DWORD *)(v8 + 112)
      && (*(_DWORD *)((*(_QWORD *)(v8 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x50) & 0x8000) == 0 )
    {
      break;
    }
    if ( (unsigned int)++v5 >= 0x14 && (v7 & 0x820) == 0 )
    {
      *(_DWORD *)(v8 + 152) |= 0x20u;
      ++*(_DWORD *)(v8 + 112);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      v5 = 0;
      KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
      *(_DWORD *)(v8 + 152) &= ~0x20u;
      --*(_DWORD *)(v8 + 112);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  *(_BYTE *)(a2 + 8) = 1;
  return 0;
}
