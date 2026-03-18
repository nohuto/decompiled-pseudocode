/*
 * XREFs of IoSetDiskIoAttributionOnProcess @ 0x14006F93C
 * Callers:
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 *     PspEstablishJobHierarchy @ 0x140530FA8 (PspEstablishJobHierarchy.c)
 *     PspSetJobIoAttributionProcessCallback @ 0x140581AF0 (PspSetJobIoAttributionProcessCallback.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14008E6C8 (IoDiskIoAttributionDereference.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
