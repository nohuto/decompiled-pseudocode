/*
 * XREFs of MmGetAvailablePagesBelowPriority @ 0x1400020F8
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x140440810 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1400F5010 (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MmGetAvailablePagesBelowPriority(unsigned int a1)
{
  return MiGetAvailablePagesBelowPriority(
           *(_QWORD *)(qword_140388AF0
                     + 8LL * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 2)),
           a1);
}
