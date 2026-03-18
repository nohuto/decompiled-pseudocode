/*
 * XREFs of PiSwFindBusRelations @ 0x1405CDC48
 * Callers:
 *     PiSwCloseDescendants @ 0x1405C8F18 (PiSwCloseDescendants.c)
 *     PiSwFindChildren @ 0x1405CDC24 (PiSwFindChildren.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14006DE30 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PiSwFindBusRelations(__int128 *a1)
{
  __int128 Buffer; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_QWORD *)a1 + 1) )
    return 0LL;
  Buffer = *a1;
  return RtlLookupElementGenericTableAvl(&PiSwBusRelationsTable, &Buffer);
}
