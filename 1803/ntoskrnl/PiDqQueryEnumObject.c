/*
 * XREFs of PiDqQueryEnumObject @ 0x1404FDAD4
 * Callers:
 *     PiDqEnumQueryObjectsCallback @ 0x1404FDAB0 (PiDqEnumQueryObjectsCallback.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14056BD98 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     PiPnpRtlApplyMandatoryFilters @ 0x1405017B8 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryEvaluateFilter @ 0x14050AAEC (PiDqQueryEvaluateFilter.c)
 *     PiDqQueryAppendActionEntry @ 0x14056C100 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14056C150 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryAddObjectToResultSet @ 0x14057CA24 (PiDqQueryAddObjectToResultSet.c)
 */

__int64 __fastcall PiDqQueryEnumObject(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int AddObjectToResultSet; // ebx
  char v6; // al
  char v7; // al
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  AddObjectToResultSet = 0;
  LOBYTE(v9) = 1;
  if ( *(_DWORD *)(v2 + 20) )
    goto LABEL_12;
  if ( (unsigned int)(*(_DWORD *)(v2 + 16) - 1) > 2 )
  {
    v6 = 1;
    LOBYTE(v9) = 1;
  }
  else
  {
    AddObjectToResultSet = PiPnpRtlApplyMandatoryFilters(
                             PiPnpRtlCtx,
                             *(_QWORD *)(a2 + 16),
                             *(_DWORD *)(a2 + 28),
                             0,
                             (unsigned __int8)a1 + 32,
                             (__int64)&v9);
    v6 = v9;
  }
  if ( AddObjectToResultSet == -1073741772 || AddObjectToResultSet == -1073741275 )
  {
    v6 = 0;
    LOBYTE(v9) = 0;
    AddObjectToResultSet = 0;
  }
  if ( AddObjectToResultSet >= 0 && v6 )
  {
LABEL_12:
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL)
      || ((AddObjectToResultSet = PiDqQueryEvaluateFilter(a1, *(_QWORD *)(a2 + 16), &v9),
           AddObjectToResultSet == -1073741772)
        ? (v7 = 0, AddObjectToResultSet = 0)
        : (v7 = v9),
          AddObjectToResultSet >= 0 && v7) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 40LL) & 1) == 0
        || (AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, a2), AddObjectToResultSet >= 0) )
      {
        AddObjectToResultSet = PiDqQueryActionQueueEntryCreate(1LL, a2, 0LL, &v9);
        if ( AddObjectToResultSet >= 0 )
          PiDqQueryAppendActionEntry(a1, v9);
      }
    }
  }
  return (unsigned int)AddObjectToResultSet;
}
