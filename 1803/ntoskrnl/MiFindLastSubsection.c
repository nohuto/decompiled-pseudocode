/*
 * XREFs of MiFindLastSubsection @ 0x14004CFC0
 * Callers:
 *     MiCanFileBeTruncatedInternal @ 0x140050EFC (MiCanFileBeTruncatedInternal.c)
 *     MiComputeDataFlushRange @ 0x1400E4D20 (MiComputeDataFlushRange.c)
 *     MiGetControlAreaPtes @ 0x1400E5F38 (MiGetControlAreaPtes.c)
 *     MmExtendSection @ 0x1404BDFD0 (MmExtendSection.c)
 *     MmFlushVirtualMemory @ 0x140568184 (MmFlushVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
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
  v4 = *(_QWORD *)(a1 + 272);
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
