/*
 * XREFs of MiFlushAcquire @ 0x1400BD9BC
 * Callers:
 *     MmFlushVirtualMemory @ 0x140568184 (MmFlushVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiReferenceSubsection @ 0x1400E4FB8 (MiReferenceSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiFlushAcquire(__int64 a1, __int64 a2, __int64 a3)
{
  KIRQL v6; // r14
  __int64 v7; // rax
  unsigned int v8; // ebx

  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 == -1 )
  {
    v8 = 0;
  }
  else
  {
    if ( a2 )
    {
      MiReferenceSubsection(a2, 0LL);
      MiReferenceSubsection(a3, 0LL);
      v7 = *(_QWORD *)(a1 + 40);
    }
    v8 = 1;
    *(_QWORD *)(a1 + 40) = v7 + 1;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  __writecr8(v6);
  return v8;
}
