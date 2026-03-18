/*
 * XREFs of MiFlushAcquire @ 0x1400B030C
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1404E70DC (MmFlushVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceSubsection @ 0x1400A2330 (MiReferenceSubsection.c)
 */

__int64 __fastcall MiFlushAcquire(__int64 a1, __int64 a2, __int64 a3)
{
  KIRQL v6; // r14
  unsigned int v7; // ebx

  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( *(_QWORD *)(a1 + 40) == -1LL )
  {
    v7 = 0;
  }
  else
  {
    if ( a2 )
    {
      MiReferenceSubsection(a2, 0LL);
      MiReferenceSubsection(a3, 0LL);
    }
    ++*(_QWORD *)(a1 + 40);
    v7 = 1;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  __writecr8(v6);
  return v7;
}
