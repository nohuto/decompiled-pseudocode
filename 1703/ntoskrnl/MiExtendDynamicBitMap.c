/*
 * XREFs of MiExtendDynamicBitMap @ 0x14016522C
 * Callers:
 *     MiObtainDynamicVa @ 0x140128308 (MiObtainDynamicVa.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlClearBitsEx @ 0x1400CDB30 (RtlClearBitsEx.c)
 *     MiSplitBitmapPages @ 0x140127E80 (MiSplitBitmapPages.c)
 *     MiReclaimSystemVa @ 0x140128B70 (MiReclaimSystemVa.c)
 */

__int64 __fastcall MiExtendDynamicBitMap(__int64 *a1, unsigned __int64 *a2, unsigned int a3)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  __int64 v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 8, &LockHandle);
  v6 = *a2;
  if ( a2 != (unsigned __int64 *)a1 && a1[5] != v6 )
  {
LABEL_14:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    return 1LL;
  }
  v7 = a1[2];
  if ( a3 == 9 )
  {
    v7 -= a1[5];
  }
  else if ( a3 == 15 )
  {
    v7 -= *a1;
  }
  if ( v6 < v7 )
  {
    v8 = a2[1];
    v9 = a3 == 15 ? v8 - 4096 : (v6 >> 3) + v8;
    v10 = 0x8000LL;
    if ( (unsigned int)MiSplitBitmapPages(a3, v9, 0x8000LL) == 1 )
    {
      if ( v6 + 0x8000 > v7 )
        v10 = v7 - v6;
      if ( a3 == 15 )
      {
        *a2 += v10;
        v11 = 0LL;
        a2[1] += -8LL * (v10 >> 6);
        v13 = a1[5];
        if ( !v13 )
          a1[6] = ((unsigned __int64)a1[1] >> 21) & 0x7FFF;
        a1[5] = v13 + v10;
      }
      else
      {
        v11 = *a2;
        *a2 += v10;
      }
      RtlClearBitsEx((__int64)a2, v11, v10);
      goto LABEL_14;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( a1 == &qword_14036C480 )
    MiReclaimSystemVa(1);
  return 0LL;
}
