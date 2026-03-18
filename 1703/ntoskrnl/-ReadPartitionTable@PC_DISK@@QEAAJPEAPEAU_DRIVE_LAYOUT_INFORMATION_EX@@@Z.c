/*
 * XREFs of ?ReadPartitionTable@PC_DISK@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140162218
 * Callers:
 *     PcReadPartitionTable @ 0x140161FCC (PcReadPartitionTable.c)
 * Callees:
 *     ?ReadPartitionTable@PC_RAW@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140153894 (-ReadPartitionTable@PC_RAW@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140161C58 (-ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?Initialize@PC_MBR@@QEAAXPEAVPC_DISK@@@Z @ 0x140161F30 (-Initialize@PC_MBR@@QEAAXPEAVPC_DISK@@@Z.c)
 *     ?Reset@PC_DISK@@QEAAJXZ @ 0x1401621A4 (-Reset@PC_DISK@@QEAAJXZ.c)
 *     ?ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140268EC4 (-ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 */

__int64 __fastcall PC_DISK::ReadPartitionTable(PC_DISK *this, struct _DRIVE_LAYOUT_INFORMATION_EX **a2)
{
  int v3; // r8d
  __int64 result; // rax
  int v6; // r8d
  PC_DISK *v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = *((_DWORD *)this + 11);
  if ( !v3 )
    goto LABEL_2;
  v6 = v3 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v7 = this;
      return PC_RAW::ReadPartitionTable((PC_RAW *)&v7, a2);
    }
    else
    {
      return 3221225659LL;
    }
  }
  else
  {
    v7 = this;
    result = PC_GPT::ReadPartitionTable((PC_GPT *)&v7, a2);
    if ( (int)result < 0 )
    {
      result = PC_DISK::Reset(this);
      if ( (int)result >= 0 )
      {
LABEL_2:
        PC_MBR::Initialize((PC_MBR *)&v7, this);
        return PC_MBR::ReadPartitionTable(&v7, a2);
      }
    }
  }
  return result;
}
