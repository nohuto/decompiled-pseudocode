/*
 * XREFs of MiInitializeWsSwapping @ 0x1405B3674
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     <none>
 */

void (__fastcall *__fastcall MiInitializeWsSwapping(_QWORD *a1))(__int64 a1)
{
  void (__fastcall *result)(__int64); // rax

  a1[139] = 0LL;
  result = MiContractWsSwapPageFileWorker;
  a1[134] = 0LL;
  a1[136] = MiContractWsSwapPageFileWorker;
  a1[137] = a1;
  return result;
}
