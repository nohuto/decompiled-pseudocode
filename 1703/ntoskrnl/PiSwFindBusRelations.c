/*
 * XREFs of PiSwFindBusRelations @ 0x140451004
 * Callers:
 *     PiSwFindChildren @ 0x140450FE0 (PiSwFindChildren.c)
 *     PiSwCloseDescendants @ 0x140570CFC (PiSwCloseDescendants.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14004C420 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PiSwFindBusRelations(__int128 *a1)
{
  __int128 Buffer; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_QWORD *)a1 + 1) )
    return 0LL;
  Buffer = *a1;
  return RtlLookupElementGenericTableAvl(&PiSwBusRelationsTable, &Buffer);
}
