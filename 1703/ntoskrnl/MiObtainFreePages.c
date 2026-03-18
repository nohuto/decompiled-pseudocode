/*
 * XREFs of MiObtainFreePages @ 0x140215244
 * Callers:
 *     MiDecreaseAvailablePages @ 0x140075ABC (MiDecreaseAvailablePages.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7FC0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1401294A0 (MiUnlinkNodeLargePageHelper.c)
 *     MiWaitForFreePage @ 0x140220450 (MiWaitForFreePage.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x14002FDA4 (CcNotifyWriteBehindInternal.c)
 *     MiWakeModifiedPageWriter @ 0x14003BB18 (MiWakeModifiedPageWriter.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 */

LONG __fastcall MiObtainFreePages(__int64 a1)
{
  __int64 v1; // rdi
  LONG result; // eax

  v1 = *(_QWORD *)(a1 + 5544);
  if ( v1 && *(_BYTE *)(v1 + 52) != 1 )
  {
    result = CcNotifyWriteBehindInternal((struct _KEVENT *)&CcSystemPartition, 1);
    if ( *(_QWORD *)(a1 + 6144) - *(_QWORD *)(a1 + 6256) >= 0x10uLL )
      result = KeSetEvent((PRKEVENT)(a1 + 824), 0, 0);
    if ( *(_QWORD *)(a1 + 6256) >= 0x10uLL )
      result = MiWakeModifiedPageWriter(a1, -1LL);
    if ( *(_BYTE *)(v1 + 106) )
      return KeSetEvent((PRKEVENT)(v1 + 104), 0, 0);
  }
  return result;
}
