/*
 * XREFs of CmpSetPriorityThread @ 0x1400D1A88
 * Callers:
 *     CmpDoFileWrite @ 0x14049BEC0 (CmpDoFileWrite.c)
 * Callees:
 *     KeSetPriorityThread @ 0x1400EA760 (KeSetPriorityThread.c)
 */

KPRIORITY __fastcall CmpSetPriorityThread(struct _KTHREAD *a1, KPRIORITY a2)
{
  return KeSetPriorityThread(a1, a2);
}
