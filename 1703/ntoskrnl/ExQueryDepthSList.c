/*
 * XREFs of ExQueryDepthSList @ 0x14000DB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT __stdcall ExQueryDepthSList(PSLIST_HEADER SListHead)
{
  return SListHead->Alignment;
}
