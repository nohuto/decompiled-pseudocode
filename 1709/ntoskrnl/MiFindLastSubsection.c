/*
 * XREFs of MiFindLastSubsection @ 0x140110710
 * Callers:
 *     MiComputeDataFlushRange @ 0x1400A2450 (MiComputeDataFlushRange.c)
 *     MiCanFileBeTruncatedInternal @ 0x14011042C (MiCanFileBeTruncatedInternal.c)
 *     MmFlushVirtualMemory @ 0x1404E70DC (MmFlushVirtualMemory.c)
 *     MmExtendSection @ 0x14056BA18 (MmExtendSection.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiFindLastSubsection(__int64 a1, int a2)
{
  KIRQL v3; // bl
  __int64 v4; // rcx
  __int64 v5; // rsi

  if ( a2 == 1 )
    v3 = 17;
  else
    v3 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  v4 = *(_QWORD *)(a1 + 240);
  v5 = 0LL;
  while ( v4 )
  {
    v5 = v4;
    v4 = *(_QWORD *)(v4 + 8);
  }
  if ( v3 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(v3);
  }
  return v5 - 56;
}
