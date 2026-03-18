/*
 * XREFs of PcWritePartitionTable @ 0x14026865C
 * Callers:
 *     IoWritePartitionTable @ 0x1406872C0 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x1406873B0 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?Initialize@PC_DISK@@QEAAJPEAX@Z @ 0x1401620E8 (-Initialize@PC_DISK@@QEAAJPEAX@Z.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ?WritePartitionTable@PC_DISK@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14026842C (-WritePartitionTable@PC_DISK@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     PspQueueApcSpecialApc @ 0x14044FB60 (PspQueueApcSpecialApc.c)
 */

__int64 __fastcall PcWritePartitionTable(struct _DEVICE_OBJECT *a1, struct _DRIVE_LAYOUT_INFORMATION_EX *a2)
{
  __int64 v4; // r8
  unsigned int v5; // r9d
  bool v6; // cf
  int v7; // ebx
  _BYTE v9[32]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+4Ch] [rbp-1Ch]
  __int64 v13; // [rsp+50h] [rbp-18h]

  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  v11 = 0;
  v13 = 0LL;
  v6 = a2->PartitionStyle < 2;
  v12 = 2;
  if ( v6 )
  {
    v7 = PC_DISK::Initialize((PC_DISK *)v9, a1, v4, v5);
    if ( v7 >= 0 )
      v7 = PC_DISK::WritePartitionTable((PC_DISK *)v9, a2);
    if ( v13 )
      PspQueueApcSpecialApc(v13);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v7;
}
