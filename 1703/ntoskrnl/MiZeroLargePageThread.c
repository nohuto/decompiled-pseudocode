/*
 * XREFs of MiZeroLargePageThread @ 0x14015C180
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     MiDeleteZeroThreadContext @ 0x14015C1E0 (MiDeleteZeroThreadContext.c)
 *     MiZeroLargePages @ 0x14015C30C (MiZeroLargePages.c)
 */

void __fastcall MiZeroLargePageThread(void *a1, __int64 a2, _SINGLE_LIST_ENTRY *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v6; // ebx
  __int64 v7; // rcx
  _SINGLE_LIST_ENTRY *v8; // r8
  __int64 v9; // r9

  CurrentThread = KeGetCurrentThread();
  v6 = KeSetActualBasePriorityThread((__int64)CurrentThread, 0, a3, a4);
  MiZeroLargePages(v7, a1);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v6, v8, v9);
  MiDeleteZeroThreadContext(a1);
  ExFreePoolWithTag(a1, 0);
}
