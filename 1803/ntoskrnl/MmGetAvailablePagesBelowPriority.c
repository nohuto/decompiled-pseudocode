/*
 * XREFs of MmGetAvailablePagesBelowPriority @ 0x140005EAC
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14048E5B0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x14012B490 (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MmGetAvailablePagesBelowPriority(unsigned int a1)
{
  return MiGetAvailablePagesBelowPriority(
           *(_QWORD *)(qword_1403CBD88
                     + 8LL * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 3)),
           a1);
}
