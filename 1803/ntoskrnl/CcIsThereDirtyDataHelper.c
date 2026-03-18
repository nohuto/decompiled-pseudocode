/*
 * XREFs of CcIsThereDirtyDataHelper @ 0x140220780
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall CcIsThereDirtyDataHelper(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rbp
  _QWORD *v4; // rsi
  int v5; // edi
  _QWORD *i; // rax
  int v7; // edx
  _QWORD *v8; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)(a1 + 128);
  v4 = (_QWORD *)(a1 + 48);
  v5 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  for ( i = (_QWORD *)*v4; ; i = (_QWORD *)v8[17] )
  {
    v8 = i - 17;
    if ( i == v4 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      return 1;
    }
    v7 = *((_DWORD *)v8 + 38);
    if ( (v7 & 0x800) == 0
      && *(_QWORD *)((v8[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x10) == *(_QWORD *)a2
      && *((_DWORD *)v8 + 28)
      && (*(_DWORD *)((v8[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x50) & 0x8000) == 0 )
    {
      break;
    }
    if ( (unsigned int)++v5 >= 0x14 && (v7 & 0x820) == 0 )
    {
      *((_DWORD *)v8 + 38) |= 0x20u;
      ++*((_DWORD *)v8 + 28);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      v5 = 0;
      KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
      *((_DWORD *)v8 + 38) &= ~0x20u;
      --*((_DWORD *)v8 + 28);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  *(_BYTE *)(a2 + 8) = 1;
  return 0;
}
