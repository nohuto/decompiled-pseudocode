/*
 * XREFs of ??1SC_DISK@@UEAA@XZ @ 0x140146AE4
 * Callers:
 *     ??_GSC_DISK@@UEAAPEAXI@Z @ 0x1402926C0 (--_GSC_DISK@@UEAAPEAXI@Z.c)
 *     IoVerifyPartitionTable @ 0x1405C9300 (IoVerifyPartitionTable.c)
 *     ??_ENT_DISK@@UEAAPEAXI@Z @ 0x1406B24A0 (--_ENT_DISK@@UEAAPEAXI@Z.c)
 *     IoCreateDisk @ 0x1406B25B0 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x1406B2660 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x1406B2760 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x1406B2940 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x1406B29F0 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x1406B2AE0 (IoSetPartitionInformationEx.c)
 *     IoWritePartitionTable @ 0x1406B2BA0 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x1406B2D10 (IoWritePartitionTableEx.c)
 * Callees:
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x140146D7C (--1SC_DEVICE@@UEAA@XZ.c)
 *     PspQueueApcSpecialApc @ 0x140453160 (PspQueueApcSpecialApc.c)
 */

void __fastcall SC_DISK::~SC_DISK(SC_DISK *this)
{
  *(_QWORD *)this = &SC_DISK::`vftable';
  if ( *((_QWORD *)this + 34) )
    PspQueueApcSpecialApc();
  if ( *((_QWORD *)this + 33) )
    PspQueueApcSpecialApc();
  if ( *((_QWORD *)this + 32) )
    PspQueueApcSpecialApc();
  if ( *((_QWORD *)this + 31) )
    PspQueueApcSpecialApc();
  if ( *((_QWORD *)this + 30) )
    PspQueueApcSpecialApc();
  if ( *((_QWORD *)this + 29) )
    PspQueueApcSpecialApc();
  if ( *((_QWORD *)this + 28) )
    PspQueueApcSpecialApc();
  if ( *((_QWORD *)this + 27) )
    PspQueueApcSpecialApc();
  if ( *((_QWORD *)this + 26) )
    PspQueueApcSpecialApc();
  if ( *((_QWORD *)this + 25) )
    PspQueueApcSpecialApc();
  if ( *((_QWORD *)this + 24) )
    PspQueueApcSpecialApc();
  SC_DEVICE::~SC_DEVICE(this);
}
