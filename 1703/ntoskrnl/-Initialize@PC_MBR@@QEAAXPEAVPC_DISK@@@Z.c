/*
 * XREFs of ?Initialize@PC_MBR@@QEAAXPEAVPC_DISK@@@Z @ 0x140161F30
 * Callers:
 *     ?ReadPartitionTable@PC_DISK@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140162218 (-ReadPartitionTable@PC_DISK@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?CreatePartitionTable@PC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140268350 (-CreatePartitionTable@PC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?SetPartition@PC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1402683C4 (-SetPartition@PC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?WritePartitionTable@PC_DISK@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14026842C (-WritePartitionTable@PC_DISK@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PC_MBR::Initialize(PC_MBR *this, struct PC_DISK *a2)
{
  __int64 v2; // rax

  *(_QWORD *)this = a2;
  v2 = *((_QWORD *)a2 + 1);
  if ( !v2 || v2 > 1024 )
    *((_QWORD *)a2 + 1) = 1024LL;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 20LL) - 1) > 0xFE )
    *(_DWORD *)(*(_QWORD *)this + 20LL) = 255;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 24LL) - 1) > 0x3E )
    *(_DWORD *)(*(_QWORD *)this + 24LL) = 63;
}
