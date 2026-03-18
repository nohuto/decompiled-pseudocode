/*
 * XREFs of ?WritePartitionTable@PC_DISK@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14026842C
 * Callers:
 *     PcWritePartitionTable @ 0x14026865C (PcWritePartitionTable.c)
 * Callees:
 *     ?Initialize@PC_MBR@@QEAAXPEAVPC_DISK@@@Z @ 0x140161F30 (-Initialize@PC_MBR@@QEAAXPEAVPC_DISK@@@Z.c)
 *     ?Reset@PC_DISK@@QEAAJXZ @ 0x1401621A4 (-Reset@PC_DISK@@QEAAJXZ.c)
 *     ?CreatePartitionTable@PC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140268350 (-CreatePartitionTable@PC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140268A20 (-WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1402694B0 (-WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 */

__int64 __fastcall PC_DISK::WritePartitionTable(PC_DISK *this, struct _DRIVE_LAYOUT_INFORMATION_EX *a2)
{
  int v3; // edx
  int v5; // eax
  struct _CREATE_DISK v8; // [rsp+20h] [rbp-28h] BYREF
  PC_DISK *v9; // [rsp+50h] [rbp+8h] BYREF

  v8.PartitionStyle = PARTITION_STYLE_RAW;
  memset(&v8.Mbr, 0, 20);
  v3 = 0;
  if ( *((_DWORD *)this + 11) != 2
    || (v8.PartitionStyle = a2->PartitionStyle, v3 = PC_DISK::CreatePartitionTable(this, &v8), v3 >= 0)
    && (v3 = PC_DISK::Reset(this), v3 >= 0) )
  {
    if ( a2->PartitionStyle )
    {
      if ( a2->PartitionStyle == 1 )
      {
        v5 = *((_DWORD *)this + 11);
        a2->Gpt.MaxPartitionCount = 0;
        v9 = this;
        return (unsigned int)PC_GPT::WritePartitionTable((PC_GPT *)&v9, a2, v5 != 1);
      }
    }
    else
    {
      if ( !*((_DWORD *)this + 11)
        || a2->PartitionCount == 4
        && a2->PartitionEntry[0].Mbr.PartitionType == 0xEE
        && !LOBYTE(a2[1].Gpt.UsableLength.LowPart)
        && !LOBYTE(a2[1].PartitionEntry[0].Gpt.Name[28])
        && !LOBYTE(a2[2].PartitionEntry[0].Gpt.Name[4]) )
      {
        PC_MBR::Initialize((PC_MBR *)&v9, this);
        return (unsigned int)PC_MBR::WritePartitionTable((PC_MBR *)&v9, a2);
      }
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v3;
}
