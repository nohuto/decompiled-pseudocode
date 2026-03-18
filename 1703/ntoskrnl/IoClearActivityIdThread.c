/*
 * XREFs of IoClearActivityIdThread @ 0x14006E780
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1404B8940 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqIrpQueryCreate @ 0x1404B9328 (PiDqIrpQueryCreate.c)
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
