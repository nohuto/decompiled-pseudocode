/*
 * XREFs of MmQueryProcessWorkingSetSwapPages @ 0x14000A570
 * Callers:
 *     PfpPrivSourceEnum @ 0x1404FD22C (PfpPrivSourceEnum.c)
 *     SmStoreCompressionStart @ 0x140738EE0 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x140738F5C (SmStoreCompressionStop.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetWorkingSetSwapSupport @ 0x140124A10 (MiGetWorkingSetSwapSupport.c)
 */

__int64 __fastcall MmQueryProcessWorkingSetSwapPages(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v4; // r8
  unsigned int v6; // ebx
  __int64 v7; // rbp
  KIRQL v8; // r14
  unsigned __int64 WorkingSetSwapSupport; // rax

  v2 = a1 + 1280;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(a1 + 1280) <= 2 )
    return 3221226021LL;
  v6 = -1073741275;
  v7 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v4 + 1452));
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 1120));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v2);
  if ( WorkingSetSwapSupport > 2 )
  {
    v6 = 0;
    *a2 = *(_QWORD *)(*(_QWORD *)WorkingSetSwapSupport + 24LL);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 1120));
  __writecr8(v8);
  return v6;
}
