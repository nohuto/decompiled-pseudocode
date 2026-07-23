/*
 * XREFs of MiDereferenceSegmentThread @ 0x1401611B0
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeClonePool @ 0x140004ABC (MiFreeClonePool.c)
 *     MiDeleteEmptySubsections @ 0x140029CD4 (MiDeleteEmptySubsections.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     MiProcessDereferenceList @ 0x14013A7D0 (MiProcessDereferenceList.c)
 *     MiRemoveUnusedSegments @ 0x140161338 (MiRemoveUnusedSegments.c)
 *     CcUnmapInactiveViews @ 0x1401613C4 (CcUnmapInactiveViews.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiDeleteCachedSegment @ 0x140209CC8 (MiDeleteCachedSegment.c)
 *     MiDeleteControlAreaList @ 0x14020A2CC (MiDeleteControlAreaList.c)
 *     MiProcessDeleteOnClose @ 0x14020A790 (MiProcessDeleteOnClose.c)
 */

ULONG_PTR *__fastcall MiDereferenceSegmentThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  ULONG_PTR *result; // rax
  PVOID Object[8]; // [rsp+40h] [rbp-1E8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-1A8h] BYREF

  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 19);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  Object[0] = (PVOID)(a1 + 136);
  Object[2] = (PVOID)(a1 + 1424);
  Object[1] = (PVOID)(a1 + 1368);
  Object[4] = (PVOID)(a1 + 1488);
  Object[3] = (PVOID)(a1 + 1392);
  Object[5] = (PVOID)(a1 + 1608);
  Object[6] = (PVOID)(a1 + 1664);
  Object[7] = &stru_14036C5D8;
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
            KeResetEvent((PRKEVENT)(a1 + 1368));
            MiDeleteEmptySubsections(a1);
            break;
          case 2:
            MiProcessDereferenceList(a1);
            break;
          case 3:
            goto LABEL_10;
          case 4:
            MiProcessDeleteOnClose(a1, 0LL);
            break;
          case 5:
            MiDeleteControlAreaList(a1);
            break;
          case 6:
            KeResetEvent((PRKEVENT)(a1 + 1664));
            MiFreeClonePool((_SLIST_HEADER *)a1);
            break;
          case 7:
            KeResetEvent(&stru_14036C5D8);
            while ( (unsigned int)CcUnmapInactiveViews(v5, v4, 1LL, 0LL)
                 && (unsigned __int64)qword_14036C2C8 <= 0x8000000 )
              ;
            break;
        }
      }
LABEL_10:
      KeResetEvent((PRKEVENT)(a1 + 1392));
      if ( !v3 )
        break;
      MiRemoveUnusedSegments(a1);
    }
    while ( *(_QWORD *)(a1 + 1560) != a1 + 1560 && (unsigned int)MiDeleteCachedSegment(a1) )
      ;
    MiProcessDeleteOnClose(a1, 1LL);
    MiDeleteControlAreaList(a1);
    result = &MiSystemPartition;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      return result;
    result = *(ULONG_PTR **)(a1 + 1352);
    if ( !result )
      return result;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
}
