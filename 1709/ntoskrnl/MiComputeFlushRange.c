/*
 * XREFs of MiComputeFlushRange @ 0x1400A4B48
 * Callers:
 *     MmFlushSection @ 0x1400A49CC (MmFlushSection.c)
 *     MmTrimSection @ 0x1400F2370 (MmTrimSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiComputeDataFlushRange @ 0x1400A2450 (MiComputeDataFlushRange.c)
 *     MiLockSectionControlArea @ 0x1400A4BCC (MiLockSectionControlArea.c)
 */

__int64 __fastcall MiComputeFlushRange(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  unsigned __int8 v9[24]; // [rsp+30h] [rbp-18h] BYREF

  v7 = MiLockSectionControlArea(a1, 1LL, v9);
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 56) & 3) == 0 && *(_QWORD *)(v7 + 32) )
      return MiComputeDataFlushRange(v7, v9[0], a2, a3, 0, a4);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    __writecr8(v9[0]);
  }
  return 0LL;
}
