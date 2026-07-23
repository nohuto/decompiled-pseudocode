/*
 * XREFs of ?ReadPartitionTable@PC_RAW@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140153894
 * Callers:
 *     ?ReadPartitionTable@PC_DISK@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140162218 (-ReadPartitionTable@PC_DISK@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?CheckSum@MBR@@QEAAKXZ @ 0x140162288 (-CheckSum@MBR@@QEAAKXZ.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ?AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z @ 0x1405C263C (-AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z.c)
 */

__int64 __fastcall PC_RAW::ReadPartitionTable(PC_RAW *this, struct _DRIVE_LAYOUT_INFORMATION_EX **a2)
{
  unsigned int v3; // edi
  MBR *v5; // rsi
  struct _DRIVE_LAYOUT_INFORMATION_EX *Pool; // rax
  struct _DRIVE_LAYOUT_INFORMATION_EX *v7; // rbx
  LARGE_INTEGER v9; // rdx
  BOOLEAN v10; // r8

  v3 = 0;
  v5 = *(MBR **)(*(_QWORD *)this + 48LL);
  *a2 = 0LL;
  Pool = (struct _DRIVE_LAYOUT_INFORMATION_EX *)PC_ENVIRONMENT::AllocatePool(0xC0u, (unsigned __int8)a2, 0x54506350u);
  v7 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, sizeof(struct _DRIVE_LAYOUT_INFORMATION_EX));
    if ( *(_DWORD *)(*(_QWORD *)this + 16LL) == 11 || *((_WORD *)v5 + 255) == 0xAA55 )
    {
      v7->PartitionStyle = 0;
      v7->PartitionCount = 1;
      v7->Mbr.Signature = 1;
      v7->Mbr.CheckSum = MBR::CheckSum(v5);
      v7->PartitionEntry[0].PartitionStyle = PARTITION_STYLE_MBR;
      v7->PartitionEntry[0].StartingOffset.QuadPart = 0LL;
      v9.QuadPart = *(_QWORD *)(*(_QWORD *)this + 32LL) << *(_DWORD *)(*(_QWORD *)this + 40LL);
      v7->PartitionEntry[0].PartitionNumber = -1;
      v7->PartitionEntry[0].PartitionLength = v9;
      *(_WORD *)&v7->PartitionEntry[0].Mbr.PartitionType = 4;
      v7->PartitionEntry[0].Mbr.RecognizedPartition = v10;
      v7->PartitionEntry[0].Mbr.HiddenSectors = 0;
      *(_QWORD *)v7->PartitionEntry[0].Gpt.PartitionType.Data4 = v7->Mbr.Signature;
      *(_QWORD *)&v7->PartitionEntry[0].Gpt.PartitionId.Data1 = 0LL;
    }
    else
    {
      *(_QWORD *)&v7->PartitionStyle = 0LL;
      v7->Mbr.Signature = 0;
      v7->Mbr.CheckSum = MBR::CheckSum(v5);
    }
    *a2 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
