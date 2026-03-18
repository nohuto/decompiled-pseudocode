/*
 * XREFs of ??_GSC_DISK@@UEAAPEAXI@Z @ 0x1402C8200
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DISK@@UEAA@XZ @ 0x14015D23C (--1SC_DISK@@UEAA@XZ.c)
 *     PspQueueApcSpecialApc @ 0x14052A140 (PspQueueApcSpecialApc.c)
 */

SC_DISK *__fastcall SC_DISK::`scalar deleting destructor'(SC_DISK *this, char a2)
{
  SC_DISK::~SC_DISK(this);
  if ( (a2 & 1) != 0 )
    PspQueueApcSpecialApc(this);
  return this;
}
