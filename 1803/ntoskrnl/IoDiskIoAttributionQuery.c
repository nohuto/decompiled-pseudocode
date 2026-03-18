/*
 * XREFs of IoDiskIoAttributionQuery @ 0x1400A4438
 * Callers:
 *     IopIoRateStartRateControl @ 0x14000182C (IopIoRateStartRateControl.c)
 *     IoGetIoRateControl @ 0x1400A4150 (IoGetIoRateControl.c)
 *     PspQueryJobIoAttribution @ 0x140550414 (PspQueryJobIoAttribution.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IopRecordIoAttribution @ 0x14008E718 (IopRecordIoAttribution.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x1400A44F0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall IoDiskIoAttributionQuery(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v11[6]; // [rsp+38h] [rbp-30h] BYREF

  memset(v11, 0, 0x20uLL);
  HIDWORD(v11[0]) |= 0x200u;
  LODWORD(v11[0]) = 1;
  v11[3] = KeQueryUnbiasedInterruptTimePrecise(&v11[3]);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  IopRecordIoAttribution((KSPIN_LOCK *)a1, (__int64)v11, 3);
  v6 = *(_OWORD *)(a1 + 104);
  *a2 = *(_OWORD *)(a1 + 88);
  v7 = *(_OWORD *)(a1 + 128);
  a2[1] = v6;
  v8 = *(_OWORD *)(a1 + 144);
  *a3 = v7;
  a3[1] = v8;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
