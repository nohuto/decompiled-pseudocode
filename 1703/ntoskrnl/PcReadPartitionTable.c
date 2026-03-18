/*
 * XREFs of PcReadPartitionTable @ 0x140161FCC
 * Callers:
 *     IoReadDiskSignature @ 0x1405C2490 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x1406870E0 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x140687230 (IoReadPartitionTableEx.c)
 * Callees:
 *     ?Initialize@PC_DISK@@QEAAJPEAX@Z @ 0x1401620E8 (-Initialize@PC_DISK@@QEAAJPEAX@Z.c)
 *     ?ReadPartitionTable@PC_DISK@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140162218 (-ReadPartitionTable@PC_DISK@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PspQueueApcSpecialApc @ 0x14044FB60 (PspQueueApcSpecialApc.c)
 */

__int64 __fastcall PcReadPartitionTable(void *a1, struct _DRIVE_LAYOUT_INFORMATION_EX **a2)
{
  int PartitionTable; // ebx
  _BYTE v6[32]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  __int64 v10; // [rsp+50h] [rbp-18h]

  memset(v6, 0, sizeof(v6));
  v7 = 0LL;
  v8 = 0;
  v10 = 0LL;
  *a2 = 0LL;
  v9 = 2;
  PartitionTable = PC_DISK::Initialize((PC_DISK *)v6, a1);
  if ( PartitionTable >= 0 )
    PartitionTable = PC_DISK::ReadPartitionTable((PC_DISK *)v6, a2);
  if ( v10 )
    PspQueueApcSpecialApc(v10);
  return (unsigned int)PartitionTable;
}
