/*
 * XREFs of ?SetPartition@PC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1402683C4
 * Callers:
 *     PcSetPartition @ 0x1402685B0 (PcSetPartition.c)
 * Callees:
 *     ?Initialize@PC_MBR@@QEAAXPEAVPC_DISK@@@Z @ 0x140161F30 (-Initialize@PC_MBR@@QEAAXPEAVPC_DISK@@@Z.c)
 *     ?SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140268934 (-SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?SetPartition@PC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140269138 (-SetPartition@PC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 */

__int64 __fastcall PC_DISK::SetPartition(PC_DISK *this, unsigned int a2, struct _SET_PARTITION_INFORMATION_EX *a3)
{
  int v3; // r9d
  struct _SET_PARTITION_INFORMATION_EX *v5; // r10
  unsigned int v6; // r11d
  PC_DISK *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 11);
  if ( v3 != a3->PartitionStyle )
    return 3221225485LL;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      v7 = this;
      return PC_GPT::SetPartition((PC_GPT *)&v7, a2, a3);
    }
    else
    {
      return 3221225659LL;
    }
  }
  else
  {
    PC_MBR::Initialize((PC_MBR *)&v7, this);
    return PC_MBR::SetPartition((PC_MBR *)&v7, v6, v5);
  }
}
