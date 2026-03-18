/*
 * XREFs of MiOutlawInswaps @ 0x14007E91C
 * Callers:
 *     MiBeginProcessClean @ 0x14007E820 (MiBeginProcessClean.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetWorkingSetSwapSupport @ 0x1400A7F08 (MiGetWorkingSetSwapSupport.c)
 */

__int64 __fastcall MiOutlawInswaps(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 WorkingSetSwapSupport; // rbx
  __int64 v7; // rcx

  v1 = a1 + 1280;
  v2 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 1452));
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1168));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v1, v4, v5);
  *(_QWORD *)(MiGetSharedVm(v7) + 24) = 2LL;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1168));
  __writecr8(v3);
  return WorkingSetSwapSupport;
}
