/*
 * XREFs of MiInitializeWsSwapping @ 0x14061C05C
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
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
