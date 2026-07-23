/*
 * XREFs of ?SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140268934
 * Callers:
 *     ?SetPartition@PC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1402683C4 (-SetPartition@PC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140161C58 (-ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?Reset@PC_DISK@@QEAAJXZ @ 0x1401621A4 (-Reset@PC_DISK@@QEAAJXZ.c)
 *     ?WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140268A20 (-WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     PspQueueApcSpecialApc @ 0x14044FB60 (PspQueueApcSpecialApc.c)
 */

__int64 __fastcall PC_MBR::SetPartition(PC_DISK **this, int a2, struct _SET_PARTITION_INFORMATION_EX *a3)
{
  int v3; // r14d
  WCHAR *v4; // rbp
  int v8; // ebx
  int v9; // eax
  struct _DRIVE_LAYOUT_INFORMATION_EX *v10; // rdi
  DWORD PartitionCount; // r8d
  DWORD v12; // ecx
  _PARTITION_INFORMATION_EX::$41520227951B374488E85ABED149FDD2 *p_Mbr; // rdx
  int v14; // r9d
  struct _DRIVE_LAYOUT_INFORMATION_EX *v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  v3 = 0;
  v4 = 0LL;
  if ( a2 )
  {
    v9 = PC_MBR::ReadPartitionTable(this, &v16);
    v10 = v16;
    v8 = v9;
    if ( v9 >= 0 )
    {
      PartitionCount = v16->PartitionCount;
      v12 = 0;
      if ( PartitionCount )
      {
        p_Mbr = (_PARTITION_INFORMATION_EX::$41520227951B374488E85ABED149FDD2 *)&v16->PartitionEntry[0].Mbr;
        do
        {
          v4 = &p_Mbr[-1].Gpt.Name[20];
          if ( p_Mbr->Mbr.PartitionType > 0xFu || (v14 = 32801, !_bittest(&v14, p_Mbr->Mbr.PartitionType)) )
          {
            if ( ++v3 == a2 )
              break;
          }
          ++v12;
          p_Mbr = (_PARTITION_INFORMATION_EX::$41520227951B374488E85ABED149FDD2 *)((char *)p_Mbr + 144);
        }
        while ( v12 < PartitionCount );
      }
      if ( v12 < PartitionCount )
      {
        *((_BYTE *)v4 + 32) = a3->Mbr.PartitionType;
        *((_BYTE *)v4 + 28) = 1;
        v8 = PC_DISK::Reset(*this);
        if ( v8 >= 0 )
          v8 = PC_MBR::WritePartitionTable((PC_MBR *)this, v10);
      }
      else
      {
        v8 = -1073741811;
      }
    }
    if ( v10 )
      PspQueueApcSpecialApc(v10);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v8;
}
