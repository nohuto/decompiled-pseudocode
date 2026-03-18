/*
 * XREFs of ?SetPartition@PC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140269138
 * Callers:
 *     ?SetPartition@PC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1402683C4 (-SetPartition@PC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140268EC4 (-ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1402694B0 (-WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 *     PspQueueApcSpecialApc @ 0x14044FB60 (PspQueueApcSpecialApc.c)
 */

__int64 __fastcall PC_GPT::SetPartition(PC_DISK **this, int a2, struct _SET_PARTITION_INFORMATION_EX *a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  struct _DRIVE_LAYOUT_INFORMATION_EX *v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  struct _DRIVE_LAYOUT_INFORMATION_EX *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  if ( a2 )
  {
    v7 = PC_GPT::ReadPartitionTable(this, &v12);
    v8 = v12;
    v6 = v7;
    if ( v7 >= 0 )
    {
      v9 = (unsigned int)(a2 - 1);
      if ( (unsigned int)v9 < v12->PartitionCount )
      {
        v10 = v9;
        *(_OWORD *)&v12->PartitionEntry[v10].Mbr.PartitionType = *(_OWORD *)&a3->Mbr.PartitionType;
        v8->PartitionEntry[v10].Gpt.PartitionId = a3->Gpt.PartitionId;
        v8->PartitionEntry[v10].Gpt.Attributes = a3->Gpt.Attributes;
        *(_OWORD *)v8->PartitionEntry[v10].Gpt.Name = *(_OWORD *)a3->Gpt.Name;
        *(_OWORD *)&v8->PartitionEntry[v10].Gpt.Name[8] = *(_OWORD *)&a3->Gpt.Name[8];
        *(_OWORD *)&v8->PartitionEntry[v10].Gpt.Name[16] = *(_OWORD *)&a3->Gpt.Name[16];
        *(_OWORD *)&v8->PartitionEntry[v10].Gpt.Name[24] = *(_OWORD *)&a3->Gpt.Name[24];
        *(_QWORD *)&v8->PartitionEntry[v10].Gpt.Name[32] = *(_QWORD *)&a3->Gpt.Name[32];
        v6 = PC_GPT::WritePartitionTable((PC_GPT *)this, v8, 0);
      }
      else
      {
        v6 = -1073741811;
      }
    }
    if ( v8 )
      PspQueueApcSpecialApc(v8);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
