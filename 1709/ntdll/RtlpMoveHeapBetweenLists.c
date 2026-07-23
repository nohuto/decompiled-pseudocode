/*
 * XREFs of RtlpMoveHeapBetweenLists @ 0x18004C75C
 * Callers:
 *     RtlpHpMetadataHeapInit @ 0x1800036A0 (RtlpHpMetadataHeapInit.c)
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 *     RtlProtectHeap @ 0x18004C5A0 (RtlProtectHeap.c)
 *     RtlDestroyHeap @ 0x1800610F0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpAddHeapToUnprotectedList @ 0x18004C864 (RtlpAddHeapToUnprotectedList.c)
 *     RtlpRemoveHeapFromUnprotectedList @ 0x18007AC80 (RtlpRemoveHeapFromUnprotectedList.c)
 *     RtlpRemoveHeapFromProtectedList @ 0x18007E2B8 (RtlpRemoveHeapFromProtectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x18007FA7C (RtlpAddHeapToProtectedList.c)
 */

NTSTATUS __fastcall RtlpMoveHeapBetweenLists(__int64 a1, int a2, int a3, int a4)
{
  int v8; // edi
  int v9; // ebx
  NTSTATUS result; // eax

  if ( !a4 )
    result = RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  if ( a2 )
  {
    v8 = a2 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
        result = RtlpRemoveHeapFromProtectedList(a1);
    }
    else
    {
      result = RtlpRemoveHeapFromUnprotectedList(a1);
    }
  }
  if ( a3 )
  {
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
        result = RtlpAddHeapToProtectedList(a1);
    }
    else
    {
      result = RtlpAddHeapToUnprotectedList(a1);
    }
  }
  if ( !a4 )
    return RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  return result;
}
