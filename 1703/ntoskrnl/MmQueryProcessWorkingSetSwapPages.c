/*
 * XREFs of MmQueryProcessWorkingSetSwapPages @ 0x1400340C4
 * Callers:
 *     PfpPrivSourceEnum @ 0x140498F88 (PfpPrivSourceEnum.c)
 *     SmStoreCompressionStop @ 0x1404CA338 (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x1404CA430 (SmStoreCompressionStart.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetWorkingSetSwapSupport @ 0x1400A7F08 (MiGetWorkingSetSwapSupport.c)
 */

__int64 __fastcall MmQueryProcessWorkingSetSwapPages(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v4; // r8
  unsigned int v6; // ebx
  __int64 v7; // rbp
  KIRQL v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 WorkingSetSwapSupport; // rax

  v2 = a1 + 1280;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(a1 + 1280, a2, a1) <= 2 )
    return 3221226021LL;
  v6 = -1073741275;
  v7 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v4 + 1452));
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 1168));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v2, v9, v10);
  if ( WorkingSetSwapSupport > 2 )
  {
    v6 = 0;
    *a2 = *(_QWORD *)(*(_QWORD *)WorkingSetSwapSupport + 24LL);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 1168));
  __writecr8(v8);
  return v6;
}
