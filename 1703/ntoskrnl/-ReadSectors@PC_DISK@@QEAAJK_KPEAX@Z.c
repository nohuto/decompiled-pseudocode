/*
 * XREFs of ?ReadSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x14016206C
 * Callers:
 *     ?ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140161C58 (-ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?Reset@PC_DISK@@QEAAJXZ @ 0x1401621A4 (-Reset@PC_DISK@@QEAAJXZ.c)
 *     ?WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140268A20 (-WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x140268D80 (-ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@PC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x140268E04 (-ReadHeader@PC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PC_DISK::ReadSectors(PC_DISK *this, int a2, __int64 a3, void *a4)
{
  void *v4; // rax

  v4 = a4;
  if ( !a4 )
    v4 = (void *)*((_QWORD *)this + 6);
  return PC_ENVIRONMENT::Read(*(PDEVICE_OBJECT *)this, v4, a2 << *((_DWORD *)this + 10), a3 << *((_DWORD *)this + 10));
}
