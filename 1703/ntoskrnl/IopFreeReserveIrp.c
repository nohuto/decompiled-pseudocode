/*
 * XREFs of IopFreeReserveIrp @ 0x1401EFAB8
 * Callers:
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x1400F11C0 (IopFreeIrp.c)
 * Callees:
 *     <none>
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  __int16 *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = &word_140368E70;
    _InterlockedExchange(&dword_140368E68, 0);
    return KeSetEvent((PRKEVENT)v1, 1, 0);
  }
  if ( a1 == qword_140368E88 )
  {
    v1 = &word_140368E98;
    _InterlockedExchange(&dword_140368E90, 0);
    return KeSetEvent((PRKEVENT)v1, 1, 0);
  }
  if ( a1 == qword_140368EB0 )
  {
    v1 = &word_140368EC0;
    _InterlockedExchange(&dword_140368EB8, 0);
    return KeSetEvent((PRKEVENT)v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1);
}
