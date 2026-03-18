/*
 * XREFs of KeInitializeAffinityEx @ 0x140034450
 * Callers:
 *     PpmUpdateProcessorPolicy @ 0x140612240 (PpmUpdateProcessorPolicy.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

void *__fastcall KeInitializeAffinityEx(_QWORD *a1)
{
  *a1 = 1310721LL;
  return memset(a1 + 1, 0, 0xA0uLL);
}
