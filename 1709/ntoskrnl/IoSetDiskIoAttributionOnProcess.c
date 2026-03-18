/*
 * XREFs of IoSetDiskIoAttributionOnProcess @ 0x1400B95F8
 * Callers:
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 *     PspSetJobIoAttributionProcessCallback @ 0x14044E810 (PspSetJobIoAttributionProcessCallback.c)
 *     PspEstablishJobHierarchy @ 0x14050C5C4 (PspEstablishJobHierarchy.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1400079D0 (IoDiskIoAttributionDereference.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall IoSetDiskIoAttributionOnProcess(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // rbp
  unsigned __int64 v6; // rbx

  if ( *(_QWORD *)(a2 + 1968) != a1 )
  {
    if ( a1 && _InterlockedIncrement64((volatile signed __int64 *)(a1 + 32)) <= 1 )
      __fastfail(0xEu);
    v4 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
    v5 = *(_QWORD *)(a2 + 1968);
    v6 = v4;
    *(_QWORD *)(a2 + 1968) = a1;
    ExReleaseSpinLockExclusiveFromDpcLevel(&IopDiskIoAttributionLock);
    __writecr8(v6);
    if ( v5 )
      IoDiskIoAttributionDereference(v5);
  }
}
