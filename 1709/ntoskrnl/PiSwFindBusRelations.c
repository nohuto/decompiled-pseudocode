/*
 * XREFs of PiSwFindBusRelations @ 0x140553A48
 * Callers:
 *     PiSwFindChildren @ 0x140553A24 (PiSwFindChildren.c)
 *     PiSwCloseDescendants @ 0x14055E718 (PiSwCloseDescendants.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400DF250 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PiSwFindBusRelations(__int128 *a1)
{
  __int128 Buffer; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_QWORD *)a1 + 1) )
    return 0LL;
  Buffer = *a1;
  return RtlLookupElementGenericTableAvl(&PiSwBusRelationsTable, &Buffer);
}
