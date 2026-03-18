/*
 * XREFs of ExpNewThreadNecessary @ 0x1400FC9E0
 * Callers:
 *     ExTryQueueWorkItem @ 0x1400688A0 (ExTryQueueWorkItem.c)
 *     ExpWorkerThread @ 0x1400FC140 (ExpWorkerThread.c)
 *     ExpQueueWorkItem @ 0x1400FD5D0 (ExpQueueWorkItem.c)
 *     ExTryQueueWorkItemFromIo @ 0x140130680 (ExTryQueueWorkItemFromIo.c)
 *     ExpQueueWorkItemNode @ 0x14025D868 (ExpQueueWorkItemNode.c)
 *     ExpWorkerThreadBalanceManager @ 0x1405C0ED0 (ExpWorkerThreadBalanceManager.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpNewThreadNecessary(__int64 a1, int a2)
{
  int v2; // r8d

  v2 = *(_DWORD *)(a1 + 704);
  return v2 < (2 * *(_DWORD *)(a1 + 708)) >> 1
      || v2 < a2 && *(_QWORD *)(a1 + 8) == a1 + 8 && (*(_DWORD *)(a1 + 4) || *(int *)(a1 + 708) < 0);
}
