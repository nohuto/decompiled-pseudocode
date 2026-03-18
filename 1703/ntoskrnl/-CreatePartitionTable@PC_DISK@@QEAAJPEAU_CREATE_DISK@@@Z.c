/*
 * XREFs of ?CreatePartitionTable@PC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140268350
 * Callers:
 *     ?WritePartitionTable@PC_DISK@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14026842C (-WritePartitionTable@PC_DISK@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     PcCreatePartitionTable @ 0x140268514 (PcCreatePartitionTable.c)
 * Callees:
 *     ?Initialize@PC_MBR@@QEAAXPEAVPC_DISK@@@Z @ 0x140161F30 (-Initialize@PC_MBR@@QEAAXPEAVPC_DISK@@@Z.c)
 *     ?CreatePartitionTable@PC_RAW@@QEAAJXZ @ 0x140268704 (-CreatePartitionTable@PC_RAW@@QEAAJXZ.c)
 *     ?CreatePartitionTable@PC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140268884 (-CreatePartitionTable@PC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?CreatePartitionTable@PC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140268C58 (-CreatePartitionTable@PC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 */

__int64 __fastcall PC_DISK::CreatePartitionTable(PC_DISK *this, struct _CREATE_DISK *a2)
{
  PARTITION_STYLE PartitionStyle; // r8d
  __int32 v3; // r8d
  struct _CREATE_DISK *v5; // r9
  PC_DISK *v6; // [rsp+38h] [rbp+10h] BYREF

  PartitionStyle = PARTITION_STYLE_RAW;
  if ( a2 )
    PartitionStyle = a2->PartitionStyle;
  if ( PartitionStyle )
  {
    v3 = PartitionStyle - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v6 = this;
        return PC_RAW::CreatePartitionTable((PC_RAW *)&v6);
      }
      else
      {
        return 3221225659LL;
      }
    }
    else
    {
      v6 = this;
      return PC_GPT::CreatePartitionTable((PC_GPT *)&v6, a2);
    }
  }
  else
  {
    PC_MBR::Initialize((PC_MBR *)&v6, this);
    return PC_MBR::CreatePartitionTable((PC_MBR *)&v6, v5);
  }
}
