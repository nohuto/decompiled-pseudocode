/*
 * XREFs of ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x1402C9E20
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x14015D5EC (--1SC_DEVICE@@UEAA@XZ.c)
 *     PspQueueApcSpecialApc @ 0x14052A140 (PspQueueApcSpecialApc.c)
 */

SC_DEVICE *__fastcall SC_DEVICE::`scalar deleting destructor'(SC_DEVICE *this, char a2)
{
  SC_DEVICE::~SC_DEVICE(this);
  if ( (a2 & 1) != 0 )
    PspQueueApcSpecialApc(this);
  return this;
}
