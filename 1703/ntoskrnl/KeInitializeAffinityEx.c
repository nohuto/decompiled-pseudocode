/*
 * XREFs of KeInitializeAffinityEx @ 0x140046090
 * Callers:
 *     PpmUpdateProcessorPolicy @ 0x14058358C (PpmUpdateProcessorPolicy.c)
 * Callees:
 *     <none>
 */

void *__fastcall KeInitializeAffinityEx(_QWORD *a1)
{
  *a1 = 1310721LL;
  return memset(a1 + 1, 0, 0xA0uLL);
}
