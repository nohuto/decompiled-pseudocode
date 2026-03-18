/*
 * XREFs of ??1SC_DEVICE@@UEAA@XZ @ 0x140146D7C
 * Callers:
 *     ??1SC_DISK@@UEAA@XZ @ 0x140146AE4 (--1SC_DISK@@UEAA@XZ.c)
 *     ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x1402942D0 (--_GSC_DEVICE@@UEAAPEAXI@Z.c)
 * Callees:
 *     PspQueueApcSpecialApc @ 0x140453160 (PspQueueApcSpecialApc.c)
 */

void __fastcall SC_DEVICE::~SC_DEVICE(SC_DEVICE *this)
{
  *(_QWORD *)this = &SC_DEVICE::`vftable';
  if ( *((_QWORD *)this + 15) )
    PspQueueApcSpecialApc();
  if ( *((_QWORD *)this + 14) )
    PspQueueApcSpecialApc();
  if ( *((_QWORD *)this + 13) )
    PspQueueApcSpecialApc();
  if ( *((_QWORD *)this + 12) )
    PspQueueApcSpecialApc();
  if ( *((_QWORD *)this + 11) )
    PspQueueApcSpecialApc();
  if ( *((_QWORD *)this + 10) )
    PspQueueApcSpecialApc();
  if ( *((_QWORD *)this + 8) )
    PspQueueApcSpecialApc();
  if ( *((_QWORD *)this + 6) )
    PspQueueApcSpecialApc();
  if ( *((_QWORD *)this + 4) )
    PspQueueApcSpecialApc();
}
