/*
 * XREFs of MiOutlawInswaps @ 0x14007F328
 * Callers:
 *     MiBeginProcessClean @ 0x14007F22C (MiBeginProcessClean.c)
 * Callees:
 *     MiGetWorkingSetSwapSupport @ 0x14007F460 (MiGetWorkingSetSwapSupport.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiOutlawInswaps(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  unsigned __int64 v3; // rdi
  __int64 WorkingSetSwapSupport; // rbx
  __int64 v5; // rcx

  v1 = a1 + 1280;
  v2 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 1454));
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1120));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v1);
  *(_QWORD *)(MiGetSharedVm(v5) + 24) = 2LL;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1120));
  __writecr8(v3);
  return WorkingSetSwapSupport;
}
