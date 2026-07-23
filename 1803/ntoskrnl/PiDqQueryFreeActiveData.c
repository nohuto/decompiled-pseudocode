/*
 * XREFs of PiDqQueryFreeActiveData @ 0x140573470
 * Callers:
 *     PiDqIrpQueryCreate @ 0x140523298 (PiDqIrpQueryCreate.c)
 *     PiDqIrpQueryGetResult @ 0x140523AD4 (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14056BD98 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryAppendActionEntry @ 0x14056C100 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryRelease @ 0x1405733F8 (PiDqQueryRelease.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1405DD500 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x1405DD894 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x14006E530 (RtlIsGenericTableEmptyAvl.c)
 *     PiDqQueryActionQueueEntryFree @ 0x14050D608 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x14050D648 (PiDqActionDataFree.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140573508 (PiDqQueryDeleteObjectFromResultSet.c)
 */

void __fastcall PiDqQueryFreeActiveData(__int64 a1)
{
  _RTL_AVL_TABLE *i; // rcx
  _QWORD **v3; // rdi
  _QWORD *v4; // rcx
  void *v5; // rcx
  _QWORD *v6; // rax

  for ( i = (_RTL_AVL_TABLE *)(a1 + 72); !RtlIsGenericTableEmptyAvl(i); i = (_RTL_AVL_TABLE *)(a1 + 72) )
    PiDqQueryDeleteObjectFromResultSet(a1, *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL));
  v3 = (_QWORD **)(a1 + 192);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v6 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v6;
    v6[1] = v3;
    PiDqQueryActionQueueEntryFree(v4);
  }
  *(_DWORD *)(a1 + 208) = 0;
  v5 = *(void **)(a1 + 184);
  if ( v5 )
  {
    PiDqActionDataFree(v5);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
}
