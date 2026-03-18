/*
 * XREFs of MmGetAvailablePagesBelowPriority @ 0x14003DC6C
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x140464FF0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePagesBelowPriority(unsigned int a1)
{
  return MiGetAvailablePagesBelowPriority(
           *(_QWORD *)(qword_14036C8F8 + 8LL * WORD2(KeGetCurrentThread()->ApcState.Process[1].SecurePid)),
           a1);
}
