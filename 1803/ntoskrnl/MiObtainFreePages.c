/*
 * XREFs of MiObtainFreePages @ 0x140259A20
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x14002D3C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiDecreaseAvailablePages @ 0x1400D5664 (MiDecreaseAvailablePages.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400E7480 (MiUnlinkNodeLargePageHelper.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 * Callees:
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x14006FF20 (PsReferencePartitionSafe.c)
 *     MiWakeModifiedPageWriter @ 0x140081C4C (MiWakeModifiedPageWriter.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     CcNotifyWriteBehindEx @ 0x14014DA40 (CcNotifyWriteBehindEx.c)
 */

void __fastcall MiObtainFreePages(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  unsigned __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 6768);
  if ( v1 && *(_BYTE *)(v1 + 52) != 1 )
  {
    v3 = *(_QWORD *)(a1 + 168);
    if ( PsReferencePartitionSafe(v3) )
    {
      CcNotifyWriteBehindEx(1, v3);
      PsDereferencePartition(v3);
    }
    v4 = *(_QWORD *)(a1 + 7536);
    if ( *(_QWORD *)(a1 + 7424) - v4 >= 0x10 )
    {
      KeSetEvent((PRKEVENT)(a1 + 776), 0, 0);
      v4 = *(_QWORD *)(a1 + 7536);
    }
    if ( v4 >= 0x10 )
      MiWakeModifiedPageWriter(a1, -1LL);
    if ( *(_BYTE *)(v1 + 106) )
      KeSetEvent((PRKEVENT)(v1 + 104), 0, 0);
  }
}
