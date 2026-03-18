/*
 * XREFs of ?Reset@PC_DISK@@QEAAJXZ @ 0x1401621A4
 * Callers:
 *     ?Initialize@PC_DISK@@QEAAJPEAX@Z @ 0x1401620E8 (-Initialize@PC_DISK@@QEAAJPEAX@Z.c)
 *     ?ReadPartitionTable@PC_DISK@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140162218 (-ReadPartitionTable@PC_DISK@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?WritePartitionTable@PC_DISK@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14026842C (-WritePartitionTable@PC_DISK@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140268934 (-SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?ReadSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x14016206C (-ReadSectors@PC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?IsVbr@PC_DISK@@QEAAEXZ @ 0x14016209C (-IsVbr@PC_DISK@@QEAAEXZ.c)
 */

__int64 __fastcall PC_DISK::Reset(PC_DISK *this)
{
  int Sectors; // edi
  __int64 v3; // rdx

  Sectors = PC_DISK::ReadSectors(this, 1, 0LL, 0LL);
  if ( Sectors >= 0 )
  {
    v3 = *((_QWORD *)this + 6);
    if ( *(_WORD *)(v3 + 510) == 0xAA55 )
    {
      if ( *(_BYTE *)(v3 + 450) != 0xEE || *(_BYTE *)(v3 + 466) || *(_BYTE *)(v3 + 482) || *(_BYTE *)(v3 + 498) )
        *((_DWORD *)this + 11) = PC_DISK::IsVbr(this) != 0 ? 2 : 0;
      else
        *((_DWORD *)this + 11) = 1;
    }
    else
    {
      *((_DWORD *)this + 11) = 2;
    }
  }
  return (unsigned int)Sectors;
}
