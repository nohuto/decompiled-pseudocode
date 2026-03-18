/*
 * XREFs of IopFreeBackpocketIrp @ 0x1401EFA50
 * Callers:
 *     IopFreeReserveIrp @ 0x1401EFAB8 (IopFreeReserveIrp.c)
 * Callees:
 *     <none>
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1)
{
  __int16 *v1; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    qword_140368EE8 = 0LL;
    _InterlockedExchange(&dword_140368EE0, 0);
    v1 = &word_140368EF0;
    return KeSetEvent((PRKEVENT)v1, 1, 0);
  }
  if ( a1 == qword_140368F08 )
  {
    qword_140368F18 = 0LL;
    _InterlockedExchange(&dword_140368F10, 0);
    v1 = &word_140368F20;
    return KeSetEvent((PRKEVENT)v1, 1, 0);
  }
  result = (int)qword_140368F38;
  *(_QWORD *)&a1->Type = qword_140368F38;
  qword_140368F38 = a1;
  return result;
}
