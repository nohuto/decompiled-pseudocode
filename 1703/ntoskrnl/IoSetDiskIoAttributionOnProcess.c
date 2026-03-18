/*
 * XREFs of IoSetDiskIoAttributionOnProcess @ 0x1400622A8
 * Callers:
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 *     PspSetJobIoAttributionProcessCallback @ 0x14045D920 (PspSetJobIoAttributionProcessCallback.c)
 *     PspEstablishJobHierarchy @ 0x14054BD84 (PspEstablishJobHierarchy.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     IoDiskIoAttributionDereference @ 0x1400AE074 (IoDiskIoAttributionDereference.c)
 */

void __fastcall IoSetDiskIoAttributionOnProcess(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // rbp
  unsigned __int64 v6; // rbx

  if ( *(_QWORD *)(a2 + 1944) != a1 )
  {
    if ( a1 && _InterlockedIncrement64((volatile signed __int64 *)(a1 + 32)) <= 1 )
      __fastfail(0xEu);
    v4 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
    v5 = *(_QWORD *)(a2 + 1944);
    v6 = v4;
    *(_QWORD *)(a2 + 1944) = a1;
    ExReleaseSpinLockExclusiveFromDpcLevel(&IopDiskIoAttributionLock);
    __writecr8(v6);
    if ( v5 )
      IoDiskIoAttributionDereference(v5);
  }
}
