/*
 * XREFs of ExpQueueWorkItemNode @ 0x14025D868
 * Callers:
 *     ExpQueueWorkItem @ 0x1400FD5D0 (ExpQueueWorkItem.c)
 * Callees:
 *     KeInsertPriQueue @ 0x1400689F0 (KeInsertPriQueue.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExpNewThreadNecessary @ 0x1400FC9E0 (ExpNewThreadNecessary.c)
 */

char __fastcall ExpQueueWorkItemNode(__int64 *a1, int a2, struct _KEVENT *a3, __int64 a4)
{
  __int64 v5; // rbx
  char result; // al

  v5 = *((_QWORD *)&a3[13].Header.WaitListHead.Flink + (int)a4);
  if ( (v5 & 1) != 0 )
    v5 = 0LL;
  KeInsertPriQueue(v5, a1, a2, a4, 0);
  result = ExpNewThreadNecessary(v5, *(_DWORD *)(v5 + 712));
  if ( result )
    return KeSetEvent(a3 + 76, 0, 0);
  return result;
}
