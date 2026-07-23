/*
 * XREFs of PiDqQueryFreeActiveData @ 0x14054CF70
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x14054C2A0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqIrpQueryCreate @ 0x14054C90C (PiDqIrpQueryCreate.c)
 *     PiDqQueryRelease @ 0x14054CEF8 (PiDqQueryRelease.c)
 *     PiDqQueryApplyObjectEvent @ 0x14054D08C (PiDqQueryApplyObjectEvent.c)
 *     PiDqIrpQueryGetResult @ 0x14054D9E8 (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140580700 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryAppendActionEntry @ 0x140580A48 (PiDqQueryAppendActionEntry.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x1400DFA40 (RtlIsGenericTableEmptyAvl.c)
 *     PiDqQueryActionQueueEntryFree @ 0x14052DF28 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x14052E114 (PiDqActionDataFree.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x14059EF20 (PiDqQueryDeleteObjectFromResultSet.c)
 */

void __fastcall PiDqQueryFreeActiveData(__int64 a1)
{
  _RTL_AVL_TABLE *i; // rcx
  __int64 v3; // rbx
  void *v4; // rcx
  _QWORD *v5; // rcx
  __int64 v6; // rax

  for ( i = (_RTL_AVL_TABLE *)(a1 + 72); !RtlIsGenericTableEmptyAvl(i); i = (_RTL_AVL_TABLE *)(a1 + 72) )
    PiDqQueryDeleteObjectFromResultSet(a1, *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL));
  v3 = a1 + 192;
  while ( *(_QWORD *)v3 != v3 )
  {
    v5 = *(_QWORD **)v3;
    if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *(_QWORD *)v3 = v6;
    *(_QWORD *)(v6 + 8) = v3;
    PiDqQueryActionQueueEntryFree(v5);
  }
  *(_DWORD *)(a1 + 208) = 0;
  v4 = *(void **)(a1 + 184);
  if ( v4 )
  {
    PiDqActionDataFree(v4);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
}
