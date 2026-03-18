/*
 * XREFs of IoClearActivityIdThread @ 0x140075960
 * Callers:
 *     PiDqIrpQueryCreate @ 0x140523298 (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1405DD500 (PiDqObjectManagerServiceActionQueue.c)
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
