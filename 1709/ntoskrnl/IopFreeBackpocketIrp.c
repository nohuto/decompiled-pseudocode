/*
 * XREFs of IopFreeBackpocketIrp @ 0x1401F5144
 * Callers:
 *     IopFreeReserveIrp @ 0x1401F51B4 (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    qword_140384F28 = 0LL;
    _InterlockedExchange(&dword_140384F20, 0);
    v1 = (struct _KEVENT *)&word_140384F30;
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140384F48 )
  {
    qword_140384F58 = 0LL;
    _InterlockedExchange(&dword_140384F50, 0);
    v1 = &stru_140384F60;
    return KeSetEvent(v1, 1, 0);
  }
  result = (int)qword_140384F78;
  *(_QWORD *)&a1->Type = qword_140384F78;
  qword_140384F78 = a1;
  return result;
}
