/*
 * XREFs of PiDqQueryFreeActiveData @ 0x1404B8D48
 * Callers:
 *     PiDqIrpQueryGetResult @ 0x1404B80E4 (PiDqIrpQueryGetResult.c)
 *     PiDqQueryApplyObjectEvent @ 0x1404B83D4 (PiDqQueryApplyObjectEvent.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1404B8940 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryRelease @ 0x1404B8DE0 (PiDqQueryRelease.c)
 *     PiDqIrpQueryCreate @ 0x1404B9328 (PiDqIrpQueryCreate.c)
 *     PiDqQueryAppendActionEntry @ 0x1404BD794 (PiDqQueryAppendActionEntry.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1404BDCE4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x14004CBB0 (RtlIsGenericTableEmptyAvl.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1404B64A8 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1404B993C (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x1404B997C (PiDqActionDataFree.c)
 */

BOOLEAN __fastcall PiDqQueryFreeActiveData(__int64 a1)
{
  _RTL_AVL_TABLE *i; // rcx
  BOOLEAN result; // al
  __int64 **v4; // rbx
  __int64 v5; // rax

  for ( i = (_RTL_AVL_TABLE *)(a1 + 72); ; i = (_RTL_AVL_TABLE *)(a1 + 72) )
  {
    result = RtlIsGenericTableEmptyAvl(i);
    if ( result )
      break;
    PiDqQueryDeleteObjectFromResultSet(a1, *(unsigned int **)(*(_QWORD *)(a1 + 88) + 32LL));
  }
  v4 = (__int64 **)(a1 + 192);
  while ( *v4 != (__int64 *)v4 )
  {
    v5 = **v4;
    if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v5 + 8) != *v4 )
      __fastfail(3u);
    *v4 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v4;
    result = PiDqQueryActionQueueEntryFree();
  }
  *(_DWORD *)(a1 + 208) = 0;
  if ( *(_QWORD *)(a1 + 184) )
  {
    result = PiDqActionDataFree();
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  return result;
}
