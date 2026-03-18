/*
 * XREFs of ?ResetPartitionCache@SC_DISK@@QEAAJXZ @ 0x1401468F8
 * Callers:
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x140146980 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140292924 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x140292AE4 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140293F58 (-SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1401468B4 (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?IsVbr@SC_DISK@@QEAAEXZ @ 0x140292878 (-IsVbr@SC_DISK@@QEAAEXZ.c)
 */

__int64 __fastcall SC_DISK::ResetPartitionCache(SC_DISK *this)
{
  int Sectors; // edi
  __int64 v3; // rdx

  Sectors = SC_DISK::ReadSectors(this, 1, 0LL, 0LL);
  if ( Sectors >= 0 )
  {
    v3 = *((_QWORD *)this + 24);
    if ( *(_WORD *)(v3 + 510) == 0xAA55 )
    {
      if ( *(_BYTE *)(v3 + 450) != 0xEE || *(_BYTE *)(v3 + 466) || *(_BYTE *)(v3 + 482) || *(_BYTE *)(v3 + 498) )
        *((_DWORD *)this + 46) = SC_DISK::IsVbr(this) != 0 ? 2 : 0;
      else
        *((_DWORD *)this + 46) = 1;
    }
    else
    {
      *((_DWORD *)this + 46) = 2;
    }
  }
  return (unsigned int)Sectors;
}
