/*
 * XREFs of MiComputeFlushRange @ 0x1400989C0
 * Callers:
 *     MmTrimSection @ 0x140014470 (MmTrimSection.c)
 *     MmFlushSection @ 0x140098844 (MmFlushSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiComputeDataFlushRange @ 0x140098AEC (MiComputeDataFlushRange.c)
 *     MiLockSectionControlArea @ 0x140099610 (MiLockSectionControlArea.c)
 */

__int64 __fastcall MiComputeFlushRange(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v7; // rax
  int v8; // edx
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF

  v7 = MiLockSectionControlArea(a1, 1LL, v10);
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 56) & 3) == 0 && *(_QWORD *)(v7 + 32) )
    {
      LOBYTE(v8) = v10[0];
      return MiComputeDataFlushRange(v7, v8, a2, a3, 0, a4);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    __writecr8(v10[0]);
  }
  return 0LL;
}
