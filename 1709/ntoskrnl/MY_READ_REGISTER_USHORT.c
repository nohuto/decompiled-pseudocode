/*
 * XREFs of MY_READ_REGISTER_USHORT @ 0x1401075D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT __stdcall MY_READ_REGISTER_USHORT(PSLIST_HEADER SListHead)
{
  return SListHead->Alignment;
}
