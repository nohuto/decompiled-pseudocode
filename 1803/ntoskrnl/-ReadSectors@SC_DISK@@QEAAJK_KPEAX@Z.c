/*
 * XREFs of ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x14015D128
 * Callers:
 *     ?ResetPartitionCache@SC_DISK@@QEAAJXZ @ 0x14015D16C (-ResetPartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x1402C8880 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x1402C890C (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1402C97A0 (-ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1402C9BC4 (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SC_DISK::ReadSectors(SC_DISK *this, int a2, __int64 a3, void *a4)
{
  if ( !a4 )
    a4 = (void *)*((_QWORD *)this + 24);
  return (*(__int64 (__fastcall **)(SC_DISK *, __int64, _QWORD, void *))(*(_QWORD *)this + 56LL))(
           this,
           a3 << *((_DWORD *)this + 43),
           (unsigned int)(a2 << *((_DWORD *)this + 43)),
           a4);
}
