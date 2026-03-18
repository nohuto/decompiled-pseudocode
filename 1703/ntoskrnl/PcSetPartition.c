/*
 * XREFs of PcSetPartition @ 0x1402685B0
 * Callers:
 *     IoSetPartitionInformation @ 0x140687240 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x1406872A0 (IoSetPartitionInformationEx.c)
 * Callees:
 *     ?Initialize@PC_DISK@@QEAAJPEAX@Z @ 0x1401620E8 (-Initialize@PC_DISK@@QEAAJPEAX@Z.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ?SetPartition@PC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1402683C4 (-SetPartition@PC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     PspQueueApcSpecialApc @ 0x14044FB60 (PspQueueApcSpecialApc.c)
 */

__int64 __fastcall PcSetPartition(struct _DEVICE_OBJECT *a1, unsigned int a2, struct _SET_PARTITION_INFORMATION_EX *a3)
{
  __int64 v6; // r8
  unsigned int v7; // r9d
  int v8; // ebx
  _BYTE v10[32]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]
  __int64 v14; // [rsp+50h] [rbp-18h]

  memset(v10, 0, sizeof(v10));
  v11 = 0LL;
  v12 = 0;
  v14 = 0LL;
  v13 = 2;
  v8 = PC_DISK::Initialize((PC_DISK *)v10, a1, v6, v7);
  if ( v8 >= 0 )
    v8 = PC_DISK::SetPartition((PC_DISK *)v10, a2, a3);
  if ( v14 )
    PspQueueApcSpecialApc(v14);
  return (unsigned int)v8;
}
