/*
 * XREFs of IopFreeBackpocketIrp @ 0x140232678
 * Callers:
 *     IopFreeReserveIrp @ 0x1402326E8 (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    qword_1403C82E8 = 0LL;
    _InterlockedExchange(&dword_1403C82E0, 0);
    v1 = (struct _KEVENT *)&word_1403C82F0;
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_1403C8308 )
  {
    qword_1403C8318 = 0LL;
    _InterlockedExchange(&dword_1403C8310, 0);
    v1 = &stru_1403C8320;
    return KeSetEvent(v1, 1, 0);
  }
  result = (int)qword_1403C8338;
  *(_QWORD *)&a1->Type = qword_1403C8338;
  qword_1403C8338 = a1;
  return result;
}
