/*
 * XREFs of MiInitializeWsSwapping @ 0x1405A1E7C
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall MiInitializeWsSwapping(_QWORD *a1))(__int64 a1)
{
  __int64 (__fastcall *result)(__int64); // rax

  a1[145] = 0LL;
  result = MiContractWsSwapPageFileWorker;
  a1[140] = 0LL;
  a1[142] = MiContractWsSwapPageFileWorker;
  a1[143] = a1;
  return result;
}
