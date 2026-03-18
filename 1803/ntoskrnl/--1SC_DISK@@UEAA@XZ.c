/*
 * XREFs of ??1SC_DISK@@UEAA@XZ @ 0x14015D23C
 * Callers:
 *     ??_GSC_DISK@@UEAAPEAXI@Z @ 0x1402C8200 (--_GSC_DISK@@UEAAPEAXI@Z.c)
 *     IoVerifyPartitionTable @ 0x1405F1EB0 (IoVerifyPartitionTable.c)
 *     ??_ENT_DISK@@UEAAPEAXI@Z @ 0x140716F70 (--_ENT_DISK@@UEAAPEAXI@Z.c)
 *     IoCreateDisk @ 0x140717080 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x140717130 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x140717230 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x140717410 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x1407174C0 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x1407175B0 (IoSetPartitionInformationEx.c)
 *     IoWritePartitionTable @ 0x140717670 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x1407177E0 (IoWritePartitionTableEx.c)
 * Callees:
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x14015D5EC (--1SC_DEVICE@@UEAA@XZ.c)
 *     PspQueueApcSpecialApc @ 0x14052A140 (PspQueueApcSpecialApc.c)
 */

void __fastcall SC_DISK::~SC_DISK(SC_DISK *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  *(_QWORD *)this = &SC_DISK::`vftable';
  v2 = *((_QWORD *)this + 34);
  if ( v2 )
    PspQueueApcSpecialApc(v2);
  v3 = *((_QWORD *)this + 33);
  if ( v3 )
    PspQueueApcSpecialApc(v3);
  v4 = *((_QWORD *)this + 32);
  if ( v4 )
    PspQueueApcSpecialApc(v4);
  v5 = *((_QWORD *)this + 31);
  if ( v5 )
    PspQueueApcSpecialApc(v5);
  v6 = *((_QWORD *)this + 30);
  if ( v6 )
    PspQueueApcSpecialApc(v6);
  v7 = *((_QWORD *)this + 29);
  if ( v7 )
    PspQueueApcSpecialApc(v7);
  v8 = *((_QWORD *)this + 28);
  if ( v8 )
    PspQueueApcSpecialApc(v8);
  v9 = *((_QWORD *)this + 27);
  if ( v9 )
    PspQueueApcSpecialApc(v9);
  v10 = *((_QWORD *)this + 26);
  if ( v10 )
    PspQueueApcSpecialApc(v10);
  v11 = *((_QWORD *)this + 25);
  if ( v11 )
    PspQueueApcSpecialApc(v11);
  v12 = *((_QWORD *)this + 24);
  if ( v12 )
    PspQueueApcSpecialApc(v12);
  SC_DEVICE::~SC_DEVICE(this);
}
