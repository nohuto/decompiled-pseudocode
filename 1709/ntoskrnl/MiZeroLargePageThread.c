/*
 * XREFs of MiZeroLargePageThread @ 0x140155660
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     MiZeroLargePages @ 0x140135010 (MiZeroLargePages.c)
 *     MiDeleteZeroThreadContext @ 0x1401556D4 (MiDeleteZeroThreadContext.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroLargePageThread(PVOID P, __int64 a2, _SINGLE_LIST_ENTRY *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v6; // ebx
  __int64 v7; // rcx
  _SINGLE_LIST_ENTRY *v8; // r8
  __int64 v9; // r9

  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x400u;
  v6 = KeSetActualBasePriorityThread((__int64)CurrentThread, 0, a3, a4);
  MiZeroLargePages(v7, (__int64)P);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v6, v8, v9);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x400u;
  MiDeleteZeroThreadContext(P);
  ExFreePoolWithTag(P, 0);
}
