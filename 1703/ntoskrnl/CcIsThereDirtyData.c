/*
 * XREFs of CcIsThereDirtyData @ 0x1401DDFA0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

BOOLEAN __stdcall CcIsThereDirtyData(PVPB Vpb)
{
  int v2; // esi
  __int64 v3; // rbx
  BOOLEAN v4; // di
  int v5; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
  v3 = qword_14036F7C0 - 136;
  if ( (_UNKNOWN *)(qword_14036F7C0 - 136) == &unk_14036F738 )
  {
LABEL_11:
    v4 = 0;
  }
  else
  {
    v4 = 1;
    while ( 1 )
    {
      v5 = *(_DWORD *)(v3 + 152);
      if ( (v5 & 0x800) == 0
        && *(PVPB *)((*(_QWORD *)(v3 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x10) == Vpb
        && *(_DWORD *)(v3 + 112)
        && (*(_DWORD *)((*(_QWORD *)(v3 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x50) & 0x8000) == 0 )
      {
        break;
      }
      if ( (unsigned int)++v2 >= 0x14 && (v5 & 0x820) == 0 )
      {
        *(_DWORD *)(v3 + 152) |= 0x20u;
        ++*(_DWORD *)(v3 + 112);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        v2 = 0;
        KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
        *(_DWORD *)(v3 + 152) &= ~0x20u;
        --*(_DWORD *)(v3 + 112);
      }
      v3 = *(_QWORD *)(v3 + 136) - 136LL;
      if ( (__int64 *)(v3 + 136) == &qword_14036F7C0 )
        goto LABEL_11;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v4;
}
