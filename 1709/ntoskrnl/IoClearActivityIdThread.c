/*
 * XREFs of IoClearActivityIdThread @ 0x1400FB270
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x14054C2A0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqIrpQueryCreate @ 0x14054C90C (PiDqIrpQueryCreate.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall IoClearActivityIdThread(void *a1)
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  result[1].WaitBlock[0].SparePtr = a1;
  return result;
}
