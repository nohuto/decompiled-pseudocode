/*
 * XREFs of CmpSetPriorityThread @ 0x140130D50
 * Callers:
 *     CmpDoFileWrite @ 0x1404E0284 (CmpDoFileWrite.c)
 *     CmpDoSystemCacheWrite @ 0x140694D44 (CmpDoSystemCacheWrite.c)
 * Callees:
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 */

KPRIORITY __fastcall CmpSetPriorityThread(struct _KTHREAD *a1, KPRIORITY a2)
{
  return KeSetPriorityThread(a1, a2);
}
