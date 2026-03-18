/*
 * XREFs of MiExtendDynamicBitMap @ 0x140157140
 * Callers:
 *     MiObtainDynamicVa @ 0x1400F6200 (MiObtainDynamicVa.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140036470 (RtlClearBitsEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSplitBitmapPages @ 0x1400F7414 (MiSplitBitmapPages.c)
 *     MiReclaimSystemVa @ 0x1400F74B0 (MiReclaimSystemVa.c)
 */

__int64 __fastcall MiExtendDynamicBitMap(__int64 *a1, unsigned __int64 *a2, unsigned int a3)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  __int64 v12; // rcx
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
  else if ( a3 == 14 )
  {
    v7 -= *a1;
  }
  if ( v6 < v7 )
  {
    v8 = a3 == 14 ? -4096LL : v6 >> 3;
    v9 = 0x8000LL;
    if ( (unsigned int)MiSplitBitmapPages(a3, v8 + a2[1], 0x8000LL) == 1 )
    {
      if ( v6 + 0x8000 > v7 )
        v9 = v7 - v6;
      if ( a3 == 14 )
      {
        *a2 += v9;
        v10 = 0LL;
        a2[1] += -8LL * (v9 >> 6);
        v12 = a1[5];
        if ( !v12 )
          a1[6] = ((unsigned __int64)a1[1] >> 21) & 0x7FFF;
        a1[5] = v12 + v9;
      }
      else
      {
        v10 = *a2;
        *a2 += v9;
      }
      RtlClearBitsEx((__int64)a2, v10, v9);
      goto LABEL_14;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( a1 == &qword_140388808 )
    MiReclaimSystemVa(1);
  return 0LL;
}
