/*
 * XREFs of ExTryToConvertFastResourceSharedToExclusive @ 0x1402B9D00
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExpTryUpgradeResource @ 0x1402BCDDC (ExpTryUpgradeResource.c)
 */

char __fastcall ExTryToConvertFastResourceSharedToExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v6; // r9
  char v7; // al
  unsigned __int8 v8; // bp
  char v9; // si
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v6 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v6 != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v6, 0LL);
  if ( *(_QWORD *)(a2 + 24) != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  v7 = *(_BYTE *)(a2 + 17);
  if ( (v7 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  if ( (v7 & 4) != 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, (unsigned __int64)(v7 & 4) << 14, 0LL);
  if ( !*(_BYTE *)(a2 + 18) || *(_QWORD *)(a2 + 40) != a2 + 40 )
    KeBugCheckEx(0x1C6u, 0x13uLL, BugCheckParameter2, 0LL, 0LL);
  v8 = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
  v9 = ExpTryUpgradeResource(BugCheckParameter2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v9 )
    *(_BYTE *)(a2 + 17) |= 4u;
  __writecr8(v8);
  return v9;
}
