/*
 * XREFs of MiDereferenceSegmentThread @ 0x14014B2F0
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     MiDeleteEmptySubsections @ 0x1401256C8 (MiDeleteEmptySubsections.c)
 *     MiFreeClonePool @ 0x14012BE94 (MiFreeClonePool.c)
 *     MiProcessDereferenceList @ 0x14014B46C (MiProcessDereferenceList.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     CcUnmapInactiveViews @ 0x1401E1A30 (CcUnmapInactiveViews.c)
 *     MiDeleteCachedSegment @ 0x14021083C (MiDeleteCachedSegment.c)
 *     MiDeleteControlAreaList @ 0x140210E3C (MiDeleteControlAreaList.c)
 *     MiProcessDeleteOnClose @ 0x1402113D0 (MiProcessDeleteOnClose.c)
 *     MiRemoveUnusedSegments @ 0x1402118EC (MiRemoveUnusedSegments.c)
 */

ULONG_PTR *__fastcall MiDereferenceSegmentThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS v3; // ebx
  __int64 v4; // rdx
  ULONG_PTR *result; // rax
  PVOID Object[8]; // [rsp+40h] [rbp-1E8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-1A8h] BYREF

  *(_BYTE *)(a1 + 1609) = 1;
  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 19);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  Object[0] = (PVOID)(a1 + 104);
  Object[2] = (PVOID)(a1 + 1448);
  Object[1] = (PVOID)(a1 + 1304);
  Object[4] = (PVOID)(a1 + 1544);
  Object[3] = (PVOID)(a1 + 1328);
  Object[5] = (PVOID)(a1 + 1672);
  Object[6] = (PVOID)(a1 + 1728);
  Object[7] = &stru_140388960;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v3 = KeWaitForMultipleObjects(
               8 - (&MiSystemPartition != (ULONG_PTR *)a1),
               Object,
               WaitAny,
               WrVirtualMemory,
               0,
               0,
               0LL,
               &WaitBlockArray);
        if ( v3 != 1 )
          MiDeleteEmptySubsections(a1);
        if ( !v3 )
          break;
        switch ( v3 )
        {
          case 1:
            KeResetEvent((PRKEVENT)(a1 + 1304));
            MiDeleteEmptySubsections(a1);
            break;
          case 2:
            MiProcessDereferenceList(a1, 1LL);
            break;
          case 3:
            goto LABEL_21;
          case 4:
            MiProcessDeleteOnClose(a1, 0LL);
            break;
          case 5:
            MiDeleteControlAreaList(a1);
            break;
          case 6:
            KeResetEvent((PRKEVENT)(a1 + 1728));
            MiFreeClonePool((_SLIST_HEADER *)a1);
            break;
          case 7:
            KeResetEvent(&stru_140388960);
            while ( (unsigned int)CcUnmapInactiveViews(0LL, v4, 1LL, 0LL)
                 && (unsigned __int64)qword_140388608 <= 0x8000000 )
              ;
            break;
        }
      }
LABEL_21:
      KeResetEvent((PRKEVENT)(a1 + 1328));
      if ( !v3 )
        break;
      MiRemoveUnusedSegments(a1, 0LL);
    }
    while ( *(_QWORD *)(a1 + 1624) != a1 + 1624 && (unsigned int)MiDeleteCachedSegment(a1) )
      ;
    MiProcessDeleteOnClose(a1, 1LL);
    MiDeleteControlAreaList(a1);
    result = &MiSystemPartition;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      return result;
    result = *(ULONG_PTR **)(a1 + 1288);
    if ( !result )
      return result;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
}
