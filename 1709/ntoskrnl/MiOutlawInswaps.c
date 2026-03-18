/*
 * XREFs of MiOutlawInswaps @ 0x14012498C
 * Callers:
 *     MiBeginProcessClean @ 0x140124890 (MiBeginProcessClean.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetWorkingSetSwapSupport @ 0x140124A10 (MiGetWorkingSetSwapSupport.c)
 */

__int64 __fastcall MiOutlawInswaps(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  unsigned __int64 v3; // rdi
  __int64 WorkingSetSwapSupport; // rbx
  __int64 v5; // rcx

  v1 = a1 + 1280;
  v2 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 1452));
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1120));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v1);
  *((_QWORD *)MiGetSharedVm(v5) + 3) = 2LL;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1120));
  __writecr8(v3);
  return WorkingSetSwapSupport;
}
