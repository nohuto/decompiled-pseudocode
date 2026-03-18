/*
 * XREFs of MiComparePageHash @ 0x14026BEAC
 * Callers:
 *     MiValidatePagefilePageHash @ 0x140153348 (MiValidatePagefilePageHash.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiComparePageHash(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // esi
  _DWORD *v7; // r9
  _DWORD *v9; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  v6 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  v11 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)(*(_QWORD *)(a1 + 216) + 4 * v3) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (v11 & 1) != 0 )
  {
    if ( *v7 != a3 )
    {
      if ( (*(_BYTE *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11) >> 12) & 0xFFFFFFFFFLL)
                     - 0x57FFFFFFFDELL) & 0x10) != 0 )
      {
        if ( !byte_1403CBF80 )
          v6 = -1073741761;
      }
      else
      {
        *v9 = a3;
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    return v6;
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    return 0LL;
  }
}
