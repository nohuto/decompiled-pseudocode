/*
 * XREFs of PcCreatePartitionTable @ 0x140268514
 * Callers:
 *     IoCreateDisk @ 0x1406870D0 (IoCreateDisk.c)
 * Callees:
 *     ?Initialize@PC_DISK@@QEAAJPEAX@Z @ 0x1401620E8 (-Initialize@PC_DISK@@QEAAJPEAX@Z.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ?CreatePartitionTable@PC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140268350 (-CreatePartitionTable@PC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     PspQueueApcSpecialApc @ 0x14044FB60 (PspQueueApcSpecialApc.c)
 */

__int64 __fastcall PcCreatePartitionTable(struct _DEVICE_OBJECT *a1, struct _CREATE_DISK *a2)
{
  __int64 v4; // r8
  unsigned int v5; // r9d
  int PartitionTable; // ebx
  _BYTE v8[32]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]
  __int64 v12; // [rsp+50h] [rbp-18h]

  memset(v8, 0, sizeof(v8));
  v9 = 0LL;
  v10 = 0;
  v12 = 0LL;
  v11 = 2;
  PartitionTable = PC_DISK::Initialize((PC_DISK *)v8, a1, v4, v5);
  if ( PartitionTable >= 0 )
    PartitionTable = PC_DISK::CreatePartitionTable((PC_DISK *)v8, a2);
  if ( v12 )
    PspQueueApcSpecialApc(v12);
  return (unsigned int)PartitionTable;
}
