/*
 * XREFs of IopFreeReserveIrp @ 0x1401F51B4
 * Callers:
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x1400853D0 (IopFreeIrp.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x1401F5144 (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = (struct _KEVENT *)&word_140384EB0;
    _InterlockedExchange(&dword_140384EA8, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140384EC8 )
  {
    v1 = (struct _KEVENT *)&word_140384ED8;
    _InterlockedExchange(&dword_140384ED0, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140384EF0 )
  {
    v1 = &stru_140384F00;
    _InterlockedExchange(&dword_140384EF8, 0);
    return KeSetEvent(v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1);
}
