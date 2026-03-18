/*
 * XREFs of IopFreeReserveIrp @ 0x1402326E8
 * Callers:
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x140106E60 (IopFreeIrp.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x140232678 (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = (struct _KEVENT *)&word_1403C8270;
    _InterlockedExchange(&dword_1403C8268, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_1403C8288 )
  {
    v1 = (struct _KEVENT *)&word_1403C8298;
    _InterlockedExchange(&dword_1403C8290, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_1403C82B0 )
  {
    v1 = &stru_1403C82C0;
    _InterlockedExchange(&dword_1403C82B8, 0);
    return KeSetEvent(v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1);
}
