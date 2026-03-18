/*
 * XREFs of MiObtainFreePages @ 0x14021D8D8
 * Callers:
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140050BA0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400C68C0 (MiUnlinkNodeLargePageHelper.c)
 *     MiDecreaseAvailablePages @ 0x1400C7448 (MiDecreaseAvailablePages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140135E60 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     CcNotifyWriteBehindEx @ 0x1401E0540 (CcNotifyWriteBehindEx.c)
 *     MiWakeModifiedPageWriter @ 0x140227290 (MiWakeModifiedPageWriter.c)
 */

void __fastcall MiObtainFreePages(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  signed __int64 v4; // rax
  signed __int64 v5; // rtt

  v1 = *(_QWORD *)(a1 + 5680);
  if ( v1 && *(_BYTE *)(v1 + 52) != 1 )
  {
    v3 = *(_QWORD *)(a1 + 168);
    _m_prefetchw((const void *)(v3 + 24));
    v4 = *(_QWORD *)(v3 + 24);
    while ( (unsigned __int64)(v4 + 1) > 1 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 24), v4 + 1, v4);
      if ( v5 == v4 )
      {
        CcNotifyWriteBehindEx(1, v3);
        PsDereferencePartition(v3);
        goto LABEL_7;
      }
    }
    if ( v4 )
      __fastfail(0xEu);
LABEL_7:
    if ( *(_QWORD *)(a1 + 6336) - *(_QWORD *)(a1 + 6448) >= 0x10uLL )
      KeSetEvent((PRKEVENT)(a1 + 776), 0, 0);
    if ( *(_QWORD *)(a1 + 6448) >= 0x10uLL )
      MiWakeModifiedPageWriter(a1, -1LL);
    if ( *(_BYTE *)(v1 + 106) )
      KeSetEvent((PRKEVENT)(v1 + 104), 0, 0);
  }
}
